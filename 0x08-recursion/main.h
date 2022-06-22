#ifndef MAIN_H
#define MAIN_H
/**
 * _putchar - writes the character c to the stdout
 * @c: character to print
 *
 * Return: 1 (success)
 * On error, return -1
 */
int _putchar(char);
void _puts_recursion(char *s);
void _print_rev_recursion(char *s);
int _strlen_recursion(char *s);
int factorial(int n);
int _pow_recursion(int x, int y);
int _sqrt_recursion(int n);
int is_prime_number(int n);
int is_palindrome(char *s);
int wildcmp(char *s1, char *s2);
#endif
