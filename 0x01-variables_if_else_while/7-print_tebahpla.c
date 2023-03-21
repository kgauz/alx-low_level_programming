#include <stdio.h>
/**
 * main - Entry point
 * Description: prints lowecase alphabet from reverse
 * Return: always 0
 */
int main(void)
{
	int num = 122;

	for (num; num >= 97; num--)
	{
		putchar(num);
	}
	putchar('\n');
	return (0);
}
