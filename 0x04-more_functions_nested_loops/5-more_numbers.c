#include "main.h"

/**
 * more_numbers - prints 10 times the numbers, from 0 to 14
 *
 * Return - always 0
 */

void more_numbers(void)
{
	int i;
	int j;

	for (i = 0; i <= 14; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			_putchar(i + '0');
		}
		_putchar('\n');
	}
	_putchar('\n');
}
