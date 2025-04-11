// 题目：输入某年某月某日，判断这一天是这一年的第几天？

#include <stdio.h>

int isLeapYear(int year)
{
    // 闰年的判断规则：(能被4整除且不能被100整除)或能被400整除
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
    {
        return 1;
    }
    return 0;
}

int main()
{
    int year = 0;
    int month = 0;
    int day = 0;
    int monthDay[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if (scanf("%d %d %d", &year, &month, &day) != 3)
    {
        printf("输入无效，请输入正确的年份、月份和日期。\n");
        return 1;
    }
    if (year <= 0)
    {
        printf("年份不合法，请输入一个正整数。\n");
        return 1;
    }
    int isLeap = isLeapYear(year);
    if (isLeap)
    {
        monthDay[1] = 29;
    }
    if (month < 1 || month > 12)
    {
        printf("月份不合法，请输入1到12之间的数字。\n");
        return 1;
    }
    if (day < 1 || day > monthDay[month - 1])
    {
        printf("日期不合法，请输入有效的日期。\n");
        return 1;
    }
    int num = 0;
    for (int i = 0; i < month - 1; i++)
    {
        num = num + monthDay[i];
    }
    num = num + day;
    printf("第%d天\n", num);
    return 0;
}