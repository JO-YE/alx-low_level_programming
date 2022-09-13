#include <stdio.h>
#include "main.h"
/**
 * main - putchar write the a character to stdout.
 *
 * Return: always 0 (success)
 */
int main(void)
{
	char ch;
	ch = getchar ();
	_putchar (ch);
	return (0);
}
