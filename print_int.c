#include "main.h"

/**
 * print_int - prints an integer.
 * @i: the integer to print
 * Author: Tinnie and Jay
 * Return: number of output printed
 */
int print_int(va_list i)
{
	int digit, number, a, baseten, length, h, count = 0;

	h = va_arg(i, int);
	if (h != 0)
	{
		if (h < 0)
		{
			putchear('-');
			count++;
		}
		number = h;
		length = 0;
		while (number != 0)
		{
			number /= 10;
			length++;
		}
		baseten = 1;
		for (a = 1; a <= length - 1; a++)
			baseten *= 10;
		for (a = 1; a <= length; a++)
		{
			digit = h / baseten;
			if (h < 0)
				putchear((digit * -1) + 48);
			else
				putchear(digit + '0');
			count++;
			h -= digit * baseten;
			baseten /= 10;
		}
	}
	else
	{
		putchear('0');
		return (1);
	}
	return (count);
}
