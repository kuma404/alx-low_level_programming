#include "main.h"
#include <string.h>
/**
 * _strlen -> function to get the length of a string
 *@S: sting function to be passed to this function
 *Returns: length of string
 */
int _strlen(char *s)
{
int c = 0;

for (; *s != '/0'; s++)
	{
c++;
	}
	return (c);
}
