#include "main.h"
/**
 * main - a function that fills memory with cinstant byte
 * _memset -  function
 * @s: variable caharcter
 * @b: avriable charatcter
 * @n: varaible integer
 * Return: pointer location
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *start= s;
	while (n--)
	{ 
		*s = b;
		s++;
	}
	return (start);
}
