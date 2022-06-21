#include "main.h"
/**
 * _strstr - locate and return pointer to first occurence of substring
 * @haystack: string to search
 * @needle: substring
 *
 * Return:  pointer to index of string at first occurence of whole substring
 */
char *_strstr(char *haystack, char *needle)
{
int n = 0, m;
while (*(needle + n) != '\0')
n++;
while (*haystack)
{
for (m = 0 ; needle[m] != '\0' ; m++)
{
if (*(haystack + m) != *(needle + m))
break;
}
if (m != n)
haystack++;
else
return (haystack);
}
return ('\0');
}
