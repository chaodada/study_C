#include <stdio.h>

int main()
{

    // 计算时间差


    int hour1, minute1;
    int hour2, minute2;

    scanf("%d %d", &hour1, &minute1);
    scanf("%d %d", &hour2, &minute2);

    int ih = hour2 - hour1;
    int im = minute2 - minute1;
    if (im < 0) // 判断
    {
        im += 60;
        ih--;
 
    }
    printf("%d %d", ih, im);

    return 0;
}