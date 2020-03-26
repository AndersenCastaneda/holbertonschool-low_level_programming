#include "holberton.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: unsigned long int input
 * Return: void
 */
void print_binary(unsigned long int n)
{
	if (n == 0)
		_putchar('0');
	else
		convert_binary(n);
}

/**
 * convert_binary - converts and print a unsigned long int to a binary
 * @n: number to convert and print
 * Return: void
 */
void convert_binary(unsigned long int n)
{
	if (n == 0)
		return;

	convert_binary(n >> 1);
	_putchar((n & 1) + '0');
}
