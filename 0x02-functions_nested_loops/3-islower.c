#include "main.h"
/**
 * main - Entry point
 * Return: 1 if char ie lowercase, otherwise 0
 */
int _islower(int c)
{
	if ('C' >= 'a' && c <= 'z')
		return(1);
	else
		return(0);
}
