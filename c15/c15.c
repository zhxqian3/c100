// 题目：利用条件运算符的嵌套来完成此题：
// 学习成绩>=90分的同学用A表示，60-89分之间的用B表示，60分以下的用C表示。

#include <stdio.h>

int main()
{
    printf("输入成绩：");
    float score = 0;
    scanf("%f", &score);
    char grade = 0;
    grade = score >= 90 ? 'A' : (score < 60 ? 'C' : 'B');
    printf("%c\n", grade);
    return 0;
}