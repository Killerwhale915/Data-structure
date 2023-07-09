// 2진수로 바꿔 출력하기
#include <stdio.h>

int bin(int n)
{
    if (n == 0)
        return 1;
    bin(n / 2);
    printf("%d", n % 2);
    return 0;
}

int main()
{
    int n;
    printf("숫자 입력 : ");
    scanf("%d", &n);
    bin(n);
}
