// 题目：输入一行字符，分别统计出其中英文字母、空格、数字和其它字符的个数。

#include <stdio.h>

int main()
{
    char c = 0;
    int letterNum = 0, spaceNum = 0, otherNum = 0, digitNum = 0;
    printf("输入一行字符：\n");
    while (1)
    {
        c = getchar();
        if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
        {
            letterNum++;
        }
        else if (c == ' ')
        {
            spaceNum++;
        }
        else if (c >= 48 && c <= 57)
        {
            digitNum++;
        }
        else if (c == '\n')
        {
            break;
        }
        else
        {
            otherNum++;
        }
    }
    printf("字母数=%d, 空格数=%d, 数字数=%d, 其他数=%d\n", letterNum, spaceNum, digitNum, otherNum);

    return 0;
}