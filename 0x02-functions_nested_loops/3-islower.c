#include "main.h"
/**
 * main - Entry point
 * Return: 1 if char ie lowercase, otherwise 0
 */
int _islower(int c)
{
	if ('C' >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
