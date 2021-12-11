#include <stdio.h>
int main()
{

    // 两个整数运算的时候 结果只能是整数

    printf("请分别输入身高的英尺和英寸");

    // int foot; // 英尺
    // int inch; // 英寸
    // scanf("%d %d", &foot, &inch);
    // printf("身高是%f米\n", ((foot + inch / 12.0) * 0.3048));

    double foot; // 英尺
    double inch; // 英寸
    scanf("%lf %lf", &foot, &inch);
    printf("身高是%f米\n", ((foot + inch / 12) * 0.3048));

    return 0;
}