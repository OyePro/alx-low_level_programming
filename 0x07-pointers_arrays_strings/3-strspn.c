#include "main.h"
/**
 * _strspn - number of substring
 * @s: string to search
 * @accept:
 *
 * Return: l
 */
unsigned int _strspn(char *s, char *accept)
{
int n, m, l = 0;
for (n = 0 ; s[n] != '\0' ; n++)
{
for (m = 0 ; *(accept + m) != '\0' ; m++)
{
if (*(s + n) == accept[m])
{
l++;
break;
}
if (accept[m + 1] == '\0' && s[n] != *(accept + m))
return (l);
}
}
return (l);
}
