#include <stdio.h>
/**
 * main - it wont run
 * Return: always 0
 */
int main(void)
{
/*Wont run coz we cant change the value of b since it is constant*/
	const int b = 3;
	b = 2;
	printf("%d", b);


/*wont run also because u cannot change a constant char*/
	const char d = 'E';
	d = 'B';
	printf("%c", d);

	return (0);
}
