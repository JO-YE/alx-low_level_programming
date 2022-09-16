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

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < 1; j++)
		{
			_putchar(' ');
		}
		_putchar(92);
		if (i < (n - 1))
			_putchar('\n');
	}
	_putchar('\n');
}
