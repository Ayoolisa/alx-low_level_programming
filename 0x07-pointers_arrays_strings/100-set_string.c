#include "main.h"

/**
 * set_string - sets the value of a pointer to a char.
 * @s: Double pointer to a string
 * @to: Pointer to a string
 *
 * Return: Value of a pointer to a char
 */

void set_string(char **s, char *to)
{
	*s = to;
}
