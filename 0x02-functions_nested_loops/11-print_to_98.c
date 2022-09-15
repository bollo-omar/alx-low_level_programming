#include "main.h"
#include <stdio.h>
/**
 *  print_to_98 - prints natural numbers upto 98
 * @n : n is the iterator
 *  Return: Always 0 (Success)
*/
void print_to_98(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", (i + 1));
		if (i < (n - 1))
		{
			_putchar(',');
			_putchar(' ');
		}
	}
}
