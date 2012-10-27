#include <stdlib.h>
#include <GL/glut.h>
#include <math.h>
#include <stdio.h>
#include "3DCurve.h"
#include "Cube.h"

void drawM()
{
	glPushMatrix();
		glTranslatef(0.5, 4, 0.5);
		glRotatef(0, 0, 0, 0);
		glScalef(1, 8, 1);
		drawCube();
	glPopMatrix();
	
	glPushMatrix();
		glTranslatef(2.0, 6.3, 0.5);
		glRotatef(45, 0, 0, 1);
		glScalef(1, 3.8, 1);
		drawCube();
	glPopMatrix();
	
	glPushMatrix();
		glTranslatef(4, 6.3, 0.5);
		glRotatef(135, 0, 0, 1);
		glScalef(1, 3.8, 1);
		drawCube();
	glPopMatrix();
	
	glPushMatrix();
		glTranslatef(5.5, 4, 0.5);
		glRotatef(0, 0, 0, 0);
		glScalef(1, 8, 1);
		drawCube();
	glPopMatrix();
}
