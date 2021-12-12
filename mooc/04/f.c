#include <stdio.h>
int main()
{

    // 先执行一遍循环体
    // 在进行条件判断
    int i = 0;
    do
    {
        i++;
        printf("%d\n", i);
    } while (i < 10);

    return 0;
}