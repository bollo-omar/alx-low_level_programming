#include "main.h"
#include <stdio.h>
/**
 *  print_to_98 - prints natural numbers upto 98
 * @n : n is the iterator
 *  Return: Always 0 (Success)
*/
void print_to_98(int n)
{
	n = 0;

	while (n < 98)
	{
		_putchar((n % 10) + '0');
		_putchar(',');
		_putchar(' ');
		++n;
	}
}
