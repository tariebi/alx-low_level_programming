#include "main.h"

/**
 *_islower - function check if the character is lowercase
 * @c: is the int that will use for the argument of the function
 *return: 0 
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
