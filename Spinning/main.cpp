#include <windows.h>
#include <GL/glut.h>
#include <stdlib.h>
#include <stdlib.h>
#include <math.h>

static GLfloat spin = 0.0;
static float  tx  =  0.0;
static float  ty  =  0.0;

void display(void)
{
    glClear(GL_COLOR_BUFFER_BIT);

  glPushMatrix();

  glRotatef(spin, 0.0, 0.0, 1.0);
  glColor3f(0.0, 1.0, 0.0);


  glTranslatef(tx,ty,0);

    glRectf(-110.0, -25.0, -70.0, 25.0);
    glRectf(70.0, -25.0, 110.0, 25.0);

    glColor3f(1.0, 1.0, 1.0);


  glTranslatef(tx,ty,0);

    glRectf(-70.0, -15.0, 70.0, 15.0);


  glPopMatrix();

    glColor3f(1.0, 1.0, 0.0);
  glRectf(-35.0, -35.0, 35.0, 35.0);

  glColor3f(0.0, 1.0, 0.0);
  glRectf(-15.0, -75.0, 15.0, -35.0);

  glColor3f(0.0, 0.6, 0.8);
  glRectf(-25.0, -125.0, 25.0, -75.0);

  glFlush();
}

void spinDisplay_left(void)
{
   spin = spin + 1;
   if (spin > 360.0)
      spin = spin - 360.0;
   glutPostRedisplay();
}

void spinDisplay_right(void)
{
   spin = spin - 1;
   if (spin > 360.0)
      spin = spin - 360.0;
   glutPostRedisplay();
}


void init(void)
{
  glClearColor( 0,0,0,0);
  glOrtho(-150.0, 150.0, -150.0, 150.0, -1.0, 1.0);
}


void my_keyboard(unsigned char key, int x, int y)
{

  switch (key) {

    case 'l':
      spinDisplay_left();
      break;

    case 'r':
      spinDisplay_right();
      break;


    case 's':
       glutIdleFunc(NULL);
       break;

    default:
      break;
  }
}

void my_mouse(int button, int state, int x, int y)
{
   switch (button) {
      case GLUT_LEFT_BUTTON:
            glutIdleFunc(spinDisplay_left);
         break;
      case GLUT_MIDDLE_BUTTON:
      glutIdleFunc(NULL);
      break;
      case GLUT_RIGHT_BUTTON:
      glutIdleFunc(spinDisplay_right);
         break;
      default:
         break;
   }
}

int main(int argc, char** argv)
{
    glutInit(&argc, argv);
  glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
  glutInitWindowSize (500, 500);
  glutInitWindowPosition (100, 100);
  glutCreateWindow("Jubayer Ahmmod Shuvo_181-15-10807_G");
  init();

  glutDisplayFunc(display);
  glutKeyboardFunc(my_keyboard);
  glutMouseFunc(my_mouse);
  glutMainLoop();
  return 0;
}
