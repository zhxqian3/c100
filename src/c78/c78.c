// 题目：找到年龄最大的人，并输出。请找出程序中有什么问题。

#include <stdio.h>

// 定义结构体类型，用于存储人员的姓名和年龄
struct man {
    char name[20];
    int age;
} person[3] = {{"li", 0}, {"wang", 0}, {"sun", 0}}; // 初始化数组

int main(void) {
    struct man *q = person; // 用于指向年龄最大的人员
    struct man *p = person; // 指向数组的起始地址
    int i = 0;
    int k = 0;
    int max_age = p->age; // 存储最大年龄

    // 遍历数组，找到年龄最大的人员
    for (i = 0; i < 3; i++) {
        if (p->age > max_age) { // 如果当前年龄大于 max_age
            max_age = p->age;   // 更新 max_age
            q = p;              // 将 q 指向当前人员
            k = i;
        }
        p++; // 移动到下一个人员
    }

    // 输出年龄最大的人员的姓名和年龄
    if (q != NULL) {
        for (; k < 3; k++) {
            if (person[k].age == max_age)
                printf("%s %d\n", person[k].name, person[k].age);
        }
    } else {
        printf("没有找到人员信息。\n");
    }

    return 0;
}
