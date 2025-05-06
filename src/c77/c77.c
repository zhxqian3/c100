// 题目：练习指向指针的指针（使用多级指针遍历字符串数组）。

#include <stdio.h>

int main(void) {
    // 定义一个字符指针数组，存储字符串常量
    const char *s[] = {"man", "woman", "girl", "boy", "sister"};
    // 定义一个指向字符指针的指针变量
    const char **q;
    int k;

    // 遍历数组，并通过指向指针的指针输出每个字符串
    for (k = 0; k < 5; k++) {
        q = &s[k];          // 让指针 q 指向字符指针数组中第 k 个元素的地址
        printf("%s\n", *q); // 解引用 q，输出对应的字符串
    }

    return 0;
}
