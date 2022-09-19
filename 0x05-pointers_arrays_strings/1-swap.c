#include "main.h"
#include <limits.h>

/**
 * swap_int - swaps the values of two integers
 * @a: the first integer to be swapped
 * @b: the second integer to be swapped
 *
 * Return: Always 0.
 */

void swap_int(int *a, int *b)
{

	int x = *a;
	*a = *b;
	*b = x;

}
