// 题目：请输入星期几的第一个字母来判断一下是星期几，
// 如果第一个字母一样，则继续判断第二个字母。

#include <stdio.h>

void cleanInput();

int main()
{
    printf("请输入星期几的第一个字母：");
    char firstChar = 0;
    scanf("%c", &firstChar);

    if (firstChar == 'M' || firstChar == 'm')
    {
        printf("星期一\n");
    }
    else if (firstChar == 'T' || firstChar == 't')
    {
        printf("请输入第二个字母：");
        char secChar = 0;
        cleanInput();
        scanf("%c", &secChar);

        if (secChar == 'U' || secChar == 'u')
        {
            printf("星期二\n");
        }
        else if (secChar == 'H' || secChar == 'h')
        {
            printf("星期四\n");
        }
        else
        {
            printf("非星期\n");
        }
    }
    else if (firstChar == 'W' || firstChar == 'w')
    {
        printf("星期三\n");
    }
    else if (firstChar == 'F' || firstChar == 'f')
    {
        printf("星期五\n");
    }
    else if (firstChar == 'S' || firstChar == 's')
    {
        printf("请输入第二个字母：");
        char secChar = 0;
        cleanInput();
        scanf("%c", &secChar);

        if (secChar == 'A' || secChar == 'a')
        {
            printf("星期六\n");
        }
        else if (secChar == 'U' || secChar == 'u')
        {
            printf("星期天\n");
        }
        else
        {
            printf("非星期\n");
        }
    }
    else
    {
        printf("非星期\n");
    }

    return 0;
}

void cleanInput()
{
    while (getchar() != '\n')
    {
    }
}