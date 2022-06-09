#include "main.h"
/**
 * print_square - functions to print square
 * @size: size of the square
 *
 * Return: void
 */
void print_square(int size)
{
int n, m;
if (size > 0)
{
for (n = 1 ; n <= size ; n++)
{
for (m = 1 ; m <= size ; m++)
{
_putchar('#');
}
_putchar(10);
}
}
else
{
_putchar(10);
}
}
