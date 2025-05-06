// 题目：反向输出一个链表。　

#include <stdio.h>
#include <stdlib.h>

typedef struct LNode LNode;
typedef LNode *LinkList;

struct LNode {
    int date;
    LNode *next;
};

void freeList(LinkList list) {
    while (list) {
        LinkList next = list->next;
        free(list);
        list = next;
    }
}

LinkList creatList(int num) {
    if (num < 1) {
        printf("err: num < 1\n");
        return NULL;
    }
    LinkList list = malloc(sizeof(LNode));
    if (!list) {
        printf("err: malloc failed.\n");
        return NULL;
    }
    printf("输入第1个链表元素：");
    scanf("%d", &list->date);
    list->next = NULL;
    LinkList tpm = list;
    for (int i = 2; i <= num; i++) {
        LinkList new = malloc(sizeof(LNode));
        if (!new) {
            printf("err: malloc failed.\n");
            freeList(list);
            list = NULL;
            return list;
        }
        printf("输入第%d个链表元素：", i);
        scanf("%d", &new->date);
        new->next = NULL;
        tpm->next = new;
        tpm = new;
    }
    return list;
}

void reversePrintList(LinkList list) {
    if (list) {
        int listLength = 0;
        LinkList first = list;
        while (list) {
            listLength++;
            list = list->next;
        }
        for (int i = 0; i < listLength; i++) {
            list = first;
            for (int j = 0; j < listLength - i - 1; j++) {
                list = list->next;
            }
            printf("%d ", list->date);
        }
        printf("\n");
    }
}

int main(void) {
    printf("链表元素个数：");
    int num = 0;
    scanf("%d", &num);

    // 创建链表
    LinkList list = creatList(num);

    // 反向输出链表
    reversePrintList(list);

    // free
    freeList(list);
    return 0;
}
