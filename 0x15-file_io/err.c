#include "main.h"

/**
 * err - func to print error message
 * @file_from: file being copied from
 * @file_to: file being copied to
 * @argv: specific args
 */

void err(int file_from, int file_to, char *argv)
{
if (file_from == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
exit(98);
}
if (file_to == -1)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
exit(99);
}
}
