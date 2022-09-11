#include <stdio.h>
/**
 * main - print all different combination of 3 digit using space and comma.
 * Return: always 0 (success)
 */
int main(void)
{
	int i, e, g;

	i = 48;
	e = 48;
	g = 48;

	while (e < 58)
	{
		i = 48;
		while (i < 58)
		{
			g = 48;
			while (g < 58)
			{
				if (e != i && e != g && i != g && e < i && i < g)
				{
					putchar(e);
					putchar(i);
					putchar(g);
					if (i == 56 && e == 55 && g == 57)
					{
						break;
					}
					putchar(',');
					putchar(' ');
				}
				g++;
			}
			i++;
		}
		e++;
	}
	putchar('\n');
	return (0);
}
