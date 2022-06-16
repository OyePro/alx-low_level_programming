#include "main.h"
/**
 * *_strncpy - copying two strings
 * @dest: first string
 * @src: second string
 * @n: integer
 *
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
int m;
for (m = 0 ; m < n && *(src + m) != '\0' ; m++)
*(dest + m) = *(src + m);
while (m < n)
{
*(dest + m) = '\0';
m++;
}
return (dest);
}
