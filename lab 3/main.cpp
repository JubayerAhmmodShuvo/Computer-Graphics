#include <GL/gl.h>
#include <GL/glut.h>
void display(void)
{

#include<stdio.h>

void midPointCircleDraw(int x_centre, int y_centre, int r)
{
	int x = r, y = 0;


	printf("(%d, %d) ", x + x_centre, y + y_centre);

	if (r > 0)
	{
		printf("(%d, %d) ", x + x_centre, -y + y_centre);
		printf("(%d, %d) ", y + x_centre, x + y_centre);
		printf("(%d, %d)\n", -y + x_centre, x + y_centre);
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

		printf("(%d, %d) ", x + x_centre, y + y_centre);
		printf("(%d, %d) ", -x + x_centre, y + y_centre);
		printf("(%d, %d) ", x + x_centre, -y + y_centre);
		printf("(%d, %d)\n", -x + x_centre, -y + y_centre);

		if (x != y)
		{
			printf("(%d, %d) ", y + x_centre, x + y_centre);
			printf("(%d, %d) ", -y + x_centre, x + y_centre);
			printf("(%d, %d) ", y + x_centre, -x + y_centre);
			printf("(%d, %d)\n", -y + x_centre, -x + y_centre);
		}
	}
}


int main()
{
	int P, Q, R;

    printf("Enter Center: ");
    scanf("%d %d", &P, &Q);

    printf("Enter Radius: ");
    scanf("%d", &R);

	midPointCircleDraw(P, Q, R);
	return 0;
}

    }
}

//glFlush ();
}
void init (void)
{

glClearColor (0.0, 0.0, 0.0, 0.0);

glMatrixMode(GL_PROJECTION);
glLoadIdentity();
gluOrtho2D(0.0,800.0,0.0,800.0);
}

int main(int argc, char** argv)
{
glutInit(&argc, argv);
glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
glutInitWindowSize (1600, 900);
glutInitWindowPosition (100, 100);
glutCreateWindow ("181-15-10807 Jubayer Ahmmod Shuvo G");
init ();
glutDisplayFunc(display);
glutMainLoop();
return 0; /* ISO C requires main to return int. */
}
