#ifndef _MAIN_H_
#define _MAIN_H_
#define SIZE 1024


#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>

char _stringcopy(char *str1, char *str2);
int _putchar(char c);
int _strlen(char *str);
void prompt_shell(void);
unsigned int check_delim(char, const char *);
char *_strtok(char *, const char *);

#endif /* _MAIN_H_ */
