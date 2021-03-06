#include "main.h"
#include <stdlib.h>
/**
 * _strdup - returns a pointer to a newly allocated space in memory.
 * @str: string.
 *
 * Return: pointer of an array of chars
 */
char *_strdup(char *str)
{
char *strcopy;
unsigned int n, m;
if (str == NULL)
return (NULL);
for (n = 0; str[n] != '\0'; n++)
;
strcopy = (char *)malloc(sizeof(char) * (n + 1));
if (strcopy == NULL)
return (NULL);
for (m = 0; m <= n; m++)
strcopy[m] = str[m];
return (strcopy);
}
