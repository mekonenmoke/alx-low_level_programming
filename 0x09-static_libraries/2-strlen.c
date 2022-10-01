#include "main.h"

/**
 * _strlen - displays the length of a string
 * @x: string to check
 * Return: int length of the string
 */
int _strlen(char *x)
{
	int l = 0;

	while (x[l])
		l++;
	return (l);
}
