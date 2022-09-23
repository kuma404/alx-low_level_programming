#include "main.h"
/**
*_strcat -concatinates the string pointed to by @src to
*the end of the string poited by @dest
*@dest - string will be appended
*@src - string to be concatenated upon
*
*Return: pointer to @dest
*/
char *_strcat(char *dest, char *src)
{
	char *ptr = dest;

	while (*ptr != 0)
		ptr++;
	while (*scr != 0)
		*ptr++ = *src++;
	*ptr = 0;

	return (dest);
}

