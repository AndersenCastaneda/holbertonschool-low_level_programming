#include <stdio.h>

/**
 * print_array - print n elements of an array
 * @a: input (array)
 * @n: input (quantity of prints)
 * Return: void
 */

void print_array(int *a, int n)
{
	int i;

	i = 0;
	while (i < n)
	{
		printf("%d", a[i]);
		if (i != n - 1)
			printf(", ");
		i++;
	}
	printf("\n");
}
