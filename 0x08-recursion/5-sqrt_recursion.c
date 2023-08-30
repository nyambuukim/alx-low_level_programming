#include "main.h"

/**
 * _sqrt_recursion - returns natural square root of a number
 * @n: number to calculate the natural square root
 * Return: natural square root
 */
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 0));
}

/**
 * _sqrt - return the natural square root of a number
 * @a: input number
 * @b: iterator
 * Return: square root or -1
 */
int _sqrt(int a, int b)
{
	if (b * b == a)
	{
		return (b);
	}
	else if (b * b > a)
	{
		return (-1);
	}
	return (_sqrt(a, b + 1));
}
