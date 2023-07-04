#include "main.h"

/**
 * main - a function that copies bytes from memory
 * @n: bytes copied
 * @src: memory start
 * @dest: memory destinatiom
 * Return: pointer dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
    unsigned int i;

    for (i = 0; i < n; i++)
        dest[i] = src[i];
    return (dest);

}
