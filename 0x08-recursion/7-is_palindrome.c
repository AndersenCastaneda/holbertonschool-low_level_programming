int _strlen_recursion(char *s);
int cmp_char(char *s, int i, int len);

/**
 * is_palindrome - find if a string is a palindrome
 * @s: input
 * Return: 1 if the string is a palindrome, 0 otherwise
 */
int is_palindrome(char *s)
{
	if (*s == '\0')
		return (0);

	return (cmp_char(s, 0, _strlen_recursion(s)));
}

/**
 * _strlen_recursion - get the length of a string
 * @s: input (string)
 * Return: length of the string
 */
int _strlen_recursion(char *s)
{
	if (!*s)
		return (0);
	return (1 + _strlen_recursion(s + 1));
}

/**
 * cmp_char - check if the chars of a string are similar
 * and check if the string is a aplindrome
 * @s: input (string)
 * @i: int (index 0 of the string)
 * @len: length of the string
 * Return: 1 if the string is a palindrome, 0 otherwise
 */
int cmp_char(char *s, int i, int len)
{
	if (s[i] != s[len - 1])
		return (0);
	if (i >= len)
		return (1);
	return (cmp_char(s, i + 1, len - 1));
}
