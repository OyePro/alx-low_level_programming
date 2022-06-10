#include <stdlib.h>
#include "main.h"
#include <time.h>
#include <stdio.h>
/* more headers goes here */
/* betty style doc for function main goes here */
/**
 * main - Determines if a number is positive, negative or zero.
 *
 * Return: Always 0 (success)
 */
int main(void)
{
int i;
srand(time(0));
i = rand() - RAND_MAX / 2;
/* my code goes here */
if (i > 0)
{
printf("%d is positive\n", i);
}
else if (i == 0)
{
printf("%d is zero\n", i);
}
else
{
printf("%d is negative\n", i);
}
return (0);
}
