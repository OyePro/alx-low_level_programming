#include "main.h"
/**
 * _puts - printing a string
 * @str: pointer pointing to string
 *
 *
 * Return: void
 */
void _puts(char *str)
{
while (*str != '\0')
{
_putchar(*str++);
}
_putchar(10);
}
