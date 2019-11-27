#include "holberton.h"

ssize_t _getline(char **buf)
{
    ssize_t result;
    size_t var; 

    result = getline(buf, &var,stdin);
    

    return (result);  
}