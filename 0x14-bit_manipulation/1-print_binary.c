#include "main.h"
/**
 * print_binary - Function prints the binary representation of number.
 * @n: Number.
 * Return: 0 Always.
 */

void print_binary(unsigned long int n)

{
	int binary;

	if (n >> 1)
		print_binary(n >> 1);

	binary = n & 1;
	putchar(binary + '0');
}

