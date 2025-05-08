// 题目：有两个磁盘文件A和B,各存放一行字母，要求把这两个文件中的信息合并（按字母顺序排列），输出到一个新文件C中。
// 还要排序，这里没有实现排序

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    FILE *file1 = NULL;
    FILE *file2 = NULL;
    FILE *file = NULL;
    char str1[256] = {0};
    char str2[256] = {0};

    file1 = fopen("A", "r");
    if (!file1) {
        printf("can not open file.\n");
        exit(1);
    }
    fgets(str1, 256, file1);
    fclose(file1);

    file2 = fopen("B", "r");
    if (!file2) {
        printf("can not open file.\n");
        exit(1);
    }
    fgets(str2, 256, file2);
    fclose(file2);

    file = fopen("C", "w");
    if (!file) {
        printf("can not open file.\n");
        exit(1);
    }
    fputs(str1, file);
    fputs(str2, file);
    fclose(file);

    return 0;
}
