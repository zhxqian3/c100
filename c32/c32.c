// 题目：删除一个字符串中的指定字母，如：字符串 "aca"，删除其中的 a 字母。

#include <stdio.h>

int getInputStrSize();
void makeInputArr(char arr[], int size);
void deleteChar(char arr[], char res[], char del, int size);
int afterSize(char arr[], char del, int size);

int main()
{
    // 输入一个字符串
    printf("输入一个字符串：");
    int size = getInputStrSize();
    printf("重复刚才输入的字符串：");
    char input[size];
    makeInputArr(input, size);

    // 删除指定字母
    printf("指定要删除的字母：");
    char del = 0;
    scanf("%c", &del);
    int resSize = afterSize(input, del, size);
    char resArr[resSize];
    deleteChar(input, resArr, del, size);

    // 打印
    for (int i = 0; i < resSize; i++)
    {
        printf("%c", resArr[i]);
    }
    printf("\n");

    return 0;
}

int getInputStrSize()
{
    char ind = 0;
    int count = 0;
    for (count = 0; ind != '\n'; count++)
    {
        ind = getchar();
    }
    return count - 1;
}

void makeInputArr(char arr[], int size)
{
    char ind = 0;
    int i = 0;
    for (i = 0; i < size; i++)
    {
        ind = getchar();
        arr[i] = ind;
    }
    // clean
    while (getchar() != '\n')
    {
    }
}

void deleteChar(char arr[], char res[], char del, int size)
{
    int i = 0;
    int j = 0;
    for (i = 0; i < size; i++)
    {
        if (arr[i] != del)
        {
            res[j] = arr[i];
            j++;
        }
    }
}

int afterSize(char arr[], char del, int size)
{
    int i = 0;
    int count = 0;
    for (i = 0; i < size; i++)
    {
        if (arr[i] == del)
        {
            continue;
        }
        else
        {
            count++;
        }
    }
    return count;
}