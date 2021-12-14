#include <stdio.h>

int main()
{

    int x;
    int f;

    printf("请输入任意一个数到倒叙输出");

    scanf("%d", &x);

    printf("是否解决0问题");
    scanf("%d", &f);

    int digit;
    int ret = 0;

    while (x > 0)
    {
        digit = x % 10;         // 5
        ret = ret * 10 + digit; // 5
        if (f)
        {
            printf("%d", ret);
        }
        // printf("x=%d,digit=%d,ret=%d\n", x, digit, ret);
        x /= 10;
    }
    if (!f)
    {
        printf("%d", ret);
    }

    return 0;
}