#include <stdio.h>
/**
 * main -Entry point for a program
 * return (0) -Program implemented succesfully
 */
int main(void)
{
	int ch;

	for (ch = 'a'; ch = 'z'; ch++)
		putchar(ch);
	for (ch = 'A'; ch = 'Z'; ch++)
		putchar(ch);
	putchar("\n");
	return (0);
}
