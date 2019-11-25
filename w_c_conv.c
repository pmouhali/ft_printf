#include "ft_printf.h"

char	*w_c_conv(va_list l)
{
	char *s;
	unsigned char c;

	c = va_arg(l, int);
	if ((s = (char*)malloc(sizeof(char) * 2)) == NULL)
		return (NULL);
	s[0] = c;
	s[1] = '\0';
	return (s);
}
