// 문자열 배열
/*오류	C2440가 떠서 'char'을 'const char'로 수정*/
#include <stdio.h>

int main(void)
{
    int i, n;
    const char* fruits[] = {
        "apple",
        "blueberry",
        "orange",
        "melon"
    };

    n = sizeof(fruits) / sizeof(fruits[0]);	// 배열 원소 개수 계산

    for (i = 0; i < n; i++)
        printf("%s \n", fruits[i]);

    return 0;
}
