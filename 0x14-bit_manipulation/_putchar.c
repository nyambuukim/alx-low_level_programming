#include <unistd.h>

/**
 * _putchar - Writes a character to the standard output (stdout).
 * @c: The character to be written.
 * Return: On success, returns the character written as an unsigned char.
 *On error, returns -1.
 */

int _putchar(char c)
{
        return (write(1, &c, 1));
}
