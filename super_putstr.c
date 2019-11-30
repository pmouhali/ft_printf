#include "ft_printf.h"

int		super_putstr(char *s, int n, int free_s, t_format *format)
{
	int len;

	if (!s)
		return (0);
	if (format->c_conv_zero == 1)
	{
		if (format->field_width <= 1)
		{
			write(1, s, 1);
			len = 1;
		}
		else if (format->flags & F_FIELD_WIDTH)
		{
			write(1, s + 1, ft_strlen(s));
			len = ft_strlen(s);
		}
		else if (format->flags & F_LESS)
		{
			write(1, "\0", 1);
			write(1, s, ft_strlen(s) - 1);
			len = ft_strlen(s);
		}
		format->c_conv_zero = 0;
		return (len);
	}
	len = n < 0 ? ft_strlen(s) : n;
	write(1, s, len);
	if (free_s)
		free(s);
	return (len);
}
