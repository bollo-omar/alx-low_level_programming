#include "main.h"

/**
 * print_rev - print string followed by a new line
 *
 *  @s: param
 *
 * Return: always 0
*/

void print_rev(char *s);
{
	for (; *s != '\0'; s--)
	{
		_putchar(*s);
	}

	_putchar('\n');
}
