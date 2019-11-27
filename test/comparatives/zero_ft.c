#include "ft_printf.h"
#include <limits.h>
#include <stdlib.h>
#include <string.h>

int		main(void)
{
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
}
