#include <stdio.h>

/**
 * main - print the numbers for 0 to 100
 * if the numbers are multiples of 3 print Fizz
 * if the numbers are multiples of 5 print Buzz
 * if the numbers are multiples of 3 and 5 print FizzBuzz
 * Return: 0
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
			printf("FizzBuzz");
		else if (i % 3 == 0)
			printf("Fizz");
		else if (i % 5 == 0)
			printf("Buzz");
		else
			printf("%d", i);

		printf(" ");
	}
	printf("\n");
	return (0);
}