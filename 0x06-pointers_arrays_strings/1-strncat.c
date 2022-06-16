#include "main.h"
#include <stddef.h>
/**
 * *_strncat - concatenating two strings using strncat function
 * @dest: first string
 * @src: second string
 * @n: bytes
 *
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
int m = 0, l = 0;
while (*(dest + m) != '\0')
	m++;
while (*(src + l) != *(src + n))
{
*(dest + m) = *(src + l);
m++;
l++;
}
*(dest + m) = '\0';
return (dest);
}
