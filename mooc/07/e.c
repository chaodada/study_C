#include <stdio.h>

void print(int i); // 提前定义函数头 【又称作 函数的原型声明】 函数原型的目的就是告诉编译器 这个函数长什么样 什么类型 什么参数【数量及类型】 返回类型
//  void print(int);  // 也可以忽略 参数名称




void cheer() // 当函数没有返回值 需要定义成 void  不能使用带值的return  可以没有return  调用的时候不能做返回值的赋值
{
    printf("cheer\n");
}

// 函数的先后关系
// 编译器自上而下执行 所以 先定义函数 再使用函数
// 如果 想改变顺序 可以在文件头部 先定义函数头  void print(int i);

int main()
{

    // 函数
    // 函数是一块代码 接收零个或者多个参数 做一件事情，并返回零个 或一个值

    cheer();
    print(12);

    return 0;
}

void print(int i)
{
    printf("%d\n", i);
}

// gcc ./e.c ; ./a.out; echo $?;