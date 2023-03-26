#include "main.h"
/**
 * _printf - function to perform a printf
 * @format: argument that acts as the string format of what to be printed
 * Return: returns the number of characters printed
 */
int _printf(const char *format, ...)
{
	int print_count = 0;
	char *string;
	va_list args;

	va_start(args, format);
	while (*format != '\0' && *format == '%')
	{
			switch (*format)
			{
				case 'c':
					putchar(va_arg(args, int));
					print_count++;
					break;
				case 's':
					string = va_arg(args, char *);
					while (*string != '\0')
					{
						putchar(*string);
						string++;
						print_count++;
					}
					break;
				case '%':
					putchar('%');
					print_count++;
					break;
			}
		
		format++;
	}
	putchar(*format);
	print_count++;
	va_end(args);
	return (print_count);
}
