#include "main.h"

/**
 * _pow_recursion - function to print power of a number
 * @x: number to be raised
 * @y: power raised
 * Return: the result of a power
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
