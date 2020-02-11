#include "holberton.h"

int print_last_digit(int i)
{
	int num;

	if (i < 0)
		i = i * (-1);

	num = i % 10;

	if (num < 0)
		num = num * (-1);

	_putchar(num + '0');

	return (num);
}
