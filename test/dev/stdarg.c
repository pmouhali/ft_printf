#include <stdio.h>
#include <stdarg.h>

void	print_variables_args(const char *s1, ...)
{
	va_list l;
	int i = 0;

	va_start(l, s1);
	while (s1[i])
	{
		if (s1[i] == 's')
			printf("%s\n", va_arg(l, char *));
		if (s1[i] == 'd')
			printf("%d\n", va_arg(l, int));
		i++;
	}
	va_end(l);
}

int	main(int ac, char **av)
{
	(void)ac;
	print_variables_args(av[1], av[2], av[3], av[4], av[5], av[6], av[7]);
}
