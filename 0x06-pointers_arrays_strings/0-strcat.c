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
	int len = 0, i;

	while (dest[len])
		len++;

	for (i = 0; scr[i] != 0; i++)
	{
		dest[len] = src[i];
		len += 1;
	}
	dest[len] = '\0';
	return (dest);
}

