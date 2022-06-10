#include "main.h"
/**
 * print_triangle - functions to print triangle
 *@size: size of triangle
 *
 * Return: void
 */
void print_triangle(int size)
{
int m, n, l;
if (size > 0)
{
for (m = 1 ; m <= size ; m++)
{
for (n = 1 ; n <= size - m ; n++)
_putchar(' ');
for (l = 1 ; l <= m ; l++)
_putchar('#');
_putchar(10);
}
}
else
{
_putchar(10);
}
}
