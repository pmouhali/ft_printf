#include "unistd.h"
#include "stdio.h"
#include "limits.h"

char    *ft_dec_to_hex(unsigned int n);

int	main(void)
{
	printf("%s\n", ft_dec_to_hex(LONG_MIN));
	printf("%s\n", ft_dec_to_hex(LONG_MAX));

	printf("%s\n", ft_dec_to_hex(INT_MIN));
	printf("%s\n", ft_dec_to_hex(INT_MAX));
	printf("%s\n", ft_dec_to_hex(INT_MIN - 22));
	printf("%s\n", ft_dec_to_hex(INT_MAX + 22));

	printf("%s\n", ft_dec_to_hex(0));
	printf("%s\n", ft_dec_to_hex(1));
	printf("%s\n", ft_dec_to_hex(9));
	printf("%s\n", ft_dec_to_hex(10));
	printf("%s\n", ft_dec_to_hex(1234));

	printf("%s\n", ft_dec_to_hex(1000000000000));
	printf("%s\n", ft_dec_to_hex(-1000000000000));
}
