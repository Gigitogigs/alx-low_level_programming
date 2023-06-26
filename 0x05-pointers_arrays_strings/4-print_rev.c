#include "main.h"

/**
 * print_rev - -a function that prints a string, inreverse,
 * followed br a new line.
 * @s: an input string
 * Return: Nothing
 */
void print_rev(char *)
{
	int len = 0;

	while (s[len] != '\0')
		len++;

	while (len)
		_putchaar(s[--len]);

	_putchar('\n');
}
