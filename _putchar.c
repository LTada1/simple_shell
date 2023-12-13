#include "main.h"

/**
 * printchar - Prints a character
 *
 * @chr: Character to print
 *
 * Return: 1
 */

int printchar(va_list chr)
{
	char ch;

	ch = va_arg(chr, int);
	_putchar(ch);

	return (1);
}
