#include "main.h"

/**
 * main - prints the number of arguments passed into it.
 * @argc: is a count of the arguments supplied to the program
 * @argv: an array of pointer to char.
 *
 * Return: an integer value
 */
int main(int argc, char *argv[])
{
	int i = 0;

	int s = atoi(*argv);

	while (*argv)
	{
		if (argc > s)
		{
			printf("%d\n", argc - 1);
		}
		else
		{
			printf("%d\n", argc);
		}
		i++;
		break;
	}
	return (0);
}
