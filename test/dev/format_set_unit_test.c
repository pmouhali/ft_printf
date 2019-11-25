#include "ft_printf.h"
#include <stdio.h> 

void	test(char *str, ...)
{
	t_format format;
	va_list l;
	int r;

	va_start(l, str);
	r = format_set(str, l, &format);
	printf("return       : %d\n", r);
	printf("flags        : %d\n", format.flags);
	printf("precision    : %d\n", format.precision);
	printf("field_width  : %d\n\n", format.field_width);
	va_end(l);
}

int		main(void)
{
	test("%d");
	test("%0d");
	test("%-d");
	test("%.d");
	test("%06d");
	test("%-6d");
	test("%.6d");
	test("%010.10d");
	test("%010.0d");
	test("%-10.0d");
	test("%*.*d", 2, 4);
	test("%*.*d", -2, -4);
	test("%*.*d", 0, 0);
	test("%0*.*d", 2, -4);
	test("%-*.*d", 2, -4);
	test("%0*.*d", -2, -4);
	test("%-*.*d", -2, -4);

/*
	test("%10*.0*", 2, 4); // flags 0 precision 0 fw 10
	test("%10*.0*", -2, -4); // flags 0 precision 0 fw 10
	test("%*.*d", -2, -4); // flags 2 precision 0 fw 2
	test("%0*.*d", -2, -4); // flags 2 precision 0 fw 2
	test("%-*.*d", -2, -4); // flags 2 precision 0 fw 2
	test("%.230s"); // flags 0 precision 230 fw -1
	test("%******.10", 2, -4); // flags 0 precision 10 fw 2
	test("%******.10**", 2, -4); // flags 0 precision 10 fw 2
	test("%-*.*10", -2, -4); // flags 2 precision 0 fw 2
	test("", -2, -4); // flags 0 precision -1 fw -1
	test("%", -2, -4);
	test("%%", -2, -4);
	test("%vvv", -2, -4);
	test("%.3*-6", -2, -4);
	test("%.3*-6", 2, -4);
	test("%.3*-6*", 2, -4);
	test("%******-10", 2, -4);
*/
}
