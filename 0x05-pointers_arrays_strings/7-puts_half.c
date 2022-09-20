#include "main.h"
#include <string.h>

/**
 * puts_half - prints half of a string.
 * @str: string
 *
 * Return: half of the string.
 */

void puts_half(char *str)
{
	int half_len, i = 0;

	while (*(str + i))
		i++;
	half_len = i / 2;

	if (i % 2)
		half_len += 1;
	while (half_len < i)
	{
		_putchar(*(str + half_len));
		half_len++;
	}
	_putchar('\n');
}
