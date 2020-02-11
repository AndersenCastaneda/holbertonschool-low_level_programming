#include "holberton.h"

/**
 * main - print Holberton
 * Return: Always 0
 */

int main(void)
{
	char ch[9] = "Holberton";
	int i;

	for (i = 0; i < 9; i++)
	{
		_putchar(ch[i]);
	}

	_putchar('\n');
	return (0);
}
