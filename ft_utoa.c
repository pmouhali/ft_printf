#include "ft_printf.h"

unsigned int	ft_utoa_chrcnt(unsigned int n)
{
		unsigned int a;

		if (n == 0)
				return (1);
		a = 0;
		while (n != 0)
		{
				a += 1;
				n = n / 10;
		}
		return (a);
}

char		*ft_utoa(unsigned int n)
{
		char*toa;
		unsigned int	i;

		if (n == 0)
			return (ft_strdup("0"));
		i = ft_itoa_chrcnt(n);
		if ((toa = (char*)malloc(sizeof(char) * (i + 1))) == NULL)
				return (NULL);
		toa[i] = '\0';
		while (n != 0)
		{
				toa[--i] = (n % 10) + 48;
				n = n / 10;
		}
		return (toa);
}
