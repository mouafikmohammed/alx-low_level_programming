#include "main.h"

/**
 * _strncat - concatenates two strings.
 *
 * @src: The source of strings
 * @dest: The destination of the string
 * @n: The length of int
 *
 * Return:Return a pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int index_dest, index_src;

	for (index_dest = 0; dest[index_dest] != '\0'; index_dest++)
	{
		continue;
	}
	for (index_src = 0; src[index_src] != '\0' && index_src < n; index_src++)
	{
		dest[index_dest + index_src] = src[index_src];
	}
	dest[index_dest + index_src] = '\0';
	return (dest);
}
