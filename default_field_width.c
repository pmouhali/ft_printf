#include "ft_printf.h"

char	*default_field_width(int c, char *s, t_format format)
{
	(void)c;
	return (field_width(32, s, format, FALSE));
}
