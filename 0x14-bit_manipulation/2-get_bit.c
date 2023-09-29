#include "main.h"
/**
 * get_bit - Function returns the value of a bit at a given index.
 * @n: Number
 * @index: the bit index
 * Return: bit in index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int t_binary;

	t_binary = (sizeof(n) * 8);
	if (index < t_binary)
	{
		return (((1 << index) & n) >> index);
	}
	return (-1);
}
