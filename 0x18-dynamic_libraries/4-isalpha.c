#include "main.h"

/**
 * _isalpha - prints 1 for letters and 0 for others
 *
 * @c: Are ASCII characters
 *
 * Return: 1 for letters, 0 for others
 */

int _isalpha(int c)
{
	if ((c > 96 && c < 123) || (c > 64 && c < 91))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
