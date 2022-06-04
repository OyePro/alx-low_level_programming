#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
int n1;
int n2;
for (n1 = 48 ; n1 < 58 ; n1++)
{
for (n2 = 48 ; n2 < 58 ; n2++)
{
if (n1 != n2 && n1 < n2)
{
putchar(n1);
putchar(n2);
if (n1 == 56 && n2 == 57)
{
break;
}
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}
