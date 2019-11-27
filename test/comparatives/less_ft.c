#include "ft_printf.h"
#include <limits.h>
#include <stdlib.h>
#include <string.h>

int		main(void)
{
		char *s = "hello";
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

}
