#include "holberton.h"
/**
 * gcc -Wall -Werror -Wextra -pedantic *.c -o hsh && ./hsh
 */
int main(int ac, char **av)
{
    (void)av;
    if (ac == 1)
        isatty(STDIN_FILENO) ? _itte() : _noItte();
    else
        return (2);
    return (0);
}