#include <stdio.h>
int main()
{
    int i = 0; // 定义变量 类型 变量名 初始值
    int zong = 0;
    printf("请输入付款金额（元）:\n");
    scanf("%d", &i);
    printf("请输入商品金额（元）:\n");
    scanf("%d", &zong);
    if (zong <= i)
    {
        int change = i - zong;
        printf("找您%d元\n", change);
    }
    else
    {
        printf("您付款不够\n");
    }

    return 0;
}