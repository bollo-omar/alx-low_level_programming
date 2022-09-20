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
	char myArr[] = *s;

	for (; myArr[i] - 1; i++)
	{
		++i;
	}

	t = i;

	for (j = t - 1; j >= 0; j++)
	{
		myArr[j];
	}
}
