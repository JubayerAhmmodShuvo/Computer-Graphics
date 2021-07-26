#include <GL/gl.h>
#include <GL/glut.h>
void display(void)
{
/* clear all pixels */
glClear (GL_COLOR_BUFFER_BIT);

    //Axis
    glColor3ub(0, 0,0) ;
    glBegin(GL_LINES);
    //Line Parallel to Y-axis
    glVertex2d(0, -500);
    glVertex2d(0, 500);
    //Line Parallel to X-axis
    glVertex2d(500, 0);
    glVertex2d(-500, 0);
    glEnd();
    //Axis

glColor3ub (0, 0, 0);
glBegin(GL_POLYGON);
glVertex2d (0, 16);
glVertex2d (2, 16);
glVertex2d (2, 14);
glVertex2d (0, 14);
glEnd();

glColor3ub (255, 255, 255);
glBegin(GL_POLYGON);
glVertex2d (2, 16);
glVertex2d (4, 16);
glVertex2d (4, 14);
glVertex2d (2, 14);
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
/*
* Declare initial window size, position, and display mode
* (single buffer and RGBA). Open window with "hello"
* in its title bar. Call initialization routines.
* Register callback function to display graphics.
* Enter main loop and process events.
*/
int main(int argc, char** argv)
{
glutInit(&argc, argv);
glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
glutInitWindowSize (1400, 700);
glutInitWindowPosition (100, 100);
glutCreateWindow ("181-15-10807 Jubayer Ahmmod Shuvo G");
init ();
glutDisplayFunc(display);
glutMainLoop();
return 0; /* ISO C requires main to return int. */
}

