#include <stdlib.h>
#include <GL/glut.h>
#include <math.h>
#include <stdio.h>
#include "Cube.h"
#include "3DCurve.h"
void drawA()

	
{	
	glPushMatrix();

	
	
	glPushMatrix();
	glTranslatef(0,0,0);
	glRotatef(-22,0,0,1);
	glScalef(1,8,1);
	drawCube();
	glPopMatrix();
	

	glPushMatrix();
	glTranslatef(1.5,3,0);
	glRotatef(65,0,0,1);
	draw3Dcurve  (1.0,          //depth  
				  0,          //inner radius
				  1.0,          //outer radius
				  0.0,          //start angle
				  55,  //stop angle
				  5.0);         //anular increments
	glPopMatrix();
	
	
	glPushMatrix();
	glTranslatef(3,0,0);
	glRotatef(22,0,0,1);
	glScalef(1,8,1);
	drawCube();
	glPopMatrix();
	
	glPushMatrix();
	glTranslatef(1.5,-1,0);
	glScalef(4,1,1);
	drawCube();
	glPopMatrix();
	
	glPopMatrix();
	
}
