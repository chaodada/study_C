

#include <stdio.h>

// 主程序
int main()
{
    // 打印
    printf("hello 建超\n"); // 格式化输出


    // 转义字符  
    // \n 换行
    // \ 表示告诉忽略\的存在 并且把下一行当作是上一行的延续  一行代码超级长
    pri\
ntf("hello\n 建超\n\
11111\
1111"); // 格式化输出

    // 返回
    return 0;
}


// 编译 gcc hello.c -o hello
// 运行 ./hello