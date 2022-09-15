#include "main.h"
/**
 * print_times_table - function that prints table if 0<n and n<15
 * @n : param
 *
*/
void print_times_table(int n)
{
	if (n >= 0 && n <= 15)
	{
		int row;
		int col;
		int d;

		for (row = 0; row <= n; row++)
		{
			_putchar('0');
			_putchar(',');
			_putchar(' ');

			for (col = 1; col <= n; col++)
			{
				d = row * col;

				if ((d / (n + 1)) > 0)
				{
					_putchar((d / (n + 1)) + '0');
				}
				else
				{
					_putchar(' ');
				}
				_putchar((d % (n + 1)) + '0');
				if (col < 9)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
			_putchar('\n');
		}
	}
}
