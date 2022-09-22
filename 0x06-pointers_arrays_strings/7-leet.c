#include "main.h"
/**
 * leet -  a function that encodes a string into 1337
 * @s: input string
 * Return: the pointer to dest
 */
char *leet(char *s)
{
	int cap = 0, i;
	int low_letters[] = {97, 101, 111, 116, 108};
	int upp_letters[] = {65, 69, 79, 84, 76};
	int numbers[] = {52, 51, 48, 55, 49};

	while (*(s + cap) != '\0')
	{
		for (i = 0; i < 5; i++)
		{
			if (*(s + cap) == low_letters[i] || *(s + cap) == upp_letters[i])
			{
				*(s + cap) = numbers[i];
				break;
			}
		}
		cap++;
	}
	return (s);
}
