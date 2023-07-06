// 삼각형 출력하기
#include <stdio.h>

int samgak(int n)
{
    if (n == 0)
        return 1;

    samgak(n - 1);

    for (int i = 1; i < n + 1; i++)
    {
        printf("*");
    }

    printf("\n");

    return 0;
}

int main()
{
    int n = 0;
    printf("숫자 입력 : ");
    scanf("%d", &n);
    samgak(n);
}