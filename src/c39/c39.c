// 题目：有一个已经排好序的数组。现输入一个数，要求按原来的规律将它插入数组中。

#include <stdio.h>
#include <stdlib.h>

// 插入并排序
void insert(int *oriArr, int *resArr, int oriSize, int insertNum)
{
    // 默认升序
    int isDescend = 0;
    if (oriSize > 1)
    {
        if (oriArr[0] > oriArr[1])
        {
            isDescend = 1;
        }
    }
    int j = 0;
    int hasInsert = 0;
    if (isDescend)
    {
        for (int i = 0; i < oriSize; i++)
        {
            if (insertNum > oriArr[i] && hasInsert == 0)
            {
                resArr[j] = insertNum;
                j++;
                resArr[j] = oriArr[i];
                j++;
                hasInsert = 1;
            }
            else
            {
                resArr[j] = oriArr[i];
                j++;
            }
        }
    }
    else
    {
        for (int i = 0; i < oriSize; i++)
        {
            if (insertNum < oriArr[i] && hasInsert == 0)
            {
                resArr[j] = insertNum;
                j++;
                resArr[j] = oriArr[i];
                j++;
                hasInsert = 1;
            }
            else
            {
                resArr[j] = oriArr[i];
                j++;
            }
        }
    }
    if (hasInsert == 0)
    {
        resArr[j] = insertNum;
    }
}

int main()
{
    int oriSize = 0;
    // 输入数组大小
    printf("请输入整形数组大小: ");
    scanf("%d", &oriSize);

    // 创建数组并赋值
    printf("输入数组元素(有序)：");
    int *oriArr = malloc(oriSize * sizeof(int));
    if (oriArr == NULL)
    {
        printf("err: failed to init oriArr.\n");
        return 1;
    }
    for (int i = 0; i < oriSize; i++)
    {
        scanf("%d", &oriArr[i]);
    }

    // 输入要插入的数
    int num = 0;
    printf("要插入的数：");
    scanf("%d", &num);

    // 创建结果数组
    int resSize = oriSize + 1;
    int *resArr = malloc(resSize * sizeof(int));
    if (resArr == NULL)
    {
        printf("err: failed to init resArr.\n");
        return 1;
    }

    // 插入并排序
    insert(oriArr, resArr, oriSize, num);

    // 打印结果数组
    printf("排序后：");
    for (int i = 0; i < resSize; i++)
    {
        printf("%d ", resArr[i]);
    }
    printf("\n");

    // 释放内存
    free(oriArr);
    oriArr = NULL;
    free(resArr);
    resArr = NULL;

    return 0;
}