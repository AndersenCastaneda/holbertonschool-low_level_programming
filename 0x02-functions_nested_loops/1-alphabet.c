#include "holberton.h"

/*
 * print_alphabet -
 */

void print_alphabet(void)
{
	char ch;

	for (ch = 'z'; ch >= 'a'; ch--)
	{
		_putchar(ch);
	}

	_putchar('\n');
}
