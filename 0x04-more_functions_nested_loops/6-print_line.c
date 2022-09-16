#include "main.h"
/**
 * print_line - a function that draws a straight line in the terminal.
 *
 * @n:  the number of times the character _ should be printed.
 * Return: no return.
 */
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
