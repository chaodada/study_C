#include <stdio.h>
int main()
{

    // 复合赋值

    int a = 8;
    a += 1;
    printf("%d\n",a);
    a-=1;
    printf("%d\n",a);


    printf("%d\n",++a); // 9
    printf("%d\n",a++); // 9
    printf("%d\n",a); // 10


    return 0;
}