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

	for (ch = 'a'; ch <= 'f'; ch++)
	{
		putchar(ch);
	}

	putchar('\n');

	return (0);
}
