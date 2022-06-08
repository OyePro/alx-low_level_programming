#include "main.h"
/**
 * _abs - printing absolute number
 *@r: - the number that will be printed
 *
 * Return: 0
 */
int _abs(int r)
{
if (r < 0)
{
return (-r);
}
else
{
return (r);
}
_putchar(10);
return (r);
}
