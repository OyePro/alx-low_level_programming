#include "variadic_functions.h"
#include <stdio.h>
/**
 *print_strings - entry point
 *@separator: comma and space
 *@n: number of argument
 *
 *Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
unsigned int i = 0;
char *m;
va_list ap;
va_start(ap, n);
while (i < n)
{
m = va_arg(ap, char*);
if (m == NULL)
printf("(nil)");
else
printf("%s", m);
if (i < (n - 1) && separator)
printf("%s", separator);
i++;
}
printf("\n");
va_end(ap);
}
