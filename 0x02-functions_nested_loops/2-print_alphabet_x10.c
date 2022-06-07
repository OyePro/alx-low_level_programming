#include "main.h"
/**
 * print_alphabet_x10 - printing alphabet in lower case in ten times
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
int lcase, count;
for (count = 0 ; count < 10 ; count++)
{
for (lcase = 97 ; lcase <= 122 ; lcase++)
{
_putchar(lcase);
}
_putchar(10);
}
}
