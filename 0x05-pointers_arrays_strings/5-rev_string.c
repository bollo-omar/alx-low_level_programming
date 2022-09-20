#include "main.h"

/**
 * rev_string - reverse a string
 *
 * @s: params
 *
 * Return: void return type
*/

void rev_string(char *s)
{
	int i = 0;
	int j;
	int t;

	for (; *s[i] - 1; i++)
	{
		++i;
	}

	t = i;

	for (j = t - 1; j >= 0; j++)
	{
		_putchar(*s[j]);
	}
}
