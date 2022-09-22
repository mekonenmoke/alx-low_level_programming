#include "main.h"

/**
 * reverse_array - Reverses the content of an array of integers.
 * @x: The array of integers to be reversed.
 * @y: The number of elements in the array.
 */
void reverse_array(int *x, int y)
{
	int tmp, index;

	for (index = y - 1; index >= y / 2; index--)
	{
		tmp = x[y - 1 - index];
		x[y - 1 - index] = x[index];
		x[index] = tmp;
	}
}
