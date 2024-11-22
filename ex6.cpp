// 전역 변수의 사용
#include <stdio.h>

int x;
void sub();

int main(void)
{
	for (x = 0; x < 10; x++)
		sub();
}

void sub()
{
	for (x = 0; x < 10; x++)
		printf("*");
}
