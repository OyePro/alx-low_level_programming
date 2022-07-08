#include "variadic_functions.h"
#include <stdio.h>
/**
 * print_numbers - print numbers with a new line
 * @separator: string in between numbers
 * @n: numbers
 * @...: variable number
 *
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list ap;
unsigned int m = 0;
va_start(ap, n);
for (; m < n ; m++)
{
printf("%d", va_arg(ap, int));
if (m != (n - 1) && separator != NULL)
printf("%s", separator);
}
printf("\n");
va_end(ap);
}
