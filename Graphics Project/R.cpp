#include "R.h"

void drawR()
{
	glPushMatrix();
		drawP();
	glPopMatrix();
	
	glPushMatrix();
		glTranslatef(1.75, 2.45, 0.5);
		glRotatef(115, 0, 0, 1);
		glScalef(5, 1, 1);
		drawCube();
	glPopMatrix();
	
	glutSwapBuffers();
}
