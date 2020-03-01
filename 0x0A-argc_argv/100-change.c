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
	int i, money, result = 0;
	int change[5] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	money = atoi(argv[1]);
	if (money < 0)
	{
		printf("0\n");
		return (0);
	}

	for (i = 0; i < 5 && money >= 0; i++)
	{
		while (money >= change[i])
		{
			result++;
			money -= change[i];
		}
	}
	printf("%d\n", result);
	return (0);
}
