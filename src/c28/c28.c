// 题目：有5个人坐在一起，问第五个人多少岁？
// 他说比第4个人大2岁。问第4个人岁数，他说比第3个人大2岁。
// 问第三个人，又说比第2人大两岁。
// 问第2个人，说比第一个人大两岁。
// 最后问第一个人，他说是10岁。请问第五个人多大？

#include <stdio.h>

int getAge(int id);

int main()
{
    int age = getAge(5);
    printf("第5个人的岁数：%d\n", age);
    return 0;
}

int getAge(int id)
{
    int age = 0;
    if (id == 1)
    {
        age = 10;
    }
    else
    {
        age = getAge(id - 1) + 2;
    }
    return age;
}