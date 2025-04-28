// 题目：字符串反转，如将字符串 "www.runoob.com" 反转为 "moc.boonur.www"。

#include <stdio.h>
#include <string.h>

void reverseStr(char str[])
{
    int len = strlen(str);
    int left = 0, right = len - 1;
    char temp = 0;
    for (; left <= right; left++, right--)
    {
        temp = str[left];
        str[left] = str[right];
        str[right] = temp;
    }
}

int main()
{
    char strArr[] = "www.runoob.com";
    printf("%s\n", strArr);
    reverseStr(strArr);
    printf("%s\n", strArr);
    return 0;
}