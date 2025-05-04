// 题目：输出特殊图案，请在c环境中运行，看一看，Very Beautiful!

#include <stdio.h>

int main()
{
    // 输出菱形图案
    const char *diamond[] = {
        "   *   ",
        "  ***  ",
        " ***** ",
        "*******",
        " ***** ",
        "  ***  ",
        "   *   "};

    for (long unsigned i = 0; i < sizeof(diamond) / sizeof(diamond[0]); i++)
    {
        printf("%s\n", diamond[i]);
    }

    return 0;
}
