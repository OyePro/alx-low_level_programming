#include "main.h"
/**
 * print_alphabet - print alphabet in lower case
 *
 * Return: void
 *
 */
void print_alphabet(void)
{
int lcase;
for (lcase = 97 ; lcase <= 122 ; lcase++)
{
_putchar(lcase);
}
_putchar(10);
}
