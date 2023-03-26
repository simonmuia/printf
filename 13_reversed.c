#include "main.h"
#include <stdio.h>
#include <stdarg.h>
/**
 *
 *
 */
int print_str_rev()
{
	char *str = va_arg(args, char *);
	int str_len = 0;
	int i;
	while (str[str_len] != '\0')
		str_len++;
	for (i = str_len - 1; i >= 0; i--)
	{
		putchar(str[i]);
		print_count++;
	}
	return (print_count);
}
