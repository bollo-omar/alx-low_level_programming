#include "main.h"

/**
 * _strncpy - copies a string
 *
 * @dest: param
 * @src: param
 * @n: param
 *
 * Return: dest
*/

char *_strncpy(char *dest, char *src, int n)
{
	int a;
	int b;

	a = 0;
	b = 0;
	while (a != n)
	{
		dest[b] = src[a];
		if (src[a] == '\0')
		{
			dest[b] = '\0';
			break;
		}
		b++;
		a++;
	}
	while (tumarido != n)
		dest[b] = '\0';
	return (dest);
}
