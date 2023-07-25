#include "main.h"

/**
 * _puts - Write a function that prints a string, followed by a new line, to
 * stdout.
 *
 * @str: This is my input string
 *
 */

void _puts(char *str)
{
	int index;

	while (*str != '\0')
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
