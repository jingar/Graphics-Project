#include <stdlib.h>
#include <GL/glut.h>
#include <math.h>
#include <stdio.h>
#include "Cube.h"
#include "3DCurve.h"
void drawP()
{
	glPushMatrix();
		glTranslatef(0.5, 4, 0.5);
		glRotatef(0, 0, 0, 0);
		glScalef(1, 8, 1);
		drawCube();
	glPopMatrix();
	
	glPushMatrix();
		glTranslatef(1, 6, 0.5);
		glRotatef(270, 0, 0, 1);
		glScalef(1, 1, 1);
		draw3Dcurve(1, 1, 2, 0.0, 180, 5.0);
	glPopMatrix();
	
	
}
