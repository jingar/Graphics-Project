#include <stdlib.h>
#include <GL/glut.h>
#include <math.h>
#include <stdio.h>

//Vertice 1 (x1, y1, z1);
//Vertice 2 (x2, y1, z1);
//Vertice 3 (x1, y2, z1);
//Vertice 4 (x2, y2, z1);
//Vertice 5 (x1, y1, z2);
//Vertice 6 (x2, y1, z2);
//Vertice 7 (x1, y2, z2);
//Vertice 8 (x2, y2, z2);

void drawCube()
{
		//cube centered on the origin
		double x1, y1, z1, x2, y2, z2;
		x1 = -0.5;
		y1 = -0.5;
		z1 = -0.5;
		x2 = 0.5;
		y2 = 0.5;
		z2 = 0.5;
		
		//Front face, Vertice 1 -> 2 -> 4 -> 3
		glBegin(GL_POLYGON);
			glColor3f(1,0,0);
			glVertex3f(x1, y1, z1);
			glVertex3f(x2, y1, z1);
			glVertex3f(x2, y2, z1);
			glVertex3f(x1, y2, z1);
		glEnd();
		//Back face, Vertice 5 -> 6 -> 8 -> 7
		glBegin(GL_POLYGON);
			glColor3f(1,0,0);
			glVertex3f(x1, y1, z2);
			glVertex3f(x2, y1, z2);
			glVertex3f(x2, y2, z2);
			glVertex3f(x1, y2, z2);
		glEnd();
		//Left face, Vertice 1 -> 5 -> 7 -> 3
		glBegin(GL_POLYGON);
			glColor3f(0,1,0);
			glVertex3f(x1, y1, z1);
			glVertex3f(x1, y1, z2);
			glVertex3f(x1, y2, z2);
			glVertex3f(x1, y2, z1);
		glEnd();
		//Right face, Vertice 2 -> 6 -> 8 -> 7
		glBegin(GL_POLYGON);
			glColor3f(0,1,0);
			glVertex3f(x2, y1, z1);
			glVertex3f(x2, y1, z2);
			glVertex3f(x2, y2, z2);
			glVertex3f(x2, y2, z1);
		glEnd();
		//Top face, Vertice 3 -> 4 -> 8 -> 7
		glBegin(GL_POLYGON);
			glColor3f(0,0,1);
			glVertex3f(x1, y2, z1);
			glVertex3f(x2, y2, z1);
			glVertex3f(x2, y2, z2);
			glVertex3f(x1, y2, z2);
		glEnd();
		//Bottom face, Vertice 1 -> 2 -> 6 -> 5
		glBegin(GL_POLYGON);
			glColor3f(0,0,1);
			glVertex3f(x1, y1, z1);
			glVertex3f(x2, y1, z1);
			glVertex3f(x2, y1, z2);
			glVertex3f(x1, y1, z2);
		glEnd();
}
