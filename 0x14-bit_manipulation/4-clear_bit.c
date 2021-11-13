#include "main.h"

/**
 * clear_bit - sets a bit at an index to 0
 * @n: binary number to alter
 * @index: the index at which to alter n
 * Return: -1 for error, 1 for success
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
if (*n == '\0' || index > 31)
return (-1);

*n = *n & ~(1 << index);
return (1);
}
