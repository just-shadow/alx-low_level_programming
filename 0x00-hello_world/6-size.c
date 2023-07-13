#include <stdio>
/**
 * main - Entry point for a program that prints the various size of types on computer it is compiled and run
 * Return: 0 - Success
 */
int main(void)
{
	char c;
	int i;
	long int d;
	long long int b;
	float f;

printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(c));
printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(i));
printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(d));
printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(b));
printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(f));
return (0);
}
