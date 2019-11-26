#include "ft_printf.h"
#include <stdio.h>
#include <string.h>

int		main(void)
{
		char *s = "hello, i am a stack alloc'd string you can't free me im not yours bitch";
		char *h = strdup("hi, i am a heap alloc'd string, you have to free me or you'll have bad memory leaks");
		printf("p  %p\n", s);
		ft_printf("fp %p\n", s);
		printf("p  %p\n", h);
		ft_printf("fp %p\n", h);
		free(h);
		h = NULL;
		printf("p  %p\n", "");
		ft_printf("fp %p\n", "");
		printf("p  %p\n", h);
		ft_printf("fp %p\n", h);
		printf("p  %p\n", NULL);
		ft_printf("fp %p\n", NULL);
}
