// 题目：利用递归函数调用方式，将所输入的5个字符，以相反顺序打印出来。

#include <stdio.h>

void printChar(int num);

int main()
{
    printChar(5);
    printf("\n");
    return 0;
}

void printChar(int num)
{
    char tempChar = getchar();
    if (num == 1)
    {
        printf("%c", tempChar);
    }
    else
    {
        printChar(num - 1);
        printf("%c", tempChar);
    }
}