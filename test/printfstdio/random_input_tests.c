#include <stdio.h>

int	main(void)
{
	unsigned int u = 42;
	int i = 42;

	printf("%u\n", u);
	printf("%u\n", i);

	printf("%%\n");
	printf("%c\n", 42);
	printf("%s\n", "42");
	printf("%d\n", 42);
	printf("%i\n", 42);
	printf("%u\n", 42);
	printf("%x\n", 42);
	printf("%X\n", 42);
	printf("%p\n", "42");
	
	printf("%10i\n", 42);
	printf("%010i\n", 42);
	printf("%-10i\n", 42);
	printf("%.10i\n", 42);
	
	printf("%*i\n", 10, 42);
	printf("%0*i\n", 10, 42);
	printf("%-*i\n", 10, 42);
	printf("%.*i\n", 10, 42);
	
	printf("%10.3i\n", 42);
	printf("%010.3i\n", 42);
	printf("%-10.3i\n", 42);

	printf("%*.*i\n",10, 3 , 42);
	printf("%0*.*i\n", 10, 3, 42);
	printf("%-*.*i\n", 10, 3, 42);
	
	printf("%*.*i\n",-10, 3 , 42);
	printf("%0*.*i\n",-10, 3, 42);
	printf("%-*.*i\n",-10, 3, 42);

	printf("%*.*i\n", 10, -3 , 42);
	printf("%0*.*i\n", 10, -3, 42);
	printf("%-*.*i\n", 10, -3, 42);
	
	printf("%*.*i\n",-10, -3 , 42);
	printf("%0*.*i\n",-10, -3, 42);
	printf("%-*.*i\n",-10, -3, 42);

	printf("test %%%*.*itest\n",10, 3 , 42);
	printf("test %%%0*.*itest\n", 10, 3, 42);
	printf("test %%%-*.*itest\n", 10, 3, 42);

	printf("test %%%*.*itest%s\n",10, 3 , 42, "hello");
	printf("test %%%0*.*itest%s\n", 10, 3, 42, "hello");
	printf("test %%%-*.*itest%s\n", 10, 3, 42, "hello");
}
