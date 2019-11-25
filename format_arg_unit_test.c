#include "ft_printf.h"
#include <stdio.h>

void	test(const char c, ...)
{
	t_format format;
	va_list l;
	char *s;

	va_start(l, c);

	s = format_arg(c, l, format);
	if (s)
		printf("%s\n", s);
	else
		printf("rescue : %c\n", c);
	free(s);

	va_end(l);
}

int		main(void)
{
/*
	test('s', "hello!");
	test('s', "h");
	test('s', "");
	test('s', NULL);
*/

	int i = 0;
	while (i < 256)
	{
		test('c', i);
		i++;
	}

}
