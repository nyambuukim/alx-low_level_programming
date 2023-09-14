#include "variadic_functions.h"

/**
 *sum_them_all - Sums up all parameters provided.
 *@n: Arguments to be passed.
 *Return: Sum of all the parameters.
 */

int sum_them_all(const unsigned int n, ...)

{
	unsigned int sum = 0;
	unsigned int i;

	va_list holder;

	va_start(holder, n);

	for (i = 0; i < n; i++)
	{
	if (n == 0)
		{
		return (0);
		}
		else
		{
		sum += va_arg(holder, const unsigned int);
		}
	}
	va_end(holder);
	return (sum);
}
