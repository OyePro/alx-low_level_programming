#include "main.h"
/**
 * check_prime - recursively divide by higher divisor, skip even nums
 * @n: number to check if prime
 * @divisor: divisor
 *
 * Return: 1 if prime, 0 if not, or recursive function call
 */
int check_prime(int n, int divisor)
{
if (n / n == 1)
return (1);
if (n % divisor == 0)
return (0);
return (check_prime(n, divisor + 1));
}
/**
 * is_prime_number - check if prime
 * @n: integer that will be checked
 *
 * Return: 1 or 0
 */
int is_prime_number(int n)
{
int divisor = 3;
if (n % 2 == 0 || n < 2)
return (0);
if (n == 2)
return (1);
return (check_prime(n, divisor));
}
