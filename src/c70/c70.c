// 题目：写一个函数，求一个字符串的长度，在 main
// 函数中输入字符串，并输出其长度。

#include <stdio.h>

int getStrLen(char *str) {
  if (str == NULL) {
    return 0;
  }
  int length = 0;
  int i = 0;
  while (1) {
    if (str[i] == '\0') {
      break;
    } else {
      i++;
      length++;
    }
  }
  return length;
}

int main(void) {
  // 输入字符串
  char str[] = "beautiful world. beautiful boy.";
  printf("%s\n", str);

  int length = getStrLen(str);

  printf("长度为：%d\n", length);

  return 0;
}
