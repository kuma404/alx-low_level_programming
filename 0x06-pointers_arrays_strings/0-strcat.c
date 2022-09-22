#include "main.h"
#include<string.h>
/**
*_strcat -concatinates the string pointed to by @src to
*the end of the string poited by @dest
*@dest - string will be appended
*@src - string to be concatenated upon
*
*Return: pointer to @dest
*/

char*_strcat(char *dest, char *src)
{
	strcat(dest, src);
	return (dest);
}
