/**
 * swap_int - swap the value content inside 2 pointers
 * @a: first input
 * @b: second input
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
