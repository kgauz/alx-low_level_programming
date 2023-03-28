#include "main.h"
#include <stdio.h>
/**
 * swap_int - swap the value of two integers
 * @a: first operand
 * @b: second operand
 */
void swap_int(int *a, int *b)
{
	int v;

	v = *a;
	*a = *b;
	*b = v;
}
