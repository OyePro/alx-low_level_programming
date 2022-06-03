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
char lcase;
char nl;
nl = 012;
for (lcase = 'a' ; lcase <= 'z' ; lcase++)
{
if (lcase != 'e' && lcase != 'q')
{
putchar(lcase);
}
}
putchar(nl);
return (0);
}
