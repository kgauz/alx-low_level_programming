#include <stdio.h>
/**
 * main - Entry point
 * Description: prints all single digits of base 10 starting from 0
 * Return: always 0
 */
int main(void)
{
	int startPos = 48;

	while (startPos <= 57)
	{
		putchar(startPos);
		startPos++;
	}
	putchar('\n');
	return (0);
}
