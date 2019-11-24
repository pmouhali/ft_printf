#include <stdio.h>
#include "ft_printf.h"

int		main(void)
{
	char *s;
	char *t;

	printf("%s\n", (s = ft_strjoin(ft_strndup("la boulangerie", 100), ft_strndup(" francaise", 100))) );
	free(s);
	printf("%s\n", (s = ft_strjoin(NULL, ft_strndup("baise la", 100))) );
	free(s);
	printf("%s\n", (s = ft_strjoin(ft_strndup("reine des neiges.", 100), NULL)) );
	free(s);
}
