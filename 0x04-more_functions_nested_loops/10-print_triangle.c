#include "main.h"

/**
 * print_triangle - prints a triangle using '#' character
 * @size: number of lines
 *
 * Return: 0
 */
void print_triangle(int size)
{
	int i, j;

	for (i = 0; i < size; i++)
		{
		for (j = 0; j < (size - i); j++)
			_putchar(' ');
		for (j--; j < size; j++)
			_putchar(35);
		if (i < (size - 1))
			_putchar('\n');
	}
	_putchar('\n');
}
