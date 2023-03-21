#include "main.h"

/**
 * _islower - prints characters lower case
 * @c: is the char to be checked
 * Return: 1 if character is lower otherwise 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
		return (0);
}
