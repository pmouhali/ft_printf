#include "ft_printf.h"
#include "stdio.h"
#include "limits.h"

int		main(void)
{
		ft_printf("%u\n", LONG_MIN);
		ft_printf("%u\n", LONG_MAX);
		ft_printf("%u\n", INT_MIN);
		ft_printf("%u\n", INT_MAX);
		ft_printf("%u\n", INT_MIN - 22);
		ft_printf("%u\n", INT_MAX + 22);
		ft_printf("%u\n", 0);
		ft_printf("%u\n", 1);
		ft_printf("%u\n", 9);
		ft_printf("%u\n", 10);
		ft_printf("%u\n", 1000000000000);
		ft_printf("%u\n", -1000000000000);
}
