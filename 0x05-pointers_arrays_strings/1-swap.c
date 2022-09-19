#include "main.h"

/**
 * swap_int - swap values from two integers
 *
 * @a: param
 * @b: param
 *
 * Return: void(no return type
*/

void swap_int(int *a, int *b)
{
	int num;
	int num2;

	num = *a;
	num2 = *b;

	*a = num + num2;
	*b = num - num2;
	*a = num - num2;
}
