#include "main.h"
/**
 * print_diagonal - a function that draws a diagonal line on the terminal.
 *
 * @n: the number of times the character \ should be printed
 *
 * Return: no return.
 */
void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 1; i <= n; i++)
		{
			for (j = 1; j < i; j++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
