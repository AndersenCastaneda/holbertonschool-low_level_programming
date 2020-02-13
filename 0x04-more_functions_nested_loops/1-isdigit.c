#include "holberton.h"

/**
 * _isdigit - check if c is a number
 *@c: variable to check
 *Return: 1 if c is int, 0 otherwise
 */

int _isdigit(int c)
{
	if (c >= 48 && c < 57)
		return (1);
	else
		return (0);
}
