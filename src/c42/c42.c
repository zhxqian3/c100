// 题目：学习使用auto定义变量的用法。

// auto 关键字的作用：

//     auto 关键字用于声明 局部变量（即函数内部的变量）。

//     它的作用是告诉编译器该变量的 存储期 为自动存储期，意味着它 在进入函数或代码块时创建，在退出时销毁。

//     由于 C 语言中局部变量 默认 都是 auto 类型，所以通常不需要显式使用 auto。

#include <stdio.h>
int main()
{
    int i, num;
    num = 2;
    for (i = 0; i < 3; i++)
    {
        printf("num 变量为 %d \n", num);
        num++;
        {
            auto int num = 1;
            printf("内置模块 num 变量为 %d \n", num);
            num++;
        }
    }
    return 0;
}