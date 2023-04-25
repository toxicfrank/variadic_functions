#include <stdio.h>
#include <stdarg.h>
/*Function prototypes*/
int max(int num_args, ...);
void print(char *placeholder, ...);
/**
 * main - calls the functions below
 * Return: always 0
 */
int main(void)
{
    return (0);
}

/**
 * max - look for the largest number
 * @num_args: function parameter
 * Return: max value
 */
int max(int num_args, ...)
{
    va_list args;

    va_start(args, num_args);

    int i;

    for (i = 0; i < num_args; i++)
    {
        int x = va_arg(args, int);
    }

    va_end(args);
}