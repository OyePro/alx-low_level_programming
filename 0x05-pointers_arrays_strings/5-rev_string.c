#include "main.h"
/**
 * rev_string - reverse a string
 * @s: the string that will be input
 *
 *
 * Return: void
 */
void rev_string(char *s)
{
int m = 0, i, j;
char *str, n;
while (m >= 0)
{
if (s[m] == '\0')
break;
m++;
}
str = s;
for (i = 0; i < (m - 1); i++)
{
for (j = i + 1; j > 0; j--)
{
n = *(str + j);
*(str + j) = *(str + (j - 1));
*(str + (j - 1)) = n;
}
}
}
