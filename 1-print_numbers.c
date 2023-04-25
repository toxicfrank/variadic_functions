#include <stdio.h>
#include <stdarg.h>

/*Function prototype*/

void print_numbers(const char *separator, const unsigned int n, ...);

/**
 * main: call the function below
 * Return: always 0
 */

int main(void)
{
	print_numbers(",", 4, 0, 98, -1024, 402);
	return (0);
}

/**
 * print_numbers - function that prints numbers followed by a new line
 * @separator: function parameter that goes through characters
 * @n: function parameter that goes through
 * Return: numbers
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list(args);

	va_start(args, n);
	int i;

	for (i = 0; i < n; i++)
	{
		int x = va_arg(args, int);

		printf("%d", x);

		if (i != (n-1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");
	va_end(args);
}
