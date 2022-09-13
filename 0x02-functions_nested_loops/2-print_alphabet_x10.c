#include <stdio.h>

/**
 * main -Check the code
 *
 * Return: Always 0
 */
void print_alphabet_x10(void)
{
	char letter;
	int i = 0;

	while (i <= 9)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
		{
			putchar(letter);
		}

		putchar('\n');

		i++;
	}

	return 0;
}
