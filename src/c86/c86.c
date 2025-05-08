// 题目：两个字符串连接程序 。

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define BUFFER_SIZE 256

char *connectStr(char *preStr, char *nextStr) {
    preStr[strcspn(preStr, "\n")] = '\0';
    nextStr[strcspn(nextStr, "\n")] = '\0';
    int length = strlen(preStr) + strlen(nextStr);
    char *ret = malloc(sizeof(char) * (length + 1));
    if (!ret) {
        printf("connectStr() err: malloc() failed.\n");
        return NULL;
    }
    strcpy(ret, preStr);
    strcpy(ret + strlen(preStr), nextStr);
    return ret;
}

int main(void) {
    printf("输入一串字符串：");
    char *str1 = malloc(sizeof(char) * BUFFER_SIZE);
    if (!str1) {
        printf("malloc() err: failed.\n");
        return 1;
    }
    fgets(str1, BUFFER_SIZE, stdin);

    printf("输入一串字符串：");
    char *str2 = malloc(sizeof(char) * BUFFER_SIZE);
    if (!str2) {
        printf("malloc() err: failed.\n");
        return 1;
    }
    fgets(str2, BUFFER_SIZE, stdin);

    char *ret = connectStr(str1, str2);
    if (ret) {
        printf("%s\n", ret);
    }

    // free
    free(str1);
    str1 = NULL;
    free(str2);
    str2 = NULL;
    free(ret);
    ret = NULL;

    return 0;
}
