// 1부터 n까지 역순으로 출력하기
#include <stdio.h>
int re(int n)
{
    if (n == 0)
        return 1;
    printf("%d\n", n);
    return re(n - 1);
}
int main()
{
    int n, result;

    printf("숫자 입력 : ");
    scanf("%d", &n);
    re(n);
    return 0;
}