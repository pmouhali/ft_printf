#include "ft_printf.h"

char	*w_x_conv(va_list l)
{
	return (ft_dec_to_hex(va_arg(l, unsigned int), "0123456789abcdef"));
}
