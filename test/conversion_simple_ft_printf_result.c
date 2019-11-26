#include "ft_printf.h"
#include <limits.h>
#include <string.h>

void	ft_printf(const char *f, ...)
{
	va_list l;
	va_start (l, f);
	print_string(f, l);
	va_end(l);
}

int		main(void)
{
		/* c conversion */
		int i = 0;
		while (i < 256)
		{
				ft_printf("%c\n", i);
				i++;
		}

		/* s conversion, voir pour (null) */
		char *s = "hello, i am a stack alloc'd string you can't free me im not yours bitch";
		char *h = strdup("hi, i am a heap alloc'd string, you have to free me or you'll have bad memory leaks");
		ft_printf("%s\n", s);
		ft_printf("%s\n", h);
		free(h);
		ft_printf("%s\n", "");

		ft_printf("d conversion\n");
		ft_printf("%d\n", LONG_MIN);
		ft_printf("%d\n", LONG_MAX);
		ft_printf("%d\n", INT_MIN);
		ft_printf("%d\n", INT_MAX);
		ft_printf("%d\n", INT_MIN - 22);
		ft_printf("%d\n", INT_MAX + 22);
		ft_printf("%d\n", 0);
		ft_printf("%d\n", 1);
		ft_printf("%d\n", 9);
		ft_printf("%d\n", 10);
		ft_printf("%d\n", LONG_MIN - 2000);
		ft_printf("%d\n", LONG_MAX + 2000);
		ft_printf("%d\n", 1000000000000);
		ft_printf("%d\n", -1000000000000);
		ft_printf("i conversion\n");
		ft_printf("%i\n", LONG_MIN);
		ft_printf("%i\n", LONG_MAX);
		ft_printf("%i\n", INT_MIN);
		ft_printf("%i\n", INT_MAX);
		ft_printf("%i\n", INT_MIN - 22);
		ft_printf("%i\n", INT_MAX + 22);
		ft_printf("%i\n", 0);
		ft_printf("%i\n", 1);
		ft_printf("%i\n", 9);
		ft_printf("%i\n", 10);
		ft_printf("%i\n", LONG_MIN - 2000);
		ft_printf("%i\n", LONG_MAX + 2000);
		ft_printf("%i\n", 1000000000000);
		ft_printf("u conversion\n");
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
		ft_printf("%u\n", LONG_MIN - 2000);
		ft_printf("%u\n", LONG_MAX + 2000);
		ft_printf("%u\n", 1000000000000);
		ft_printf("%u\n", -1000000000000);
		ft_printf("%u\n", -1000000000000);
		ft_printf("x conversion\n");
		ft_printf("%x\n", LONG_MIN);
		ft_printf("%x\n", LONG_MAX);
		ft_printf("%x\n", INT_MIN);
		ft_printf("%x\n", INT_MAX);
		ft_printf("%x\n", INT_MIN - 22);
		ft_printf("%x\n", INT_MAX + 22);
		ft_printf("%x\n", 0);
		ft_printf("%x\n", 1);
		ft_printf("%x\n", 9);
		ft_printf("%x\n", 10);
		ft_printf("%x\n", 1234);
		ft_printf("%x\n", 12345678);
		ft_printf("%x\n", LONG_MIN - 2000);
		ft_printf("%x\n", LONG_MAX + 2000);
		ft_printf("%x\n", 1000000000000);
		ft_printf("%x\n", -1000000000000);
		ft_printf("%x\n", -1000000000000);
		ft_printf("X conversion\n");
		ft_printf("%X\n", LONG_MIN);
		ft_printf("%X\n", LONG_MAX);
		ft_printf("%X\n", INT_MIN);
		ft_printf("%X\n", INT_MAX);
		ft_printf("%X\n", INT_MIN - 22);
		ft_printf("%X\n", INT_MAX + 22);
		ft_printf("%X\n", 0);
		ft_printf("%X\n", 1);
		ft_printf("%X\n", 9);
		ft_printf("%X\n", 10);
		ft_printf("%X\n", 1234);
		ft_printf("%X\n", 12345678);
		ft_printf("%X\n", LONG_MIN - 2000);
		ft_printf("%X\n", LONG_MAX + 2000);
		ft_printf("%X\n", 1000000000000);
		ft_printf("%X\n", -1000000000000);
		ft_printf("%X\n", -1000000000000);
		/* % conversion */
		ft_printf("%%\n");
}
