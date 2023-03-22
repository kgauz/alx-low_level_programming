#include "main.h"
#include <ctype.h>
#include <stdio.h>
/**
 * Description: return 1 if c is lowercase
 * Otherwise return 0
 *
 */
int _islower(int c)
{
	if (islower(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
