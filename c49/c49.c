// 题目：#if #ifdef和#ifndef的综合应用。

#include <stdio.h>

// 定义平台宏
#define LINUX
// #define WINDOWS

#if defined(LINUX)
    #define OS "Linux"
#elif defined(WINDOWS)
    #define OS "Windows"
#else
    #define OS "Unknown OS"
#endif

int main() {
    printf("当前操作系统: %s\n", OS);
    return 0;
}
