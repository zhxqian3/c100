// 题目：连接两个链表。

#include "../../include/linklist.h"
#include <stdio.h>

int main(void) {
    // 初始化
    printf("输入第一个链表的节点个数：");
    int list1Num = 0;
    scanf("%d", &list1Num);
    LinkList list1 = creatList(list1Num);
    printf("输入第二个链表的节点个数：");
    int list2Num = 0;
    scanf("%d", &list2Num);
    LinkList list2 = creatList(list2Num);

    // 连接
    LinkList resList = connectLists(list1, list2);
    printList(resList);

    // free
    freeList(resList);
    resList = NULL;
    list1 = NULL;
    list2 = NULL;
    return 0;
}
