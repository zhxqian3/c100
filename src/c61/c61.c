// 题目：打印出杨辉三角形（要求打印出10行）。

#include <stdio.h>
#include <stdlib.h>

struct dynamicArr
{
    int *data;
    int size;
};

typedef struct dynamicArr dynamicArr;

// 释放自定义数组内的元素
void freeDynamicArr(dynamicArr *arr)
{
    free(arr->data);
    arr->data = NULL;
    arr->size = 0;
    free(arr);
}

// 初始化动态数组
// 需要用freeDynamicArr函数释放内存
dynamicArr *initArr(int size)
{
    dynamicArr *arr = malloc(sizeof(dynamicArr));
    if (arr == NULL)
    {
        printf("err: init failed.\n");
        return arr;
    }
    arr->data = malloc(sizeof(int) * size);
    if (arr->data == NULL)
    {
        printf("err: init failed.\n");
        freeDynamicArr(arr);
        arr = NULL;
        return arr;
    }
    arr->size = size;
    return arr;
}

// 对数组额外添加大小
void addArrSize(dynamicArr *arr, int addSize)
{
    int *temp = realloc(arr->data, sizeof(int) * (addSize + arr->size));
    if (temp == NULL)
    {
        free(arr->data);
        arr->data = NULL;
        freeDynamicArr(arr);
        goto end;
    }
    arr->data = temp;
    temp = NULL;
    arr->size = addSize + arr->size;
end:
    printf("err: add arr size failed.\n");
}

int main()
{
    dynamicArr *oldArr = initArr(1); // 第一行

    oldArr->data[0] = 1;
    oldArr->data[oldArr->size - 1] = 1;

    // 打印
    for (int i = 1; i <= 10; i++)
    {
        for (int j = 0; j < oldArr->size; j++)
        {
            printf("%d ", oldArr->data[j]);
        }
        printf("\n");

        // 计算下一行
        dynamicArr *newArr = initArr(oldArr->size + 1);
        if (newArr == NULL)
        {
            printf("err: fatal!\n");
            goto end;
        }
        newArr->data[0] = 1;
        newArr->data[newArr->size - 1] = 1;
        if (newArr->size > 2)
        {
            for (int j = 1; j < newArr->size - 1; j++)
            {
                newArr->data[j] = oldArr->data[j] + oldArr->data[j - 1];
            }
        }
        // 释放oldArr，并将newArr赋值给oldArr
        if (oldArr != NULL)
        {
            freeDynamicArr(oldArr);
        }
        oldArr = newArr;
        newArr = NULL;
    }

// 释放
end:
    if (oldArr != NULL)
    {
        freeDynamicArr(oldArr);
        oldArr = NULL;
    }
    return 0;
}