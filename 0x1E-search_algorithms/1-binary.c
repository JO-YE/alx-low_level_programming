#include "search_algos.h"

/**
* prt_array - a func to print an array
* @array: a pointer to the array
* @low: the lowest index
* @high: the highest index
* Return: void
*/

void prt_array(int *array, size_t low, size_t high)
{
	char *delimiter = NULL;

	printf("Searching in array: ");
	for (; low <= high; low++)
	{
		if (delimiter)
			printf("%s%d", delimiter, array[low]);
		else
			printf("%d", array[low]);
		delimiter = ", ";
	}
	printf("\n");
}

/**
* binary_search - it searches a value in a sorted array using BS
* @array: is a pointer to the first element of the array to search in
* @size: is the number of elements in array
* @value: is the value to search in array
*
* Return: return the value else -1
*/

int binary_search(int *array, size_t size, int value)
{
	size_t low = 0, mid, high = size - 1;

	if (array == NULL)
		return (-1);

	prt_array(array, low, high);
	while (low != high)
	{
		mid = (low + high) / 2;
		if (array[mid] == value)
			return (mid);
		else if (array[mid] < value)
			low = mid + 1;
		else
			high = mid - 1;
		prt_array(array, low, high);
	}
	/* egde cases condition */
	if (array[high] == value)
		return (high);
	return (-1);
}
