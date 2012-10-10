#include <stdlib.h>
#include <GL/glut.h>
#include <math.h>
#include <stdio.h>
#include "Cube.h"
#include "3DCurve.h"
void drawN()
{	
	
	
	
	glPushMatrix();
	

//////////////////////////////////////////////////////	
	// |
	glPushMatrix();
	glScalef(1,8,1);
	drawCube();
	glPopMatrix();
//////////////////////////////////////////////////////	
	glPushMatrix();
	glTranslatef(1.5,4,0);
	glRotatef(180,0,1,0);
	draw3Dcurve  (1.0,          //depth  
				  1.0,          //inner radius
				  2.0,          //outer radius
				  0.0,          //start angle
				  160,  //stop angle
				  5.0);         //anular increments
	glPopMatrix();
//////////////////////////////////////////////////////	
		// \ 
	glPushMatrix();
	glTranslatef(4.2,1,0);
	glRotatef(20,0,0,1);
	glScalef(1,8,1);
	drawCube();
	glPopMatrix();
	
	
	
//////////////////////////////////////////////////////	
	glPushMatrix();
	glTranslatef(6.86,-2,0);
	glRotatef(180,1,0,0);
	draw3Dcurve  (1.0,          //depth  
				  1.0,          //inner radius
				  2.0,          //outer radius
				  0.0,          //start angle
				  160,  //stop angle
				  5.0);         //anular increments
	glPopMatrix();
	
//////////////////////////////////////////////////////	
	// |
	glPushMatrix();
	glTranslatef(8.35,2,0);
	glScalef(1,8,1);
	drawCube();
	glPopMatrix();
	
	
	
	glPopMatrix();
}
