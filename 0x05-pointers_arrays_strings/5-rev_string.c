#include "main.h"
#include <string.h>
/**
 * rev_string - reverse a string
 * @s: receive string value from the main
 */
void rev_string(char *s)
{
	int i, len, temp, left, right;

	len = strlen(s);
	right = len - 1;
	left = 0;
	for (i = left; i < right; i++)
	{
		temp = s[i];
		s[i] = s[right];
		s[right] = temp;
		right--;
	}
}
