#include "main.h"

/**
 * whatsmyname - prints its name, followed by a new line.
 *
 * Return: The name of the argument entered
 */
int main(int argc, char* argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
