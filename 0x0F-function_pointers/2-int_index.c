#include "function_pointers.h"
#include <stdio.h>
/**
 * int_index - returns the index of the first element
 * @array: a variable that can take multiple elements
 * @size: number of elements in the array
 * @cmp: pointer to the function to be used
 * Return: 0 or -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}