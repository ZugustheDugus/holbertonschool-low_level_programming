#include "main.h"

/**
 * rev_string - check the code
 *
 * Return: Always 0.
 */
void rev_string(char *s)
{
char t;
int i = 0, j = 0;

while(*(s + i))
{
i++;
}
i--;
while(i > j)
{
t = *(s + i);
*(s + i) = *(s + j);
*(s + j) = t;
j++;
i--;
}
}