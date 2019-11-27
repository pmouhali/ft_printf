#include <stdio.h>
#include <limits.h>
#include <stdlib.h>
#include <string.h>

int		main(void)
{
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
}
