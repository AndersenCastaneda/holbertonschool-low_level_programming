#include "holberton.h"

/**
 * print_diagonal - prints line
 * @n: length of the diagonal
 * Return: 0
 */

void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < n; j++)
			{
				if (i == j)
				{
					_putchar('\\');
					break;
				}
				else
				{
					_putchar(' ');
				}
			}
			_putchar('\n');
		}
	}
}
