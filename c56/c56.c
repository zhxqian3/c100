// 题目：画图，学用circle画圆形。

#include <GL/glut.h>
#include <math.h>
// #define M_PI 3.141592653589793

void display()
{
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(1.0, 1.0, 1.0); // 设置白色绘制颜色
    glBegin(GL_LINE_LOOP);    // 使用线段连接圆点

    int r = 50;
    float x, y;
    for (float angle = 0; angle < 360; angle += 1)
    {
        x = r * cos(angle * M_PI / 180.0);
        y = r * sin(angle * M_PI / 180.0);
        glVertex2f(x / 100.0, y / 100.0); // 归一化处理，使圆适应窗口
    }

    glEnd();
    glFlush();
}

void init()
{
    glViewport(0, 0, 800, 800); // 设置窗口大小，不用 `gluOrtho2D`
}

int main(int argc, char **argv)
{
    glutInit(&argc, argv);
    glutInitWindowSize(800, 800);
    glutCreateWindow("Circle");
    init();
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}
