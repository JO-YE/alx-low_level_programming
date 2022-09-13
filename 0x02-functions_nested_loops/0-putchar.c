#include <stdio.h>
#include "main.h"
/**
 * main - putchar write the a character to stdout.
 *
 * Return: always 0 (success)
 */
int main(void)
{
	char *ch = "_putchar";

	while (*ch)
	{
		_putchar(*ch);
		ch++;
	}
	_putchar ('\n');

	return (0);
}
