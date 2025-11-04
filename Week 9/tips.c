#include <stdio.h>

void Test1(short data) {
	short soft = 0;
	soft = data;
	printf("soft = %d\n", soft);

	//tips = 3; //tips 변수 재정의하면 오류 발생



}


void Test2(short* ptr) {
	short soft = 0;
	soft = *ptr;
	printf("soft = %d\n", soft);

	*ptr = 3;

}


int main(void) {
	short tips = 5;
	printf("tips = %d\n", tips);

	Test1(tips);
	printf("Test1후 tips = %d\n", tips);

	Test2(&tips);
	printf("Test2후 tips = %d\n", tips);

	return 0;
}