#include <stdio.h>
#include <stdarg.h>
/*Function prototype*/

int sum_them_all(const unsigned int n, ...);

/**
 * main - call the function below 
 * Return: always 0
 */

int main(void)
{
	int sum;

	sum = sum_them_all(2, 98, 1024);
	printf("%d\n", sum);
	sum = sum_them_all(4, 98, 1024, 402, -1024);
	printf("%d\n", sum);
	return (0);
}

/**
 * sum_them_all - returns sum of all its parameters
 * @n: function parameter that indicates the number of arguments that
 * can be inserted
 * and the number of arguments is constant
 * Return: sum
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list(args);

	va_start(args, n);

	int i;
	int sum = 0;

	for (i = 0; i < n; i++)
	{
		int x = va_arg(args, int);

		sum += x;
	}

	va_end(args);

	return (sum);
}
