#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*
 * main - Entry point into printing combinations of two digits number
 *
 * Return - Always 0 (success)
 */
int main(void)
{
int n1, n2, n3, n4;
n1 = 48;
while (n1 < 58)
{
n2 = 48;
while (n2 < 58)
{
n3 = n1;
while (n3 < 58)
{
n4 = n2 + 1;
while (n4 < 58)
{
putchar(n1);
putchar(n2);
putchar(' ');
putchar(n3);
putchar(n4);
if (!((n1 == 57 && n2 == 56) && (n3 == 57 && n4 == 57)))
{
putchar(',');
putchar(' ');
}
n4++;
}
n3++;
}
n2++;
}
n1++;
}
putchar(10);
return (0);
}
