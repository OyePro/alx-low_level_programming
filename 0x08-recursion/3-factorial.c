#include "main.h"
/**
 * factorial - printing factorial of integers
 * @n: integer
 *
 * Return: 0
 */
int factorial(int n)
{
if (n == 0 || n == 1)
{
return (1);
}
else if (n >= 2)
{
return (n * factorial(n - 1));
}
else
return (-1);
}
