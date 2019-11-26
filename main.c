#include "ft_printf.h"
#include "stdio.h"
#include "limits.h"

int		ft_printf(const char *f, ...)
{
		va_list l;

		va_start(l, f);
		print_string(f, l);
		va_end(l);
		return (0);
}

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

/*
		char *s = "test";
		printf("s : %s, d:  %d, i : %i, u : %u, x : %x, X : %X, c : %c, p : %p, %% : %%\n", 
						"la boulangerie", 
						42, 
						0,
						15,
						10,
						10,
						0,
						s
			  );
		ft_printf("s : %s, d:  %d, i : %i, u : %u, x : %x, X : %X, c : %c, p : %p, %% : %%\n", 
						"la boulangerie", 
						42, 
						0,
						15,
						10,
						10,
						0,
						s
				 );
*/
}
