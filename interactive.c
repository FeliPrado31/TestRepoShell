#include "holberton.h"

void _itte(void)
{
    char *buff = NULL;
    ssize_t result;

    while (1)
    {
        write(1, "$ ", 2);
        result = _getline(&buff);
        
      printf("%lu\n", result);
        if (result == -1)
        {
            free(buff);
            break;
        }
        else if (result == 1)
        {
            continue;
        }
        _execute(&buff);
    }
}