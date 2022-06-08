#include <stdio.h>
/**
 * main - print the first fibonacci numbers
 *
 * Return: Always 0
 */
int main(void)
{
int n;
long int t1, t2, nt;
t1 = 1;
t2 = 2;
printf("%ld, %ld", t1, t2);
for (n = 0 ; n < 48 ; n++)
{
nt = t1 + t2;
printf(", %ld", nt);
t1 = t2;
t2 = nt;
}
printf("\n");
return (0);
}
