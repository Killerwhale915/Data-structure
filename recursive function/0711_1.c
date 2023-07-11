#include <stdio.h>
int MAX(int n, int *nums)
{
    if (n == 0)
        return nums[0];
    if (nums[n - 1] < nums[n])
    {
        return nums[n];
    }

    return MAX(n - 1, nums);
}
int main()
{
    int n, result;
    int nums[20];
    printf("몇 개 입력 받을거임 ? : ");
    scanf("%d", &n);
    printf("%d개 만큼 입력하세요", n);
    for (int i = 0; i < n; i++)
    {
        scanf(" %d", &nums[i]);
    }
    result = MAX(n - 1, nums);
    printf("가장 큰 숫자는 %d 입니다.", result);
}