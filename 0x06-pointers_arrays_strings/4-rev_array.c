#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers.
 * @a: an array of integers
 * @n: the number of elements to swap
 *
 * Return: Reversed integers
 */
void reverse_array(int *a, int n)
{
	int i, j, k, m;

	m = n / 2;

	n -= 1;

	for (i = 0; i < m; i++)
	{
		j = a[n - i];
		k = a[i];
		a[i] = j;
		a[n - i] = k;
	}

}
