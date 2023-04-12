#include "search_algos.h"

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

	while (low != high)
	{
		mid = (low + high) / 2;
		if (array[mid] == value)
			return (mid);
		else if (array[mid] < value)
			low = mid + 1;
		else
			high = mid - 1;
	}
	/* egde cases condition */
	if (array[high] == value)
		return (high);
	return (-1);
}
