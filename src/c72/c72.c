// 题目：创建一个链表。

#include <stdio.h>
#include <stdlib.h>
typedef struct LNode LNode;
typedef struct LNode *LinkList;

struct LNode {
  int data;
  LNode *next;
};

LinkList ceartLinkList(int n) {
  if (n < 1) {
    return NULL;
  }
  LinkList list = malloc(sizeof(LNode));
  if (list == NULL) {
    return NULL;
  }
  LinkList temp1 = NULL, temp2 = NULL;
  temp1 = list;
  for (int i = 1; i <= n; i++) {
    printf("输入第%d个元素的值：", i);
    scanf("%d", &temp1->data);
    temp1->next = NULL;
    if (temp2) {
      temp2->next = temp1;
    }
    temp2 = temp1;
    if (i < n) {
      temp1 = malloc(sizeof(LNode));
      if (!temp1) {
        printf("creat failed.\n");
        return list;
      }
    }
  }
  return list;
}

void printList(LinkList list) {
  while (list) {
    printf("%d ", list->data);
    list = list->next;
  }
}

void freeLinkList(LinkList list) {
  LinkList nextList = NULL;
  while (list) {
    nextList = list->next;
    free(list);
    list = nextList;
  }
}

int main(void) {
  LinkList list = NULL;
  int n = 0;
  printf("链表元素个数：");
  scanf("%d", &n);
  list = ceartLinkList(n);
  printf("刚刚建立的各个链表元素的值为：\n");
  printList(list);
  printf("\n");
  freeLinkList(list);
  return 0;
}
