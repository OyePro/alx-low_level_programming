#include "main.h"
/**
 * puts2 - printing other character
 * @str: string
 *
 *
 * Return: void
 */
void puts2(char *str)
{
int j = 0;
while (j >= 0)
{
if (str[j] == '\0')
{
_putchar(10);
break;
}
if (j % 2 == 0)
_putchar(str[j]);
j++;
}
}
