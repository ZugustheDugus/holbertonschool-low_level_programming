#include "main.h"

/**
 * set_bit - set a bit within a binary number
 * @index: the index of the bit, can't be greater than 31 (null byte)
 * @n: the binary number to set a bit in
 * Return: -1 for error or 1 for success
 */

int set_bit(unsigned long int *n, unsigned int index)
{
if (*n == '\0' || index > 31)
return (-1);

*n = ((1 << index) | *n);
return (1);
}
