// 题目：809*??=800*??+9*??
// 其中??代表的两位数,
// 809*??为四位数，8*??的结果为两位数，9*??的结果为3位数。求??代表的两位数，及809*??后的结果。

#include <stdio.h>

int getDigCounts(int num) {
    int count = 0;
    while (num) {
        count++;
        num = num / 10;
    }
    return count;
}

int main(void) {
    int resNum = 10;
    for (resNum = 10; resNum <= 99; resNum++) {
        if (809 * resNum == 800 * resNum + 9 * resNum) {
            if (getDigCounts(809 * resNum) == 4 &&
                getDigCounts(8 * resNum) == 2 &&
                getDigCounts(9 * resNum) == 3) {
                break;
            }
        }
    }
    printf("两位数是：%d\n", resNum);
    printf("809 * %d = %d\n", resNum, 809 * resNum);
    return 0;
}
