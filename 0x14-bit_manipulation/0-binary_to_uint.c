#include "main.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/**
 * binary_to_uint - converts binary to unsigned int
 * @b: Binary number to convert
 * Return: uint or 0
 */

unsigned int binary_to_uint(const char *b)
{
unsigned int uint = 0, i = 0, j;

if (b == NULL)
return (0);

for (j = 0; b[j] != '\0'; j++)
{
if ((b[j] != '0') && (b[j] != '1'))
return (0);
}

j = j - 1;
while (b[i] != '\0')
{
if (b[j - i] == '1')
{
if (i == 0)
uint = uint + 1;
else
uint = uint + _pow_recursion(2, i);
}
i++;
}
return (uint);
}

/**
 * _pow_recursion - caluclates x to the yth power recursively
 * @x: integer being raised to y power
 * @y: power to which x is raised
 * Return: Returns the value of the function, an error, or 1
 */

int _pow_recursion(int x, int y)
{
if (x != 0 && y == 0)
{
return (1);
}
else if (y < 0)
{
return (-1);
}
else
{
return (x * _pow_recursion(x, y - 1));
}
}
