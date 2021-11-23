#include<GL/glut.h>
double rotate_y = 0, rotate_x = 0;
double  translate_x = 0, translate_y = 0;
double scale_x = 1, scale_y = 1,scale_z=1;
double small_factor = .6;
void specialKeys(int key, int x, int y) {
	//Right Arrow (rotate right - increase by 5 degree)
	if (key == GLUT_KEY_RIGHT)
		rotate_y += 5;

	//Left Arrow (rotate left - decrease by 5 degree)
	else if (key == GLUT_KEY_LEFT)
		rotate_y -= 5;

	//Up Arrow (rotate upwards - increase by 5 degree)
	else if (key == GLUT_KEY_UP)
		rotate_x += 5;

	//Down Arrow (rotate downwards - decrease by 5 degree)
	else if (key == GLUT_KEY_DOWN)
		rotate_x -= 5;

	glutPostRedisplay();
}

void A() {
	glBegin(GL_QUAD_STRIP);
	glVertex2f(-.3, 0);
	glVertex2f(-.2, 0);
	glVertex2f(-.03, .9);
	glVertex2f(.03, .9);
	glVertex2f(.2, 0);
	glVertex2f(.3, 0);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2f(-0.14,0.3);
	glVertex2f(-0.15, 0.2);
	glVertex2f(0.15, 0.2);
	glVertex2f(0.14, 0.3);
	glEnd();
}
void H() {
	glBegin(GL_QUADS);
	glVertex2f(-.8, -.1);
	glVertex2f(-.7, -.1);
	glVertex2f(-.7, -.95);
	glVertex2f(-.8, -.95);
	glEnd();

	glBegin(GL_QUADS);
	glVertex2f(-.7,-.45);
	glVertex2f(-.7,-.6);
	glVertex2f(-.3,-.6);
	glVertex2f(-.3,-.45);
	glEnd();

	glBegin(GL_QUADS);
	glVertex2f(-.4, -.1);
	glVertex2f(-.3, -.1);
	glVertex2f(-.3, -.95);
	glVertex2f(-.4, -.95);
	glEnd(); 

}
void WC3D() {//drawing letter capital W in 3D
	glBegin(GL_QUAD_STRIP);
	float startingPoint_x = -.9;
	float startingPoint_y = -.1;
	float zAxis = .1;
	float changeFactor = .1;
	//back
	glVertex3f(startingPoint_x,startingPoint_y,zAxis);
//	glVertex3f(-.9, -.1, .1);
	glVertex3f(-.8, -.1, .1);
	glVertex3f(-.7, -.9, .1);
	glVertex3f(-.6, -.9, .1);
	glVertex3f(-.5, -.2, .1);
	glVertex3f(-.4, -.2, .1);
	glVertex3f(-.3, -.9, .1);
	glVertex3f(-.2, -.9, .1);
	glVertex3f(-.1, -.1, .1);
	glVertex3f(0, -.1, .1);
	glEnd();

	//front
	glBegin(GL_QUAD_STRIP);
	glVertex3f(-.9, -.1, -.1);
	glVertex3f(-.8, -.1, -.1);
	glVertex3f(-.7, -.9, -.1);
	glVertex3f(-.6, -.9, -.1);
	glVertex3f(-.5, -.2, -.1);
	glVertex3f(-.4, -.2, -.1);
	glVertex3f(-.3, -.9, -.1);
	glVertex3f(-.2, -.9, -.1);
	glVertex3f(-.1, -.1, -.1);
	glVertex3f(0, -.1, -.1);
	glEnd();

	//top
	glBegin(GL_QUAD_STRIP);
	glColor3f(0, 0, 1);
	glVertex3f(-.9,-.1,-.1);
	glVertex3f(-.9, -.1, .1);
	glVertex3f(-.8, -.1, -.1);
	glVertex3f(-.8, -.1, .1);

	glVertex3f(-.6, -.9, -.1);
	glVertex3f(-.6, -.9, .1);

	//bottom
	glVertex3f(-.4, -.2,-.1);
	glVertex3f(-.4, -.2, .1);

	//top
	glVertex3f(-.2, -.9, -.1);
	glVertex3f(-.2, -.9, .1);

	//right side
	glVertex3f(0, -.1, -.1);
	glVertex3f(0, -.1, .1);

	//top
	glVertex3f(-.1, -.1, -.1);
	glVertex3f(-.1, -.1, .1);

	glVertex3f(-.3, -.9, -.1);
	glVertex3f(-.3, -.9, .1);

	//bottom
	glVertex3f(-.5, -.2, -.1);
	glVertex3f(-.5, -.2, .1);

	//left side
	glVertex3f(-.7, -.9, -.1);
	glVertex3f(-.7, -.9, .1);

	glVertex3f(-.9, -.1, -.1);
	glVertex3f(-.9, -.1, .1);
	glEnd();

	//bottom
	glBegin(GL_QUADS);
	glVertex3f(-.7, -.9, -.1);
	glVertex3f(-.7, -.9, .1);
	glVertex3f(-.6, -.9, .1);
	glVertex3f(-.6, -.9, -.1);

	glVertex3f(-.3, -.9, -.1);
	glVertex3f(-.3, -.9, .1);
	glVertex3f(-.2, -.9, .1);
	glVertex3f(-.2, -.9, -.1);

	//top
	glVertex3f(-.5, -.2, -.1);
	glVertex3f(-.5, -.2, .1);
	glVertex3f(-.4, -.2, .1);
	glVertex3f(-.4, -.2, -.1);

	glEnd();
}
void ws3D() {
	glScalef(small_factor,small_factor,small_factor);
	WC3D();
}
void WC() {//drawing letter capital W in 2D
	glBegin(GL_QUAD_STRIP);
	glVertex2f(-.9, -.1);
	glVertex2f(-.8, -.1);
	glVertex2f(-.7, -.9);
	glVertex2f(-.6, -.9);
	glVertex2f(-.5, -.2);
	glVertex2f(-.4, -.2);
	glVertex2f(-.3, -.9);
	glVertex2f(-.2, -.9);
	glVertex2f(-.1, -.1);
	glVertex2f(0,-.1);

	glEnd();
}
void ws() {
	glScalef(small_factor,small_factor,0);
	WC();
}
void XC3D() {//drawing letter capital X in 3D
	//back
	glBegin(GL_QUADS);
	glVertex3f(0, .9,.1);
	glVertex3f(.1, .9,.1);
	glVertex3f(.6, .1,.1);
	glVertex3f(.5, .1,.1);

	glVertex3f(.6, .9,.1);
	glVertex3f(.5, .9,.1);
	glVertex3f(0, .1,.1);
	glVertex3f(.1, .1,.1);

	//FRONT
	glVertex3f(0, .9, -.1);
	glVertex3f(.1, .9, -.1);
	glVertex3f(.6, .1, -.1);
	glVertex3f(.5, .1, -.1);

	glVertex3f(.6, .9, -.1);
	glVertex3f(.5, .9, -.1);
	glVertex3f(0, .1, -.1);
	glVertex3f(.1, .1, -.1);
	glEnd();


	glBegin(GL_QUAD_STRIP);
	//top
	glVertex3f(0, .9, .1);
	glVertex3f(0, .9, -.1);
	glVertex3f(.1, .9, .1);
	glVertex3f(.1, .9, -.1);

	//right side
	glColor3f(1,0,0);
	glVertex3f(.6,.1,.1);
	glVertex3f(.6,.1,-.1);

	//bottom
	glVertex3f(.5, .1, .1);
	glVertex3f(.5, .1, -.1);

	//left side
	glVertex3f(0, .9, .1);
	glVertex3f(0, .9, -.1);
	glEnd();

	glBegin(GL_QUAD_STRIP);
	//top
	glVertex3f(.6,.9,.1);
	glVertex3f(.6, .9, -.1);
	
	glVertex3f(.5, .9, .1);
	glVertex3f(.5, .9, -.1);

	//left side
	glVertex3f(0, .1, .1);
	glVertex3f(0, .1, -.1);

	//bottom
	glVertex3f(.1, .1, .1);
	glVertex3f(.1, .1, -.1);

	//right side
	glVertex3f(.6, .9, .1);
	glVertex3f(.6, .9, -.1);

	glVertex3f(.5, .9, .2);
	glEnd();
}
void xs3D() {//drawing letter small x in 3D
	glScalef(small_factor,small_factor,small_factor);
	XC3D();
}
void XC() {//drawing letter capital X in 2D
	glBegin(GL_QUADS);
	glVertex2f(0,.9);
	glVertex2f(.1,.9);
	glVertex2f(.6, .1);
	glVertex2f(.5,.1);

	glVertex2f(.6, .9);
	glVertex2f(.5, .9);
	glVertex2f(0, .1);
	glVertex2f(.1, .1);
	glEnd();
}
void xs() {//drawing letter small x in 2D
	glScalef(small_factor,small_factor,0);
	XC();
}
void M() {
	glBegin(GL_QUAD_STRIP);
	glVertex2f(-.9, .1);
	glVertex2f(-.8,.1);
	glVertex2f(-.9,.9);
	glVertex2f(-.8,.9);
	
	glVertex2f(-.6,.2);
	glVertex2f(-.5,.2);

	glVertex2f(-.3, .9);
	glVertex2f(-.2, .9);
	glVertex2f(-.3,.1);
	glVertex2f(-.2,.1);
	
	glEnd();
}
void N() {
	glBegin(GL_QUAD_STRIP);
	glVertex2f(-.9, -.9);
	glVertex2f(-.8, -.9);
	glVertex2f(-.9, -.1);
	glVertex2f(-.8, -.1);
	glVertex2f(-.5, -.9);
	glVertex2f(-.4, -.9);
	glVertex2f(-.5, -.1);
	glVertex2f(-.4, -.1);
	glEnd();
}
void display() {
//	glClearColor(1, 1, 1, 1);
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	glColor3f(.0f, 0.0f, 1.0f);
	glLoadIdentity();

	//Rotate when user changes rotate_x and rotate_y
	//Angle, X, Y, Z
	glRotatef(rotate_x, 1, 0, 0);
	glRotatef(rotate_y, 0, 1, 0);

	glTranslatef(translate_x, translate_y, 0);
	glScalef(scale_x, scale_y, scale_z);
	//A();
	//N();
	//WC();
	//ws();
	//XC();
	//xs();
	XC3D();
	xs3D();
	//M();
	WC3D();
	ws3D();
	glFlush();
	glutSwapBuffers();

}

