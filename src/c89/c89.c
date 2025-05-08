// 题目：某个公司采用公用电话传递数据，数据是四位的整数，在传递过程中是加密的，
// 加密规则如下：
// 每位数字都加上5,然后用和除以10的余数代替该数字，再将第一位和第四位交换，第二位和第三位交换。

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void encrypt(int arr[4]) {
    for (int i = 0; i < 4; i++) {
        arr[i] = arr[i] + 5;
        arr[i] = arr[i] % 10;
    }
    int temp = arr[0];
    arr[0] = arr[3];
    arr[3] = temp;

    temp = arr[1];
    arr[1] = arr[2];
    arr[2] = temp;
}

int main(void) {
    printf("请输入四位数据：");
    char *str = malloc(sizeof(char) * 5);
    fgets(str, 5, stdin);

    int arr[4] = {0};
    for (int i = 0; i < 4; i++) {
        arr[i] = str[i] - '0';
    }

    encrypt(arr);
    printf("加密后的数据：");
    for (int i = 0; i < 4; i++) {
        printf("%d", arr[i]);
    }
    printf("\n");

    // free
    free(str);
    str = NULL;

    return 0;
}
