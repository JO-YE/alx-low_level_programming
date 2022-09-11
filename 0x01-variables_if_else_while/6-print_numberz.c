#include<stdio.h>
/**
 * main - Print digit number from 10 to 0 by using only putchar.
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int b;
	
	for (b = 48; b < 58; b++)
	{
		putchar(b);
	}
	putchar('\n');
	return (0);
}
