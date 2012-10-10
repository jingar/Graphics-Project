#include <stdlib.h>
#include <GL/glut.h>
#include <math.h>
#include <stdio.h>
#include "Cube.h"
#include "3DCurve.h"
void drawT()

	
{	
	
	glPushMatrix();

	
	glPushMatrix();
	glTranslatef(0,0,0);
	glScalef(1,7,1);
	drawCube();
	glPopMatrix();
	
	glPushMatrix();
	glTranslatef(0,3.5,0);
	glScalef(6,1,1);
	drawCube();
	glPopMatrix();
	

	
	glPopMatrix();
	
}
