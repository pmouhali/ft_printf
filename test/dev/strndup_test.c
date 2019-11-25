#include <stdio.h>
#include <stdlib.h>

char    *ft_strndup(const char *s, unsigned int n);

int		main(void)
{
	char *s;

	printf("%s\n", (s = ft_strndup("hello", 5)));
	free(s);
	printf("%s\n", (s = ft_strndup("hello", 6)));
	free(s);
	printf("%s\n", (s = ft_strndup("hello", 7)));
	free(s);
	printf("%s\n", (s = ft_strndup("hello", 4)));
	free(s);
	printf("%s\n", (s = ft_strndup("hello", 1)));
	free(s);
	printf("%s\n", (s = ft_strndup("hello", 0)));
	free(s);

	printf("%s\n", (s = ft_strndup("", 5)));
	free(s);
	printf("%s\n", (s = ft_strndup("h", -1)));
	free(s);
}
