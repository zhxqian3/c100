// 题目：编写input()和output()函数输入，输出5个学生的数据记录。

#include <stdio.h>

struct student {
  char name[20];
  char sex[8];
  int age;
};

typedef struct student student;

void clean(void) {
  char ch = getchar();
  while (ch != '\n') {
    ch = getchar();
  }
}

int input(student *stu, int num) {
  if (stu == NULL) {
    printf("stu is NULL!\n");
    return 0;
  }
  for (int i = 0; i < num; i++) {
    printf("现在输入第%d个学生信息：\n", i + 1);
    printf("name: ");
    // 清除输入缓冲区
    clean();
    int index = 0;
    char ch = getchar();
    while (ch != '\n') {
      (stu + i)->name[index] = ch;
      index++;
      ch = getchar();
      if (index >= 20 - 1) {
        printf("name length > 20\n");
        return 0;
      }
    }
    (stu + i)->name[index] = '\0';
    index = 0;
    printf("sex: ");
    ch = getchar();
    while (ch != '\n') {
      (stu + i)->sex[index] = ch;
      index++;
      ch = getchar();
      if (index >= 8 - 1) {
        printf("sex length > 5\n");
        return 0;
      }
    }
    (stu + i)->sex[index] = '\0';
    printf("age: ");
    scanf("%d", &(stu + i)->age);
    printf("---------------------------\n");
  }
  return 1;
}

int output(student *stu, int num) {
  if (stu == NULL) {
    printf("err: stu is NULL.\n");
    return 0;
  }
  for (int i = 0; i < num; i++) {
    printf("第%d个学生数据：\n", i + 1);
    printf("name: %s\n", (stu + i)->name);
    printf("sex: %s\n", (stu + i)->sex);
    printf("age: %d\n", (stu + i)->age);
    printf("----------------------------\n");
  }
  return 1;
}

int main(void) {
  // 输入
  printf("输入的学生个数：");
  int num = 0;
  scanf("%d", &num);
  student stu[num];

  input(stu, num);
  printf("############\n");
  printf("#开始打印: #\n");
  printf("############\n");
  output(stu, num);
  return 0;
}
