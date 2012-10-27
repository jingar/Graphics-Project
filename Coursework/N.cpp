#include <stdlib.h>
#include <GL/glut.h>
#include <math.h>
#include <stdio.h>
#include "3DCurve.h"
#include "Cube.h"

void drawN()
{	
	glPushMatrix();
		glTranslatef(0.5,3,0.5);
		glScalef(1,6,1);
		drawCube();
	glPopMatrix();

	glPushMatrix();
		glTranslatef(2,6,0.5);
		glRotatef(180,0,1,0);
		draw3Dcurve  (1.0,          //depth  
					  1.0,          //inner radius
					  2.0,          //outer radius
					  0.0,          //start angle
					  160,  		//stop angle
					  5.0);         //anular increments
	glPopMatrix();

	glPushMatrix();
		glTranslatef(4.33,4,0.5);
		glRotatef(20,0,0,1);
		glScalef(1,5.5,1);
		drawCube();
	glPopMatrix();

	glPushMatrix();
		glTranslatef(6.67,2,0.5);
		glRotatef(180,1,0,0);
		draw3Dcurve  (1.0,          //depth  
					  1.0,          //inner radius
					  2.0,          //outer radius
					  0.0,          //start angle
					  160,  		//stop angle
					  5.0);         //anular increments
	glPopMatrix();
 
	glPushMatrix();
		glTranslatef(8.16,4.9,0.5);
		glScalef(1,6,1);
		drawCube();
	glPopMatrix();
}
