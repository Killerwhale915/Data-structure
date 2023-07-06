#include <stdio.h>
int square(int under, int up)
{
    if (up == 0)
        return 1;
    return under * square(under, up - 1);
}
int main()
{
    int under, up, result;
    printf("밑 입력");
    scanf("%d", &under);
    printf("지수 입력");
    scanf("%d", &up);
    result = square(under, up);
    printf("%d", result);
    return 0;
}