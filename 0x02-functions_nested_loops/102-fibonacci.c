#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers
 *
 * Return: Always 0
 */

int main(void)
{
	int i;
	long int j = 0, k = 1, sum = 0, tmp;

	for (i = 1; i <= 50; i++)
	{
		sum = j + k;
		tmp = k;
		k = sum;
		j = tmp;

		if (i != 50)
			printf("%li, ", sum);
		else
			printf("%li\n", sum);
	}
	return (0);
}
