#include <stdio.h>
int main()
{
    // 计算薪水
    const double RATE = 8.25; // 每小时薪水
    const int STANDARD = 40;  // 一周工作小时
    double pay = 0.0;
    int hours;
    //
    printf("请输入工作的小时数");
    scanf("%d", &hours);
    printf("\n");

    if (hours > STANDARD)
        pay = STANDARD * RATE + (hours - STANDARD) * (RATE * 1.5);
    else
        pay = hours * RATE;

    printf("应当支付工资%f\n", pay);
    return 0;
}