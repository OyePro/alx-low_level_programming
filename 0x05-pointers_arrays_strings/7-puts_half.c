#include "main.h"
/**
 * puts_half - printing half of a string
 * @str: string
 *
 * Return: void
 */
void puts_half(char *str)
{
int m = 0, n;
while (m >= 0)
{
if (str[m] == '\0')
break;
m++;
}
if (m % 2 == 1)
n = m / 2;
else
n = (m - 1) / 2;
for (n++; n < m; n++)
_putchar(str[n]);
_putchar(10);
}
