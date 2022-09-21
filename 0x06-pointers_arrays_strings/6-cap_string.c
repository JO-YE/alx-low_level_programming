#include "main.h"
/**
 * cap_string - capitalizes all words of a string
 * @s: pointer to input string
 * Return: return pointer to capitalized string
 */
char *cap_string(char *s)
{
	int i, j;
	int sep_words[] = {32, 9, 10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};

	i = 1;
	if (s[0] >= 'a' && s[0] <= 'z')
		s[0] -= ('a' - 'A');
	while (s[i] != '\0')
	{
		for (j = 0; sep_words[j] != '\0'; j++)
			if (s[i - 1] == sep_words[j] && (s[i] >= 'a' && s[i] <= 'z'))
				s[i] -= ('a' - 'A');
		i++;
	}
	return (s);
}
