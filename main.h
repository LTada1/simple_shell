#ifndef _MAIN_H_
#define _MAIN_H_
#define SIZE 1024


#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>

char _strcopy(char *str1, char *str2);
char *_strncat(char *dest, char *src, int n);
int _putchar(char c);
int _strlen(char *str);
void prompt_shell(void);
unsigned int check_delim(char, const char *);
tokenize_Str(char *lineptr_copy, char *delim, char **argv);
char *_strtok(char *, const char *);

#endif /* _MAIN_H_ */
