#include "holberton.h"

void print_alphabet(void)
{
	char ch;

	for (ch = 'z'; ch >= 'a'; ch--)
	{
		_putchar(ch);
	}

	_putchar('\n');
}
