#include <stdio.h>


void Test1() {
	int data1 = 0;
	printf("%d, ", data1++);


}

void Test2() {
	static int data2 = 0;
	printf("%d, ", data2++);
}

void Test3() {
	static int data3 = 0;
	printf("%d, ", ++data3);
		
}



int main(void) {
	printf("Test1():\n");
	for (int i = 0; i <= 5; i++) Test1(1);
		printf("\n");

	
	for (int i = 0; i <= 5; i++) Test2(2);
		printf("\n");

	
	for (int i = 0; i <= 5; i++)Test3(3);
		printf("\n");

	
	return 0;
	}