#include <stdio.h>
#include <limits.h>
#include <stdlib.h>
#include <string.h>

int		main(void)
{
		/* c conversion */
		int i = 0;
		while (i < 256)
		{
				printf("%c\n", i);
				i++;
		}

		/* s conversion, voir pour (null) */
		char *s = "hello, i am a stack alloc'd string you can't free me im not yours bitch";
		char *h = strdup("hi, i am a heap alloc'd string, you have to free me or you'll have bad memory leaks");
		printf("%s\n", s);
		printf("%s\n", h);
		free(h);
		h = NULL;
		printf("%s\n", "");
		printf("%s\n", h);
		printf("%s\n", NULL);

		printf("d conversion\n");
		printf("%d\n", INT_MIN);
		printf("%d\n", INT_MAX);
		printf("%d\n", 0);
		printf("%d\n", 1);
		printf("%d\n", 9);
		printf("%d\n", 10);
		printf("%d\n", 132);
		printf("%d\n", 1329);
		printf("%d\n", 91329);
		printf("%d\n", -1);
		printf("%d\n", -9);
		printf("%d\n", -10);
		printf("%d\n", -132);
		printf("%d\n", -1329);
		printf("%d\n", -91329);
		printf("i conversion\n");
		printf("%i\n", INT_MIN);
		printf("%i\n", INT_MAX);
		printf("%i\n", 0);
		printf("%i\n", 1);
		printf("%i\n", 9);
		printf("%i\n", 10);
		printf("%i\n", 132);
		printf("%i\n", 1329);
		printf("%i\n", 91329);
		printf("%i\n", -1);
		printf("%i\n", -9);
		printf("%i\n", -10);
		printf("%i\n", -132);
		printf("%i\n", -1329);
		printf("%i\n", -91329);
		printf("u conversion\n");
		printf("%u\n", UINT_MAX);
		printf("%u\n", INT_MAX);
		printf("%u\n", 0);
		printf("%u\n", 1);
		printf("%u\n", 9);
		printf("%u\n", 10);
		printf("%u\n", 132);
		printf("%u\n", 1329);
		printf("%u\n", 91329);
		printf("x conversion\n");
		printf("%x\n", UINT_MAX);
		printf("%x\n", INT_MAX);
		printf("%x\n", 0);
		printf("%x\n", 1);
		printf("%x\n", 9);
		printf("%x\n", 10);
		printf("%x\n", 1234);
		printf("%x\n", 12345678);
		printf("X conversion\n");
		printf("%X\n", UINT_MAX);
		printf("%X\n", INT_MAX);
		printf("%X\n", 0);
		printf("%X\n", 1);
		printf("%X\n", 9);
		printf("%X\n", 10);
		printf("%X\n", 1234);
		printf("%X\n", 12345678);
		/* % conversion */
		printf("%%\n");
}
