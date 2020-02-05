#include <stdio.h>

/**
 * main - Print the size of char, int, long and float variables
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	printf("Size of a char: %d byte(s)\n", sizeof(char));
	printf("Size of an int: %i byte(s)\n",  sizeof(int));
	printf("Size of a long int: %i byte(s)\n", sizeof(long int));
	printf("Size of a long long: %i byte(s)\n", sizeof(long long int));
	printf("Size of a float: %i byte(s)\n", sizeof(float));
	return (0);
}
