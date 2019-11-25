#include "ft_printf.h"

char	*w_i_conv(va_list l)
{
	return (ft_itoa(va_arg(l, int)));
}
