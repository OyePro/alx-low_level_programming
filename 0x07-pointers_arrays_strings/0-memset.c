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
int l = n;
if (l > 0)
{
int m;
for (m = 1 ; m < l ; m++)
{
s[m] = b;
}
}
return (s);
}
