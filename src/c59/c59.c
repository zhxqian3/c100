// 题目：画图，综合例子。（在TC中实现）。
#include <GL/glut.h>
#include <math.h>

#define PAI 3.1415926
#define B 0.809

int frame = 0;

void display() {
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(1.0, 1.0, 1.0);  // 设置白色线条

    glBegin(GL_LINES);
    for (int i = 0; i < 16; i++) {  // 画16条线
        float a = (PAI / 8) * i + (PAI / 180) * frame; // 旋转角度
        float x = cos(a) * 0.8;
        float y = sin(a) * 0.8 * B;

        glVertex2f(0.0, 0.0); // 线的起点（中心）
        glVertex2f(x, y);     // 线的终点（外边缘）
    }
    glEnd();

    glutSwapBuffers();
}

void timer() {
    frame += 2; // 让放射线旋转
    glutPostRedisplay();
    glutTimerFunc(16, timer, 0);
}

void init() {
    glViewport(0, 0, 800, 800);  
    glMatrixMode(GL_MODELVIEW);  
    glLoadIdentity();            
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
    glutInitWindowSize(600, 600);
    glutCreateWindow("Rotating Lines");

    init();
    glutDisplayFunc(display);
    glutTimerFunc(16, timer, 0);
    glutMainLoop();

    return 0;
}
