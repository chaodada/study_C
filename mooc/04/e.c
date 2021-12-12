#include <stdio.h>

int main()
{

    // 输入任意数 输出总共几位

    int x;
    int n = 0;
    scanf("%d", &x);
    n++; // 处理输入为0的时候
    x /= 10;
    while (x > 0)
    {
        n++;
        x /= 10;
    }
    printf("%d", n);

    return 0;
}