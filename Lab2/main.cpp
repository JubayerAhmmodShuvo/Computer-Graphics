#include <GL/gl.h>
#include <GL/glut.h>

void display(void)
{

    glClear (GL_COLOR_BUFFER_BIT);

    //Axis
    glColor3ub(0, 0, 255) ;
    glBegin(GL_LINES);
    //Line Parallel to Y-axis
    glVertex2d(0, -500);
    glVertex2d(0, 500);
    //Line Parallel to X-axis
    glVertex2d(500, 0);
    glVertex2d(-500, 0);
    glEnd();
    //Axis

    //WHITE STAR
    glColor3ub(255, 255, 255);
    glBegin(GL_POLYGON);

   glVertex2d(10 ,5);
    glVertex2d(20,5);
    glVertex2d(20, -5);
    glVertex2d(10, -5);
    glVertex2d(10, 5);
    glVertex2d(15, 15);
    glVertex2d(20, 5);
    glVertex2d(20, 5);
    glVertex2d(30, 0);
    glVertex2d(20, -5);
    glVertex2d(20, -5);
    glVertex2d(15,-15);
    glVertex2d(10, -5);
    glVertex2d(10, -5);
    glVertex2d(0, 0);
    glVertex2d(10, 5);


    glEnd();

 //RED STAR
    glColor3ub(255, 0, 0);
    glBegin(GL_POLYGON);

    glVertex2d(-5 ,-10);
    glVertex2d(5,-10);
    glVertex2d(5, -20);
    glVertex2d(-5, -20);
    glVertex2d(-5, -10);
    glVertex2d(0, 0);
    glVertex2d(5, -10);
    glVertex2d(5, -10);
    glVertex2d(15, -15);
    glVertex2d(5, -20);
    glVertex2d(5, -20);
    glVertex2d(0,-30);
    glVertex2d(-5, -20);
    glVertex2d(-5, -20);
    glVertex2d(-15, -15);
    glVertex2d(-5, -10);

    glEnd();

    //GREEN STAR
    glColor3ub(0, 255, 0);
    glBegin(GL_POLYGON);

    glVertex2d(-20 ,5);
    glVertex2d(-10, 5);
    glVertex2d(-10, -5);
    glVertex2d( -20, -5);
    glVertex2d(-20 ,5);
    glVertex2d(-15, 15);
    glVertex2d(-10 ,5);
    glVertex2d(-10, 5);
    glVertex2d(0, 0);
    glVertex2d(-10, -5);
    glVertex2d(-10, -5);
    glVertex2d(-15,-15);
    glVertex2d(-20, -5);
    glVertex2d(-20, -5);
    glVertex2d(-30 , 0);
    glVertex2d(-20, 5);

    glEnd();

     //BLUE STAR
    glColor3ub(0, 0, 255);
    glBegin(GL_POLYGON);

    glVertex2d(-5, 20);
    glVertex2d(5, 20);
    glVertex2d(5, 10);
    glVertex2d( -5 , 10);
    glVertex2d(-5 ,20);
    glVertex2d(0, 30);
    glVertex2d(5 ,20);
    glVertex2d(5, 20);
    glVertex2d(15, 15);
    glVertex2d(5, 10);
    glVertex2d(5, 10);
    glVertex2d(0,0);
    glVertex2d(-5, 10);
    glVertex2d(-5, 10);
    glVertex2d(-15 , 15);
    glVertex2d(-5, 20);
    glEnd();

    glFlush ();
}

void init (void)
{
    glClearColor (0.0, 0.0, 0.0, 0.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(-100, 100, -100, 100);
}

int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize (1300, 1100);
    glutInitWindowPosition (100, 100);
    glutCreateWindow ("Jubayer Ahmmod Shuvo 181-15-10807 G");
    init ();
    glutDisplayFunc(display);
    glutMainLoop();

    return 0;
}
