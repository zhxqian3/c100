// 题目：一个偶数总能表示为两个素数之和。

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
    printf("输入一个偶数：");
    int num = 0;
input:
    scanf("%d", &num);
    if (num <= 2) {
        printf("num <= 2, 请重新输入: ");
        goto input;
    }

    for (int i = 0; i <= num; i++) {
        if (isPrime(i)) {
            for (int j = i; j <= num; j++) {
                if (isPrime(j)) {
                    if (i + j == num) {
                        printf("%d = %d + %d\n", num, i, j);
                        goto end;
                    }
                }
            }
        }
    }
end:
    return 0;
}
