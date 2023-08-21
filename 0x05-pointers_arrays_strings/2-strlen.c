#include "main.h"

/**
 * _strlen - finds the length of a string
 * @s: string to be counted
 * Return: Length of the string
 */
int _strlen(char *s)
{
	int i;

	while (*s != '\0')
	{
		i++;
		s++;
	}
	return (i);
}
