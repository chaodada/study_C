#include <stdio.h>
int main()
{
    // 交换变量顺序
    int a = 10;
    int b = 20;
    int t;
    printf("%d %d \n", a, b);
    t = a;
    a = b;
    b = t;
    printf("%d %d \n", a, b);

    return 0;
}