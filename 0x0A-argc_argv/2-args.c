#include "main.h"

/**
 * main - prints all arguments it receives.
 * @argc: counts all the arguments given
 * @argv: pointer to char.
 *
 * Return: characters.
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
