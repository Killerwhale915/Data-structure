// 소수 판별하기
#include <stdio.h>
int sosu(int n, int i)
{
    if (i == 1)
        return 1;

    if (n % i == 0)
        return 0;

    return sosu(n, i - 1);
}

int main()
{
    int n;
    int result;
    printf("숫자 입력: ");
    scanf("%d", &n);
    result = sosu(n, n - 1);
    if (result == 1)
    {
        printf("%d는 소수입니다.", n);
    }
    else
    {
        printf("%d는 합성수입니다.", n);
    }
    return 0;
}
