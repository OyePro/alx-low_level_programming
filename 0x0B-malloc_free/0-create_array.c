#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates an array of chars.
 * @size: size of the array.
 * @c: storaged char
 *
 * Return: pointer of an array of chars
 */
char *create_array(unsigned int size, char c)
{
char *str;
unsigned int m;
if (size == 0)
return (NULL);
str = malloc(sizeof(c) * size);
if (str == NULL)
return (NULL);
for (m = 0; m < size; m++)
str[m] = c;
return (str);
}
