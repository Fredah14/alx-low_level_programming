#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

/**
 * create_file - creates a file.
 * @filename: name of the file to create.
 * @text_content: is a NULL terminated string to write to the file.
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
int n, m,
len = 0;
if (filename == NULL)
return (-1);
if (text_content != NULL)
{
for (len = 0; text_content[len];)
len++;
}
n = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
m = write(n, text_content, len);
if (n == -1 || m == -1)
return (-1);
close(n);
return (1);
}
