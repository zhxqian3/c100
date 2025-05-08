// 题目：判断一个素数能被几个9整除。
// ？？？？？？？？？？？？？？？？

#include <math.h>
#include <stdio.h>

// 判断是否是素数
int isPrime(int n) {
    if (n <= 1) {
        return 0;
    }
    int flag = 1;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            flag = 0;
            return flag;
        }
    }
    return flag;
}

int main(void) {
    printf("请输入一个素数：");
    int num = 0;
input:
    scanf("%d", &num);
    if (!isPrime(num)) {
        printf("%d不是素数,重新输入：", num);
        goto input;
    }

    int sum = 9;
    for (;;) {
        if (sum % num == 0)
            break;
        else
            sum = sum * 10 + 9;
    }
    printf("%d能整除%d\n", num, sum);
    return 0;
}
