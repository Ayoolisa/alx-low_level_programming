#include "main.h"

/**
 * main - prints its name, followed by a new line.
 * @argc: is the count of the arguments supplied to the program
 * @argv: an array of pointer to char.
 *
 * Return: The name of the argument entered
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
