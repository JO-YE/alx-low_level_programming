#include <stdio.h>
/**
 * main - Printing lowercase alphabet letter in reverse.
 *
 * Return: always 0 (success)
 */
int main(void)
{
	int r;

	for (r = 122; r > 96; r--)
	{
		putchar(r);
	}
	putchar('\n');
	return (0);
}
