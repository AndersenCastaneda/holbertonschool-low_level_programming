#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - Add positive numbers passed as arguments
 * @argc: arguments count
 * @argv: argc size
 * Return: 0 if is correct or 1 if one argument is a symbol.
 */

int main(int argc, char *argv[])
{
	int i, j, add = 0;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j]; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		}
		add += atoi(argv[i]);
	}
	printf("%d\n", add);

	return (0);
}
