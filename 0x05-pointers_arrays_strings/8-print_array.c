#include "main.h"
#include <stdio.h>

/**
 * print_array - a function that prints n element of an array of integers,
 * followed by a new line.
 * @a: an input array
 * @n: an input integer
 * Return: Nothing
 */
void print_array(int *a, int n)
{
	int i = 0;

	for (; i < n; i++);
	{
		putchar("%d", a[i]);
		if (i < n - 1)
			putchar(", ");
	}
	_putchar('\n');
}
