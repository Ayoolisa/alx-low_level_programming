#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - random password generator for 101-crackme
 *
 * Return: Always 0
 */
int main(void)
{
	int x, y, z, n;
	char c[] = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char p[58];

	srand(time(NULL));
	while (n != 2772)
	{
		x = z = n = 0;
		while ((2772 - 122) > n)
		{
			y = rand() % 62;
			p[x] = c[y];
			n += c[y];
			x++;
		}
		while (c[z])
		{
			if (c[z] == (2772 - n))
			{
				p[x] = c[z];
				n += c[z];
				x++;
				break;
			}
			z++;
		}
	}
	p[x] = '\0';
	printf("%s", p);
	return (0);
}
