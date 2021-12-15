#include <stdio.h>
int main()
{

    // 写一个程序 输入数量不确定的 0，9范围的整数 统计每一种数字出现的次数
    // 输入-1 表示结束

const int number =10;
    int x;
    int count[10];

    for (int i = 0; i < number; i++)
    {
        count[i] = 0;
    }

    scanf("%d", &x);
    while (x != -1)
    {
        if (x >= 0 && x <= 9)
        {
            count[x]++;
        }

        scanf("%d", &x);
    }
    for (int i = 0; i < number; i++)
    {
        printf("%d:%d\n", i, count[i]);
    }

    return 0;
}