#include "main.h"
#include "err.c"
/**
 * main - main function
 * @argc: count of arguments
 * @argv: filenames
 * Return: Return 0 if success
 */
int main(int argc, char **argv)
{
int f_f, f_t, wr, c, nch;
char buffer[1024];
if (argc != 3)
{
dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
exit(97);
}
nch = 1024;
f_f = open(argv[1], O_RDONLY);
if (f_f == -1)
err(-1, 0, argv);
f_t = open(argv[2], O_RDWR | O_CREAT | O_TRUNC, 0664);
if (f_t == -1)
err(0, -1, argv);
while (nch == 1024)
{
nch = read(f_f, buffer, 1024);
if (nch == -1)
err(-1, 0, argv);
wr = write(f_t, buffer, nch);
if (wr == -1)
err(0, -1, argv);
}
c = close(f_t);
if (c == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", f_t);
exit(100);
}
c = close(f_f);
if (c == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", f_f);
exit(100);
}
return (0);
}
