#include "main.h"

/**
 * main - a function that prints infinte addition
 * @ni: input
 * @n2: input
 *
 * Return: Zero orarray position
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
    int i = 0, j = 0, k = 0;
    int carry = 0;
    int sum = 0;

    while (n1[i] != '\0')
        i++;
    while (n2[j] != '\0')
        j++;
    if (i > size_r || j > size_r)
        return (0);
    r[size_r - 1] = '\0';
    for (i--, j--, k = size_r - 2; k >= 0 && (i >= 0 || j >= 0); i--, j--, k--)
    {
        sum = carry;
        if (i >= 0)
            sum += n1[i] - '0';
        if (j >= 0)
            sum += n2[j] - '0';
        carry = sum / 10;
        r[k] = sum % 10 + '0';
    }
    if (carry != 0 || i >= 0 || j >= 0)
        return (0);
    else
        return (&r[k + 1]);
}

