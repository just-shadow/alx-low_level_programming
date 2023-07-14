#include <stdio.h>
/**
 * main -Entry point for program printing the alphabet in lowercase
 * return(0) - Program succesfully implemented
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	putchar("\n");
	return (0);
}
