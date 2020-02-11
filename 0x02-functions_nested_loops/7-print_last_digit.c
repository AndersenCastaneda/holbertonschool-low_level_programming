#include "holberton.h"

/**
 * print_last_digit - print the last digit.
 * @n: number.
 * Return: Always 0.
 */

int print_last_digit(int n)
{
	int num;

	if (n < 0)
		n = n * (-1);

	num = n % 10;

	if (num < 0)
		num = num * (-1);

	_putchar(num + '0');

	return (num);
}
