#include <string.h>
#include <stdio.h>
#include <stdarg.h>
/*Function prototype*/
void print(char *placeholders, ...);

/**
 * main - calls the function below
 * Return: always 0
 */
int main(void)
{
	print("ddf", 1, 2, 2.4);
	return (0);
}

/**
 * print - to convert d and f to an identifier
 * @placeholders: function parameter that goes through the characters
 * Return: void
 */
void print(char *placeholders, ...)
{
/*To get the number of characters int the placeholder characters*/
	int num_args = strlen(placeholders);

	va_list(args);

	va_start(args, placeholders);

	int i;

	for (i = 0; i < num_args; i++)
	{
		if (placeholders[i] == 'd')
		{
			int x = va_arg(args, int);

			printf("%d\n", x);
		}
		else if (placeholders[i] == 'f')
		{
			double x = va_arg(args, double);
			printf("%.2f\n", x);
		}
	}

	va_end(args);

}
