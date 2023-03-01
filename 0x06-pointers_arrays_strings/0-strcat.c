#include "main.h"
/**
 * _strcat - concatenates two strings
 * @dest: input value
 * @src: input value
 *
 * Return: void
 */
char *_strcat(char *dest, char *src)
{
	int c;
	int j;

	c = 0;
	while (dest[c] != '\0')
	{
		c++;
	}
	j = 0;
	while (src[j] != '\0')
	{
		dest[c] = src[j];
		c++;
		j++;
	}

	dest[c] = '\0';
	return (dest);
}
