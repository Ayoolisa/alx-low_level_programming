#include "main.h"

/**
 * print_most_numbers - prints the numbers, from 0 to 9.
 *
 * Return: Always 0
 */
void print_most_numbers(void)
{
	int c = 47;

	while (c < 57)
	{
		c++;
		if (c != 50 && c != 52)
		{
			_putchar(c);
		}
	}

	_putchar('\n');
}
