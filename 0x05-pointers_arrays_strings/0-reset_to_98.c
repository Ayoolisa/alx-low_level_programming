#include "main.h"

/**
 * reset_to_98 - a function that takes a pointer to an int as parameter and
 * updates the value it points to to 98
 * @n: number being tested
 *
 * Return: Always 0.
 */

void reset_to_98(int *n)
{
	int p = 98;

	*n = p;
}
