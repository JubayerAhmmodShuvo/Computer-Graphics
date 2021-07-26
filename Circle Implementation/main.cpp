#include <GL/gl.h>
#include <GL/glut.h>
#include <stdio.h>
#include <iostream>
using namespace std;
void display(void)
{
int x_centre, y_centre, r;
cout << "Enter center points: ";
cin >> x_centre;
cin >> y_centre;
cout << "Enter radius: ";
cin >> r;
int x = r, y = 0;
glClear(GL_COLOR_BUFFER_BIT);
glPointSize(3);
glColor3ub(255, 0, 0) ;
glBegin(GL_LINES);
glVertex2d(0, -500);
glVertex2d(0, 500);
glVertex2d(500, 0);
glVertex2d(-500, 0);
glEnd();
glBegin(GL_POINTS);
glVertex2f(x + x_centre, y + y_centre);
if (r > 0)
{
glVertex2d(x + x_centre, -y + y_centre);
glVertex2f(y + x_centre, x + y_centre);
glVertex2f(-y + x_centre, x + y_centre);
}
int P = 1 - r;
while (x > y)
{
y++;
if (P <= 0)
P = P + 2*y + 1;
else
{
x--;
P = P + 2*y - 2*x + 1;
}
if (x < y)
break;
glVertex2f(x + x_centre, y + y_centre);
glVertex2f(-x + x_centre, y + y_centre);
glVertex2f(x + x_centre, -y + y_centre);
glVertex2f(-x + x_centre, -y + y_centre);
if (x != y)
{
glVertex2f(y + x_centre, x + y_centre);
glVertex2f(-y + x_centre, x + y_centre);
glVertex2f(y + x_centre, -x + y_centre);
glVertex2f(-y + x_centre, -x + y_centre);
}
}
glEnd();
glFlush ();
}
void init (void)
{
glClearColor (0.0, 0.0, 0.0, 0.0);
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
gluOrtho2D(-200, 200, -200, 200);
}
int main(int argc, char** argv)
{
glutInit(&argc, argv);
glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
glutInitWindowSize (500, 500);
glutInitWindowPosition (200, 200);
glutCreateWindow ("Jubayer Ahmmod Shuvo_G_181-15-10807");
init ();
glutDisplayFunc(display);
glutMainLoop();
return 0;
}
