#include "variadic_functions.h"
/**
 * sum_them_all - return sum of all the numbers
 * @n: numbers
 * @...: variable numbers
 *
 * Return: sum. else 0 if n == 0.
 */
int sum_them_all(const unsigned int n, ...)
{
va_list ap;
unsigned int m = 0, sum = 0;
va_start(ap, n);
for (; m < n ; m++)
sum += va_arg(ap, int);
va_end(ap);
return (sum);
}
