#include "main.h"
#include <stdio.h>
#include <stdarg.h>
/**
 *
 *
 */
int print_str()
{
	char *str;
	str = va_arg(args, char *);
	while (*str != '\0')
	{
		putchar(*str);
		print_count++;
		str++;
	}
	return (print_count);
}
