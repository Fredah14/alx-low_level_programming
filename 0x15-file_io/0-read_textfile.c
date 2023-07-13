#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

/**
 * read_textfile - reads a text file and prints it to the POSIX stdout.
 * @filename: the name of the file pointer.
 * @letters: the number of letters it should read and print.
 *
 * Return: n/o - the actual number of letters it could read and print or
 * return 0 if:
 * the file can not be opened or read,
 * filename is NULL,
 * write fails or does not write the expected amount of bytes.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
ssize_t n, m, o;
char *buffers;
if (filename == NULL)
return (0);
buffers = malloc(sizeof(char) * letters);
if (buffers == NULL)
return (0);
n = open(filename, O_RDONLY);
m = read(n, buffers, letters);
o = write(STDOUT_FILENO, buffers, m);
if (n == -1 || m == -1 || o == -1 || o != m)
{
free(buffers);
return (0);
}
free(buffers);
close(n);
return (o);
}
