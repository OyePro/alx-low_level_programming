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
unsigned int sum = 0, m;
/* int sum = 0;
va_list ap; */
if (n == 0)
return (0);
va_start(ap, n);
for (m = 0; m < n ; m++)
sum += va_arg(ap, int);
va_end(ap);
return (sum);
}
