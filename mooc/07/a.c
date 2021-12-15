#include <stdio.h>
int main()
{

    // 数组

    // 数组是长度固定的数据结构，用来存放指定的类型的数据。一个数组里可以有很多个数据，所有的数据的类型都是相同的。
    int numberArr[100]; // 定义一个数组  名字 numberArr  每一个单元 都是int

    // 标准的定义数组的语法
    // <类型>变量名称[元素数量];
    // 元素数量必须是整数  就是数组里装的东西必须类型一致
    // C99之前 元素数量必须是编译时刻确定的字面量 【C99之前不能是变量 之后就可以是变量了】
    // 一旦创建不能改变大小
    // 数组中的元素在内存中是连续依次排列的 

    int x;
    double sum = 0;
    int cnt = 0;

    scanf("%d", &x);
    while (x != -1)
    {
        numberArr[cnt] = x;
        sum += x;
        cnt++;
        scanf("%d", &x);
    }

    printf("%f\n", sum);
    printf("%d\n", cnt);

    if (cnt > 0)
    {
        printf("%f\n", sum / cnt);
        for (int i = 0; i < cnt; i++)
        {
            if (numberArr[i] > sum / cnt)
            {
                printf("高于平均值的%d\n", numberArr[i]);
            }
        }
    }

    return 0;
}