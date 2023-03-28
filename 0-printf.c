#include "main.h"

void print_buffer(char buffer[], int *buff_ind);

/**
 * _printf - function to print a formated string
 * @format: the input string
 * Return: returns number of printed characters
 */
int _printf(const char *format, ...)
{
	int i, printed_string = 0, p_character = 0;
	int fg, wd, prec, sz, bd = 0;
	va_list list;
	char buffer[BUFF_SIZE];

	if (format == NULL)
		return (-1);

	va_start(list, format);

	for (i = 0; format && format[i] != '\0'; i++)
	{
		if (format[i] != '%')
		{
			buffer[bd++] = format[i];
			if (bd == BUFF_SIZE)
				print_buffer(buffer, &bd);
			p_character++;
		}
		else
		{
			print_buffer(buffer, &bd);
			fg = get_flags(format, &i);
			wd = get_width(format, &i, list);
			prec = get_precision(format, &i, list);
			sz = get_size(format, &i);
			++i;
			printed_string = handle_print(format, &i, list, buffer,
				fg, wd, prec, sz);
			if (printed_string == -1)
				return (-1);
			p_character += printed_string;
		}
	}

	print_buffer(buffer, &bd);

	va_end(list);

	return (p_character);
}

/**
 * print_buffer - Prints the contents of the buffer if it exist
 * @buffer: Array of chars
 * @buff_ind: Index at which to add next char, represents the length.
 */
void print_buffer(char buffer[], int *buff_ind)
{
	if (*buff_ind > 0)
		write(1, &buffer[0], *buff_ind);

	*buff_ind = 0;
}
