#include <stdio.h>
/**
 * main - Entry point
 *
 * Return:Always 0 (Success)
 */
int main(void)
{
	int a;
	long int b;
	long long int c;
	char d;
	float e;

	printf("Size of a int: %lu byte(s)\n",(unsigned int)sizeof(a));
	printf("Size of a long int: %lu byte(s)\n",(unsigned long int)sizeof(b));
	printf("Size of a lom]ng long int: %lu byte(s)\n",(unsigned long long int)sizeof(c));
	printf("Size of a char: %lu byte(s)\n",(unsigned char)sizeof(d));
	printf("Size of a float: %lu byte(s)\n",(unsigned float)sizeof(e));
	return (0);
}
