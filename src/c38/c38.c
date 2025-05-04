// 题目：求一个3*3矩阵对角线元素之和

#include <stdio.h>

#define N 3

// 计算sizexsize矩阵两条对角线元素之和（不含重复元素）
int getDiaSum(int *arr, int size)
{
    int res = 0;
    for (int i = 0; i < size; i++)
    {
        if (size - 1 - i == i)
        {
            res = res + *(arr + size * i + i);
        }
        else
        {
            res = res + *(arr + size * i + size - 1 - i) + *(arr + size * i + i);
        }
    }
    return res;
}

int main()
{
    int arr1[N][N] = {0};
    
    // 输入矩阵
    printf("输入一个 %d x %d 矩阵：\n", N, N);
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            scanf("%d", &arr1[i][j]);
        }
    }

    // 计算
    int diaSum = getDiaSum((int *)arr1, N);
    printf("sum: %d\n", diaSum);
    return 0;
}