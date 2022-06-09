#include "main.h"
/**
 * print_diagonal - printing diagonal line
 *@n: number of times
 *
 * Return: void
 */
void print_diagonal(int n)
{
int d, f;
if (n > 0)
{
for (d = 1 ; d <= n ; d++)
{
for (f = 1 ; f < d ; f++)
_putchar(' ');
_putchar('\\');
_putchar(10);
}
}
else
{
_putchar('\n');
}
}
