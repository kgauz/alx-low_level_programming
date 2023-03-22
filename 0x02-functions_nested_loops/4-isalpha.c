#include "main.h"
#include <stdio.h>
#include <ctype.h>
/**
 * Description: return 1 if c is a letter, lowercse or uppercase
 *
 * Return: 0 otherwise
 */
int _isalpha(int c)
{
	if (isalpha(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
