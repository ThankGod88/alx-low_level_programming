#include "main.h"

/**
 * _strpbrk - matches any character specified
 * @s: This is the C string to be scanned.
 *Return: string s that matches any character specified in accept
 **/

char *_strpbrk(char *s, char *accept)
{
	int l;

	while (*s != '\0') /*Declaring WHILE*/
	{
		l = 0;
		while (accept[l] != '\0')  /*Evaluating *accept*/
		{
			if (*s == accept[l])
			{
				return (s);
			}

			l++; 
		}

		s++; /*add s+1*/
	}
	return (0);

}
