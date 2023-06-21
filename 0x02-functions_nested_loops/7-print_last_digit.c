#include "main.h"
/**
 * main - Entry point
 * Return: the last digit value
 */
int print_last_digit(int n)
{
	int ld = n % 10;

		if (ld < 0)
			ld *= -1;
	_putchar (ld + '0');
	return (0);
}
