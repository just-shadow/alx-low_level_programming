#include "main.h"
/**
 * print_alphabet - Prints all alphapet in lowercase
  */
void print_alphabet(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		_putchar(ch);
	}
	_putchar('\n');
}
