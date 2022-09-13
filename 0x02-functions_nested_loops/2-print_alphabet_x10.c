#include "main.h"
/**
 * Print_alphabet - Print alphabet in lower case *10
 *
 * Return: always 0 (success)
 */
void print_alphabet_x10(void)
{
	int a, b;
	
	for (a = 0; a <= 9; a++)
	{
		for (b = 97; b <= 122; b++)
		{
			_putchar(b);
		}
		_putchar('\n');
	}
}
