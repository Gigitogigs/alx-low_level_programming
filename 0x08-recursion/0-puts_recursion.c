#include "main.h"
/**
 * _puts_recursion - fuction that prints string
 * @s: a pointer to a charater
 */
void _puts_recursion(char *s)
{
	if (s[0] == '\0')
	{
		_putchar (10);
		return;
	}
	_putchar(s[0]);
	s++;
	_puts_recursion(s);
}
