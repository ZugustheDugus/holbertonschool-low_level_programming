#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _strdup - return the pointer to the start of a string
 * @str: The string being pointed to and duplicated
 * Return: Return the string pointed to
 */

char *_strdup(char *str)
{
unsigned int n, l = 0;
char *s;

if (str == 0)
{
return (NULL);
}

while (str[l])
{
l++;
}
l++;

s = malloc(l *sizeof(char));
if (s == 0 || s == NULL)
{
return (NULL);
}

for (n = 0 ; n < l ; n++)
{
s[n] = str[n];
}
return (s);
}
