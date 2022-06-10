#include "main.h"
/**
 * more_numbers - printing numbers above 9
 *
 * Return: void
 */
void more_numbers(void)
{
int n, m;
for (n = 0 ; n <= 9 ; n++)
{
for (m = 0 ; m <= 14; m++)
{
if (m >= 10)
_putchar((m / 10) + 48);
_putchar((m % 10) + 48);
}
_putchar(10);
}
}
