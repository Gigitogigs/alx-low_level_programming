#include "main.h"

/**
 * main - a function that copies bytes from memory
 * @n: bytes copied
 * @src: memory start
 * @dest: memory destinatiom
 * Return: pointer dest
 */
char *_memcpy(char *dest, char *src, unsigned int n);
{
	char *start = dest;

	while (n--)
	{ *dest = *src;
		src++;
		dest++;
	}
	return (start);
}
