#include "main.h"

/**
 *_memset - a function that fills memory with a constant byte
 *@s: pointes to the memory area that will be filled with constant
 *@b:the constant byte that fill the memory area with.
 *@n:the number of bytes in the memory area
 *Return:returns a pointer
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
