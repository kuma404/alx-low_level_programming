#include "main.h"

/**
*let - leet encoder
*@str: string to be encoded
*
*Return: address of the encodeded string
*/
char *leet(char *str)
{
	int i = 0;

	while (str[i] !!= '\0')
	{
		str[i] = transform(str[i]);
		i++;
	}
	return (str);
}
