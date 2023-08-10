#include "main.h"

char *create_buffer(char *file);
void close_file(int fd);

/**
 * create_buffer - a function that allocates 1024 bytes for a buffer
 * @file: name of the file
 * Return: A pointer
 */

char *create_buffer(char *file)
{
char *buf;

buf = malloc(sizeof(char) * 1024);
if (buf == NULL)
{
dprintf(STDERR_FILENO,
"Error: Can't write to %s\n", file);
exit(99);
}
return (buf);
}

/**
 * close_file - a function that closes file descriptors
 * @fd: file descriptor
 */

void close_file(int fd)
{
int u;
u = close(fd);
if (u == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
exit(100);
}
}

/**
 * main - a function that Copies the contents of a file to another file
 * @argc: number arguments
 * @argv: array of pointers
 *
 * Return: 0 success
 *
 * Description: If the argument count is incorrect - exit code 97
 * If file_from does not exist or cannot be read - exit code 98
 * If file_to cannot be created or written to - exit code 99
 * If file_to or file_from cannot be closed - exit code 100
 */

int main(int argc, char *argv[])
{
int f;
int t;
int r;
int w;
char *buf;
if (argc != 3)
{
dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
exit(97);
}
buf = create_buffer(argv[2]);
f = open(argv[1], O_RDONLY);
r = read(f, buf, 1024);
t = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
do {
if (f == -1 || r == -1)
{
dprintf(STDERR_FILENO,
"Error: Can't read f file %s\n", argv[1]);
free(buf);
exit(98);
}
w = write(t, buf, r);
if (t == -1 || w == -1)
{
dprintf(STDERR_FILENO,
"Error: Can't write to %s\n", argv[2]);
free(buf);
exit(99);
}
r = read(f, buf, 1024);
t = open(argv[2], O_WRONLY | O_APPEND);
} while (r > 0);

free(buf);
close_file(f);
close_file(t);

return (0);
}
