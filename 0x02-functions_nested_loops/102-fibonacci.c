#include <stdio.h>
/**
 * main -  prints the first 50 Fibonacci numbers, starting with 1 and 2
 *
 * Return: always 0
 */
int main(void)
{
	int f;
	long int n1, n2, fn;

	n1 = 1;
	n2 = 2;
	printf("%ld, %ld", n1, n2);
	for (f = 0; f < '0'; f++)
	{
		fn = n1 + n2;
		printf(", %ld", fn);
		n1 = n2;
		n2 = fn;
	}
	printf("\n");
	return (0);
}
