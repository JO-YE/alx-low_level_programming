#include <stdio.h>
/**
 * main - Printsthe sum of all the multiples of 3 or 5 below 1024
 *
 * Return: always 0.
 */
int main(void)
{
	int a, b;

	for (a = 1; a < 1024; a++)
	{
		if ((a % 3) == 0 || (a % 5) == 0)
			b += a;
	}
	printf("%d\n", b);
	return (0);
}
