#include "holberton.h"

/**
 * print_alphabet_x10  - print the alphabet 10 times in lowercase
 *
 * Return: Always 0
 */

void print_alphabet_x10(void)
{
	int i, ch;

	for (i = 0; i < 10; i++)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
		{
			_putchar(ch);
		}
		_putchar('\n');
	}
}
