#include "main.h"

/**
 * rev_string - prints a string in reverse
 * @s: string to be reversed
 * Return: void
 */
void rev_string(char *s)
{
	int i;
	int leng = 0;

	for (i = 0; s[i] != '\0'; i++)
		leng++;
	for (i = 0; i < leng / 2; i++)
	{
		char g;

		g = s[i];
		s[i] = s[leng - 1 - i];
		s[leng - 1 - i] = g;
	}
}
