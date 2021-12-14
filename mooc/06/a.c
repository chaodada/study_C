#include <stdio.h>

int main()
{

    // 素数 只能被1 和自己整除的数 不包括1

    int x;
    scanf("%d", &x);

    int isPrime = 1;
    for (int i = 2; i < x; i++)
    {
        if (x % i == 0)
        {
            isPrime = 0;
            break; // 跳出循环语句
        }
        //  continue 跳出本次循环
    }

    if (isPrime == 1)
    {
        printf("是素数\n");
    }
    else
    {
        printf("不是素数\n");
    }

    return 0;
}