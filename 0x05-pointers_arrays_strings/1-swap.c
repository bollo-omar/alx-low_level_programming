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
	int num;

	num = *a;
	*b = *b;
	*b = num;
}
