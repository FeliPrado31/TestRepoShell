#include "holberton.h"

void _execute(char **buff)
{
    pid_t pid;
    char **cmd = NULL;
    int size;

    pid = fork();

    if (pid == -1)
    {
        _fork_fail(buff);
    }
    if (pid == 0)
    {
        cmd = token(*buff, cmd, &size);
        execve(*buff, cmd, NULL);
        free(cmd);
    }
    else
    {
        wait(NULL);
        free(*buff);
    }
}