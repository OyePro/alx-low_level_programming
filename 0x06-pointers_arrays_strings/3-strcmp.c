#include "main.h"
/**
 * _strcmp - comparing two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: 0
 */
int _strcmp(char *s1, char *s2)
{
int k = 0;
while (*(s1 + k) == *(s2 + k))
{
if (*(s1 + k) == '\0' && *(s2 + k) == '\0')
break;
k++;
}
return (s1[k] - s2[k]);
}
