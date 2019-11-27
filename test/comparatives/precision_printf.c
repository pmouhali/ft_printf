#include <stdio.h>
#include <limits.h>
#include <stdlib.h>
#include <string.h>

int		main(void)
{
		char *s = "hello";
		printf("%.s\n", s);
		printf("%.1s\n", s);
		printf("%.2s\n", s);
		printf("%.5s\n", s);
		printf("%.6s\n", s);
		printf("%.22s\n", s);
		printf("%.s\n", "");
		printf("%.1s\n","");
		printf("%.2s\n","");
		printf("%.5s\n","");
		printf("%.6s\n","");
		printf("%.22s\n","");

		printf("%.*s\n", 0, s);
		printf("%.*s\n", 6, s);
		printf("%.*s\n", 2, s);
		printf("%.*s\n", 1, s);
		printf("%.*s\n", -1, s);
		printf("%.*s\n", -10, s);
		printf("%.*s\n", 0, "");
		printf("%.*s\n", 6, "");
		printf("%.*s\n", 2, "");
		printf("%.*s\n", 1, "");
		printf("%.*s\n", -1, "");
		printf("%.*s\n", -10, "");

/*		printf("%.s\n", NULL);
		printf("%.1s\n", NULL);
		printf("%.2s\n", NULL);
		printf("%.5s\n", NULL);
		printf("%.6s\n", NULL);
		printf("%.22s\n", NULL); */

		printf("d conversion\n");
		printf("[.5] %.5d\n", -91329);
		printf("[.6] %.6d\n", -91329);
		printf("[.7] %.7d\n", -91329);
		printf("[.0] %.d\n", -1);
		printf("[.1] %.1d\n", -1);
		printf("[.] %.d\n", 0);
		printf("[.1] %.1d\n", 0);
		printf("[.2] %.2d\n", 1);
		printf("[.5] %.5d\n", 91329);
		printf("[.6] %.6d\n", 91329);
		printf("[.7] %.7d\n", 91329);

		printf("i conversion\n");
		printf("%.*i\n", 5, -91329);
		printf("%.*i\n", 6, -91329);
		printf("%.*i\n", 7, -91329);
		printf("%.*i\n", 0, -1);
		printf("%.*i\n", -1, 0);
		printf("%.*i\n", 0, 0);
		printf("%.*i\n", -1, 1);
		printf("%.*i\n", 100, 91329);
		printf("%.*i\n", -100, 91329);
		printf("%.*i\n", -42, 91329);

		printf("%.5i\n", -91329);
		printf("%.6i\n", -91329);
		printf("%.7i\n", -91329);
		printf("%.1i\n", -1);
		printf("%.i\n", 0);
		printf("%.1i\n", 0);
		printf("%.2i\n", 1);
		printf("%.5i\n", 91329);
		printf("%.6i\n", 91329);
		printf("%.7i\n", 91329);

		printf("u conversion\n");
		printf("%.11u\n", UINT_MAX);
		printf("%.10u\n", INT_MAX);
		printf("%.u\n", 0);
		printf("%.1u\n", 1);
		printf("%.2u\n", 9);
		printf("%.2u\n", 10);
		printf("%.4u\n", 132);
		printf("%.5u\n", 1329);
		printf("%.6u\n", 91329);

		printf("%.*u\n", 11, UINT_MAX);
		printf("%.*u\n", 10, INT_MAX);
		printf("%.*u\n", 0, 0);
		printf("%.*u\n", 1, 1);
		printf("%.*u\n", 2, 9);
		printf("%.*u\n", 2 ,10);
		printf("%.*u\n", 4, 132);
		printf("%.*u\n", 5, 1329);
		printf("%.*u\n", 6, 91329);

		printf("x conversion\n");
		printf("%.11x\n", UINT_MAX);
		printf("%.10x\n", INT_MAX);
		printf("%.x\n", 0);
		printf("%.x\n", 1);
		printf("%.2x\n", 9);
		printf("%.3x\n", 10);
		printf("%.4x\n", 1234);
		printf("%.20x\n", 12345678);
		printf("X conversion\n");
		printf("%.11X\n", UINT_MAX);
		printf("%.10X\n", INT_MAX);
		printf("%.X\n", 0);
		printf("%.X\n", 1);
		printf("%.2X\n", 9);
		printf("%.3X\n", 10);
		printf("%.4X\n", 1234);
		printf("%.20X\n", 12345678);

}
