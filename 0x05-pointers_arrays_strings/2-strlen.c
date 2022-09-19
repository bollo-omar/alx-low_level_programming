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
	int len = 0;

	while (*s != '\0')
	{
		len++;
		*s++;
	}

	return (len);
}
