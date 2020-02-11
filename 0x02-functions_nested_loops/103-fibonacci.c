#include <stdio.h>

/**
 * main - prints the sum of the even-valued fibonacci terms
 *
 * Return: Always 0
 */

int main(void)
{
	long int j = 0, k = 1, sum = 0, tmp, evn = 0;
	long int lim = 4000000;

	while (sum < lim)
	{
		sum = j + k;
		if (sum % 2 == 0)
			evn += sum;

		tmp = k;
		k = sum;
		j = tmp;
	}
	printf("%li\n", evn);
	return (0);
}
