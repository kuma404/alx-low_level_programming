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
	int i;
	int j;

	i = 0;
	j = 1;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (scr[j] != '\0')
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

