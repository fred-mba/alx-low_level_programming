#include <stdio.h>
#include <stdarg.h>
#include <string.h>

/**
 *_printf - 
 *@format: parameter that contain formatting instructions
 *
 *
 *
 */
int _printf(const char *format, ...)
{
	int c, index;
	const char *str = format;
	va_list ap;

	va_start(ap, format);
	index = 0;
	while (*str != '\0')
	{
		if (*str == '%')
		{
			str++;
			switch (*str)
			{
				case 'c':
				{
					c = va_arg(ap, int);
					putchar(c);
					index++;
					break;
				}
				case 's':
				{
					const char *str = va_arg(ap, const char *);
					while (*str != '\0')
					{
						putchar(*str);
						str++;
					}
					break;
				}
				case '%':
				{
					putchar('%');
					index++;
					break;
				}
			}
		}
		else
		{
			putchar(*str);
			index++;
		}
		str++;
	}

	va_end(ap);
	return (index);
}
