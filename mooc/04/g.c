#include <stdio.h>

int main()
{

    int fact = 1;
    for (int i = 1; i < 10; i++)
    {
        printf("i=%d\n", i);
        printf("fact--=%d\n", fact);
        fact *= i;
        printf("fact=%d\n", fact);
    }
    printf("-----------------\n");
    int factc = 100;
    for (int i = 10; i > 0; i--)
    {
        printf("i=%d\n", i);
        printf("fact--=%d\n", factc);
        factc -= i;
        printf("fact=%d\n", factc);
    }
    printf("-----------------\n");
    int x = 0;
    for (;;)
    {
        if (x > 5)
        {
            break;
        }
        printf("%d\n", x);
        x++;
    }

    return 0;
}