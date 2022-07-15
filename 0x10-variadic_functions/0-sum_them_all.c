#include "variadic_functions.h"
/**
 * sum_them_all - return sum of all the numbers
 * @n: numbers
 * @...: variable numbers
 *
 * Return: sum.
 */
int sum_them_all(const unsigned int n, ...)
{
va_list ap;
unsigned int sum = 0, m = 0;
/* int sum = 0; */
/* va_list ap; */
/* validate ap and initialize */
if (n == 0)
{
return (0);
}
va_start(ap, n);
/* for (m = 0; m < n ; m++) */
/* iterate through list, update sum, free list */
while (m < n)
{
sum += va_arg(ap, int);
m++;
}
va_end(ap);
return (sum);
}
