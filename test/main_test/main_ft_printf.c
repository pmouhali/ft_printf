#include "ft_printf.h"
#include <limits.h>
#include <stdlib.h>
#include <string.h>

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
		h = NULL;
/*		ft_printf("%s\n", "");
		ft_printf("%s\n", h);
		ft_printf("%s\n", NULL);*/

		ft_printf("d conversion\n");
		ft_printf("%d\n", INT_MIN);
		ft_printf("%d\n", INT_MAX);
		ft_printf("%d\n", 0);
		ft_printf("%d\n", 1);
		ft_printf("%d\n", 9);
		ft_printf("%d\n", 10);
		ft_printf("%d\n", 132);
		ft_printf("%d\n", 1329);
		ft_printf("%d\n", 91329);
		ft_printf("%d\n", -1);
		ft_printf("%d\n", -9);
		ft_printf("%d\n", -10);
		ft_printf("%d\n", -132);
		ft_printf("%d\n", -1329);
		ft_printf("%d\n", -91329);
		ft_printf("i conversion\n");
		ft_printf("%i\n", INT_MIN);
		ft_printf("%i\n", INT_MAX);
		ft_printf("%i\n", 0);
		ft_printf("%i\n", 1);
		ft_printf("%i\n", 9);
		ft_printf("%i\n", 10);
		ft_printf("%i\n", 132);
		ft_printf("%i\n", 1329);
		ft_printf("%i\n", 91329);
		ft_printf("%i\n", -1);
		ft_printf("%i\n", -9);
		ft_printf("%i\n", -10);
		ft_printf("%i\n", -132);
		ft_printf("%i\n", -1329);
		ft_printf("%i\n", -91329);
		ft_printf("u conversion\n");
		ft_printf("%u\n", UINT_MAX);
		ft_printf("%u\n", INT_MAX);
		ft_printf("%u\n", 0);
		ft_printf("%u\n", 1);
		ft_printf("%u\n", 9);
		ft_printf("%u\n", 10);
		ft_printf("%u\n", 132);
		ft_printf("%u\n", 1329);
		ft_printf("%u\n", 91329);
		ft_printf("x conversion\n");
		ft_printf("%x\n", UINT_MAX);
		ft_printf("%x\n", INT_MAX);
		ft_printf("%x\n", 0);
		ft_printf("%x\n", 1);
		ft_printf("%x\n", 9);
		ft_printf("%x\n", 10);
		ft_printf("%x\n", 1234);
		ft_printf("%x\n", 12345678);
		ft_printf("X conversion\n");
		ft_printf("%X\n", UINT_MAX);
		ft_printf("%X\n", INT_MAX);
		ft_printf("%X\n", 0);
		ft_printf("%X\n", 1);
		ft_printf("%X\n", 9);
		ft_printf("%X\n", 10);
		ft_printf("%X\n", 1234);
		ft_printf("%X\n", 12345678);
		/* % conversion */
		ft_printf("%%\n");

		s = "hello";
		ft_printf("%1s\n", s);
		ft_printf("%5s\n", s);
		ft_printf("%6s\n", s);
		ft_printf("%7s\n", s);
		ft_printf("%10s\n", s);
		ft_printf("%s\n", "");
		ft_printf("%1s\n","");
		ft_printf("%2s\n","");
		ft_printf("%5s\n","");
		ft_printf("%6s\n","");
		ft_printf("%22s\n","");
		/*		ft_printf("%1s\n", NULL);
				ft_printf("%2s\n", NULL);
				ft_printf("%5s\n", NULL);
				ft_printf("%6s\n", NULL);
				ft_printf("%22s\n", NULL); */

		ft_printf("%*s\n", 1, s);
		ft_printf("%*s\n", 5, s);
		ft_printf("%*s\n", 6, s);
		ft_printf("%*s\n", 7, s);
		ft_printf("%*s\n", 10, s);

		ft_printf("d conversion\n");
		ft_printf("[5] %5d\n", -91329);
		ft_printf("[6] %6d\n", -91329);
		ft_printf("[7] %7d\n", -91329);
		ft_printf("[0] %d\n", -1);
		ft_printf("[1] %1d\n", -1);
		ft_printf("[1] %1d\n", 0);
		ft_printf("[2] %2d\n", 1);
		ft_printf("[5] %5d\n", 91329);
		ft_printf("[6] %6d\n", 91329);
		ft_printf("[7] %7d\n", 91329);

		ft_printf("i conversion\n");
		ft_printf("%5i\n", -91329);
		ft_printf("%6i\n", -91329);
		ft_printf("%7i\n", -91329);
		ft_printf("%1i\n", -1);
		ft_printf("%1i\n", 0);
		ft_printf("%2i\n", 1);
		ft_printf("%5i\n", 91329);
		ft_printf("%6i\n", 91329);
		ft_printf("%7i\n", 91329);

		ft_printf("%*i\n", 5, -91329);
		ft_printf("%*i\n", 6, -91329);
		ft_printf("%*i\n", 7, -91329);
		ft_printf("%*i\n", 1, -1);
		ft_printf("%*i\n", 1, 0);
		ft_printf("%*i\n", 2, 1);
		ft_printf("%*i\n", 5, 91329);
		ft_printf("%*i\n", 6, 91329);
		ft_printf("%*i\n", 7, 91329);

		ft_printf("u conversion\n");
		ft_printf("%11u\n", UINT_MAX);
		ft_printf("%10u\n", INT_MAX);
		ft_printf("%1u\n", 1);
		ft_printf("%2u\n", 9);
		ft_printf("%2u\n", 10);
		ft_printf("%4u\n", 132);
		ft_printf("%5u\n", 1329);
		ft_printf("%6u\n", 91329);

		ft_printf("%*u\n", 11, UINT_MAX);
		ft_printf("%*u\n", 10, INT_MAX);
		ft_printf("%*u\n", 1, 1);
		ft_printf("%*u\n", 2, 9);
		ft_printf("%*u\n", 2, 10);
		ft_printf("%*u\n", 4, 132);
		ft_printf("%*u\n", 5, 1329);
		ft_printf("%*u\n", 6, 91329);

		ft_printf("x conversion\n");
		ft_printf("%11x\n", UINT_MAX);
		ft_printf("%10x\n", INT_MAX);
		ft_printf("%2x\n", 9);
		ft_printf("%3x\n", 10);
		ft_printf("%4x\n", 1234);
		ft_printf("%20x\n", 12345678);
		ft_printf("X conversion\n");
		ft_printf("%11X\n", UINT_MAX);
		ft_printf("%10X\n", INT_MAX);
		ft_printf("%X\n", 0);
		ft_printf("%X\n", 1);
		ft_printf("%2X\n", 9);
		ft_printf("%3X\n", 10);
		ft_printf("%4X\n", 1234);
		ft_printf("%20X\n", 12345678);

		s = "hello";
		ft_printf("%-1s\n", s);
		ft_printf("%-5s\n", s);
		ft_printf("%-6s\n", s);
		ft_printf("%-7s\n", s);
		ft_printf("%-10s\n", s);
		ft_printf("%-s\n", "");
		ft_printf("%-1s\n","");
		ft_printf("%-2s\n","");
		ft_printf("%-5s\n","");
		ft_printf("%-6s\n","");
		ft_printf("%-22s\n","");
		/*		ft_printf("%-1s\n", NULL);
				ft_printf("%-2s\n", NULL);
				ft_printf("%-5s\n", NULL);
				ft_printf("%-6s\n", NULL);
				ft_printf("%-22s\n", NULL); */

		ft_printf("%*s\n", -1, s);
		ft_printf("%*s\n", -5, s);
		ft_printf("%*s\n", -6, s);
		ft_printf("%*s\n", -7, s);
		ft_printf("%*s\n", -10, s);

		ft_printf("d conversion\n");
		ft_printf("[5] %-5d\n", -91329);
		ft_printf("[6] %-6d\n", -91329);
		ft_printf("[7] %-7d\n", -91329);
		ft_printf("[0] %-d\n", -1);
		ft_printf("[1] %-1d\n", -1);
		ft_printf("[1] %-1d\n", 0);
		ft_printf("[2] %-2d\n", 1);
		ft_printf("[5] %-5d\n", 91329);
		ft_printf("[6] %-6d\n", 91329);
		ft_printf("[7] %-7d\n", 91329);

		ft_printf("i conversion\n");
		ft_printf("%-5i\n", -91329);
		ft_printf("%-6i\n", -91329);
		ft_printf("%-7i\n", -91329);
		ft_printf("%-1i\n", -1);
		ft_printf("%-1i\n", 0);
		ft_printf("%-2i\n", 1);
		ft_printf("%-5i\n", 91329);
		ft_printf("%-6i\n", 91329);
		ft_printf("%-7i\n", 91329);

		ft_printf("%*i\n", -5, -91329);
		ft_printf("%*i\n", -6, -91329);
		ft_printf("%*i\n", -7, -91329);
		ft_printf("%*i\n", -1, -1);
		ft_printf("%*i\n", -1, 0);
		ft_printf("%*i\n", -2, 1);
		ft_printf("%*i\n", -5, 91329);
		ft_printf("%*i\n", -6, 91329);
		ft_printf("%*i\n", -7, 91329);

		ft_printf("u conversion\n");
		ft_printf("%-11u\n", UINT_MAX);
		ft_printf("%-10u\n", INT_MAX);
		ft_printf("%-1u\n", 1);
		ft_printf("%-2u\n", 9);
		ft_printf("%-2u\n", 10);
		ft_printf("%-4u\n", 132);
		ft_printf("%-5u\n", 1329);
		ft_printf("%-6u\n", 91329);

		ft_printf("%*u\n", -11, UINT_MAX);
		ft_printf("%*u\n", -10, INT_MAX);
		ft_printf("%*u\n", -1, 1);
		ft_printf("%*u\n", -2, 9);
		ft_printf("%*u\n", -2, 10);
		ft_printf("%*u\n", -4, 132);
		ft_printf("%*u\n", -5, 1329);
		ft_printf("%*u\n", -6, 91329);

		ft_printf("x conversion\n");
		ft_printf("%-11x\n", UINT_MAX);
		ft_printf("%-10x\n", INT_MAX);
		ft_printf("%-2x\n", 9);
		ft_printf("%-3x\n", 10);
		ft_printf("%-4x\n", 1234);
		ft_printf("%-20x\n", 12345678);
		ft_printf("X conversion\n");
		ft_printf("%-11X\n", UINT_MAX);
		ft_printf("%-10X\n", INT_MAX);
		ft_printf("%-X\n", 0);
		ft_printf("%-X\n", 1);
		ft_printf("%-2X\n", 9);
		ft_printf("%-3X\n", 10);
		ft_printf("%-4X\n", 1234);
		ft_printf("%-20X\n", 12345678);


		s = "hello";
		ft_printf("%.s\n", s);
		ft_printf("%.1s\n", s);
		ft_printf("%.2s\n", s);
		ft_printf("%.5s\n", s);
		ft_printf("%.6s\n", s);
		ft_printf("%.22s\n", s);
		ft_printf("%.s\n", "");
		ft_printf("%.1s\n","");
		ft_printf("%.2s\n","");
		ft_printf("%.5s\n","");
		ft_printf("%.6s\n","");
		ft_printf("%.22s\n","");

		ft_printf("%.*s\n", 0, s);
		ft_printf("%.*s\n", 6, s);
		ft_printf("%.*s\n", 2, s);
		ft_printf("%.*s\n", 1, s);
		ft_printf("%.*s\n", -1, s);
		ft_printf("%.*s\n", -10, s);
		ft_printf("%.*s\n", 0, "");
		ft_printf("%.*s\n", 6, "");
		ft_printf("%.*s\n", 2, "");
		ft_printf("%.*s\n", 1, "");
		ft_printf("%.*s\n", -1, "");
		ft_printf("%.*s\n", -10, "");

		/*		ft_printf("%.s\n", NULL);
				ft_printf("%.1s\n", NULL);
				ft_printf("%.2s\n", NULL);
				ft_printf("%.5s\n", NULL);
				ft_printf("%.6s\n", NULL);
				ft_printf("%.22s\n", NULL); */

		ft_printf("d conversion\n");
		ft_printf("[.5] %.5d\n", -91329);
		ft_printf("[.6] %.6d\n", -91329);
		ft_printf("[.7] %.7d\n", -91329);
		ft_printf("[.0] %.d\n", -1);
		ft_printf("[.1] %.1d\n", -1);
		ft_printf("[.] %.d\n", 0);
		ft_printf("[.1] %.1d\n", 0);
		ft_printf("[.2] %.2d\n", 1);
		ft_printf("[.5] %.5d\n", 91329);
		ft_printf("[.6] %.6d\n", 91329);
		ft_printf("[.7] %.7d\n", 91329);

		ft_printf("i conversion\n");
		ft_printf("%.*i\n", 5, -91329);
		ft_printf("%.*i\n", 6, -91329);
		ft_printf("%.*i\n", 7, -91329);
		ft_printf("%.*i\n", 0, -1);
		ft_printf("%.*i\n", -1, 0);
		ft_printf("%.*i\n", 0, 0);
		ft_printf("%.*i\n", -1, 1);
		ft_printf("%.*i\n", 100, 91329);
		ft_printf("%.*i\n", -100, 91329);
		ft_printf("%.*i\n", -42, 91329);

		ft_printf("%.5i\n", -91329);
		ft_printf("%.6i\n", -91329);
		ft_printf("%.7i\n", -91329);
		ft_printf("%.1i\n", -1);
		ft_printf("%.i\n", 0);
		ft_printf("%.1i\n", 0);
		ft_printf("%.2i\n", 1);
		ft_printf("%.5i\n", 91329);
		ft_printf("%.6i\n", 91329);
		ft_printf("%.7i\n", 91329);

		ft_printf("u conversion\n");
		ft_printf("%.11u\n", UINT_MAX);
		ft_printf("%.10u\n", INT_MAX);
		ft_printf("%.u\n", 0);
		ft_printf("%.1u\n", 1);
		ft_printf("%.2u\n", 9);
		ft_printf("%.2u\n", 10);
		ft_printf("%.4u\n", 132);
		ft_printf("%.5u\n", 1329);
		ft_printf("%.6u\n", 91329);

		ft_printf("%.*u\n", 11, UINT_MAX);
		ft_printf("%.*u\n", 10, INT_MAX);
		ft_printf("%.*u\n", 0, 0);
		ft_printf("%.*u\n", 1, 1);
		ft_printf("%.*u\n", 2, 9);
		ft_printf("%.*u\n", 2 ,10);
		ft_printf("%.*u\n", 4, 132);
		ft_printf("%.*u\n", 5, 1329);
		ft_printf("%.*u\n", 6, 91329);

		ft_printf("x conversion\n");
		ft_printf("%.11x\n", UINT_MAX);
		ft_printf("%.10x\n", INT_MAX);
		ft_printf("%.x\n", 0);
		ft_printf("%.x\n", 1);
		ft_printf("%.2x\n", 9);
		ft_printf("%.3x\n", 10);
		ft_printf("%.4x\n", 1234);
		ft_printf("%.20x\n", 12345678);
		ft_printf("X conversion\n");
		ft_printf("%.11X\n", UINT_MAX);
		ft_printf("%.10X\n", INT_MAX);
		ft_printf("%.X\n", 0);
		ft_printf("%.X\n", 1);
		ft_printf("%.2X\n", 9);
		ft_printf("%.3X\n", 10);
		ft_printf("%.4X\n", 1234);
		ft_printf("%.20X\n", 12345678);

		ft_printf("%010s\n", "hello");

		ft_printf("d conversion\n");
		ft_printf("[5] %05d\n", -91329);
		ft_printf("[6] %06d\n", -91329);
		ft_printf("[7] %07d\n", -91329);
		ft_printf("[0] %0d\n", -1);
		ft_printf("[1] %01d\n", -1);

		ft_printf("[0] %0d\n", 0);

		ft_printf("[1] %01d\n", 0);
		ft_printf("[2] %02d\n", 1);
		ft_printf("[5] %05d\n", 91329);
		ft_printf("[6] %06d\n", 91329);
		ft_printf("[7] %07d\n", 91329);

		ft_printf("i conversion\n");
		ft_printf("%05i\n", -91329);
		ft_printf("%06i\n", -91329);
		ft_printf("%07i\n", -91329);
		ft_printf("%01i\n", -1);
		ft_printf("%01i\n", 0);
		ft_printf("%02i\n", 1);
		ft_printf("%05i\n", 91329);
		ft_printf("%06i\n", 91329);
		ft_printf("%07i\n", 91329);

		ft_printf("%0*i\n", 5, -91329);
		ft_printf("%0*i\n", 6, -91329);
		ft_printf("%0*i\n", 7, -91329);
		ft_printf("%0*i\n", 1, -1);
		ft_printf("%0*i\n", 1, 0);
		ft_printf("%0*i\n", 2, 1);
		ft_printf("%0*i\n", 5, 91329);
		ft_printf("%0*i\n", 6, 91329);
		ft_printf("%0*i\n", 7, 91329);
		ft_printf("%0*i\n", -5, -91329);
		ft_printf("%0*i\n", -6, -91329);
		ft_printf("%0*i\n", -7, -91329);
		ft_printf("%0*i\n", -1, -1);
		ft_printf("%0*i\n", -1, 0);
		ft_printf("%0*i\n", -2, 1);
		ft_printf("%0*i\n", -5, 91329);
		ft_printf("%0*i\n", -6, 91329);
		ft_printf("%0*i\n", -7, 91329);

		ft_printf("u conversion\n");
		ft_printf("%011u\n", UINT_MAX);
		ft_printf("%010u\n", INT_MAX);
		ft_printf("%01u\n", 1);
		ft_printf("%02u\n", 9);
		ft_printf("%02u\n", 10);
		ft_printf("%04u\n", 132);
		ft_printf("%05u\n", 1329);
		ft_printf("%06u\n", 91329);

		ft_printf("%0*u\n", -11, UINT_MAX);
		ft_printf("%0*u\n", 10, INT_MAX);
		ft_printf("%0*u\n", -1, 1);
		ft_printf("%0*u\n", 2, 9);
		ft_printf("%0*u\n", -2, 10);
		ft_printf("%0*u\n", 4, 132);
		ft_printf("%0*u\n", -5, 1329);
		ft_printf("%0*u\n", 6, 91329);

		ft_printf("x conversion\n");
		ft_printf("%011x\n", UINT_MAX);
		ft_printf("%010x\n", INT_MAX);
		ft_printf("%02x\n", 9);
		ft_printf("%03x\n", 10);
		ft_printf("%04x\n", 1234);
		ft_printf("%020x\n", 12345678);
		ft_printf("X conversion\n");
		ft_printf("%011X\n", UINT_MAX);
		ft_printf("%010X\n", INT_MAX);
		ft_printf("%0X\n", 0);
		ft_printf("%0X\n", 1);
		ft_printf("%02X\n", 9);
		ft_printf("%03X\n", 10);
		ft_printf("%04X\n", 1234);
		ft_printf("%020X\n", 12345678);

		ft_printf("");
		ft_printf("== multiple conversions + flags + characters ==\n");

		ft_printf("%c%c%c%c%c%c%c%c%c\n", 0, 0, 0, 0, 0, 0, 0, 0, 0);

		ft_printf("%10.10s\n", "camembert!");
		ft_printf("%11.10s\n", "camembert!");
		ft_printf("%10.11s\n", "camembert!");
		ft_printf("%11.11s\n", "camembert!");
		ft_printf("%1.1s\n", "c");
		ft_printf("%1.0s\n", "c");
		ft_printf("%0.1s\n", "c");
		ft_printf("%2.2s\n", "c");

		ft_printf("%-10.10s\n", "camembert!");
		ft_printf("%-11.10s\n", "camembert!");
		ft_printf("%-10.11s\n", "camembert!");
		ft_printf("%-11.11s\n", "camembert!");
		ft_printf("%-1.1s\n", "c");
		ft_printf("%-1.0s\n", "c");
		ft_printf("%-0.1s\n", "c");
		ft_printf("%-2.2s\n", "c");

		ft_printf("%010.10s\n", "camembert!");
		ft_printf("%011.10s\n", "camembert!");
		ft_printf("%010.11s\n", "camembert!");
		ft_printf("%011.11s\n", "camembert!");
		ft_printf("%01.1s\n", "c");
		ft_printf("%01.0s\n", "c");
		ft_printf("%00.1s\n", "c");
		ft_printf("%02.2s\n", "c");


		ft_printf("%10.10d\n", 1234567899);
		ft_printf("%11.10i\n", 1234567899);
		ft_printf("%10.11u\n", 1234567899);
		ft_printf("%11.11d\n", 1234567899);
		ft_printf("%1.1i\n", 9);
		ft_printf("%1.0u\n", 9);
		ft_printf("%0.1d\n", 9);
		ft_printf("%2.2i\n", 9);

		ft_printf("%-10.10u\n", 1234567899);
		ft_printf("%-11.10d\n", 1234567899);
		ft_printf("%-10.11i\n", 1234567899);
		ft_printf("%-11.11u\n", 1234567899);
		ft_printf("%-1.1d\n", 9);
		ft_printf("%-1.0i\n", 9);
		ft_printf("%-0.1u\n", 9);
		ft_printf("%-2.2d\n", 9);

		ft_printf("%010.10u\n", 1234567899);
		ft_printf("%011.10d\n", 1234567899);
		ft_printf("%010.11i\n", 1234567899);
		ft_printf("%011.11u\n", 1234567899);
		ft_printf("%01.1d\n", 9);
		ft_printf("%01.0i\n", 9);
		ft_printf("%00.1u\n", 9);
		ft_printf("%02.2d\n", 9);


		ft_printf("dfzef %s dnzjdj%%%%%%%%%s \n", "xxxxx", "xxxxxxxxx");
		ft_printf("dfzef %d dnzjdj%%%%%%%%%i \n", 10, 13);
		ft_printf(
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
		ft_printf(
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
		ft_printf(
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
		/*
		   ft_printf("== too much flags ==\n");

		   ft_printf("%000-10s\n", "bambi\0");
		   ft_printf("%***s\n", 500, "bambi\0");
		   ft_printf("%***.*s\n", 500, 3, "bambi\0");
		   ft_printf("%--------10d\n", "bambi\0");
		   ft_printf("%***d\n", 500, "bambi\0");
		   ft_printf("%***.*d\n", 500, 3, "bambi\0");
		 */

}
