#include "main.h"

/**
 *_strcat - This program concatenates two strings
 *@dest: second string
 *@src: first string
 *Return: result
 */

char *_strcat(char *dest, char *src)
{

	char *text = dest;

	while (*dest != '\0')
	{
		dest++;
	}

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}

	*dest = '\0';

	return (text);
}
