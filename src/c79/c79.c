// 题目：字符串排序。

#include <stdio.h>
#include <string.h>

#define MAX_LEN 20 // 定义常量表示字符串的最大长度

// 函数声明：用于交换两个字符串
void swap(char *str1, char *str2);

int main(void) {
    char str1[MAX_LEN], str2[MAX_LEN], str3[MAX_LEN];

    // 提示用户输入字符串
    printf("请输入3个字符串，每个字符串以回车结束:\n");

    // 使用 fgets 读取输入并去除换行符
    fgets(str1, sizeof(str1), stdin);
    str1[strcspn(str1, "\n")] = '\0'; // 去除换行符

    fgets(str2, sizeof(str2), stdin);
    str2[strcspn(str2, "\n")] = '\0'; // 去除换行符

    fgets(str3, sizeof(str3), stdin);
    str3[strcspn(str3, "\n")] = '\0'; // 去除换行符

    // 对字符串进行排序
    if (strcmp(str1, str2) > 0)
        swap(str1, str2);
    if (strcmp(str2, str3) > 0)
        swap(str2, str3);
    if (strcmp(str1, str2) > 0)
        swap(str1, str2);

    // 输出排序后的结果
    printf("排序后的结果为：\n");
    printf("%s\n%s\n%s\n", str1, str2, str3);

    return 0;
}

// 交换两个字符串的内容
void swap(char *str1, char *str2) {
    char temp[MAX_LEN];
    strcpy(temp, str1); // 将 str1 复制到临时字符串 temp
    strcpy(str1, str2); // 将 str2 复制到 str1
    strcpy(str2, temp); // 将 temp 复制到 str2
}
