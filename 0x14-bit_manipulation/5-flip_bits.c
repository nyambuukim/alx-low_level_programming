#include "main.h"
/**
 * flip_bits - Change number.
 * @n: Number
 * @m: Other number
 *i
 *Return: number of bits you would needed to flip to get from number.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int diff = 0, change = 0;

	diff = n ^ m;
	while (diff)
	{
		if (diff & 1)
			change++;
		diff = diff >> 1;
	}
	return (change);
}
