#include <stdio.h>
int main()
{

    // 计算时间差

    int hour1, minute1;
    int hour2, minute2;
    scanf("%d %d", &hour1, &minute1);
    scanf("%d %d", &hour2, &minute2);

    // 统一换算成分钟单位
    int t1 = hour1 * 60 + minute1;
    int t2 = hour2 * 60 + minute2;

    if (t2 > t1)
    {
        int t = t2 - t1;
        printf("时间差是%d小时%d分钟", t / 60, t % 60);
    }
    else
    {
        printf("时间1比时间2大");
    }

    return 0;
}