#include "main.h"
/**
 * Print_alphabet - Print alphabet in lower case *10
 *
 * Return: x10 a-z
 */
void print_alphabet_x10(void)
{
	int i, mul;

	mul = 0;

	while (mul < 10)
	{
	for (i = 97; i < 123; i++)
	{
	_putchar(i);
	}
	mul++;
	_putchar("\n");
	}
}
