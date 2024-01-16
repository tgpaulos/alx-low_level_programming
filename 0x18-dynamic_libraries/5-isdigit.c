#include "main.h"
#include <stdio.h>

/**
 *_isdigit - This program  checks for a digit
 * @i: is the input to be checked
 * Return: 1 if i is adigit o otherwise
 */


int _isdigit(int i)
{
	if (i >= '0' && i <= '9')
	{
		return (1);
	}
	return (0);
}
