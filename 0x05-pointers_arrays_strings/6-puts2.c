#include "main.h"

/**
 * puts2 - a function that prints half of a string
 * one char out of 2 of a string.
 * @str: input string.
 * Return: no return.
 */
void puts_half(char *str)
{
	int i = 0;

	while (i >= 0)
	{
		if (str[i] == '\0')
		{
			_putchar('\n');
			break;
		}
		if (i % 2 == 0)
			_putchar(str[i]);
		i++;
	}
}
