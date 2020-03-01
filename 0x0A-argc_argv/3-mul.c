#include <stdio.h>
#include <stdlib.h>

/**
 * main - Multiply two numbers
 * @argc: argument count
 * @argv: argument size
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
	int num1, num2;

	if (argc == 3)
	{
		num1 = atoi(argv[1]);
		num2 = atoi(argv[2]);
		printf("%d\n", num1 * num2);
	}
	else
	{
		printf("Error\n");
	}
	return (0);
}
