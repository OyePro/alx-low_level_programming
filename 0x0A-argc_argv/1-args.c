#include <stdio.h>
/**
 * main - funtions to print numbers of arguments
 * @argc: number of arguments
 * @argv: arguments line
 *
 * Return: 0
 */
int main(int argc, char **argv __attribute__((unused)))
{
printf("%d\n", argc - 1);
return (0);
}
