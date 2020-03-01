#include <stdio.h>

/**
 * main - print the name of the program
 * @argc: count of arguments in command
 * @argv: argc size
 * Return: 0
 */

int main(int argc, char *argv[])
{
	(void)argc;
	printf("%s\n", *argv);
	return (0);
}
