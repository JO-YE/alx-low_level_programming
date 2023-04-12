#include "search_algos.h"

/**
* linear_search - a func that searches for a value in an array
* @array: pointer to the first element of the array to search in
* @size: is the number of the element of the array
* @value: the value to serch for
*
* Return: return the first index where the value is located else -1
*/

int linear_search(int *array, size_t size, int value)
{
	size_t indx;

	if (array == NULL)
		return (-1);

	for (indx = 0; indx < size; indx++)
	{
		printf("Value checked array[%ld] = [%d]\n", indx, array[indx]);

		if (array[indx] == value)
			return (indx);
	}
	return (-1);
}
