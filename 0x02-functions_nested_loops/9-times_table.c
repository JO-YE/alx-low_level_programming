#include "main.h"
/**
 * times_table - a function that prints the 9 times table, starting with 0
 *
 * Return: no return
 */
void times_table(void)
{
	int a, b, op;


	for (a = 0; a <= 9; a++)
	{
		_putchar('0');
		for (b = 1; b <= 9; b++)
		{
			op = a * b;
			_putchar(',');
			_putchar(' ');
			if (op <= 9)
			{
				_putchar(32);
				_putchar(op + 48);
			}
			else
			{
				_putchar((op / 10) + 48);
				_putchar((op % 10) + 48);
			}
		}
		_putchar('\n');
	}
}
