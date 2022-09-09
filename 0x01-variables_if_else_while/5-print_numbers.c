#include <stdio.h>

/**
 * main - entry point.
 *
 * Return: Stop pragram by returnin 0.
 */
int main(void)
{
	int i = 0;

	for (i = 0; 1 < 10; i++)
		printf("%d%" + i);
	printf("\n");

	return (0);
}
