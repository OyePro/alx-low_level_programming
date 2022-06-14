#include "main.h"
#include <stdio.h>
/**
 * _strcpy - copying string
 * @dest: destination
 * @src: source
 *
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
int copy = 0;
while (copy >= 0)
{
*(dest + copy) = *(src + copy);
if (*(src + copy) == '\0')
break;
copy++;
}
return (dest);
}
