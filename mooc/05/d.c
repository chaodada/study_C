#include <stdio.h>

int main()
{

    // 逗号运算符
    // 逗号用来连接两个表达式 并以其右边的表达式的值 作为他的结果 逗号的优先级是所有的运算符中最低的
    // 所以他两两边的表达式会先计算 逗号的组合关系是自左向右 所以左边的表达式会先计算，而右边的表达式的值
    // 就留下来作为逗号运算的结果

    int i;

    i = (3+ 4, 5 + 6);

    printf("%d\n", i);

    return 0;
}