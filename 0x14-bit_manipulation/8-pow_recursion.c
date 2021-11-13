#include "main.h"

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
