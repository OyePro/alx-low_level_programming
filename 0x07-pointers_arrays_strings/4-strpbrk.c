#include "main.h"
/**
 * _strpbrk - function to return pointer to byte in s
 *  @s: byte that will be searched
 * @accept: target matches
 *
 * Return:  first occurence
 *
 */
char *_strpbrk(char *s, char *accept)
{
int n = 0;
int m;
while (s[n] != '\0')
{
for (m = 0; accept[m] != '\0'; m++)
{
if (s[n] == accept[m])
{
s = (s + n);
return (s);
}
}
n++;
}
return ('\0');
}
