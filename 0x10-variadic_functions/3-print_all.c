#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

void _printf(va_list f);
void _printi(va_list i);
void _printc(va_list c);
void _prints(va_list s);
void print_all(const char * const format, ...);

/**
 * _printc- a function to print a char
 * @c: char to print
 * Return: void
 */

void _printc(va_list c)
{

	printf("%c", va_arg(c, int));
}

/**
 * _prints - a function to print a string
 * @s: string to print
 * Return: void
 */

void _prints(va_list s)
{
	char *str;

	str = va_arg(s, char *);

	if (str == NULL)
	{
		printf("(nil)");
		return;
	}

	printf("%s", str);
}

/**
 * _printi - a function to print an int
 * @i: int to print
 *
 * Return: void
 */
void _printi(va_list i)
{
	printf("%d", va_arg(i, int));
}

/**
 * _printf - a function that prints a float
 * @f: float to print
 *
 * Return: void
 */
void _printf(va_list f)
{
	printf("%f", va_arg(f, double));
}

/**
 * print_all - prints anything
 * @format: list of argument types passed to the function
 *
 * Return: void
OBOBOBOB */
OB
void print_all(const char * const format, ...)
{
OBOB	dt_t types[] = {
		{"c", _printc},
OBOB		{"i", _printi},
		{"f", _printf},
		{"s", _prints},
OB		{NULL, NULL}
OB	};
OBOB
	int i, j = 0;
	va_list a_list;
	char *separator = "";
OB
	va_start(a_list, format);

OB	while (format != NULL && format[j] != '\0')
	{
		i = 0;
OB
		while (types[i].type != NULL)
		{
			if (format[j] == *(types[i].type))
			{
				printf("%s", separator);
				(types[i].func)(a_list);
OB				separator = ", ";
			}
			i++;
		}
		j++;
	}
	printf("\n");
	va_end(a_list);

}
