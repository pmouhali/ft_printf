#include "ft_printf.h"

char	*w_s_conv(va_list l)
{
	char *s;

	s = ft_strdup(va_arg(l, char *));
	if (!s)
	{
		free(s);
		s = ft_strdup("(null)");
	}
	return (s);
}
