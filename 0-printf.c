#include "main.h"
/**
 * _printf - function to perform a printf
 * @format: argument that acts as the string format of what to be printed
 * Return: returns the number of characters printed
 */
int _printf(const char *format, ...)
{
	int print_count = 0, i = 0;
	char *string;
	va_list args;

	va_start(args, format);
	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;
			switch (*format)
			{
				case 'c':
					_putchar(va_arg(args, int));
					print_count++;
					break;
				case 's':
					string = va_arg(args, char *);
					while (*string != '\0')
					{
						_putchar(*string);
						string++;
						print_count++;
					}
					break;
				case '%':
					_putchar('%');
					print_count++;
					break;
			}
		}
		else
		{
			_putchar(*format);
			print_count++;
		}
		format++;
	}
	va_end(args);
	return (print_count);
}
