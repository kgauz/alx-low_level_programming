#include "main.h"
#include <stdio.h>
#include <ctype.h>
/**
 * Description - return 1 if c is uppercase
 * return 0 otherwise
 */
int _isupper(int c)
{
	if (isupper(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
