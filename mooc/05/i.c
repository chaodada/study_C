#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{

    srand(time(0));                // 设置随机因子
    int number = rand() % 100 + 1; // 生成随机数
    int a = 0;
    int count = 0;
    printf("我已经想好了1-100的一个数");
    do
    {
        printf("请猜这个数");
        scanf("%d", &a);
        count++;
        if (a > number)
        {
            printf("你猜的这个数太大");
        }
        else if (a < number)
        {
            printf("你猜的这个数太小");
        }

        /* code */
    } while (a != number);

    printf("你猜对了用了%d次", count);

    return 0;
}