#include "main.h"

/**
 * get_bit  - returns a bit at a specific index
 * @bit: the bit at the index
 * Return: -1 (error), or the bit
 */

int get_bit(unsigned long int n, unsigned int index)
{
int bit;

if (index > 31 || n == '\0')
return (-1);

bit = (n >> index) & 1;

return (bit);
}
