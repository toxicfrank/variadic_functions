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

/**
 * if i did not want to change what pointer points to i would
 * write the code as shown below
 */
	int a = 4, b = 6;
	
	int *const dr = &a;

/**
 * This will be an error because u cant change
 * what the pointer initially pointed to
 * but one can actually change the interger in a to be another
 * integer since the code above states that its only the address it points to
 * should be constant
 */
	dr = &b;

/*This will run*/
	*dr = 19;

/**
 * in order for the code to not be able to change what fr  points to and
 * cannot change the value fr points to
 */
	int q = 12, w = 3;
	const int *const fr = &q;

/*Both lines of code below wont be executed*/
	*fr = 4;
	fr = &w;
	return (0);
}
