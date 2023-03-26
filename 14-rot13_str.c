#include "main.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * rot13 - function to encode
 * @c: string to be encoded
 * Return: returns encoded string
 *
 */
int print_rot13()
{
	char *str = va_arg(args, char *);
	int i = 0, j = 0;
	char s1[] =
	"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char s2[] =
	"NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (; str[i] != '\0'; i++)
	{
		for (; j <= 52; j++)
		{
			if (str[i] == s1[j])
			{
				str[i] = s2[j];
				break;
			}
		}
	}
	while (str[i] != '\0')
	{
		putchar(str[i]);
		print_count++;
	}
	return (print_count);
}
