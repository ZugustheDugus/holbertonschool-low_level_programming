#include <stdio.h>
#include <time.h>
/**
 * main - this is what the main function does
 *
 * Return: this is what's supposed to be returned to main
 */
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 0)
{
printf("%n is positive\n");
}
else if (n < 0)
{
printf("%n is negative\n");
}
else
{
printf("%n is zero\n");
}
}
return (0);
