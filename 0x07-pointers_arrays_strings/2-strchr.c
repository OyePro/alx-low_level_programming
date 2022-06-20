#include "main.h"
#define NULL 0
/**
 * _strchr - function to copy first of a string
 * @s: pointer to string
 * @c: first character
 *
 * Return: c or NULL
 */
char *_strchr(char *s, char c)
{
int m;
for (m = 0 ; *(s + m) != '\0' ; m++)
if (s[m] == c)
return (s + m);
return (NULL);
}
