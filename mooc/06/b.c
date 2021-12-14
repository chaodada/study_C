#include <stdio.h>

int main()
{

    for (int i = 2; i <= 100; i++)
    {
        int isPrime = 1;

        for (int j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                isPrime = 0;
                break; // 跳出循环语句
            }
        }

        if (isPrime == 1)
        {
            printf("%d是素数\n", i);
        }
        else
        {
            // printf("%d不是素数\n", i);
        }
    }
}