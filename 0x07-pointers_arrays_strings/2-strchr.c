#include "main.h"

/**
 * _strchr - function that locates character in astring
 * @s:pointer to chatarcetr s
 * @c:variable chararcter
 * Return: returns occurence of characte c
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		return (s);
		s++;
	}
	if (*s == c)
		return (s);
	return (NULL);
}
 
