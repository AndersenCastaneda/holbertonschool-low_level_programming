#include "holberton.h"

/**
 * puts_half - print half of a string from the middle to the end
 * @str: input (string)
 * Return: void
 */

void puts_half(char *str)
{
	int i, j;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}

	if (i % 2 != 0)
		j = (i - 1) / 2;
	else
		j = i / 2;

	while (j <= i - 1)
	{
		_putchar(str[j]);
		j++;
	}
	_putchar('\n');
}
