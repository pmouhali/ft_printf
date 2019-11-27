#include "ft_printf.h"

char	*fw_less(int c, char *s, t_format format)
{
	(void)c;
	return (field_width(32, s, format, TRUE));
}
