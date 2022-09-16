#include <stdio.h>
/**
 * main - print buzz each numbers of 3 and 5.
 *
 * Return: Always 0.
 */
int main(void)
{
	int i;
	char a[] = "FizzBuzz";
	char b[] = "Fizz";
	char c[] = "Buzz";


	for (i = 1; i <= 100; i++)
	{
		if (i == 100)
			printf("%s", c);
		else if ((i % 3 == 0) && (i % 5 == 0))
		{
			printf("%s", a);
		}
		else if (i % 3 == 0)
		{
			printf("%s", b);
		}
		else if (i % 5 == 0)
		{
			printf("%s", c);
		}
		else
		{
			printf("%d", i);
		}
	}
	printf("\n");
	return (0);
}
