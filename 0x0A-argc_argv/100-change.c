#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the minimum number of change (coins)
 * @argc: arguments count
 * @argv: argc size
 * Return: 0 (Success) or 1 (Error)
 */

int main(int argc, char *argv[])
{
	int i, num, result = 0;
	int cents[] = {25, 10, 5, 2, 1};

	if (argc == 1)
	{
		printf("Error\n");
		return (1);
	}

	num = atoi(argv[1]);

	if (num < 0)
	{
		printf("0\n");
		return (0);
	}

	for (i = 0; i < 5 && num >= 0; i++)
	{
		while (num >= cents[i])
		{
			result++;
			num -= cents[i];
		}
	}
	printf("%d\n", result);

	return (0);
}
