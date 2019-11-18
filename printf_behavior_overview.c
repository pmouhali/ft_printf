#include <stdio.h>

int	main(void)
{
	int i = 42;
	char s[] = "moufette";

	printf("conversion i with newline character : %i\n", i);
	printf("conversion d with newline character : %d\n", i);
	printf("conversion u with newline character : %u\n", i);
	printf("conversion x with newline character : %x\n", i);
	printf("conversion X with newline character : %X\n", i);
	printf("conversion c with newline character : %c\n", i);
	printf("conversion s with newline character : %s\n", s);
	printf("conversion p with newline character : %p\n", (void*)s);
	printf("conversion %% with newline character : %%\n");

	printf("\n");
	
	printf("conversion i flag 0 with nl : %0i\n", i);
	printf("conversion d flag 0 with nl : %0d\n", i);
	printf("conversion u flag 0 with nl : %0u\n", i);
	printf("conversion x flag 0 with nl : %0x\n", i);
	printf("conversion X flag 0 with nl : %0X\n", i);
	printf("conversion c flag 0 with nl : %0c\n", i);
	printf("conversion s flag 0 with nl : %0s\n", s);
	printf("conversion p flag 0 with nl : %0p\n", (void*)s);
	printf("conversion %% flag 0 with nl : %%0\n");

	printf("conversion i flag - with nl : %-i\n", i);
	printf("conversion d flag - with nl : %-d\n", i);
	printf("conversion u flag - with nl : %-u\n", i);
	printf("conversion x flag - with nl : %-x\n", i);
	printf("conversion X flag - with nl : %-X\n", i);
	printf("conversion c flag - with nl : %-c\n", i);
	printf("conversion s flag - with nl : %-s\n", s);
	printf("conversion p flag - with nl : %-p\n", (void*)s);
	printf("conversion %% flag - with nl : %%-\n");


	printf("\n");
	
	printf("conversion i flag 0 with optional number with nl : %010i\n", i);
	printf("conversion d flag 0 with optional number with nl : %010d\n", i);
	printf("conversion u flag 0 with optional number with nl : %010u\n", i);
	printf("conversion x flag 0 with optional number with nl : %010x\n", i);
	printf("conversion X flag 0 with optional number with nl : %010X\n", i);
	printf("conversion c flag 0 with optional number with nl : %010c\n", i);
	printf("conversion s flag 0 with optional number with nl : %010s\n", s);
	printf("conversion p flag 0 with optional number with nl : %010p\n", (void*)s);

	printf("conversion i flag - with optional number with nl : %-10i\n", i);
	printf("conversion d flag - with optional number with nl : %-10d\n", i);
	printf("conversion u flag - with optional number with nl : %-10u\n", i);
	printf("conversion x flag - with optional number with nl : %-10x\n", i);
	printf("conversion X flag - with optional number with nl : %-10X\n", i);
	printf("conversion c flag - with optional number with nl : %-10c\n", i);
	printf("conversion s flag - with optional number with nl : %-10s\n", s);
	printf("conversion p flag - with optional number with nl : %-10p\n", (void*)s);


	printf("\n");

	printf("conversion i precision 3 with nl : %.3i\n", i);
	printf("conversion d precision 1 with nl : %.1d\n", i);
	printf("conversion u precision 1 with nl : %.1u\n", i);
	printf("conversion x precision 4 with nl : %.4x\n", i);
	printf("conversion X precision 1 with nl : %.1X\n", i);
	printf("conversion c precision 1 with nl : %.1c\n", i);
	printf("conversion s precision 1 with nl : %.1s\n", s);
	printf("conversion p precision 1 with nl : %.1p\n", (void*)s);

	printf("\n");
	
	printf("conversion i precision 3 flag 0 with optional number with nl : %010.3i\n", i);
	printf("conversion d precision 4 flag 0 with optional number with nl : %010.4d\n", i);
	printf("conversion u precision 5 flag 0 with optional number with nl : %010.5u\n", i);
	printf("conversion x precision 6 flag 0 with optional number with nl : %010.6x\n", i);
	printf("conversion X precision 7 flag 0 with optional number with nl : %010.7X\n", i);
	printf("conversion c precision 8 flag 0 with optional number with nl : %010.8c\n", i);
	printf("conversion s precision 2 flag 0 with optional number with nl : %010.2s\n", s);
	printf("conversion p precision 20 flag 0 with optional number with nl : %010.20p\n", (void*)s);

	printf("conversion i precision 3 flag - with optional number with nl : %-10.3i\n", i);
	printf("conversion d precision 4 flag - with optional number with nl : %-10.4d\n", i);
	printf("conversion u precision 5 flag - with optional number with nl : %-10.5u\n", i);
	printf("conversion x precision 6 flag - with optional number with nl : %-10.6x\n", i);
	printf("conversion X precision 7 flag - with optional number with nl : %-10.7X\n", i);
	printf("conversion c precision 8 flag - with optional number with nl : %-10.8c\n", i);
	printf("conversion s precision 2 flag - with optional number with nl : %-10.2s\n", s);
	printf("conversion p precision 20 flag - with optional number with nl : %-10.20p\n", (void*)s);

	printf("\n");
	
	printf("conversion i precision * flag 0 with optional number with nl : %010.*i\n", i);
	printf("conversion d precision * flag 0 with optional number with nl : %010.*d\n", i);
	printf("conversion u precision * flag 0 with optional number with nl : %010.*u\n", i);
	printf("conversion x precision * flag 0 with optional number with nl : %010.*x\n", i);
	printf("conversion X precision * flag 0 with optional number with nl : %010.*X\n", i);
	printf("conversion c precision * flag 0 with optional number with nl : %010.*c\n", i);
	printf("conversion s precision * flag 0 with optional number with nl : %010.*s\n", s);
	printf("conversion p precision * flag 0 with optional number with nl : %010.*p\n", (void*)s); 

	printf("conversion i precision u flag - with * with nl : %-*.3i\n", i);
	printf("conversion d precision 4 flag - with * with nl : %-*.4d\n", i);
	printf("conversion u precision 5 flag - with * with nl : %-*.5u\n", i);
	printf("conversion x precision 6 flag - with * with nl : %-*.6x\n", i);
	printf("conversion X precision 7 flag - with * with nl : %-*.7X\n", i);
	printf("conversion c precision 8 flag - with * with nl : %-*.8c\n", i);
/*	printf("conversion s precision 2 flag - with * with nl : %-*.2s\n", s);   Boucle inf (ou juste bcq trop long, a verifier)
	printf("conversion p precision 20 flag - with * with nl : %-*.20p\n", (void*)s); */
}
