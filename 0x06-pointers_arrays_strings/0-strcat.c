#include "main.h"

/**
 * _strcat - funcction to concatinate two strings
 *
 * @dest: param
 * @src: param
 *
 * Return: retun char
*/

char *_strcat(char *dest, char *src)
{
	int len, i;

	len = 0;

	while (*dest[len] != '\0')
	{
		++len;
	}

	for (i = 0; *src[i] != '\0'; ++i, ++len)
	{
		*dest[len] = *src[j];
	}

	*dest[len] = '\0';

	return (*dest);
}
