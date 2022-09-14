#include "main.h"
/**
 * print_sign - function that prints the sign of a number
 *
 * @n: The input number as an integer.
 *
 * Return: 1 is greater than zero. 0 is zero. -1 is less than zero.
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(49);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(46);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
	_putchar('\n');
}
