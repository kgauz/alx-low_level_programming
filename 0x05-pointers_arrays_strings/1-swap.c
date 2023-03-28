#include "main.h"
/**
 * swap_int - swap the value of two integers
 * @a: first operand
 * @b: second operand
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*b = *a;
	temp = *b;
}
