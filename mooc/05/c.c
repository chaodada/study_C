#include <stdio.h>
int main()
{

    int count;
    scanf("%d", &count);
    count = (count > 30) ? count - 10 : count + 10;
    printf("%d", count);

    return 0;
}