// 题目：八进制转换为十进制

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define LNEGTH 100

int main(void) {
    // 输入八进制数
    printf("输入八进制格式的数(格式: 0+input)-> ");
    char *str = malloc(sizeof(char) * LNEGTH);
    if (!str) {
        printf("malloc err: failed.\n");
        return 1;
    }
    fgets(str, sizeof(char) * LNEGTH, stdin);
    str[strcspn(str, "\n")] = '\0';

    int num = strtol(str, NULL, 8);
    printf("%d\n", num);

    // free
    free(str);
    return 0;
}
