#include "main.h"
/**
 * reverse_array - reversing an array of element
 * @a: pointer to array
 * @n: number of element
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
int k, l, m;
l = 0;
m = n - 1;
while (l < m)
{
k = *(a + l);
*(a + l) = *(a + m);
*(a + m) = k;
l++;
m--;
}
}
