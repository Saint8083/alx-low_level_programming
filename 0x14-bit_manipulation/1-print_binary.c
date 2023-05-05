#include <stdio.h>
#include "main.h"

/**
 * print_binary - prints the binary equivalent of a decimal number
 * @n: number to print in binary
 */
void print_binary(unsigned long int n)
{
	unsigned long int mask = 1UL << (sizeof(unsigned long int) * 8 - 1);
	int printed = 0;

	while (mask > 0)
	{
		if ((n & mask) == mask)
		{
			putchar('1');
			printed = 1;
		}
		else if (printed)
		{
			putchar('0');
		}
		mask >>= 1;
	}

	if (!printed)
	{
		putchar('0');
	}
}
