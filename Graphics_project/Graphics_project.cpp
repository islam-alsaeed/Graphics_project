#include<GL/glut.h>
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
void WC() {
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
	glBegin(GL_QUAD_STRIP);
	glVertex2f(0, -.05);
	glVertex2f(.05, -.05);
	glVertex2f(.1, -.45);
	glVertex2f(.15, -.45);
	glVertex2f(.2, -.1);
	glVertex2f(.25, -.1);
	glVertex2f(.3, -.450);
	glVertex2f(.350, -.450);
	glVertex2f(.4, -.05);
	glVertex2f(.450, -.05);
	glEnd();
}
void X() {
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
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(1.0f, 0.0f, 1.0f);

	//A();
//	N();

	WC();
	ws();
//	X();
	//M();
	glFlush();
}
void main(int argc,char** argv) {
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RED);
	glutInitWindowPosition(10,10);
	glutInitWindowSize(1280,720);
	glutCreateWindow("Graphics Project");
	glutDisplayFunc(display);
	glutMainLoop();
}