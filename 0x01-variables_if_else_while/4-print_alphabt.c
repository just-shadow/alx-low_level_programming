#include <stdio.h>
/**
 * main - Entry point for program
 * return (0) - Program a success
 */
int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		if (ch != 'e' && ch != 'q')
		{
			putchar(ch);
		}
		ch++
	}
	putchar("\n");
	return (0);
}
