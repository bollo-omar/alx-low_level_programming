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

	for (len = 0; dest[len] != '\0'; len++)
	{
	}
	i = 0;
	while (src[j] != '\0')
	{
		dest[len] = src[i];
		i++;
		len++
	}

	len++;
	dest[len] = '\0';
	return (dest);

}
