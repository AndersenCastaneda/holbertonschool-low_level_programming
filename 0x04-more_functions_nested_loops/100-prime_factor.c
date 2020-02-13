#include <stdio.h>

/**
 * main - find de largest primer factor or a number
 *
 * Return: 0
 */

int main(void)
{
	long int n = 612852475143;
	int i;

	for (i = 2; i < n; i++)
	{
		if (n % i == 0)
		{
			n = n / i;
			i--;
		}
	}

	printf("%li\n", n);

	return (0);
}
