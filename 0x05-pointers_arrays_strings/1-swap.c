#include "main.h"

/**
 * swap_int - swap values of two intergers
 *
 * @a: param a
 * @b: param b
 *
 * Return: no return value(void method)
 */

void swap_int(int *a, int *b)
{
	*a = *a + b;
	*b = *a - *b;
	*a = *a - *b
}
