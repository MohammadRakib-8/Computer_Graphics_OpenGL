#include <windows.h>
#include <GL/glut.h>

void initGL() {
    glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
    gluOrtho2D(380,-20, -20, 350);
}

void drawText(int x, int y, const char *string) {
    glRasterPos2i(x, y);
    while (*string) {
        glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12, *string++);
    }
}

void display() {
    glClear(GL_COLOR_BUFFER_BIT);


    glBegin(GL_QUADS);
    glColor3f(0.0,1.0,0.0);
    glVertex2i(120, 200);
    glVertex2i(120, 0);
    glVertex2i(200, 0);
    glVertex2i(200, 200);

    glColor3f(1.0,1.0,1.0);
    glVertex2i(200, 200);
    glVertex2i(200, 0);
    glVertex2i(280, 0);
    glVertex2i(280, 200);

    glColor3f(1.0,0.0,0.0);
    glVertex2i(280, 200);
    glVertex2i(280, 0);
    glVertex2i(360, 0);
    glVertex2i(360, 200);
    glEnd();


    glColor3f(0.0, 0.0, 0.0);
    drawText(350,230, "ITALY");

    glFlush();
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutCreateWindow("Vertex, Primitive & Color");
    glutInitWindowSize(480, 480);
    glutInitWindowPosition(50, 50);
    glutDisplayFunc(display);
    initGL();
    glutMainLoop();
    return 0;
}
