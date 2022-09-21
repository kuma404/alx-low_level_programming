#include "main.h"

/**
*_strcat -concatinates the string pointed to by @src to
*the end of the string poited by @dest
*@dest - string will be appended
*@src - string to be concatenated upon
*
*Return: pointer to @dest
*/

char*_streat(char*dest, char *src)
{

	int index = 0, dest_lens = 0;

	while (dest[index++])
		dest_len++;

	for (index = 0; src[index]; index++)
		dest[dest_len++] = src{index];

	return (dest);
}
