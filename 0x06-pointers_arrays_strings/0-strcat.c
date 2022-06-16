#include "main.h"
#include <stddef.h>
/**
 * *_strcat - concatenating two strings using strcat function
 * @dest: first string
 * @src: second string
 *
 *
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
int m = 0, n = 0;
while (*(dest + m))
	m++;
while (*(src + n))
{
*(dest + m) = *(src + n);
m++;
n++;
}
*(dest + m) = '\0';
return (dest);
}
