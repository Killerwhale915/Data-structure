// 2~n까지의 숫자중에 소수 출력하기
#include <stdio.h>
int sosu(int n, int i)
{
    if (i == 1)
    {
        return 0;
    }
    if (n % i == 0)
    {
        return 1;
    }
    return sosu(n, i - 1);
}

int main()
{
    int n, result;
    printf("숫자 입력 : ");
    scanf("%d", &n);

    for (int i = 2; i <= n; i++)
    {
        result = sosu(i, i - 1);
        if (result == 0)
        {
            printf("%d ", i);
        }
    }
}