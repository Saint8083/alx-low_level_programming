#include "main.h"

/**
 * _islower - If input is lowercase, it prints 1
 * And prints 0 for others
 *
 * @c: Is an ASCII character
 *
 * Return: 1 for lowercase and 0 for uppercase
 */

int _islower(int c)
{
	if (c > 96 && c < 123)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
