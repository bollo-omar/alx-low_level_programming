#include "main.h"
/**
 * print_alphabet_x10 - a function that prints 10 times the alphabet
 *
 * Return: x10 a-z
 */
void print_alphabet_x10(void)
{
	for (int i = 0; i <= 10; i++)
	{
		for (int j = 'a'; j <= 'z'; j++)
		{
			_putchar(j);
		}

		_putchar('\n');
	}
}
