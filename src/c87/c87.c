// 题目：回答结果（结构体变量传递）。

#include <stdio.h>

struct student {
    int x;
    char c;
} a;

void f(struct student b) {
    b.x = 20;
    b.c = 'y';
}

int main(void) {
    a.x = 3;
    a.c = 'a';
    f(a);
    printf("%d,%c", a.x, a.c);
}
