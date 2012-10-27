#include <stdlib.h>
#include <GL/glut.h>
#include <math.h>
#include <stdio.h>
#include "3DCurve.h"
#include "Cube.h"

void drawT()
{	
	glPushMatrix();
		glTranslatef(0.5,3.5,0.5);
		glScalef(1,7,1);
		drawCube();
	glPopMatrix();

	glPushMatrix();
		glTranslatef(0.5,7.5,0.5);
		glScalef(6,1,1);
		drawCube();
	glPopMatrix();
}
