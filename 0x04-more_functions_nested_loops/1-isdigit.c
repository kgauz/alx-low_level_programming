#include "main.h"
#include <stdio.h>
#include <ctype.h>
/**
 * Description - return 1 if c is a digit
 * Return: 0 or 1
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
