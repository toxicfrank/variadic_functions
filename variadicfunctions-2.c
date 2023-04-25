#include <stdarg.h>
#include <stdio.h>
/*Function prototype*/
int max(int num_args, ...);

/**
 * main - calls the function below
 * Return: always 0
 */
int main(void)
{
/*storing the returned number in a int data type when calling the function*/
	int max_num = max(3, 24, 66, 45);

	printf("max num: %d", max_num);

	return (0);
}

/**
 * max - looking for the max number
 * @num_args: function that contains number of arguments
 * Return: max value
 */
int max(int num_args, ...)
{
	va_list(args);

	va_start(args, num_args);

	int i;
	int max = 0;

	for (i = 0; i < num_args; i++)
	{
/**
 * va_arg goes through the integers and pulls them
 * out so as to be noted in the program
 */
		int x = va_arg(args, int);

		if (i == 0)
		{
/*max becomes the first value*/
			max = x;
		}
		else if (x > max)
		{
/*replaces max when x is lager than the previous x*/
			max = x;
		}
	}

	va_end(args);
	return (max);
}
