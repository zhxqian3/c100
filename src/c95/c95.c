// 题目：简单的结构体应用实例。

#include <stdio.h>

struct programming {
    float constant;
    char *pointer;
};

int main(void) {
    struct programming variable;
    char string[] = "菜鸟教程：https://www.runoob.com";

    variable.constant = 1.23;
    variable.pointer = string;

    printf("%f\n", variable.constant);
    printf("%s\n", variable.pointer);

    return 0;
}
