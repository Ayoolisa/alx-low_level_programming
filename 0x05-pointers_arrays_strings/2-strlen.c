#include "main.h"
#include <string.h>

/**
 * _strlen - returns the length of a string.
 * @len: length of the string
 * Return: Always 0
 */
int _strlen(char *s)
{
	int len;
	s = "I love to code!";
	len = _strlen(s);
	_putchar(len);
	return (0);
}
