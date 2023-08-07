#include "main.h"

/**
 * append_text_to_file - a function that appends text at the end of a file
 * @filename: A pointer
 * @text_content: string
 * Return: fails or NULL - -1
 * lacks write permissions or file does not exist - -1
 * Otherwise - 1
 */

int append_text_to_file(const char *filename, char *text_content)
{
int p;
int r;
i = 0;

if (filename == NULL)
return (-1);
if (text_content != NULL)
{
for (i = 0; text_content[i];)
i++;
}
p = open(filename, O_WRONLY | O_APPEND);
r = write(o, text_content, i);
if (p == -1 || r == -1)
return (-1);
close(p);
return (1);
}
