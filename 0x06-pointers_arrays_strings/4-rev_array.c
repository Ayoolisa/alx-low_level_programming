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
	int j, i;

	for (i = n - 1; i >= n / 2; i++)
	{
		j = a[n - 1 - i];
		a[n - 1 - i] = a[i];
		a[i] = j;
	}
}
