// second-project.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"


// test1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <GL/glut.h>
#include <math.h>
const int n = 1000;
const GLfloat R = 1.0f;
const float pi = 3.1415926;
const int number = 20;



void myDisplay(void)
{
	int i, j;
	glClear(GL_COLOR_BUFFER_BIT);
	glBegin(GL_LINE_LOOP);
	glColor3f(1.0f, 0.0f, 0.0f);
	for (i = 0; i<n; i++)
		glVertex2f(R*cos(i * 2 * pi / n), R*sin(i * 2 * pi / n));
	glEnd();
	glLineWidth(2);
	glBegin(GL_LINES);
	glColor3f(1.0f, 0.0f, 0.0f);
	for (i = 0; i<number; i++)
	{
		for (j = i + 1; j<number; j++)
		{
			glVertex2f(R*cos(i * 2 * pi / number), R*sin(i * 2 * pi / number));
			glVertex2f(R*cos(j * 2 * pi / number), R*sin(j * 2 * pi / number));
		}
	}
	glEnd();
	glFlush();
}

int main(int argc, char *argv[])

{

	glutInit(&argc, argv);

	glutInitDisplayMode(GLUT_RGB | GLUT_SINGLE);

	glutInitWindowPosition(100, 100);

	glutInitWindowSize(1000, 1000);

	glutCreateWindow("第二个OpenGL程序");

	glutDisplayFunc(&myDisplay);
	glutMainLoop();

	return 0;

}




