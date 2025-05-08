// 题目：有五个学生，每个学生有3门课的成绩，
// 从键盘输入以上数据（包括学生号，姓名，三门课成绩），计算出平均成绩，况原有的数据和计算出的平均分数存放在磁盘文件"stud"中。

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct student student;

struct student {
    int ID;
    int math;
    int english;
    int c;
    int avarGrade;
    char name[20];
};

void calulateAvar(student *stu) {
    if (!stu) {
        return;
    }
    stu->avarGrade = (stu->c + stu->english + stu->math) / 3;
}

int main(void) {
    student stu[5] = {0};
    for (int i = 0; i < 5; i++) {
        printf("现在输入第%d个学生数据：", i + 1);
        printf("ID: ");
        scanf("%d", &stu[i].ID);
        printf("姓名: ");
        do {
            ;
        } while (getchar() != '\n');
        fgets(stu[i].name, 20, stdin);
        stu[i].name[strcspn(stu[i].name, "\n")] = '\0';
        printf("math: ");
        scanf("%d", &stu[i].math);
        printf("english: ");
        scanf("%d", &stu[i].english);
        printf("c: ");
        scanf("%d", &stu[i].c);
        printf("--------------------------\n");
    }

    for (int i = 0; i < 5; i++) {
        calulateAvar(&stu[i]);
    }

    FILE *file = NULL;
    file = fopen("stud", "w");
    if (!file) {
        printf("can not open file.\n");
        exit(1);
    }

    fprintf(file, "NAME\tID\tMATH\tENGLISH\tC\tAVAR\n");
    for (int i = 0; i < 5; i++) {
        fprintf(file, "%s\t%d\t%d\t%d\t%d\t%d\n", stu[i].name, stu[i].ID,
                stu[i].math, stu[i].english, stu[i].c, stu[i].avarGrade);
    }

    fclose(file);

    return 0;
}
