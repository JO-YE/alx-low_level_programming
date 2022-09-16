#include "main.h"
#include <stdio.h>
/**
 * print_numbers - function that prints the numbers, from 0 to 9
 *
 * Return: always 0
 */
int _putchar(char c)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
