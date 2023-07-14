#include <stdio.h>
/**
 * main -Entry point for a program
 * Return:0 -Program implemented succesful
 */
int main(void)
{
	char ch;

	for (ch = 'z'; ch >= 'a'; ch--)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
