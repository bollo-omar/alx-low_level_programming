#include "main.h"

/**
 * _isupper - function that checks if input is uppercase letter
 * @c: parameter
 * Return: 1 if true and 0 if otherwise
 */

int _isupper(int c)
{
	if (c == 'A' || c == 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
