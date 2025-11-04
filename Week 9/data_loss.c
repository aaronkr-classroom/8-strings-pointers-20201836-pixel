#include <stdio.h>


int main() {


	unsigned int x = 0x12345678;
	long lg = 2147483648;
	double xl = 123456789123.456789;

	printf("Uint: %d\n", x);
	printf("Uint --> short: %d\n", (short)x);
	printf("Uint: %d\n", (char)x);

	printf("\nLong: %d\n", lg);
	printf("Long --> short: %d\n", (int)lg);
	printf("Long: %d\n", (char)lg);

	printf("Dbl: %lf\n", xl);
	printf("Dbl --> short: %d\n", (long)xl);
	printf("Dbl: %d\n", (short)xl);

}