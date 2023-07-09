// 1부터 n까지의 합 구하기
#include <stdio.h>
int hap(int n)
{
    if (n == 1)
        return 1;
    return n + hap(n - 1);
}

int main()
{
    int n, result;
    printf("숫자 입력 : ");
    scanf("%d", &n);
    result = hap(n);
    printf("%d", result);
}