#include <stdio.h>
#include <limits.h>
#include <string.h>


int		main(void)
{
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
