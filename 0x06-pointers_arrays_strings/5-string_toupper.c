#include "main.h"

/**
 * string toupper - changes all lowercase letters to uppercase
 * @str: string to be changed
 *
 * Return: address tp the string
 */

char *string_toupper(char *)
{
	int a = 0;

	while (p[a])
	{
		if (p[a] >= 97 && p[a] <= 122)
		{
			p[a] -= 32;
		}

		a++;
	}

	return (p);
}
