#include "main.h"

/**
 * flip_bits - flips bits and then outputs number flipped
 * @n: binary number
 * @m: converted binary number
 * Return: NULL or number of shifted bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned long int bit;
unsigned int i = 0;
  
if (n == '\0' || m == '\0')
return ('\0');

bit =  n ^ m;
while (bit > 0)
{
i = i + (bit & 1);
bit = bit >> 1;
}
return (i);
}
