// 题目：编写一个函数，输入n为偶数时，调用函数求1/2+1/4+...+1/n,当输入n为奇数时，调用函数1/1+1/3+...+1/n(利用指针函数)。

#include <stdio.h>

typedef double (*callBack)(int n);

// n%2==0
double add1(int n) {
    double res = 0;
    for (int i = 2; i <= n; i += 2) {
        res = res + 1.0 / i;
    }
    return res;
}

// n%2!=0
double add2(int n) {
    double res = 0;
    for (int i = 1; i <= n; i += 2) {
        res = res + 1.0 / i;
    }
    return res;
}

int main(void) {
    printf("输入一个整数：");
    int num = 0;
    scanf("%d", &num);

    callBack func = NULL;
    double res = 0;
    if (num % 2 == 0) {
        func = add1;
        res = func(num);
    } else {
        func = add2;
        res = func(num);
    }

    printf("res: %lf\n", res);

    return 0;
}