void keyboard_func(unsigned char key, int x, int y) {
	//For Translation
	switch (key)
	{
	case 'w':
	case 'W':
		if (translate_y > 2)
			translate_y = -2;
		else
			translate_y += 0.01;
		break;

	case 's':
	case 'S':
		if (translate_y < -2)
			translate_y = 2;
		else
			translate_y -= 0.01;
		break;

	case 'd':
	case 'D':
		if (translate_x > 2)
			translate_x = -2;
		else
			translate_x += 0.01;
		break;

	case 'a':
	case 'A':
		if (translate_y < -2)
			translate_y = 2;
		else
			translate_x -= 0.01;
		break;

		//For Scaling
	case '+':
		scale_x += 0.01;
		scale_y += 0.01;
		scale_z += 0.01;
		break;

	case '-':
		scale_x -= 0.01;
		scale_y -= 0.01;
		scale_z -= 0.01;
		break;
	}

	glutPostRedisplay();
}

void main(int argc,char** argv) {
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);
	glEnable(GL_DEPTH_TEST);
	glutInitWindowPosition(10,10);
	glutInitWindowSize(1280,720);
	glutCreateWindow("Graphics Project");
	glEnable(GL_DEPTH_TEST);

	glutDisplayFunc(display);
	glutSpecialFunc(specialKeys);	
	glutKeyboardFunc(keyboard_func);
	glutMainLoop();
}