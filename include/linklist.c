#include "linklist.h"
#include <stdio.h>
#include <stdlib.h>

LinkList creatList(int num) {
    if (num < 1) {
        printf("creatist() err: num < 1.\n");
        return NULL;
    }
    // 赋值第一个节点
    LinkList list = malloc(sizeof(LNode));
    if (!list) {
        printf("creatList() err: malloc failed.\n");
        return list;
    }
    printf("输入第1个节点的元素数据：");
    scanf("%d", &list->data);
    list->next = NULL;
    // 赋值其余节点
    LinkList tmp = list; // 当前节点
    for (int i = 2; i <= num; i++) {
        LinkList next = malloc(sizeof(LNode));
        if (!next) {
            printf("creatList() err: malloc failed.\n");
            freeList(list);
            list = NULL;
            return list;
        }
        next->next = NULL;
        printf("输入第%d个节点的元素数据：", i);
        scanf("%d", &next->data);
        tmp->next = next;
        tmp = next;
    }
    return list;
}

void freeList(LinkList list) {
    while (list) {
        LinkList tmp = list->next;
        free(list);
        list = tmp;
    }
}

LinkList connectLists(LinkList preList, LinkList nextList) {
    if (!preList && !nextList) {
        printf("connectLists() err: args are NULL.\n");
        return NULL;
    }
    if (!preList && nextList) {
        return nextList;
    }
    if (preList && !nextList) {
        return preList;
    }

    // 找prelist的最后一个节点
    LNode *tmpNode = preList;
    LNode *preLastNode = NULL;
    while (tmpNode) {
        preLastNode = tmpNode;
        tmpNode = tmpNode->next;
    }
    preLastNode->next = nextList;
    return preList;
}

void printList(LinkList list) {
    if (!list) {
        return;
    }
    while (list) {
        printf("%d ", list->data);
        list = list->next;
    }
    printf("\n");
}
