#include <stdlib.h>
#include <GL/glut.h>
#include <math.h>
#include <stdio.h>
#include "3DCurve.h"
#include "Cube.h"

void drawA()
{	
	glPushMatrix();
		glTranslatef(1.1,3.9,0.5);
		glRotatef(-22,0,0,1);
		glScalef(1,8,1);
		drawCube();
	glPopMatrix();
	
	glPushMatrix();
		glTranslatef(2.6,6.9,0.5);
		glRotatef(65,0,0,1);
		draw3Dcurve  (1.0,          //depth  
					  0,          	//inner radius
					  1.0,          //outer radius
					  0.0,          //start angle
					  55,  			//stop angle
					  5.0);         //anular increments
	glPopMatrix();
	
	glPushMatrix();
		glTranslatef(4.1,3.9,0.5);
		glRotatef(22,0,0,1);
		glScalef(1,8,1);
		drawCube();
	glPopMatrix();
	
	glPushMatrix();
		glTranslatef(2.6,2.9,0.5);
		glScalef(4,1,1);
		drawCube();
	glPopMatrix();
}
