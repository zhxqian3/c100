// 题目：两个乒乓球队进行比赛，各出三人，
// 甲队为 a、b、c 三人，乙队为 x、y、z 三人。
// 抽签决定比赛名单，有人向队员打听比赛的名单：
// a 说他不和 x 比，c 说他不和 x、z 比，请编写代码找出三队赛手的名单。

#include <stdio.h>

int main()
{
    // 两队人员
    // char teamA[3] = {'a', 'b', 'c'};
    char teamB[3] = {'x', 'y', 'z'};

    // 甲队a b c分别对战的人员
    char i, j, k;

    // 枚举a对战成员
    for (i = teamB[0]; i <= teamB[2]; i++)
    {
        // 枚举b对战成员
        for (j = teamB[0]; j <= teamB[2]; j++)
        {
            // a和b对战的成员应不同
            if (i != j)
            {
                // 枚举c对战成员
                for (k = teamB[0]; k <= teamB[2]; k++)
                {
                    // a和b对战成员应与c不同
                    if (i != k && j != k)
                    {
                        // a不和x   c不和x z
                        if (i != teamB[0] && k != teamB[0] && k != teamB[2])
                        {
                            printf("a<->%c\tb<->%c\tc<->%c\n", i, j, k);
                        }
                    }
                }
            }
        }
    }
    return 0;
}