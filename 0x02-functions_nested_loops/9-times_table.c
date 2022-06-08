#include "main.h"
/**
 * times_table - printing multiplication tables
 *
 *
 * Return: void
 */
void times_table(void)
{
int n, m, l;
for (n = 0 ; n <= 9 ; n++)
{
_putchar(48);
for (m = 1 ; m <= 9 ; m++)
{
l = n * m;
_putchar(',');
_putchar(' ');
if (l <= 9)
{
_putchar(' ');
_putchar(l + 48);
}
else
{
_putchar((l / 10) + 48);
_putchar((l % 10) + 48);
}
}
_putchar('\n');
}
}
