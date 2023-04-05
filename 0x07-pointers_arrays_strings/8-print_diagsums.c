#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - sum the two diagonal of a square
 * @a: string
 * @size: size
 */
void print_diagsums(int *a, int size)
{
	int i;
	int sum = 0;
	int sum2 = 0;

	for (i = 0; i < size; i++)
	{
		sum = sum + a[i * size + i];
	}
	for ( i = 0; i < size; i++)
	{
		sum2 = sum2 + a[i * size + (size - i - 1)];
	}
	printf("%d, %d\n", sum, sum2);
}
