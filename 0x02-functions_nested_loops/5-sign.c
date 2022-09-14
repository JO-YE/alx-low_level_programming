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
	if (n > 48)
	{
		return (1);
	}
	else if (n == 48)
	{
		return (0);
	}
	else
	{
		return (-1);
	}
	_putchar('\n');
}
