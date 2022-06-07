#include "main.h"
/**
 * _islower - checking if the input letter is lowercase
 * @c: what is being checked
 *
 * Return: 1
 */
int _islower(int c)
{
if (c >= 97 && c <= 122)
{
return (1);
}
else
{
return (0);
}
_putchar(10);
}
