#include "ft_printf.h"

int		super_putstr(char *s, int n, int free_s, int print_null)
{
	int len;

	if (!s)
		return (0);
	len = n < 0 ? ft_strlen(s) : n;
	if (print_null && s[len] == '\0')
		len += 1;
	write(1, s, len);
	if (free_s)
		free(s);
	return (len);
}
