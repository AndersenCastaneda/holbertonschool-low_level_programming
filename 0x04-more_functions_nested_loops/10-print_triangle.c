#include "holberton.h"

/**
 * print_triangle - print a triangle
 * @size: input
 * Return: 0
 */

void print_triangle(int size)
{
	int i, j;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = size; i >= 1; i--)
		{
			for (j = 1; j <= size; j++)
			{
				if (i > j)
					_putchar(' ');
				else
					_putchar('#');
			}
			_putchar('\n');
		}
	}
}
