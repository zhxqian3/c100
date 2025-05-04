// 题目：有 n 个整数，使其前面各数顺序向后移 m 个位置，最后m个数变成最前面的 m 个数。

#include <stdio.h>

void moveElement(int arr[], int size, int step)
{
    if (step > size)
    {
        printf("err: move failed\n");
    }
    else
    {
        int cacheArr[step];
        for (int i = size - 1, j = step - 1; j >= 0; j--, i--)
        {
            cacheArr[j] = arr[i];
        }
        for (int i = size - step - 1; i >= 0; i--)
        {
            arr[i + step] = arr[i];
        }
        for (int i = 0; i < step; i++)
        {
            arr[i] = cacheArr[i];
        }
    }
}

int main()
{
    printf("输入要输入的整数个数: ");
    int size = 0;
    scanf("%d", &size);
    printf("依次输入整数：");
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("要后移几位：");
    int moveStep = 0;
    scanf("%d", &moveStep);

    moveElement(arr, size, moveStep);

    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}