#include <stdio.h>
int main()
{

    // 单精度  单精度是这样的格式，1位符号，8位指数，23位小数。 float
    // 双精度  双精度是1位符号，11位指数，52位小数。 double

    // 32位浮点数就是单精度，
    // 64位浮点数就是双精度。

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