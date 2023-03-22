#include "main.h"
/**
 * Description: return 1 and prints + if n is greater than zero
 * Return 0 and print 0 if n is zero
 * Return -1 and prints - if n is less than zero
 */
int print_sign(int n)
{
	if (n > 0)
	{
		return (1);
		printf("+\n");
	}
	else if (n == 0)
	{
		return (0);
		printf("0\n");
	}
	else
	{
		return (-1);
		printf("-\n");
	}
}
