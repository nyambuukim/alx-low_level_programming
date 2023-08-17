#include "main.h"

/**
 * _isdigit - function that checks 0 to 9
 * @c: parameter to be checked
 *
 * Return: 1 success 0 otherwise
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
