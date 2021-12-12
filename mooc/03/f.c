#include <stdio.h>

int main()
{

    int a, b;
    scanf("%d %d", &a, &b);
    double c = (a + b) / 2.0;

    printf("%d 和 %d 的平均值=%f",a,b,c);
}