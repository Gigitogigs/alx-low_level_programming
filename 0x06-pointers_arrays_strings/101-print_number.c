#include "main.h"
#include <stdio.h>

/**
 * main - a code that prints out integers
 *
 * Return: Always (0) Success
 */
void print_number(int n)
{
	if (n < 0)
	{
		putchar('-');
		n = -n;
	}
	if (n / 10)
		print_number(n / 10):
	putchar(n % 10 + '0');
}
