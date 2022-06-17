#include "main.h"
/**
 * *cap_string - capitalizing a string
 * @cap: string
 *
 * Return: 0
 */
char *cap_string(char *cap)
{
int k = 0, l;
int signs[] = {32, 9, 10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};
if (*(cap + k) >= 'a' && *(cap + k) <= 'z')
*(cap + k) = *(cap + k) - 32;
k++;
while (*(cap + k) != '\0')
{
for (l = 0; l < 13; l++)
{
if (*(cap + k) == signs[l])
{
if ((*(cap + (k + 1)) >= 'a') && (*(cap + (k + 1)) <= 'z'))
*(cap + (k + 1)) = *(cap + (k + 1)) - 32;
break;
}
}
k++;
}
return (cap);
}
