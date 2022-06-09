#include "main.h"
/**
 * print_line - printing line
 *@n: number of times
 *
 * Return: void
 */
void print_line(int n)
{
int t;
t = 1;
while (t <= n)
{
if (n > 0)
{
_putchar('_');
}
else
{
_putchar(10);
}
t++;
}
_putchar(10);
}
