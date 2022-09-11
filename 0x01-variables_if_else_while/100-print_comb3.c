#include <stdio.h>
/**
 * main - Print all possible different combination of 2 digit using putchar.
 *
 * Return: always 0 (success)
 */
int main(void)
{
	int p, n;

	p = 48;
	n = 48;

	while (n < 58)
	{
		p = 48;
		while (p = 48)
		{
			putchar(n);
			putchar(p);
			if (p == 57 && n == 57)
			{
				break;
			}
			putchar(',');
			putchar(' ');
			p++;
		}
		n++;
	}
	putchar('\n');
	return (0);
}
