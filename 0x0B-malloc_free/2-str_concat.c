#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - concatenates two strings.
 * @s1: string 1
 * @s2: string 2
 * Return: returns concated string
 */
char *str_concat(char *s1, char *s2)
{
	int i, j, k;
	char *conc;

	i = 0;
	j = 0;
	k = 0;
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[i] != '\0')
	{
		i++;
		j++;
	}

	i = 0;

	while (s2[i] != '\0')
	{
		i++;
		k++;
	}

	conc = malloc(sizeof(char) * (j + k + 1));
	if (conc == NULL)
		return (NULL);
	for (i = 0; i < j; i++)
	{
		conc[i] = s1[i];
	}
	for (i = 0; i < k; i++)
	{
		conc[i + j] = s2[i];
	}
	conc[i + j] = '\0';
	return (conc);
}
