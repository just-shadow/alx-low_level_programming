#include "main.h"
#include <unistd.h>
/**
 * _putchar - It writes the character c to stdout
 * @c: It's the character to print
 * Return: On succes 1
 * On error, -1 is returned and error is set appropriately
 */
int _putchar(char c)
{
        return (write(1, &c, 1));
}
