/**
 * factorial - return the factorial of a given number
 * @n: input (int)
 * Return: int (n factorial)
 */

int factorial(int n)
{
	if (n - 1 >= 2)
		n *= factorial(n - 1);
	else if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);

	return (n);
}
