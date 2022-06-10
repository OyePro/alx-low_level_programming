#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - printing prime number
 *
 *
 * Return: 0
 */
int main(void)
{
long int num, pn;
num = 612852475143;
for (pn = 2 ; pn <= num ; pn++)
{
if (num % pn == 0)
{
num /= pn;
pn--;
}
}
printf("%ld\n", pn);
return (0);
}
