// 题目：将一个数组逆序输出。

#include <stdio.h>
#include <stdlib.h>

int *reverseArr(int *arr, int size)
{
    int *resArr = malloc(size * sizeof(int));
    if (resArr == NULL)
    {
        printf("err: reverseArr failed.\n");
        return NULL;
    }
    for (int i = 0; i < size; i++)
    {
        resArr[i] = arr[size - 1 - i];
    }
    return resArr;
}

int main()
{
    // 初始化数组
    int *oriArr = NULL;
    int oriSize = 0;
    printf("输入数组元素：");
    int ch = getchar();
    if (ch == '\n')
    {
        printf("err: lack element\n");
        return 1;
    }
    else
    {
        ungetc(ch, stdin);
    }
    for (int i = 0;; i++)
    {
        int *tempPtr = realloc(oriArr, (oriSize + 1) * sizeof(int));
        if (tempPtr == NULL)
        {
            printf("err: init oriArr failed.\n");
            free(oriArr);
            oriArr = NULL;
            return 1;
        }
        oriArr = tempPtr;
        oriSize++;
        scanf("%d", &oriArr[i]);
        ch = getchar();
        if (ch == '\n')
        {
            break;
        }
        else
        {
            ungetc(ch, stdin);
        }
    }
    // 逆序输出数组
    int *resArr = reverseArr(oriArr, oriSize);

    printf("逆序结果：");
    for (int i = 0; i < oriSize; i++)
    {
        printf("%d ", resArr[i]);
    }
    printf("\n");

    free(oriArr);
    oriArr = NULL;
    free(resArr);
    resArr = NULL;
    return 0;
}