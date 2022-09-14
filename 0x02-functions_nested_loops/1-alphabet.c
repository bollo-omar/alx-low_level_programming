#include "main.h"

/**
 *main - entry point
 *
 *prints- all lower case letters
 *
 *Return: always zero
 */
void print_alphabet(void)
{
	int i = 'a';

	do {
		_putchar(i);
		i++;
	} while (i <= 'z');
	_putchar('\n');


	return (0);
}
