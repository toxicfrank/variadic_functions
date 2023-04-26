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
	va_list(strings);

	va_start(strings, n);

	int i;
	char *str;

	for (i = 0; i < n; i++)
	{
		str = va_arg(strings, char *);

		if (str == NULL)
		{
			printf("(nil)");
		}
		if (i != (n - 1) && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	va_end(strings);
}
