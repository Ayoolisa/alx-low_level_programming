#include "main.h"

/**
 * main - multiplies two numbers.
 * @argc: counts the arguments
 * @argv: pointer to a string of characters.
 *
 * Return: On Success - 0
 * On error - 1
 */
int main(int argc, char *argv[])
{
	int num1, num2, product;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		num1 = atoi(argv[1]);
		num2 = atoi(argv[2]);
		product = num1 * num2;

		printf("%d\n", product);
	}
	return (0);
}
