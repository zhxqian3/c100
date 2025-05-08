// 题目：求0—7所能组成的奇数个数。

#include <stdio.h>

// 计算counts*counts*counts...
// num为乘的次数，当num为<1时，返回1
int func(int counts, int num) {
    int res = 1;
    for (int i = 0; i < num; i++) {
        res = res * counts;
    }
    return res;
}

int main(void) {
    int sum = 0;
    for (int i = 1; i <= 8; i++) {
        printf("当为%d位数时，奇数个数为：", i);
        int count = 4 * func(8, i - 2);
        if (i > 1) {
            count = count * func(7, 1);
        }
        printf("%d\n", count);
        sum = sum + count;
    }
    printf("总共：%d\n", sum);
    return 0;
}
