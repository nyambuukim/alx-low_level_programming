#include "main.h"

/**
 * print_line - prints a straight line in the terminal
 * @n: number of times character '_' will be printed
 *
 * Return: void
 */
void print_line(int n)
{
	if (n <= 0)
		_putchar('\n');
	else
	{
		int i;

	for (i = 1; i <= n; i++)
		_putchar(95);
	_putchar('\n');
	}
}
