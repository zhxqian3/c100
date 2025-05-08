// 题目：计算字符串中子串出现的次数 。

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define BUFFER_SIZE 256

int getStrCounts(char *oriStr, char *templateStr) {
    int count = 0;
    int templateLen = strlen(templateStr);
    int oriLen = strlen(oriStr);
    int isEqual = 1;

    for (int i = 0;;) {
        if (i + templateLen > oriLen) {
            break;
        }
        isEqual = 1; // 假定匹配
        for (int j = 0; j < templateLen; j++) {
            if (oriStr[i + j] != templateStr[j]) {
                isEqual = 0;
                break;
            }
        }
        if (isEqual) {
            count++;
        }
        i++;
    }
    return count;
}

int main(void) {
    printf("输入母串：");
    char *str1 = malloc(sizeof(char) * BUFFER_SIZE);
    if (!str1) {
        printf("malloc() err: failed.\n");
        return 1;
    }
    fgets(str1, BUFFER_SIZE, stdin);
    str1[strcspn(str1, "\n")] = '\0';

    printf("输入子串：");
    char *str2 = malloc(sizeof(char) * BUFFER_SIZE);
    if (!str2) {
        printf("malloc() err: failed.\n");
        return 1;
    }
    fgets(str2, BUFFER_SIZE, stdin);
    str2[strcspn(str2, "\n")] = '\0';

    int count = getStrCounts(str1, str2);
    printf("\"%s\" 在 \"%s\" 中出现了%d次\n", str2, str1, count);

    free(str1);
    str1 = NULL;
    free(str2);
    str2 = NULL;

    return 0;
}
