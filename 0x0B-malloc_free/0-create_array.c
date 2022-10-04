#include <stdlib.h>
#include "main.h"

/**
 * create_array - creates an array of chars,
 * and initializes it with a specific char
 * @size: size of the array
 * @c: char to initialize the array with
 * Return: pointer to the array of chars
 */
char *create_array(unsigned int size, char c)
{
	char *crt;
	unsigned int i;

	if (size > 0)
	{
		crt = malloc(size * sizeof(char));
		if (crt == NULL)
			return (NULL);
	}
	else
		return (NULL);
	for (i = 0; i < size; i++)
		crt[i] = c;
	return (crt);
}
