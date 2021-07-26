#include<windows.h>
#include <GL/glut.h>
#include <math.h>

void init(void)
{
    glClearColor(2.0, 2.0, 2.0, 2.0);

    glMatrixMode(GL_PROJECTION);
    gluOrtho2D(0, 700, 0, 700);
}

void display()
{
    float theta;
    int i;
    glClear(GL_COLOR_BUFFER_BIT);

    glColor3ub (255,220,0);
    glBegin(GL_POLYGON);
    for(i=0; i<360; i++)
    {
        theta=i*3.142/180;
        glVertex2f(350+220*cos(theta),350+220*sin(theta));
    }
    glEnd();

    glColor3ub (255,255,0);
    glBegin(GL_POLYGON);
    for(i=0; i<360; i++)
    {
        theta=i*3.142/180;
        glVertex2f(350+220*cos(theta),335+215*sin(theta));
    }
    glEnd();

    glColor3ub (0,0,0);
    glBegin(GL_POLYGON);
    for(i=0; i<360; i++)
    {
        theta=i*3.142/180;
        glVertex2f(345+155*cos(theta),350+165*sin(theta));
    }
    glEnd();

    glColor3ub (255,80,0);
    glBegin(GL_POLYGON);
    for(i=0; i<360; i++)
    {
        theta=i*3.142/180;
        glVertex2f(345+65*cos(theta),200+20*sin(theta));
    }
    glEnd();

    glColor3ub (255,255,0);
    glPointSize(35);
    glBegin(GL_POINTS);
    for(i=0; i<360; i++)
    {
        theta=i*3.142/180;
        glVertex2f(350+195*cos(theta),340+172*sin(theta));
    }
    glEnd();

    glColor3ub (255,255,0);
    glBegin(GL_POLYGON);
    for(i=0; i<360; i++)
    {
        theta=i*3.142/180;
        glVertex2f(345+195*cos(theta),345+120*sin(theta));
    }
    glEnd();

    glColor3ub (255,255,0);
    glBegin(GL_POLYGON);
    for(i=0; i<360; i++)
    {
        theta=i*3.142/180;
        glVertex2f(345+195*cos(theta),410+140*sin(theta));
    }
    glEnd();

    glColor3ub (0,0,0);
    glBegin(GL_POLYGON);
    for(i=0; i<360; i++)
    {
        theta=i*3.142/180;
        glVertex2f(240+40*cos(theta),410+30*sin(theta));
    }
    glEnd();

    glColor3ub (0,0,0);
    glBegin(GL_POLYGON);
    for(i=0; i<360; i++)
    {
        theta=i*3.142/180;
        glVertex2f(440+40*cos(theta),410+30*sin(theta));
    }
    glEnd();

    glColor3ub (255,255,0);
    glBegin(GL_POLYGON);
    for(i=0; i<360; i++)
    {
        theta=i*3.142/180;
        glVertex2f(240+45*cos(theta),400+30*sin(theta));
    }
    glEnd();

    glColor3ub (255,255,0);
    glBegin(GL_POLYGON);
    for(i=0; i<360; i++)
    {
        theta=i*3.142/180;
        glVertex2f(440+45*cos(theta),400+30*sin(theta));
    }
    glEnd();

    glColor3ub (255,255,255);
    glBegin(GL_POLYGON);
    for(i=0; i<360; i++)
    {
        theta=i*3.142/180;
        glVertex2f(240+40*cos(theta),380+40*sin(theta));
    }
    glEnd();

    glColor3ub (255,255,255);
    glBegin(GL_POLYGON);
    for(i=0; i<360; i++)
    {
        theta=i*3.142/180;
        glVertex2f(440+40*cos(theta),380+40*sin(theta));
    }
    glEnd();

    glColor3ub (255,255,255);
    glBegin(GL_POLYGON);
    for(i=0; i<360; i++)
    {
        theta=i*3.142/180;
        glVertex2f(240+35*cos(theta),380+35*sin(theta));
    }
    glEnd();

    glColor3ub (255,255,255);
    glBegin(GL_POLYGON);
    for(i=0; i<360; i++)
    {
        theta=i*3.142/180;
        glVertex2f(440+35*cos(theta),380+35*sin(theta));
    }
    glEnd();

    glColor3ub (0,0,0);
    glBegin(GL_POLYGON);
    for(i=0; i<360; i++)
    {
        theta=i*3.142/180;
        glVertex2f(245+18*cos(theta),377+18*sin(theta));
    }
    glEnd();

    glColor3ub (0,0,0);
    glBegin(GL_POLYGON);
    for(i=0; i<360; i++)
    {
        theta=i*3.142/180;
        glVertex2f(450+18*cos(theta),377+18*sin(theta));
    }
    glEnd();

    glColor3ub (255,255,255);
    glBegin(GL_POLYGON);
    for(i=0; i<360; i++)
    {
        theta=i*3.142/180;
        glVertex2f(255+3*cos(theta),375+3*sin(theta));
    }
    glEnd();


    glColor3ub (255,255,255);
    glBegin(GL_POLYGON);
    for(i=0; i<360; i++)
    {
        theta=i*3.142/180;
        glVertex2f(460+3*cos(theta),375+3*sin(theta));
    }
    glEnd();


    glFlush();
}

int main(int argc, char* argv[])
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);

    glutInitWindowPosition(50, 50);
    glutInitWindowSize(1200, 900);
    glutCreateWindow("Jubayer Ahmmod Shuvo_G_181-15-10807");

    init();
    glutDisplayFunc(display);
    glutMainLoop();

    return 0;
}
