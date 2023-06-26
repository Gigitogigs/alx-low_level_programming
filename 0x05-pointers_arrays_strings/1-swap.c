#include "main.h"

/**
 * swap_int - a function that swaps the values of two integers.
 * @a: an inout pointer
 * @b: an input pointer
 * Return: Nothing
 */
void swap_int(int *a, int *b)
{
	int aux;

	aux = *a;
	*a = *b;
	*b = aux;
}
