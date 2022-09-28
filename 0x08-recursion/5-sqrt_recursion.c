#include "main.h"

/**
 * sqrt_check - Checks for the square root of c
 * @x: Guess at sqrt
 * @y: Number to find sqrt of
 * Return: -1 or sqrt of y
 */
int sqrt_check(int x, int y)
{
	if (x * x == y)
		return (x);
	if (x * x > y)
		return (-1);
	return (sqrt_check(x + 1, y));
}

/**
 * _sqrt_recursion - Returns the natural square of a number
 * @n: integer to find sqrt of
 * Return: Natural square root or -1
 */
int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);

	return (sqrt_check(1, n));

