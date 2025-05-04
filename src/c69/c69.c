// 题目：有n个人围成一圈，顺序排号。从第一个人开始报数（从1到3报数），凡报到3的人退出圈子，问最后留下的是原来第几号的那位。

#include <stdio.h>
#include <stdlib.h>

typedef struct person person;

// 单人
struct person {
  int id;
  person *next;
  person *prev;
};

// 初始化一个人
// 需要用free()释放内存
person *initPerson(int id, person *prevPerson, person *nextPerson) {
  person *per = malloc(sizeof(person));
  if (per == NULL) {
    return NULL;
  }
  per->id = id;
  per->prev = prevPerson;
  per->next = nextPerson;
  return per;
}

// 初始化团队
// 需要用freeTeam()释放内存
person *initTeam(int num) {
  if (num < 1) {
    printf("num < 1, not allowed.\n");
    return NULL;
  } else {
    person *temp = NULL;
    person *first = NULL;
    for (int i = 1; i <= num; i++) {
      if (i == 1) {
        first = initPerson(1, NULL, NULL);
        if (first == NULL) {
          printf("init failed.\n");
          return NULL;
        }
        temp = first;
        continue;
      }
      person *next = initPerson(i, temp, NULL);
      if (next == NULL) {
        printf("init failed. you need free by yourself.\n");
        return first;
      }
      temp->next = next;
      temp = next;
    }
    return first;
  }
}

// freeTeam,释放一个person之后的所有连续person内存
int freeTeam(person *first) {
  if (first == NULL) {
    printf("err: 参数是空指针\n");
    return 0;
  }
  person *prev = NULL;
  person *next = NULL;
  prev = first;
  next = first->next;
  free(prev);
  while (next != NULL) {
    prev = next;
    next = prev->next;
    free(prev);
  }
  return 1;
}

// 删除team中指定id的person成员,返回一个新的first
person *deleteTeamEle(int id, person *first) {
  person *currunt = first;
  person *temp = NULL;
  while (currunt != NULL) {
    if (currunt->id == id) {
      if (currunt == first) {
        first = currunt->next;
      }
      if (currunt->prev) {
        currunt->prev->next = currunt->next;
      }
      if (currunt->next) {
        currunt->next->prev = currunt->prev;
      }
      temp = currunt;
      currunt = currunt->next;
      free(temp);
      temp = NULL;
      continue;
    }
    currunt = currunt->next;
  }
  return first;
}

int main(void) {

  // 输入人数
  printf("人数：");
  int peopleCount = 0;
  scanf("%d", &peopleCount);

  // 初始化Team
  person *first = initTeam(peopleCount);
  if (first == NULL) {
    printf("err: main init team failed.\n");
    return 1;
  }

  int count = 0;
  person *currunt = first;
  person *temp = NULL;
  while (1) {
    if (currunt) {
      if (currunt->prev == NULL && currunt->next == NULL) {
        break;
      }
      if (count == 2) {
        // printf("删除%d\n", currunt->id);
        temp = currunt->next;
        first = deleteTeamEle(currunt->id, first);
        currunt = temp;
        count = 0;
        continue;
      }
      currunt = currunt->next;
      count++;
    } else {
      currunt = first;
    }
  }

  printf("赢下来的人的id: %d\n", first->id);

  freeTeam(first);
  first = NULL;

  return 0;
}
