#include <stdio.h>
#include <limits.h>
#include <stdlib.h>
#include <string.h>

int		main(void)
{
		int r;
		int i;

		i = 0;
		while (i < 256)
		{
				r = printf("%c\n", i);
				printf("return = %d\n", r);
				i++;
		}
		i = 0;
		while (i < 256)
		{
				r = printf("%5c\n", i);
				printf("return = %d\n", r);
				i++;
		}
		i = 0;
		while (i < 256)
		{
				r = printf("%-5c\n", i);
				printf("return = %d\n", r);
				i++;
		}

		char *s = "hello, i am a stack alloc'd string you can't free me im not yours bitch";
		char *h = strdup("hi, i am a heap alloc'd string, you have to free me or you'll have bad memory leaks");
		r = printf("%s\n", s);
				printf("return = %d\n", r);
		r = printf("%s\n", h);
				printf("return = %d\n", r);
		free(h);
		h = NULL;
		r = printf("%s\n", "");
				printf("return = %d\n", r);
		r = printf("%s\n", h);
				printf("return = %d\n", r);
		r = printf("%s\n", NULL);
				printf("return = %d\n", r);

		r = printf("d conversion\n");
				printf("return = %d\n", r);
		r = printf("%d\n", INT_MIN);
				printf("return = %d\n", r);
		r = printf("%d\n", INT_MAX);
				printf("return = %d\n", r);
		r = printf("%d\n", 0);
				printf("return = %d\n", r);
		r = printf("%d\n", 1);
				printf("return = %d\n", r);
		r = printf("%d\n", 9);
				printf("return = %d\n", r);
		r = printf("%d\n", 10);
				printf("return = %d\n", r);
		r = printf("%d\n", 132);
				printf("return = %d\n", r);
		r = printf("%d\n", 1329);
				printf("return = %d\n", r);
		r = printf("%d\n", 91329);
				printf("return = %d\n", r);
		r = printf("%d\n", -1);
				printf("return = %d\n", r);
		r = printf("%d\n", -9);
				printf("return = %d\n", r);
		r = printf("%d\n", -10);
				printf("return = %d\n", r);
		r = printf("%d\n", -132);
				printf("return = %d\n", r);
		r = printf("%d\n", -1329);
				printf("return = %d\n", r);
		r = printf("%d\n", -91329);
				printf("return = %d\n", r);
		r = printf("i conversion\n");
				printf("return = %d\n", r);
		r = printf("%i\n", INT_MIN);
				printf("return = %d\n", r);
		r = printf("%i\n", INT_MAX);
				printf("return = %d\n", r);
		r = printf("%i\n", 0);
				printf("return = %d\n", r);
		r = printf("%i\n", 1);
				printf("return = %d\n", r);
		r = printf("%i\n", 9);
				printf("return = %d\n", r);
		r = printf("%i\n", 10);
				printf("return = %d\n", r);
		r = printf("%i\n", 132);
				printf("return = %d\n", r);
		r = printf("%i\n", 1329);
				printf("return = %d\n", r);
		r = printf("%i\n", 91329);
				printf("return = %d\n", r);
		r = printf("%i\n", -1);
				printf("return = %d\n", r);
		r = printf("%i\n", -9);
				printf("return = %d\n", r);
		r = printf("%i\n", -10);
				printf("return = %d\n", r);
		r = printf("%i\n", -132);
				printf("return = %d\n", r);
		r = printf("%i\n", -1329);
				printf("return = %d\n", r);
		r = printf("%i\n", -91329);
				printf("return = %d\n", r);
		printf("u conversion\n");
		r = printf("%u\n", UINT_MAX);
				printf("return = %d\n", r);
		r = printf("%u\n", INT_MAX);
				printf("return = %d\n", r);
		r = printf("%u\n", 0);
				printf("return = %d\n", r);
		r = printf("%u\n", 1);
				printf("return = %d\n", r);
		r = printf("%u\n", 9);
				printf("return = %d\n", r);
		r = printf("%u\n", 10);
				printf("return = %d\n", r);
		r = printf("%u\n", 132);
				printf("return = %d\n", r);
		r = printf("%u\n", 1329);
				printf("return = %d\n", r);
		r = printf("%u\n", 91329);
				printf("return = %d\n", r);
		r = printf("x conversion\n");
				printf("return = %d\n", r);
		r = printf("%x\n", UINT_MAX);
				printf("return = %d\n", r);
		r = printf("%x\n", INT_MAX);
				printf("return = %d\n", r);
		r = printf("%x\n", 0);
				printf("return = %d\n", r);
		r = printf("%x\n", 1);
				printf("return = %d\n", r);
		r = printf("%x\n", 9);
				printf("return = %d\n", r);
		r = printf("%x\n", 10);
				printf("return = %d\n", r);
		r = printf("%x\n", 1234);
				printf("return = %d\n", r);
		r = printf("%x\n", 12345678);
				printf("return = %d\n", r);
		r = printf("X conversion\n");
				printf("return = %d\n", r);
		r = printf("%X\n", UINT_MAX);
				printf("return = %d\n", r);
		r = printf("%X\n", INT_MAX);
				printf("return = %d\n", r);
		r = printf("%X\n", 0);
				printf("return = %d\n", r);
		r = printf("%X\n", 1);
				printf("return = %d\n", r);
		r = printf("%X\n", 9);
				printf("return = %d\n", r);
		r = printf("%X\n", 10);
				printf("return = %d\n", r);
		r = printf("%X\n", 1234);
				printf("return = %d\n", r);
		r = printf("%X\n", 12345678);
				printf("return = %d\n", r);
		/* % conversion */
		r = printf("%%\n");
				printf("return = %d\n", r);

		s = "hello";
		r = printf("%1s\n", s);
				printf("return = %d\n", r);
		r = printf("%5s\n", s);
				printf("return = %d\n", r);
		r = printf("%6s\n", s);
				printf("return = %d\n", r);
		r = printf("%7s\n", s);
				printf("return = %d\n", r);
		r = printf("%10s\n", s);
				printf("return = %d\n", r);
		r = printf("%s\n", "");
				printf("return = %d\n", r);
		r = printf("%1s\n","");
				printf("return = %d\n", r);
		r = printf("%2s\n","");
				printf("return = %d\n", r);
		r = printf("%5s\n","");
				printf("return = %d\n", r);
		r = printf("%6s\n","");
				printf("return = %d\n", r);
		r = printf("%22s\n","");
				printf("return = %d\n", r);
		r = printf("%1s\n", NULL);
				printf("return = %d\n", r);
		r = printf("%2s\n", NULL);
				printf("return = %d\n", r);
		r = printf("%5s\n", NULL);
				printf("return = %d\n", r);
		r = printf("%6s\n", NULL);
				printf("return = %d\n", r);
		r = printf("%22s\n", NULL);
				printf("return = %d\n", r);

		r = printf("%*s\n", 1, s);
				printf("return = %d\n", r);
		r = printf("%*s\n", 5, s);
				printf("return = %d\n", r);
		r = printf("%*s\n", 6, s);
				printf("return = %d\n", r);
		r = printf("%*s\n", 7, s);
				printf("return = %d\n", r);
		r = printf("%*s\n", 10, s);
				printf("return = %d\n", r);

		r = printf("d conversion\n");
				printf("return = %d\n", r);
		r = printf("[5] %5d\n", -91329);
				printf("return = %d\n", r);
		r = printf("[6] %6d\n", -91329);
				printf("return = %d\n", r);
		r = printf("[7] %7d\n", -91329);
				printf("return = %d\n", r);
		r = printf("[0] %d\n", -1);
				printf("return = %d\n", r);
		r = printf("[1] %1d\n", -1);
				printf("return = %d\n", r);
		r = printf("[1] %1d\n", 0);
				printf("return = %d\n", r);
		r = printf("[2] %2d\n", 1);
				printf("return = %d\n", r);
		r = printf("[5] %5d\n", 91329);
				printf("return = %d\n", r);
		r = printf("[6] %6d\n", 91329);
				printf("return = %d\n", r);
		r = printf("[7] %7d\n", 91329);
				printf("return = %d\n", r);

		r = printf("i conversion\n");
				printf("return = %d\n", r);
		r = printf("%5i\n", -91329);
				printf("return = %d\n", r);
		r = printf("%6i\n", -91329);
				printf("return = %d\n", r);
		r = printf("%7i\n", -91329);
				printf("return = %d\n", r);
		r = printf("%1i\n", -1);
				printf("return = %d\n", r);
		r = printf("%1i\n", 0);
				printf("return = %d\n", r);
		r = printf("%2i\n", 1);
				printf("return = %d\n", r);
		r = printf("%5i\n", 91329);
				printf("return = %d\n", r);
		r = printf("%6i\n", 91329);
				printf("return = %d\n", r);
		r = printf("%7i\n", 91329);
				printf("return = %d\n", r);

		r = printf("%*i\n", 5, -91329);
				printf("return = %d\n", r);
		r = printf("%*i\n", 6, -91329);
				printf("return = %d\n", r);
		r = printf("%*i\n", 7, -91329);
				printf("return = %d\n", r);
		r = printf("%*i\n", 1, -1);
				printf("return = %d\n", r);
		r = printf("%*i\n", 1, 0);
				printf("return = %d\n", r);
		r = printf("%*i\n", 2, 1);
				printf("return = %d\n", r);
		r = printf("%*i\n", 5, 91329);
				printf("return = %d\n", r);
		r = printf("%*i\n", 6, 91329);
				printf("return = %d\n", r);
		r = printf("%*i\n", 7, 91329);
				printf("return = %d\n", r);

		r = printf("u conversion\n");
				printf("return = %d\n", r);
		r = printf("%11u\n", UINT_MAX);
				printf("return = %d\n", r);
		r = printf("%10u\n", INT_MAX);
				printf("return = %d\n", r);
		r = printf("%1u\n", 1);
				printf("return = %d\n", r);
		r = printf("%2u\n", 9);
				printf("return = %d\n", r);
		r = printf("%2u\n", 10);
				printf("return = %d\n", r);
		r = printf("%4u\n", 132);
				printf("return = %d\n", r);
		r = printf("%5u\n", 1329);
				printf("return = %d\n", r);
		r = printf("%6u\n", 91329);
				printf("return = %d\n", r);

		r = printf("%*u\n", 11, UINT_MAX);
				printf("return = %d\n", r);
		r = printf("%*u\n", 10, INT_MAX);
				printf("return = %d\n", r);
		r = printf("%*u\n", 1, 1);
				printf("return = %d\n", r);
		r = printf("%*u\n", 2, 9);
				printf("return = %d\n", r);
		r = printf("%*u\n", 2, 10);
				printf("return = %d\n", r);
		r = printf("%*u\n", 4, 132);
				printf("return = %d\n", r);
		r = printf("%*u\n", 5, 1329);
				printf("return = %d\n", r);
		r = printf("%*u\n", 6, 91329);
				printf("return = %d\n", r);

		r = printf("x conversion\n");
				printf("return = %d\n", r);
		r = printf("%11x\n", UINT_MAX);
				printf("return = %d\n", r);
		r = printf("%10x\n", INT_MAX);
				printf("return = %d\n", r);
		r = printf("%2x\n", 9);
				printf("return = %d\n", r);
		r = printf("%3x\n", 10);
				printf("return = %d\n", r);
		r = printf("%4x\n", 1234);
				printf("return = %d\n", r);
		r = printf("%20x\n", 12345678);
				printf("return = %d\n", r);
		r = printf("X conversion\n");
				printf("return = %d\n", r);
		r = printf("%11X\n", UINT_MAX);
				printf("return = %d\n", r);
		r = printf("%10X\n", INT_MAX);
				printf("return = %d\n", r);
		r = printf("%X\n", 0);
				printf("return = %d\n", r);
		r = printf("%X\n", 1);
				printf("return = %d\n", r);
		r = printf("%2X\n", 9);
				printf("return = %d\n", r);
		r = printf("%3X\n", 10);
				printf("return = %d\n", r);
		r = printf("%4X\n", 1234);
				printf("return = %d\n", r);
		r = printf("%20X\n", 12345678);
				printf("return = %d\n", r);

		s = "hello";
		r = printf("%-1s\n", s);
				printf("return = %d\n", r);
		r = printf("%-5s\n", s);
				printf("return = %d\n", r);
		r = printf("%-6s\n", s);
				printf("return = %d\n", r);
		r = printf("%-7s\n", s);
				printf("return = %d\n", r);
		r = printf("%-10s\n", s);
				printf("return = %d\n", r);
		r = printf("%-s\n", "");
				printf("return = %d\n", r);
		r = printf("%-1s\n","");
				printf("return = %d\n", r);
		r = printf("%-2s\n","");
				printf("return = %d\n", r);
		r = printf("%-5s\n","");
				printf("return = %d\n", r);
		r = printf("%-6s\n","");
				printf("return = %d\n", r);
		r = printf("%-22s\n","");
				printf("return = %d\n", r);
		r = printf("%-1s\n", NULL);
				printf("return = %d\n", r);
		r = printf("%-2s\n", NULL);
				printf("return = %d\n", r);
		r = printf("%-5s\n", NULL);
				printf("return = %d\n", r);
		r = printf("%-6s\n", NULL);
				printf("return = %d\n", r);
		r = printf("%-22s\n", NULL);
				printf("return = %d\n", r);

		r = printf("%*s\n", -1, s);
				printf("return = %d\n", r);
		r = printf("%*s\n", -5, s);
				printf("return = %d\n", r);
		r = printf("%*s\n", -6, s);
				printf("return = %d\n", r);
		r = printf("%*s\n", -7, s);
				printf("return = %d\n", r);
		r = printf("%*s\n", -10, s);
				printf("return = %d\n", r);

		r = printf("d conversion\n");
				printf("return = %d\n", r);
		r = printf("[5] %-5d\n", -91329);
				printf("return = %d\n", r);
		r = printf("[6] %-6d\n", -91329);
				printf("return = %d\n", r);
		r = printf("[7] %-7d\n", -91329);
				printf("return = %d\n", r);
		r = printf("[0] %-d\n", -1);
				printf("return = %d\n", r);
		r = printf("[1] %-1d\n", -1);
				printf("return = %d\n", r);
		r = printf("[1] %-1d\n", 0);
				printf("return = %d\n", r);
		r = printf("[2] %-2d\n", 1);
				printf("return = %d\n", r);
		r = printf("[5] %-5d\n", 91329);
				printf("return = %d\n", r);
		r = printf("[6] %-6d\n", 91329);
				printf("return = %d\n", r);
		r = printf("[7] %-7d\n", 91329);
				printf("return = %d\n", r);

		r = printf("i conversion\n");
				printf("return = %d\n", r);
		r = printf("%-5i\n", -91329);
				printf("return = %d\n", r);
		r = printf("%-6i\n", -91329);
				printf("return = %d\n", r);
		r = printf("%-7i\n", -91329);
				printf("return = %d\n", r);
		r = printf("%-1i\n", -1);
				printf("return = %d\n", r);
		r = printf("%-1i\n", 0);
				printf("return = %d\n", r);
		r = printf("%-2i\n", 1);
				printf("return = %d\n", r);
		r = printf("%-5i\n", 91329);
				printf("return = %d\n", r);
		r = printf("%-6i\n", 91329);
				printf("return = %d\n", r);
		r = printf("%-7i\n", 91329);
				printf("return = %d\n", r);

		r = printf("%*i\n", -5, -91329);
				printf("return = %d\n", r);
		r = printf("%*i\n", -6, -91329);
				printf("return = %d\n", r);
		r = printf("%*i\n", -7, -91329);
				printf("return = %d\n", r);
		r = printf("%*i\n", -1, -1);
				printf("return = %d\n", r);
		r = printf("%*i\n", -1, 0);
				printf("return = %d\n", r);
		r = printf("%*i\n", -2, 1);
				printf("return = %d\n", r);
		r = printf("%*i\n", -5, 91329);
				printf("return = %d\n", r);
		r = printf("%*i\n", -6, 91329);
				printf("return = %d\n", r);
		r = printf("%*i\n", -7, 91329);
				printf("return = %d\n", r);

		r = printf("u conversion\n");
				printf("return = %d\n", r);
		r = printf("%-11u\n", UINT_MAX);
				printf("return = %d\n", r);
		r = printf("%-10u\n", INT_MAX);
				printf("return = %d\n", r);
		r = printf("%-1u\n", 1);
				printf("return = %d\n", r);
		r = printf("%-2u\n", 9);
				printf("return = %d\n", r);
		r = printf("%-2u\n", 10);
				printf("return = %d\n", r);
		r = printf("%-4u\n", 132);
				printf("return = %d\n", r);
		r = printf("%-5u\n", 1329);
				printf("return = %d\n", r);
		r = printf("%-6u\n", 91329);
				printf("return = %d\n", r);

		r = printf("%*u\n", -11, UINT_MAX);
				printf("return = %d\n", r);
		r = printf("%*u\n", -10, INT_MAX);
				printf("return = %d\n", r);
		r = printf("%*u\n", -1, 1);
				printf("return = %d\n", r);
		r = printf("%*u\n", -2, 9);
				printf("return = %d\n", r);
		r = printf("%*u\n", -2, 10);
				printf("return = %d\n", r);
		r = printf("%*u\n", -4, 132);
				printf("return = %d\n", r);
		r = printf("%*u\n", -5, 1329);
				printf("return = %d\n", r);
		r = printf("%*u\n", -6, 91329);
				printf("return = %d\n", r);

		r = printf("x conversion\n");
				printf("return = %d\n", r);
		r = printf("%-11x\n", UINT_MAX);
				printf("return = %d\n", r);
		r = printf("%-10x\n", INT_MAX);
				printf("return = %d\n", r);
		r = printf("%-2x\n", 9);
				printf("return = %d\n", r);
		r = printf("%-3x\n", 10);
				printf("return = %d\n", r);
		r = printf("%-4x\n", 1234);
				printf("return = %d\n", r);
		r = printf("%-20x\n", 12345678);
				printf("return = %d\n", r);
		r = printf("X conversion\n");
				printf("return = %d\n", r);
		r = printf("%-11X\n", UINT_MAX);
				printf("return = %d\n", r);
		r = printf("%-10X\n", INT_MAX);
				printf("return = %d\n", r);
		r = printf("%-X\n", 0);
				printf("return = %d\n", r);
		r = printf("%-X\n", 1);
				printf("return = %d\n", r);
		r = printf("%-2X\n", 9);
				printf("return = %d\n", r);
		r = printf("%-3X\n", 10);
				printf("return = %d\n", r);
		r = printf("%-4X\n", 1234);
				printf("return = %d\n", r);
		r = printf("%-20X\n", 12345678);
				printf("return = %d\n", r);


		s = "hello";
		r = printf("%.s\n", s);
				printf("return = %d\n", r);
		r = printf("%.1s\n", s);
				printf("return = %d\n", r);
		r = printf("%.2s\n", s);
				printf("return = %d\n", r);
		r = printf("%.5s\n", s);
				printf("return = %d\n", r);
		r = printf("%.6s\n", s);
				printf("return = %d\n", r);
		r = printf("%.22s\n", s);
				printf("return = %d\n", r);
		r = printf("%.s\n", "");
				printf("return = %d\n", r);
		r = printf("%.1s\n","");
				printf("return = %d\n", r);
		r = printf("%.2s\n","");
				printf("return = %d\n", r);
		r = printf("%.5s\n","");
				printf("return = %d\n", r);
		r = printf("%.6s\n","");
				printf("return = %d\n", r);
		r = printf("%.22s\n","");
				printf("return = %d\n", r);

		r = printf("%.*s\n", 0, s);
				printf("return = %d\n", r);
		r = printf("%.*s\n", 6, s);
				printf("return = %d\n", r);
		r = printf("%.*s\n", 2, s);
				printf("return = %d\n", r);
		r = printf("%.*s\n", 1, s);
				printf("return = %d\n", r);
		r = printf("%.*s\n", -1, s);
				printf("return = %d\n", r);
		r = printf("%.*s\n", -10, s);
				printf("return = %d\n", r);
		r = printf("%.*s\n", 0, "");
				printf("return = %d\n", r);
		r = printf("%.*s\n", 6, "");
				printf("return = %d\n", r);
		r = printf("%.*s\n", 2, "");
				printf("return = %d\n", r);
		r = printf("%.*s\n", 1, "");
				printf("return = %d\n", r);
		r = printf("%.*s\n", -1, "");
				printf("return = %d\n", r);
		r = printf("%.*s\n", -10, "");
				printf("return = %d\n", r);

		r = printf("%.s\n", NULL);
				printf("return = %d\n", r);
		r = printf("%.1s\n", NULL);
				printf("return = %d\n", r);
		r = printf("%.2s\n", NULL);
				printf("return = %d\n", r);
		r = printf("%.5s\n", NULL);
				printf("return = %d\n", r);
		r = printf("%.6s\n", NULL);
				printf("return = %d\n", r);
		r = printf("%.22s\n", NULL);
				printf("return = %d\n", r);

		r = printf("d conversion\n");
				printf("return = %d\n", r);
		r = printf("[.5] %.5d\n", -91329);
				printf("return = %d\n", r);
		r = printf("[.6] %.6d\n", -91329);
				printf("return = %d\n", r);
		r = printf("[.7] %.7d\n", -91329);
				printf("return = %d\n", r);
		r = printf("[.0] %.d\n", -1);
				printf("return = %d\n", r);
		r = printf("[.1] %.1d\n", -1);
				printf("return = %d\n", r);
		r = printf("[.] %.d\n", 0);
				printf("return = %d\n", r);
		r = printf("[.1] %.1d\n", 0);
				printf("return = %d\n", r);
		r = printf("[.2] %.2d\n", 1);
				printf("return = %d\n", r);
		r = printf("[.5] %.5d\n", 91329);
				printf("return = %d\n", r);
		r = printf("[.6] %.6d\n", 91329);
				printf("return = %d\n", r);
		r = printf("[.7] %.7d\n", 91329);
				printf("return = %d\n", r);

		r = printf("i conversion\n");
				printf("return = %d\n", r);
		r = printf("%.*i\n", 5, -91329);
				printf("return = %d\n", r);
		r = printf("%.*i\n", 6, -91329);
				printf("return = %d\n", r);
		r = printf("%.*i\n", 7, -91329);
				printf("return = %d\n", r);
		r = printf("%.*i\n", 0, -1);
				printf("return = %d\n", r);
		r = printf("%.*i\n", -1, 0);
				printf("return = %d\n", r);
		r = printf("%.*i\n", 0, 0);
				printf("return = %d\n", r);
		r = printf("%.*i\n", -1, 1);
				printf("return = %d\n", r);
		r = printf("%.*i\n", 100, 91329);
				printf("return = %d\n", r);
		r = printf("%.*i\n", -100, 91329);
				printf("return = %d\n", r);
		r = printf("%.*i\n", -42, 91329);
				printf("return = %d\n", r);

		r = printf("%.5i\n", -91329);
				printf("return = %d\n", r);
		r = printf("%.6i\n", -91329);
				printf("return = %d\n", r);
		r = printf("%.7i\n", -91329);
				printf("return = %d\n", r);
		r = printf("%.1i\n", -1);
				printf("return = %d\n", r);
		r = printf("%.i\n", 0);
				printf("return = %d\n", r);
		r = printf("%.1i\n", 0);
				printf("return = %d\n", r);
		r = printf("%.2i\n", 1);
				printf("return = %d\n", r);
		r = printf("%.5i\n", 91329);
				printf("return = %d\n", r);
		r = printf("%.6i\n", 91329);
				printf("return = %d\n", r);
		r = printf("%.7i\n", 91329);
				printf("return = %d\n", r);

		r = printf("u conversion\n");
				printf("return = %d\n", r);
		r = printf("%.11u\n", UINT_MAX);
				printf("return = %d\n", r);
		r = printf("%.10u\n", INT_MAX);
				printf("return = %d\n", r);
		r = printf("%.u\n", 0);
				printf("return = %d\n", r);
		r = printf("%.1u\n", 1);
				printf("return = %d\n", r);
		r = printf("%.2u\n", 9);
				printf("return = %d\n", r);
		r = printf("%.2u\n", 10);
				printf("return = %d\n", r);
		r = printf("%.4u\n", 132);
				printf("return = %d\n", r);
		r = printf("%.5u\n", 1329);
				printf("return = %d\n", r);
		r = printf("%.6u\n", 91329);
				printf("return = %d\n", r);

		r = printf("%.*u\n", 11, UINT_MAX);
				printf("return = %d\n", r);
		r = printf("%.*u\n", 10, INT_MAX);
				printf("return = %d\n", r);
		r = printf("%.*u\n", 0, 0);
				printf("return = %d\n", r);
		r = printf("%.*u\n", 1, 1);
				printf("return = %d\n", r);
		r = printf("%.*u\n", 2, 9);
				printf("return = %d\n", r);
		r = printf("%.*u\n", 2 ,10);
				printf("return = %d\n", r);
		r = printf("%.*u\n", 4, 132);
				printf("return = %d\n", r);
		r = printf("%.*u\n", 5, 1329);
				printf("return = %d\n", r);
		r = printf("%.*u\n", 6, 91329);
				printf("return = %d\n", r);

		r = printf("x conversion\n");
				printf("return = %d\n", r);
		r = printf("%.11x\n", UINT_MAX);
				printf("return = %d\n", r);
		r = printf("%.10x\n", INT_MAX);
				printf("return = %d\n", r);
		r = printf("%.x\n", 0);
				printf("return = %d\n", r);
		r = printf("%.x\n", 1);
				printf("return = %d\n", r);
		r = printf("%.2x\n", 9);
				printf("return = %d\n", r);
		r = printf("%.3x\n", 10);
				printf("return = %d\n", r);
		r = printf("%.4x\n", 1234);
				printf("return = %d\n", r);
		r = printf("%.20x\n", 12345678);
				printf("return = %d\n", r);
		r = printf("X conversion\n");
				printf("return = %d\n", r);
		r = printf("%.11X\n", UINT_MAX);
				printf("return = %d\n", r);
		r = printf("%.10X\n", INT_MAX);
				printf("return = %d\n", r);
		r = printf("%.X\n", 0);
				printf("return = %d\n", r);
		r = printf("%.X\n", 1);
				printf("return = %d\n", r);
		r = printf("%.2X\n", 9);
				printf("return = %d\n", r);
		r = printf("%.3X\n", 10);
				printf("return = %d\n", r);
		r = printf("%.4X\n", 1234);
				printf("return = %d\n", r);
		r = printf("%.20X\n", 12345678);
				printf("return = %d\n", r);

		r = printf("d conversion\n");
				printf("return = %d\n", r);
		r = printf("[5] %05d\n", -91329);
				printf("return = %d\n", r);
		r = printf("[6] %06d\n", -91329);
				printf("return = %d\n", r);
		r = printf("[7] %07d\n", -91329);
				printf("return = %d\n", r);
		r = printf("[0] %0d\n", -1);
				printf("return = %d\n", r);
		r = printf("[1] %01d\n", -1);
				printf("return = %d\n", r);

		r = printf("[0] %0d\n", 0);
				printf("return = %d\n", r);

		r = printf("[1] %01d\n", 0);
				printf("return = %d\n", r);
		r = printf("[2] %02d\n", 1);
				printf("return = %d\n", r);
		r = printf("[5] %05d\n", 91329);
				printf("return = %d\n", r);
		r = printf("[6] %06d\n", 91329);
				printf("return = %d\n", r);
		r = printf("[7] %07d\n", 91329);
				printf("return = %d\n", r);

		r = printf("i conversion\n");
				printf("return = %d\n", r);
		r = printf("%05i\n", -91329);
				printf("return = %d\n", r);
		r = printf("%06i\n", -91329);
				printf("return = %d\n", r);
		r = printf("%07i\n", -91329);
				printf("return = %d\n", r);
		r = printf("%01i\n", -1);
				printf("return = %d\n", r);
		r = printf("%01i\n", 0);
				printf("return = %d\n", r);
		r = printf("%02i\n", 1);
				printf("return = %d\n", r);
		r = printf("%05i\n", 91329);
				printf("return = %d\n", r);
		r = printf("%06i\n", 91329);
				printf("return = %d\n", r);
		r = printf("%07i\n", 91329);
				printf("return = %d\n", r);

		r = printf("%0*i\n", 5, -91329);
				printf("return = %d\n", r);
		r = printf("%0*i\n", 6, -91329);
				printf("return = %d\n", r);
		r = printf("%0*i\n", 7, -91329);
				printf("return = %d\n", r);
		r = printf("%0*i\n", 1, -1);
				printf("return = %d\n", r);
		r = printf("%0*i\n", 1, 0);
				printf("return = %d\n", r);
		r = printf("%0*i\n", 2, 1);
				printf("return = %d\n", r);
		r = printf("%0*i\n", 5, 91329);
				printf("return = %d\n", r);
		r = printf("%0*i\n", 6, 91329);
				printf("return = %d\n", r);
		r = printf("%0*i\n", 7, 91329);
				printf("return = %d\n", r);
		r = printf("%0*i\n", -5, -91329);
				printf("return = %d\n", r);
		r = printf("%0*i\n", -6, -91329);
				printf("return = %d\n", r);
		r = printf("%0*i\n", -7, -91329);
				printf("return = %d\n", r);
		r = printf("%0*i\n", -1, -1);
				printf("return = %d\n", r);
		r = printf("%0*i\n", -1, 0);
				printf("return = %d\n", r);
		r = printf("%0*i\n", -2, 1);
				printf("return = %d\n", r);
		r = printf("%0*i\n", -5, 91329);
				printf("return = %d\n", r);
		r = printf("%0*i\n", -6, 91329);
				printf("return = %d\n", r);
		r = printf("%0*i\n", -7, 91329);
				printf("return = %d\n", r);

		r = printf("u conversion\n");
				printf("return = %d\n", r);
		r = printf("%011u\n", UINT_MAX);
				printf("return = %d\n", r);
		r = printf("%010u\n", INT_MAX);
				printf("return = %d\n", r);
		r = printf("%01u\n", 1);
				printf("return = %d\n", r);
		r = printf("%02u\n", 9);
				printf("return = %d\n", r);
		r = printf("%02u\n", 10);
				printf("return = %d\n", r);
		r = printf("%04u\n", 132);
				printf("return = %d\n", r);
		r = printf("%05u\n", 1329);
				printf("return = %d\n", r);
		r = printf("%06u\n", 91329);
				printf("return = %d\n", r);

		r = printf("%0*u\n", -11, UINT_MAX);
				printf("return = %d\n", r);
		r = printf("%0*u\n", 10, INT_MAX);
				printf("return = %d\n", r);
		r = printf("%0*u\n", -1, 1);
				printf("return = %d\n", r);
		r = printf("%0*u\n", 2, 9);
				printf("return = %d\n", r);
		r = printf("%0*u\n", -2, 10);
				printf("return = %d\n", r);
		r = printf("%0*u\n", 4, 132);
				printf("return = %d\n", r);
		r = printf("%0*u\n", -5, 1329);
				printf("return = %d\n", r);
		r = printf("%0*u\n", 6, 91329);
				printf("return = %d\n", r);

		r = printf("x conversion\n");
				printf("return = %d\n", r);
		r = printf("%011x\n", UINT_MAX);
				printf("return = %d\n", r);
		r = printf("%010x\n", INT_MAX);
				printf("return = %d\n", r);
		r = printf("%02x\n", 9);
				printf("return = %d\n", r);
		r = printf("%03x\n", 10);
				printf("return = %d\n", r);
		r = printf("%04x\n", 1234);
				printf("return = %d\n", r);
		r = printf("%020x\n", 12345678);
				printf("return = %d\n", r);
		r = printf("X conversion\n");
				printf("return = %d\n", r);
		r = printf("%011X\n", UINT_MAX);
				printf("return = %d\n", r);
		r = printf("%010X\n", INT_MAX);
				printf("return = %d\n", r);
		r = printf("%0X\n", 0);
				printf("return = %d\n", r);
		r = printf("%0X\n", 1);
				printf("return = %d\n", r);
		r = printf("%02X\n", 9);
				printf("return = %d\n", r);
		r = printf("%03X\n", 10);
				printf("return = %d\n", r);
		r = printf("%04X\n", 1234);
				printf("return = %d\n", r);
		r = printf("%020X\n", 12345678);
				printf("return = %d\n", r);

		r = printf(""); // warning linux
				printf("return = %d\n", r);
		printf("== multiple conversions + flags + characters ==\n");

		r = printf("%c%c%c%c%c%c%c%c%c\n", 0, 0, 0, 0, 0, 0, 0, 0, 0);
				printf("return = %d\n", r);

		r = printf("%10.10s\n", "camembert!");
				printf("return = %d\n", r);
		r = printf("%11.10s\n", "camembert!");
				printf("return = %d\n", r);
		r = printf("%10.11s\n", "camembert!");
				printf("return = %d\n", r);
		r = printf("%11.11s\n", "camembert!");
				printf("return = %d\n", r);
		r = printf("%1.1s\n", "c");
				printf("return = %d\n", r);
		r = printf("%1.0s\n", "c");
				printf("return = %d\n", r);
		r = printf("%2.2s\n", "c");
				printf("return = %d\n", r);

		r = printf("%-10.10s\n", "camembert!");
				printf("return = %d\n", r);
		r = printf("%-11.10s\n", "camembert!");
				printf("return = %d\n", r);
		r = printf("%-10.11s\n", "camembert!");
				printf("return = %d\n", r);
		r = printf("%-11.11s\n", "camembert!");
				printf("return = %d\n", r);
		r = printf("%-1.1s\n", "c");
				printf("return = %d\n", r);
		r = printf("%-1.0s\n", "c");
				printf("return = %d\n", r);
		r = printf("%-2.2s\n", "c");
				printf("return = %d\n", r);

		r = printf("%10.10d\n", 1234567899);
				printf("return = %d\n", r);
		r = printf("%11.10i\n", 1234567899);
				printf("return = %d\n", r);
		r = printf("%10.11u\n", 1234567899);
				printf("return = %d\n", r);
		r = printf("%11.11d\n", 1234567899);
				printf("return = %d\n", r);
		r = printf("%1.1i\n", 9);
				printf("return = %d\n", r);
		r = printf("%1.0u\n", 9);
				printf("return = %d\n", r);
		r = printf("%2.2i\n", 9);
				printf("return = %d\n", r);

		r = printf("%-10.10u\n", 1234567899);
				printf("return = %d\n", r);
		r = printf("%-11.10d\n", 1234567899);
				printf("return = %d\n", r);
		r = printf("%-10.11i\n", 1234567899);
				printf("return = %d\n", r);
		r = printf("%-11.11u\n", 1234567899);
				printf("return = %d\n", r);
		r = printf("%-1.1d\n", 9);
				printf("return = %d\n", r);
		r = printf("%-1.0i\n", 9);
				printf("return = %d\n", r);
		r = printf("%-2.2d\n", 9);
				printf("return = %d\n", r);

		r = printf("dfzef %s dnzjdj%%%%%%%%%s \n", "xxxxx", "xxxxxxxxx");
				printf("return = %d\n", r);
		r = printf("dfzef %d dnzjdj%%%%%%%%%i \n", 10, 13);
				printf("return = %d\n", r);
		r = printf(
						"dfzef %s dnzjdj%%%%%%%%%s%d%illl%u%xx++%XX%%%%%c%c%ccc\n",
						"xxxxx",
						"xxxxxxxxx",
						43,
						42,
						(2 + 2),
						1830,
						1830,
						48,
						49,
						0);
				printf("return = %d\n", r);
		r = printf(
						"dfzef %s dnzjdj%%%%%%%%%s%d%illl%u%xx++%XX%%%%%c%c%cccdfzef %s dnzjdj%%%%%%%%%s%d%illl%u%xx++%XX%%%%%c%c%ccc\n",
						"xxxxx",
						"xxxxxxxxx",
						43,
						42,
						(2 + 2),
						1830,
						1830,
						48,
						49,
						0,
						"xxxxx",
						"xxxxxxxxx",
						43,
						42,
						(2 + 2),
						1830,
						1830,
						48,
						49,
						0);
				printf("return = %d\n", r);
		r = printf(
						"dfzef %.5s dnzjdj%%%%%%%%%30.10s%.2d%.3illl%.0u%.3xx++%.4XX%%%%%c%c%cccdfzef %-8s dnzjdj%%%%%%%%%-69.5s%.1d%.2illl%.50u%.100xx++%.1000XX%%%%%c%c%ccc\n",
						"xxxxx",
						"xxxxxxxxx",
						43,
						42,
						(2 + 2),
						1830,
						1830,
						48,
						49,
						0,
						"xxxxx",
						"xxxxxxxxx",
						43,
						42,
						(2 + 2),
						1830,
						1830,
						48,
						49,
						0);
				printf("return = %d\n", r);


//		r = printf(NULL); SEGFAULT
//				printf("return = %d\n", r);
}
