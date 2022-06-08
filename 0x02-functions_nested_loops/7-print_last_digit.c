#include "main.h"
/**
 * print_last_digit - function to print the last digit of given numbers
 * @n: the number of which the last digit will be printed
 *
 * Return: l
 */
int print_last_digit(int n)
{
int l;
l = n % 10;
if (l < 0)
{
_putchar('0' + -l);
return (-l);
}
else
{
_putchar('0' +  l);
return (l);
}
}
