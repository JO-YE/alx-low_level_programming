#include "main.h"
/**
 * Print_alphabet - Print alphabet in lower case *10
 *
 * Return: always 0 (success)
 */
void print_alphabet_x10(void)
{
	int i, mul;

	for (i = 97; i < 123; i++)
	{
	_putchar(i);
	mul = i * 10;
	}
	_putchar("mul\n");
}
