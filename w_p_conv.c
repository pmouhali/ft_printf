#include "ft_printf.h"

char	*w_p_conv(va_list l)
{
	return (ft_get_address(va_arg(l, long int)));
}
