#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- a function that Reads text file
 * @filename: text file
 * @letters: number of letters
 * Return: w- number of bytes or 0 fails - NULL
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
char *p;
ssize_t f;
ssize_t r;
ssize_t s;

f = open(filename, O_RDONLY);
if (f == -1)
return (0);
p = malloc(sizeof(char) * letters);
s = read(f, p, letters);
r = write(STDOUT_FILENO, p, s);

free(p);
close(f);
return (r);
}
