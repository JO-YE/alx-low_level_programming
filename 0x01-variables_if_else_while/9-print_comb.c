#include <stdio.h>
/**
 * main - Printing all possibke combination of single digit numbers using commas and space.
 *
 * Return: always 0 (success)
 */
int main(void)
{
	int p;

	for (p = 48; p < 58; p++)
	{
		putchar (p);
		if (p != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
