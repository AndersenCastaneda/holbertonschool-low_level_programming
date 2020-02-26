/**
 * _strlen_recursion - return the length of a string
 * @s: input (string)
 * Return: int (length)
 */

int _strlen_recursion(char *s)
{
	int n;

	if (*s != '\0')
	{
		n = _strlen_recursion(s + 1);
		n++;
	}
	return (n);
}
