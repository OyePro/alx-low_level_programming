#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
int hex;
char alpha;
for (hex = 48 ; hex <= 57 ; hex++)
{
putchar(hex);
}
for (alpha = 97 ; alpha <= 102 ; alpha++)
{
putchar(alpha);
}
putchar('\n');
return (0);
}
