#include "ft_printf.h"

static long int     dtx_len(long int nb)
{
	long int div;

	div = nb / 16;
	if (nb / 16 > 0)
		return(dtx_len(div) + 1);
	return (1);
}

static void    dtx_fill(long int nb, char *s, int index, char *hex_charset)
{
	long int div;

	div = nb / 16;
	if (nb / 16 > 0)
	dtx_fill(div, s, index - 1, hex_charset);
	s[index] = hex_charset[nb % 16];
}

char    *ft_get_address(long int n)
{
    char *s;
    long int len;

    len = dtx_len(n);
    if ((s = (char*)malloc(sizeof(char) * (len + 3))) == NULL)
    return (NULL);
    s[0] = '0';
    s[1] = 'x';
    s[len + 2] = '\0';
    dtx_fill(n, s, len + 1, "0123456789abcdef");
    return (s);
}
