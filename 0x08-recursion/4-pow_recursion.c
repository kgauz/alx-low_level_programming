#include "main.h"
#include <math.h>
/**
 * _pow_recursion - return power
 * @x: base
 * @y: exponent
 * Return: fraction
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if ( y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1)); 
}
