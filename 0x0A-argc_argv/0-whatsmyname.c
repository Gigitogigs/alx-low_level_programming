#include <stdio.h>
/**
 * main - function to print itself
 * @argc: argument counter
 * @argv: argument value
 * Return: 0 (succes)
 */
int main(int argc, char *argv[])
{
	if (argc > 0)
		printf("%s\n", argv[0]);

	return (0);
}
