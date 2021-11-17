#include "main.h"

/**
 * _strlen - Gets the length of a string
 * @s: Pointer to the string
 * Return: the string's length
 */

int _strlen(char *s)
{
int i = 0;

while (*s != '\0')
{
s++;
i++;
}
return (i);
}
