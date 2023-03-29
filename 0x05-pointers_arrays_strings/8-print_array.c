#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * print_array - prints n elements of an array of integers
 * folowed by a new line
 * @a: is the the array
 * @n: is the number of elements in the array to be printed
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < (n - 1); i++)
	{
		printf("%d", a[i]);
		putchar(',');
		putchar(' ');
	}
	if (i == (n - 1))
	{
		printf("%d", a[n - 1]);
	}
	putchar('\n');
}
