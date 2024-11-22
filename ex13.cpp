// 블록에서 extern을 이용한 전역 변수 참조
#include <stdio.h>
int x = 50;

int main(void)
{
	int x = 100;
	{
		extern int x;
		printf("x= %d\n", x);
	}
	return 0;
}
