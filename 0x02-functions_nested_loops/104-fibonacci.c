#include <stdio.h>
/**
 * main - print the first fibonacci numbers
 *
 * Return: Always 0
 */
int main(void)
{
int n, boolean, boolean2;
long int t1, t2, nt, nt2, t11, t22;
t1 = 1;
t2 = 2;
boolean = boolean2 = 1;
printf("%ld, %ld", t1, t2);
for (n = 0 ; n < 96 ; n++)
{
if (boolean)
{
nt = t1 + t2;
printf(", %ld", nt);
t1 = t2;
t2 = nt;
}
else
{
if (boolean2)
{
t11 = t1 % 1000000000;
t22 = t2 % 1000000000;
t1 = t1 / 1000000000;
t2 = t2 / 1000000000;
boolean2 = 0;
}
nt2 = (t11 + t22);
nt = t1 + t2 + (nt2 / 1000000000);
printf(", %ld", nt);
printf("%ld", nt2 % 1000000000);
t1 = t2;
t11 = t22;
t2 = nt;
t22 = (nt2 % 1000000000);
}
if (((t1 + t2) < 0) && boolean == 1)
boolean = 0;
}
printf("\n");
return (0);
}
