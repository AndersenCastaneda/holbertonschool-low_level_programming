int find_prime(int n, int i);

/**
 * is_prime_number - return if a prime number is prime or not
 * @n: input
 * Return: 1 if is prime, 0 otherwise
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);

	return (find_prime(n, n - 1));
}

/**
 * find_prime - find if a number is a prime
 * @n: input
 * @i: input
 * Return: 1 if is prime, 0 otherwise
 */

int find_prime(int n, int i)
{
	if (i == 1)
		return (1);
	else if (n % i == 0 && i > 0)
		return (0);

	return (find_prime(n, i - 1));
}
