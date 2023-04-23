#include <stdio.h>
/**
 * main - wont work
 * Return: always 0
 */
int main(void)
{
	int i = 2, j = 9;

	const int *ip = &i;

 /**
 * since the pointer has been made constant one cannot
 * change the value the pointer points to
 */
	*ip = 10;

	printf("%d\n", *ip);

/*The code below will run*/
	int k = 5, l = 8;

	const int *ptr = &k;

/**
 * It will run because one is not changing the value ip points
 * to
 */
	ptr = &l;

	printf("%d\n", *ptr);
	return (0);
}
