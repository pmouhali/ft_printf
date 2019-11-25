#include "ft_printf.h"

int		ft_printf(const char *f, ...)
{
	va_list l;

	va_start(l, f);
	print_string(f, l);
	va_end(l);
	return (0);
}

int		main(void)
{
	int i = 0;
	while (i < 256)
	{
		ft_printf("%c\n", i);
		i++;	
	}
}
