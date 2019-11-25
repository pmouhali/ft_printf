#include "ft_printf.h"

static unsigned int     dtx_len(unsigned int nb)
{
	unsigned int div;

	div = nb / 16;
	if (nb / 16 > 0)
		return(dtx_len(div) + 1);
	return (1);
}

static void    dtx_fill(unsigned int nb, char *s, int index, char *hex_charset)
{
	unsigned int div;

	div = nb / 16;
	if (nb / 16 > 0)
	dtx_fill(div, s, index - 1, hex_charset);
	s[index] = hex_charset[nb % 16];
}

char    *ft_dec_to_hex(unsigned int n, char *hex_charset)
{
    char *s;
    unsigned int len;

    len = dtx_len(n);
    if ((s = (char*)malloc(sizeof(char) * (len + 1))) == NULL)
    return (NULL);
    s[len] = '\0';
    dtx_fill(n, s, len - 1, hex_charset);
    return (s);
}
