#include "main.h"

/**
 * read_textfile - reads a text file
 * @filename: name of tile to read
 * @letters: number of letters in the filename
 * Return: Returns 0 if there is nothing to read
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
int fd, len, chars;
char *buffer;

if (filename == NULL || letters == 0)
return (0);

fd = open(filename, O_RDONLY);

if (fd == -1)
return (0);

buffer = malloc(sizeof(char) * letters);
if (buffer == NULL)
return (0);

len = read(fd, buffer, letters);

chars = write(STDOUT_FILENO, buffer, len);

if (len == -1 || chars == -1)
return (0);

free(buffer);
close(fd);
return (chars);
}
