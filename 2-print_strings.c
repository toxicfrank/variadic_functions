#include <stdio.h>
#include <stdarg.h>

/*Function prototype*/

void print_strings(const char *separator, const unsigned int n, ...);

/**
 * main - call the function below
 * Return: always 0
 */

int main(void)
{
	print_strings(",", 2, "Jay", "Django");
	return (0);
}

/**
 * print_strings - strings followed by a new line
 * @separator: function parameter
 * @n: function parameter
 * Return: strings
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	
}