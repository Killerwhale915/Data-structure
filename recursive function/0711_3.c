#include <stdio.h>

int func(int num, int i)
{

    if (num % 10 == 0)
    {
        return 1; // 증가
    }

    if (num && i % 10 == 0)
    {
        return func(num % 10, i % 10);
    }

    else
    {
        return 0; // 해당 안 함
    }
    return func(num, i % 10);
}
int main()
{
    int num, result;
    printf("숫자 입력 : ");
    scanf("%d", &num);
    result = func(num, num % 10);
    if (result == 1)
    {
        printf("증가");
    }
    else if (result == 0)
    {
        printf("해당 없음");
    }
    else
    {
        printf("감소");
    }
}