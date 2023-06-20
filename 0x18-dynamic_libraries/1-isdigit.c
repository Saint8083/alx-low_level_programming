#include "main.h"

/**
 * _isdigit - Check for digits ASCII characters
 * @c: This is an ASCII integer
 *
 * Return: 0 if not digit, 1 if digit
 */
int _isdigit(int c)
{
	if ((c >= 48) && (c <= 57))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
