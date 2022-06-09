#include "main.h"
/**
 * print_most_numbers - printing numbers from 0 - 9 except 2 & 4.
 *
 *
 * Return: void
 */
void print_most_numbers(void)
{
int n;
n = 48;
while (n < 58)
{
if (n != 50 && n != 52)
{
_putchar(n);
}
n++;
}
_putchar(10);
}
