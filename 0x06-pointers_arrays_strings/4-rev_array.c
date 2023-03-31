#include "main.h"
#include <stdio.h>
/**
 * reverse_array - reverse the content of an array of integers
 * @a: array
 * @n: number of elements of the array
 */
void reverse_array(int *a, int n)
{
	int i, s;

	for (i = 0 ; i < n-- ; i++)
	{
		s = a[i];
		a[i] = a[n];
		a[n] = s;
		
	}
}
