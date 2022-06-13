#include "main.h"
/**
 * swap_int - function to swap a and b
 *@a: integer
 *@b: second integer
 *
 * Return: void
 */
void swap_int(int *a, int *b)
{
int c;
c = *a;
*a = *b;
*b = c;
}
