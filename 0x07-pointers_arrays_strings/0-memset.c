#include "main.h"
/**
 * _memset - functions to fill memory with a constant byte
 * @s: pointer
 * @b: constant
 * @n: number of bytes
 *
 * Return: (s)
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int m;
for (m = 0 ; m < n ; m++)
{
s[m] = b;
}
return (s);
}
