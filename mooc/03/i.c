#include <stdio.h>

int main()
{

    // 将输入的数字 倒序输出
    int i = 0;
    scanf("%d", &i);

    // 365
    // (i % 10) * 100
    // (i % 100 / 10) * 10
    //  i / 100

    printf("%d\n", (i % 10) * 100 + (i % 100 / 10) * 10 + i / 100);

    return 0;
}