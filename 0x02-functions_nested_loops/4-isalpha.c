#include "main.h"

/**
 * _isalpha - checks for alphabetical letters
 * @c: a character to be checked on
 * Return: returns 0 or 1 depending on the condition
 *
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
	return (1);
	}
	return (0);
}
