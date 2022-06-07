#include "main.h"
/**
 * _isalpha - checking if it is a letter, either uppercase or lowercase
 * @c: the character that will be checked
 *
 * Return: 1
 */
int _isalpha(int c)
{
if (c >= 97 && c <= 122)
{
return (1);
}
else if (c >= 65 && c <= 90)
{
return (1);
}
else
{
return (0);
}
_putchar(10);
}
