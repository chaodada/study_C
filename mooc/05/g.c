#include <stdio.h>
int main()
{

    int x = 1;

    switch (x)
    {
    case 1:
        printf("你好");
        break; // 如果没有这个break 就会进入到下个
    case 2:
        printf("吃饭了吗");
        break;
    default:
        printf("再见");
        break;
    }

    return 0;
}