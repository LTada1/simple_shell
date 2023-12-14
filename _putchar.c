#include "main.h"

/**
 * printchar - Prints a character
 *
 * @chr: Character to print
 *
 * Return: 1
*/

int _putchar(char c)
{
return (write(1, &c, 1));
}
