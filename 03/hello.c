
// 变量

// 变量的意义就是确定目标并提供存放的空间

// 变量名A-Z a-z 0-9 _ 组成
// 第一个字母必须是字母或下划线开头
// 变量名区分大小写

// 不能使用关键字命名变量

// 关键字
// auto break case char const continue default do
// double else enum extern float for goto if
// int long register return short signed sizeof static
// struct switch typedef union  unsigned void volatile while
// inline restrict _Bool _Complex _Imaginary
// _Alignas
// _Alignof
// _Atomic
// _Static_assert
// _Noreturn
// _Thread_local
// _Generic

// 指定变量数据类型

// 基本数据类型
// char 字符型 占用一个字节
// int 整形 通常反映了所用于机器整数的最自然长度
// float 单精度浮点型   // 小数比较小
// double 双精度浮点型  // 小数比较大

// 声明变量的语法
// 类型 变量名
// int a;
// char b;
// float c;
// double d;

#include <stdio.h>
int main()
{

    int a;
    char b;
    float c;
    double d;
    a = 520;
    b = 'F';
    c = 3.14;
    d = 3.141592653;

    printf("变量a的值%d\n", a); // %d int 
    printf("变量b的值%c\n", b); // %c char

    printf("变量c的值%.2f\n", c); // %.2f 精确到小数点后两位

    printf("变量d的值%11.9f\n", d); // %11.9f 数据总共11位 小数点后 9位

    return 0;
}

// 编译并执行
// gcc hello.c -o hello && ./hello