#include "main.h"
/**
 * *string_toupper - string to uppercase
 * @str: string
 *
 *
 * Return: 0
 */
char *string_toupper(char *str)
{
int lcase;
lcase = 0;
while (*(str + lcase) != '\0')
{
if (*(str + lcase) >= 'a' && *(str + lcase) <= 'z')
{
*(str + lcase) = *(str + lcase) -32;
}
lcase++;
}
return (str);
}
