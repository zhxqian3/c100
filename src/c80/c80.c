// 题目：海滩上有一堆桃子，五只猴子来分。
// 第一只猴子把这堆桃子平均分为五份，多了一个，这只
// 猴子把多的一个扔入海中，拿走了一份。
// 第二只猴子把剩下的桃子又平均分成五份，又多了
// 一个，它同样把多的一个扔入海中，拿走了一份，
// 第三、第四、第五只猴子都是这样做的， 问海滩上原来最少有多少个桃子？

#include <stdio.h>

#define Times 5

int main(void) {
    int oriNum = 0;
    while (1) {
        int tmp = oriNum;
        for (int i = 0; i < Times; i++) {
            if (tmp % 5 == 1 && tmp / 5 != 0) {
                tmp = tmp - (tmp - 1) / 5 - 1;
            } else {
                oriNum++;
                break;
            }
            if (i == Times - 1) {
                goto end;
            }
        }
    }
end:
    printf("最少%d个桃子\n", oriNum);
    return 0;
}
