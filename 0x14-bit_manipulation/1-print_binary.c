#include "main.h"

/**
 * print_binary - prints a binary number
 * @n: number to be printed in binary
 *
 */

void print_binary(unsigned long int n)
{
unsigned long int bin = n;

if (bin > 1)
{
print_binary(bin >> 1);
}
_putchar((bin & 1) + '0');
}
