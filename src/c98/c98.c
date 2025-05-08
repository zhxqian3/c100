// 题目：从键盘输入一个字符串，将小写字母全部转换成大写字母，然后输出到一个磁盘文件"test"中保存。
// 输入的字符串以！结束。

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define BUFFER_SIZE 256

void lagerStr(char *str) {
    if (!str) {
        return;
    }
    int length = strlen(str);
    for (int i = 0; i < length; i++) {
        if (str[i] >= 97 && str[i] <= 122) {
            str[i] = str[i] - ' ';
        }
    }
}

int main(void) {
    char str[BUFFER_SIZE] = {0};
    char ch = 0;
    for (int i = 0; i < BUFFER_SIZE; i++) {
        if ((ch = getchar()) == '!') {
            str[i] = '\0';
            break;
        } else {
            str[i] = ch;
        }
    }

    lagerStr(str);

    FILE *file = NULL;
    file = fopen("test", "w");
    if (!file) {
        printf("can not open file.\n");
        exit(1);
    }
    fputs(str, file);
    fputs("\n", file);
    fclose(file);
    return 0;
}
