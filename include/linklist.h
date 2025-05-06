// 链表相关头的结构体和函数
#ifndef LINKLIST_H
#define LINKLIST_H

typedef struct LNode LNode; // 链表节点
typedef LNode *LinkList;    // 链表

// 单链表
struct LNode {
    int data;
    LNode *next;
};

// 创建一个单链表，需要用freeList()函数释放内存
LinkList creatList(int num);

// free一个单链表
void freeList(LinkList list);

// 连接两个单链表
LinkList connectLists(LinkList preList, LinkList nextList);

// 打印链表
void printList(LinkList list);

#endif
