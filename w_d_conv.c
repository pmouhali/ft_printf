#include "ft_printf.h"

char	*w_d_conv(va_list l)
{
	return (ft_itoa(va_arg(l, int)));
}
