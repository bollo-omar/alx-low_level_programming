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
	int i = 0;

	len = 0;

	while (dest[i++])
		len++;
	for (i = 0; src[i]; i++)
		dest[len++] = src[i];

	return (dest);
}
