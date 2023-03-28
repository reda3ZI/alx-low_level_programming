#include <main.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 * On error, -1 is returned, and errno is set appropriately
 * Return: 1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
