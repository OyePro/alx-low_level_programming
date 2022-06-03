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
char Ucase;
char nl;
nl = 012;
for (lcase = 'a' ; lcase <= 'z' ; lcase++)
{
putchar(lcase);
}
for (Ucase = 'A' ; Ucase <= 'Z' ; Ucase++)
{
putchar(Ucase);
}
putchar(nl);
return (0);
}
