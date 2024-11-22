// 전역변수의 초기값과 생존 기간
#include<stdio.h>
int A;
int B;
int add()
{
	return A + B;
}

int main(void)
{
	int answer;
	A = 5;
	B = 7;
	answer = add();
	printf("%d + %d = %d\n", A, B, answer);
	return 0;
}
