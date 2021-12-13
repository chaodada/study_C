
#include <stdio.h>
// 逻辑运算
int main()
{

    // 逻辑运算是对逻辑量进行的运算 结果只有 0或者 1

    // 运算符
    // ! 非 优先级最高
    // && 与  优先级第二
    // || 或  优先级第三

    if (1 > 0 || 10 < 12)
    {
        printf("条件成立");
    }

    // 短路
    int a = 6;
    if (a > 1 && a++ > 1)
    {
        printf("OK\n");
    }
    printf("%d\n", a);
    

    return 0;
}