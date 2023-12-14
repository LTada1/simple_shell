#include "main.h"

/**
 * prompt_shell - prompt user for input
 *
 * Return: Void
 */

void prompt_shell(void)
{
char *str = "root@user:$ ";

write(STDOUT_FILENO, str, _strlen(str));
}
