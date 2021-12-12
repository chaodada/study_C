#include <stdio.h>

int main()
{

    const int MINOR = 35;

    int age = 0;

    printf("请输入你的年龄\n");
    scanf("%d", &age);
    printf("你的年龄时%d岁\n", age);

    if (age < MINOR)
    {
        printf("年轻时美好的");
    }else{
        printf("快埋了");
    }

    printf("年龄决定了你的精神世界，好好珍惜吧\n");

    return 0;
}