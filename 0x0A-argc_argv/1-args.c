#include <stdio.h>

/**
 * main - print the number of arguments
 * @argc: count of arguments in command
 * @argv: argc size
 * Return: 0
 */

int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
