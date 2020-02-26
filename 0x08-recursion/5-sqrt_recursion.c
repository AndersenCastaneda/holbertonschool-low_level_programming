int _sqrt_search(int n, int r);

/**
 * _sqrt_recursion - return the natural square root of a number
 * @n: input
 * Return: int
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (0);
	else
		return (_sqrt_search(n, 0));
}

/**
 * _sqrt_search - search the natural square root of a number
 * @n: input (number)
 * @r: input (root of number)
 *  Return: int
 */

int _sqrt_search(int n, int r)
{
	if (r * r == n)
		return (r);
	else if (r * r > n)
		return (-1);
	else
		return (_sqrt_search(n, r + 1));
}
