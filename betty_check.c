#include "shell.h"
#include <stdio.h>
/**
 * swap_int - Swaps the values of two integers.
 * @a: Pointer to the first integer.
 * @b: Pointer to the second integer.
 *
 * Return: void.
 */
void swap_int(int *a, int *b)
{
	int temp;

	if (a && b)
	{
		temp = *a;
		*a = *b;
		*b = temp;
	}
}

/**
 * main - Entry point.
 *
 * Return: Always 0.
 */
int main(void)
{
	int x = 10;
	int y = 20;

	printf("Before swap: x = %d, y = %d\n", x, y);
	swap_int(&x, &y);
	printf("After swap: x = %d, y = %d\n", x, y);

	return 0;
}
