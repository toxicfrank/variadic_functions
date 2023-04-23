#include <stdio.h>
#include <stdarg.h>
/*Function prototype*/
int pullout(int num_args, ...);

/**
 * main - calls the function below
 * Return:always 0
 */
int main(void)
{
	pullout(3, 4, 5, 7);

	return (0);
}

/**
 * pullout - pulls out the integers
 * @num_args: function parameter
 * Return: always 0
 */
int pullout(int num_args, ...)
{
	va_list args;

	va_start(args, num_args);

	int i;

	for (i = 0; i < num_args; i++)
	{
		int x = va_arg(args, int);
		printf("x: %d\n", x);
	}
	va_end(args);
}
