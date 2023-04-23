#include <stdio.h>
/**
 * main - pointing
 * Return: always 0
 */
int main(void)
{
	int i = 2, j = 9;

	const int *ip;

	ip = &i;

	printf("%d\n", *ip);

	return (0);
}
