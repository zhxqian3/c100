// 题目：输入一个整数，并将其反转后输出。

#include <math.h>
#include <stdio.h>

int reverseInt(int n) {
    int k = 1; // 默认为正
    if (n < 0) {
        k = -1;
        n = -n;
    }
    int num = n;
    int count = 0;
    while (n > 0) {
        n = n / 10;
        count++;
    }
    int digtal[count];
    int i = 0;
    n = num;
    while (n > 0) {
        digtal[count - 1 - i] = n % 10;
        n = n / 10;
        i++;
    }
    int res = 0;
    for (int i = 0; i < count; i++) {
        res = res + digtal[i] * pow(10, i);
    }
    res = res * k;
    return res;
}

int main(void) {
    printf("输入一个整数：");
    int num = 0;
    scanf("%d", &num);

    int res = reverseInt(num);

    printf("%d\n", res);
    return 0;
}
