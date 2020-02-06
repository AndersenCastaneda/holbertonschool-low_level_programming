#include <stdio.h>

/**
 * main - Description
 *
 *
 * Return: 0
 */

int main(void)
{
	char ch;

	for (ch = 48; ch < 58; ch++)
	{
		putchar(ch);
	}

	for (ch = 'A'; ch <= 'F'; ch++)
	{
		putchar(ch);
	}

	putchar('\n');

	return (0);
}
