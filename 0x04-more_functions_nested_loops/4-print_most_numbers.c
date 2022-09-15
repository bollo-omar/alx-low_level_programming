#include "main.h"

/**
 * print_most_numbers - orunts numbers from 0-9 minus 4 & 2
 *
 * Return: always 0
 */

print_most_numbers(void)
{
	int x;

	x = 0
	do {
		if (x != 2 || x != 4)
		{
			_putchar(x + '0');
		}
		++x;
	} while (x < 9);

	_putchar('\n')
}
