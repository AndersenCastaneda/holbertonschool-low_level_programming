#include "holberton.h"
#include <stdio.h>

/**
 * print_to_98 - print natural numbers from n to 98
 * @n: print from this number to 98
 * Return: Always 0.
 */

void print_to_98(int n)
{
	int i;

	if (n <= 98)
	{
		for (i = n; i <= 98; i++)
		{
			if (i == 98)
				printf("%d\n", i);
			else if (i < 98)
				printf("%d, ", i);
		}
	}
	else if (n >= 98)
	{
		for (i = n; i >= 98; i--)
		{
			if (i == 98)
				printf("%d\n", i);
			else if (i > 98)
				printf("%d, ", i);
		}
	}
}
