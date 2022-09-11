#include <stdio.h>
/**
 * main - Print numbers of base 16, 0 to 9 and lower case a to f
 *
 * return: always 0 (success)
 */
int main(void)
{
	int h;

	for (h = 48; h < 58; h++)
	{
		putchar(h);
	}
	for (h = 97; h < 103; h++)
	{
		putchar(h);
	}
	putchar('\n');
	return (0);
}
