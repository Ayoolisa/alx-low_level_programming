#include "main.h"

/**
 * clear_bit - sets the value of a bit
 * to 0 at a given index.
 * @n: a pointer to the bit
 * @index: the index to set a value at.
 *
 * Return: if an error occurs - -1.
 * On Success: 1.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n &= ~(1 << index);

	return (1);
}
