#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/**
 *
 *
 */
int print_int()
{
	int num = va_arg(args, int);
	int temp, digits, i;

	if (num < 0)
	{
		putchar('-');
		print_count++;
		num = -num;
	}
	temp = num;
	if (temp == 0)
	{
		putchar('0');
		print_count++;
		return (print_count);
	}
	digits = 0;
	while (temp / 10)
	{
		digits++;
		temp /= 10;
	}
	for (i = digits - 1; i >= 0; i--)
	{
		int digit = num / pow(10, i);
		putchar(digit + '0');
		print_count++;
		num -= digit * pow(10, i);
	}
}
