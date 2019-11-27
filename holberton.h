#ifndef HOLBERTON_SHELL
#define HOLBERTON_SHELL

/**/
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <string.h>

/**/


/*itte.c*/
void _itte();
/*_getline.c*/
ssize_t _getline(char **buf);
/*noItte.c*/
void _noItte();
/*_execute*/
void _execute(char **buff);
/*errors.c*/
void _fork_fail(char **buff);
/*_token*/
char **token(char *str, char **cmd, int *size);



#endif