#include "main.h"
#include <stdlib.h>
/**
 * str_concat - concatenates two strings.
 * @s1: first string.
 * @s2: second string.
 *
 * Return: pointer of an array of chars
 */
char *str_concat(char *s1, char *s2)
{
char *strcop;
unsigned int m, n, o, limit;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
for (m = 0; s1[m] != '\0'; m++)
;
for (n = 0; s2[n] != '\0'; n++)
;
strcop = malloc(sizeof(char) * (m + n + 1));
if (strcop == NULL)
{
free(strcop);
return (NULL);
}
for (o = 0; o < m; o++)
strcop[o] = s1[o];
limit = n;
for (n = 0; n <= limit; o++, n++)
strcop[o] = s2[n];
return (strcop);
}
