#include "stdio.h"
/**
 * main - entry point into printing sum of even in fibonacci series
 *
 * Return: 0
 */
int main(void)
{
long int sum_of_evens, t1, t2, nt;
t1 = 1;
t2 = 2;
nt = sum_of_evens = 0;
while (nt <= 4000000)
{
nt = t1 + t2;
t1 = t2;
t2 = nt;
if ((t1 % 2) == 0)
{
sum_of_evens += t1;
}
}
printf("%ld\n", sum_of_evens);
return (0);
}
