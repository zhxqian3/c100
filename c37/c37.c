// 题目：对10个数进行排序。

#include <stdio.h>

void sort(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        int temp = 0;
        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] > arr[j])
            {
                temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }
}

int main()
{
    int arr1[10] = {0};
    // 输入
    printf("输入10个数：");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &arr1[i]);
    }

    sort(arr1, 10);

    // 输出
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", arr1[i]);
    }
    printf("\n");

    return 0;
}