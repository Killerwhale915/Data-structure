#include <stdio.h>

int maxVal(int n, int *inputArr)
{
    int m;

    if (n == 0)
        return inputArr[0];

    if (m < inputArr[n])
        return inputArr[n];

    m = maxVal(n - 1, inputArr);
}

int main(void)
{
    int n;
    int inputArr[20];
    int i = 0;
    int result = 0;

    printf("몇 개의 정수를 입력하시겠습니까? : ");
    scanf("%d", &n); // 몇 개의 정수를 입력?

    for (i = 0; i < n; i++) // 배열에 입력받은 숫자 할당
    {
        scanf("%d", &inputArr[i]);
    }

    result = maxVal(n - 1, inputArr); // 인덱스 접근 - > n-1 해주기!

    printf("%d", result);
}