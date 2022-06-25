#include <stdio.h>
/**
 * main - functions to print all arguments received
 * @argc: argument counts
 *@argv: argument line
 *
 * Return: 0
 */
int main(int argc, char **argv)
{
int l;
for (l = 0 ; l < argc ; l++)
printf("%s\n", argv[l]);
return (0);
}
