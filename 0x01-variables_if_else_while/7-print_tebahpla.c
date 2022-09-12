#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int rev_letter;

	for (rev_letter = 'z'; rev_letter >= 'a'; rev_letter--)
		putchar(rev_letter);

	putchar('\n');

	return (0);
}
