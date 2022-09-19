#include "main.h"

/**
 * * _strlen - check the lenth of a string
 *
 * @s: param
 *
 * Return: always 0
*/

int _strlen(char *s)
{
	int *len = s;

	while (*len != '\0')
	{
		len++;
	}

	return (len - s);
}
