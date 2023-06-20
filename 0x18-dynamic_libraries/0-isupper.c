#include "main.h"

/**
 * _isupper - Check for uppercase ASCII characters
 * @c: This is an ASCII character
 *
 * Return: 0 if not uppercase, 1 if uppercase
 */
int _isupper(int c)
{
	if ((c >= 65) && (c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
