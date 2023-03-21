#include "main.h"

/**
 * _isalpha - check for alphabetic character
 * @c: character that will be checked
 * Return: 1 if it's character otherwise 0
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
