// 题目：输入数组，最大的与第一个元素交换，最小的与最后一个元素交换，输出数组。

#include <stdio.h>

// 找最大的元素的索引
int findMax(int arr[], int size)
{
    int index = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[index] < arr[i])
        {
            index = i;
        }
    }
    return index;
}

// 找最小的元素的索引
int findMin(int arr[], int size)
{
    int index = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[index] > arr[i])
        {
            index = i;
        }
    }
    return index;
}

int main()
{
    printf("输入数组大小：");
    int size = 0;
    scanf("%d", &size);
    int arr[size];
    printf("输入数组：");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    int maxIndex = findMax(arr, size);
    int minIndex = findMin(arr, size);

    int temp = 0;
    temp = arr[maxIndex];
    arr[maxIndex] = arr[0];
    arr[0] = temp;

    temp = arr[minIndex];
    arr[minIndex] = arr[size - 1];
    arr[size - 1] = temp;

    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}