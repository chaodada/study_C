#include <stdio.h>

// 定义函数
int IsVip(int i)
{
    switch (i)
    {
    case 1:
        return 1;
        break;
    case 2:
        return 2;
        break;

    default:
        return 3;
        break;
    }
}
// 当函数没有返回值的时候 用void
void sum(int start, int end)
{
    int sum = 0;
    for (int i = start; i <= end; i++)
    {
        sum += i;
    }
    printf("%d到%d的和是%d\n",start,end,sum);
}

int main()
{
    int res;
    res = IsVip(4);
    printf("%d\n", res);
    sum(1,100);
    return 0;
}