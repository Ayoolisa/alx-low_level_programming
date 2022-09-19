#include <stdio.h>

int _strlen(char *);
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	char *str;
	int len;

	str = "ALX!";
	len = _strlen(str);
	printf("%d\n", len);
	return (0);
}

