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
/*		printf("%s\n", "");
		printf("%s\n", h);
		printf("%s\n", NULL);*/

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

		s = "hello";
		printf("%1s\n", s);
		printf("%5s\n", s);
		printf("%6s\n", s);
		printf("%7s\n", s);
		printf("%10s\n", s);
		printf("%s\n", "");
		printf("%1s\n","");
		printf("%2s\n","");
		printf("%5s\n","");
		printf("%6s\n","");
		printf("%22s\n","");
		/*		printf("%1s\n", NULL);
				printf("%2s\n", NULL);
				printf("%5s\n", NULL);
				printf("%6s\n", NULL);
				printf("%22s\n", NULL); */

		printf("%*s\n", 1, s);
		printf("%*s\n", 5, s);
		printf("%*s\n", 6, s);
		printf("%*s\n", 7, s);
		printf("%*s\n", 10, s);

		printf("d conversion\n");
		printf("[5] %5d\n", -91329);
		printf("[6] %6d\n", -91329);
		printf("[7] %7d\n", -91329);
		printf("[0] %d\n", -1);
		printf("[1] %1d\n", -1);
		printf("[1] %1d\n", 0);
		printf("[2] %2d\n", 1);
		printf("[5] %5d\n", 91329);
		printf("[6] %6d\n", 91329);
		printf("[7] %7d\n", 91329);

		printf("i conversion\n");
		printf("%5i\n", -91329);
		printf("%6i\n", -91329);
		printf("%7i\n", -91329);
		printf("%1i\n", -1);
		printf("%1i\n", 0);
		printf("%2i\n", 1);
		printf("%5i\n", 91329);
		printf("%6i\n", 91329);
		printf("%7i\n", 91329);

		printf("%*i\n", 5, -91329);
		printf("%*i\n", 6, -91329);
		printf("%*i\n", 7, -91329);
		printf("%*i\n", 1, -1);
		printf("%*i\n", 1, 0);
		printf("%*i\n", 2, 1);
		printf("%*i\n", 5, 91329);
		printf("%*i\n", 6, 91329);
		printf("%*i\n", 7, 91329);

		printf("u conversion\n");
		printf("%11u\n", UINT_MAX);
		printf("%10u\n", INT_MAX);
		printf("%1u\n", 1);
		printf("%2u\n", 9);
		printf("%2u\n", 10);
		printf("%4u\n", 132);
		printf("%5u\n", 1329);
		printf("%6u\n", 91329);

		printf("%*u\n", 11, UINT_MAX);
		printf("%*u\n", 10, INT_MAX);
		printf("%*u\n", 1, 1);
		printf("%*u\n", 2, 9);
		printf("%*u\n", 2, 10);
		printf("%*u\n", 4, 132);
		printf("%*u\n", 5, 1329);
		printf("%*u\n", 6, 91329);

		printf("x conversion\n");
		printf("%11x\n", UINT_MAX);
		printf("%10x\n", INT_MAX);
		printf("%2x\n", 9);
		printf("%3x\n", 10);
		printf("%4x\n", 1234);
		printf("%20x\n", 12345678);
		printf("X conversion\n");
		printf("%11X\n", UINT_MAX);
		printf("%10X\n", INT_MAX);
		printf("%X\n", 0);
		printf("%X\n", 1);
		printf("%2X\n", 9);
		printf("%3X\n", 10);
		printf("%4X\n", 1234);
		printf("%20X\n", 12345678);

		s = "hello";
		printf("%-1s\n", s);
		printf("%-5s\n", s);
		printf("%-6s\n", s);
		printf("%-7s\n", s);
		printf("%-10s\n", s);
		printf("%-s\n", "");
		printf("%-1s\n","");
		printf("%-2s\n","");
		printf("%-5s\n","");
		printf("%-6s\n","");
		printf("%-22s\n","");
		/*		printf("%-1s\n", NULL);
				printf("%-2s\n", NULL);
				printf("%-5s\n", NULL);
				printf("%-6s\n", NULL);
				printf("%-22s\n", NULL); */

		printf("%*s\n", -1, s);
		printf("%*s\n", -5, s);
		printf("%*s\n", -6, s);
		printf("%*s\n", -7, s);
		printf("%*s\n", -10, s);

		printf("d conversion\n");
		printf("[5] %-5d\n", -91329);
		printf("[6] %-6d\n", -91329);
		printf("[7] %-7d\n", -91329);
		printf("[0] %-d\n", -1);
		printf("[1] %-1d\n", -1);
		printf("[1] %-1d\n", 0);
		printf("[2] %-2d\n", 1);
		printf("[5] %-5d\n", 91329);
		printf("[6] %-6d\n", 91329);
		printf("[7] %-7d\n", 91329);

		printf("i conversion\n");
		printf("%-5i\n", -91329);
		printf("%-6i\n", -91329);
		printf("%-7i\n", -91329);
		printf("%-1i\n", -1);
		printf("%-1i\n", 0);
		printf("%-2i\n", 1);
		printf("%-5i\n", 91329);
		printf("%-6i\n", 91329);
		printf("%-7i\n", 91329);

		printf("%*i\n", -5, -91329);
		printf("%*i\n", -6, -91329);
		printf("%*i\n", -7, -91329);
		printf("%*i\n", -1, -1);
		printf("%*i\n", -1, 0);
		printf("%*i\n", -2, 1);
		printf("%*i\n", -5, 91329);
		printf("%*i\n", -6, 91329);
		printf("%*i\n", -7, 91329);

		printf("u conversion\n");
		printf("%-11u\n", UINT_MAX);
		printf("%-10u\n", INT_MAX);
		printf("%-1u\n", 1);
		printf("%-2u\n", 9);
		printf("%-2u\n", 10);
		printf("%-4u\n", 132);
		printf("%-5u\n", 1329);
		printf("%-6u\n", 91329);

		printf("%*u\n", -11, UINT_MAX);
		printf("%*u\n", -10, INT_MAX);
		printf("%*u\n", -1, 1);
		printf("%*u\n", -2, 9);
		printf("%*u\n", -2, 10);
		printf("%*u\n", -4, 132);
		printf("%*u\n", -5, 1329);
		printf("%*u\n", -6, 91329);

		printf("x conversion\n");
		printf("%-11x\n", UINT_MAX);
		printf("%-10x\n", INT_MAX);
		printf("%-2x\n", 9);
		printf("%-3x\n", 10);
		printf("%-4x\n", 1234);
		printf("%-20x\n", 12345678);
		printf("X conversion\n");
		printf("%-11X\n", UINT_MAX);
		printf("%-10X\n", INT_MAX);
		printf("%-X\n", 0);
		printf("%-X\n", 1);
		printf("%-2X\n", 9);
		printf("%-3X\n", 10);
		printf("%-4X\n", 1234);
		printf("%-20X\n", 12345678);


		s = "hello";
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

		printf("%010s\n", "hello");

		printf("d conversion\n");
		printf("[5] %05d\n", -91329);
		printf("[6] %06d\n", -91329);
		printf("[7] %07d\n", -91329);
		printf("[0] %0d\n", -1);
		printf("[1] %01d\n", -1);

		printf("[0] %0d\n", 0);

		printf("[1] %01d\n", 0);
		printf("[2] %02d\n", 1);
		printf("[5] %05d\n", 91329);
		printf("[6] %06d\n", 91329);
		printf("[7] %07d\n", 91329);

		printf("i conversion\n");
		printf("%05i\n", -91329);
		printf("%06i\n", -91329);
		printf("%07i\n", -91329);
		printf("%01i\n", -1);
		printf("%01i\n", 0);
		printf("%02i\n", 1);
		printf("%05i\n", 91329);
		printf("%06i\n", 91329);
		printf("%07i\n", 91329);

		printf("%0*i\n", 5, -91329);
		printf("%0*i\n", 6, -91329);
		printf("%0*i\n", 7, -91329);
		printf("%0*i\n", 1, -1);
		printf("%0*i\n", 1, 0);
		printf("%0*i\n", 2, 1);
		printf("%0*i\n", 5, 91329);
		printf("%0*i\n", 6, 91329);
		printf("%0*i\n", 7, 91329);
		printf("%0*i\n", -5, -91329);
		printf("%0*i\n", -6, -91329);
		printf("%0*i\n", -7, -91329);
		printf("%0*i\n", -1, -1);
		printf("%0*i\n", -1, 0);
		printf("%0*i\n", -2, 1);
		printf("%0*i\n", -5, 91329);
		printf("%0*i\n", -6, 91329);
		printf("%0*i\n", -7, 91329);

		printf("u conversion\n");
		printf("%011u\n", UINT_MAX);
		printf("%010u\n", INT_MAX);
		printf("%01u\n", 1);
		printf("%02u\n", 9);
		printf("%02u\n", 10);
		printf("%04u\n", 132);
		printf("%05u\n", 1329);
		printf("%06u\n", 91329);

		printf("%0*u\n", -11, UINT_MAX);
		printf("%0*u\n", 10, INT_MAX);
		printf("%0*u\n", -1, 1);
		printf("%0*u\n", 2, 9);
		printf("%0*u\n", -2, 10);
		printf("%0*u\n", 4, 132);
		printf("%0*u\n", -5, 1329);
		printf("%0*u\n", 6, 91329);

		printf("x conversion\n");
		printf("%011x\n", UINT_MAX);
		printf("%010x\n", INT_MAX);
		printf("%02x\n", 9);
		printf("%03x\n", 10);
		printf("%04x\n", 1234);
		printf("%020x\n", 12345678);
		printf("X conversion\n");
		printf("%011X\n", UINT_MAX);
		printf("%010X\n", INT_MAX);
		printf("%0X\n", 0);
		printf("%0X\n", 1);
		printf("%02X\n", 9);
		printf("%03X\n", 10);
		printf("%04X\n", 1234);
		printf("%020X\n", 12345678);

		printf("");
		printf("== multiple conversions + flags + characters ==\n");

		printf("%c%c%c%c%c%c%c%c%c\n", 0, 0, 0, 0, 0, 0, 0, 0, 0);

		printf("%10.10s\n", "camembert!");
		printf("%11.10s\n", "camembert!");
		printf("%10.11s\n", "camembert!");
		printf("%11.11s\n", "camembert!");
		printf("%1.1s\n", "c");
		printf("%1.0s\n", "c");
		printf("%0.1s\n", "c");
		printf("%2.2s\n", "c");

		printf("%-10.10s\n", "camembert!");
		printf("%-11.10s\n", "camembert!");
		printf("%-10.11s\n", "camembert!");
		printf("%-11.11s\n", "camembert!");
		printf("%-1.1s\n", "c");
		printf("%-1.0s\n", "c");
		printf("%-0.1s\n", "c");
		printf("%-2.2s\n", "c");

		printf("%010.10s\n", "camembert!");
		printf("%011.10s\n", "camembert!");
		printf("%010.11s\n", "camembert!");
		printf("%011.11s\n", "camembert!");
		printf("%01.1s\n", "c");
		printf("%01.0s\n", "c");
		printf("%00.1s\n", "c");
		printf("%02.2s\n", "c");


		printf("%10.10d\n", 1234567899);
		printf("%11.10i\n", 1234567899);
		printf("%10.11u\n", 1234567899);
		printf("%11.11d\n", 1234567899);
		printf("%1.1i\n", 9);
		printf("%1.0u\n", 9);
		printf("%0.1d\n", 9);
		printf("%2.2i\n", 9);

		printf("%-10.10u\n", 1234567899);
		printf("%-11.10d\n", 1234567899);
		printf("%-10.11i\n", 1234567899);
		printf("%-11.11u\n", 1234567899);
		printf("%-1.1d\n", 9);
		printf("%-1.0i\n", 9);
		printf("%-0.1u\n", 9);
		printf("%-2.2d\n", 9);

		printf("%010.10u\n", 1234567899);
		printf("%011.10d\n", 1234567899);
		printf("%010.11i\n", 1234567899);
		printf("%011.11u\n", 1234567899);
		printf("%01.1d\n", 9);
		printf("%01.0i\n", 9);
		printf("%00.1u\n", 9);
		printf("%02.2d\n", 9);


		printf("dfzef %s dnzjdj%%%%%%%%%s \n", "xxxxx", "xxxxxxxxx");
		printf("dfzef %d dnzjdj%%%%%%%%%i \n", 10, 13);
		printf(
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
		printf(
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
		printf(
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
		   printf("== too much flags ==\n");

		   printf("%000-10s\n", "bambi\0");
		   printf("%***s\n", 500, "bambi\0");
		   printf("%***.*s\n", 500, 3, "bambi\0");
		   printf("%--------10d\n", "bambi\0");
		   printf("%***d\n", 500, "bambi\0");
		   printf("%***.*d\n", 500, 3, "bambi\0");
		 */

}
