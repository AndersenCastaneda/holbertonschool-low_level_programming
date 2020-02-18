#include "holberton.h"

/**
 * print_rev - print the reverse of a string
 * @s: input (string)
 * Return: void
 */

void print_rev(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}

	while (i - 1 >= 0)
	{
		_putchar(s[i - 1]);
		i--;
	}
	_putchar('\n');
}
