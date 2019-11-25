#include "ft_printf.h"

char	*w_p_conv(va_list l)
{
	char *s;

	s = ft_strdup("0x");
	s = ft_strjoin(s, ft_dec_to_hex(va_arg(l, long), "0123456789abcdef"));
	return (s);
}
