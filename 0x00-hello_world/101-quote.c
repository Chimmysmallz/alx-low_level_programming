#include <stdio.h>
#include <stdlib.h>
/**
 * main - print end of quote in standard error.
 * Return 1 if success
 */
int main(void)
{
	write(2, "and that piece of art is useful - Dora Korpar, 2015-10-19\n", 20);
	return (1);
}
