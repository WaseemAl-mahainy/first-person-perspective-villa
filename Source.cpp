#include <GL/glut.h>
#include<math.h>
#include<mmsystem.h>
GLUquadricObj* p = gluNewQuadric();
int angle = 0, dAngle = 150;
float cx = 0, cz = 0, ex = 0, ez = 0, th = 3.14 / 2, speed = 1;
GLUquadricObj* a = gluNewQuadric();
void spacial(int key, int x, int y) {
	switch (key)
	{
	case VK_ESCAPE: /* Escape key */
		exit(0);
		break;

	case GLUT_KEY_RIGHT:
		th += 0.05;
		break;
	case GLUT_KEY_LEFT:
		th -= 0.05;
		break;
	case GLUT_KEY_UP:
		ex += speed * cos(th);
		ez += speed * sin(th);
		break;
	case GLUT_KEY_DOWN:
		ex -= speed * cos(th);
		ez -= speed * sin(th);
		break;
	default:
		break;
	}
}
float myHeight = 3;
bool light = false;
void keyboard(unsigned char key, int x, int y)
{
	switch (key)
	{
	case VK_ESCAPE: /* Escape key */
		exit(0);
		break;
	case 'd':
		th += 0.05;
		break;
	case 'a':
		th -= 0.05;
		break;
	case 'w':
		ex += speed * cos(th);
		ez += speed * sin(th);
		break;
	case 's':
		ex -= speed * cos(th);
		ez -= speed * sin(th);
		break;
	case '1':
		myHeight -= 0.2;
		break;
	case '2':
		myHeight += 0.2;
		break;
	case 'o':
		dAngle == 0 ? dAngle = 150 : dAngle = 0;
		break;

	case 'l':
		light ? light = false : light = true;
		break;
	default:
		break;
	}
}
void InitGL(void)
{
	glShadeModel(GL_SMOOTH);							// Enable Smooth Shading
	glClearColor(0.2f, 0.2f, 0.3f, 1.0f);				// Black Background
	glClearDepth(1.0f);									// Depth Buffer Setup
	glEnable(GL_DEPTH_TEST);							// Enables Depth Testing
	glDepthFunc(GL_LEQUAL);								// The Type Of Depth Testing To Do
	glHint(GL_PERSPECTIVE_CORRECTION_HINT, GL_NICEST);	// Really Nice Perspective Calculations
	glEnable(GL_BLEND);
	glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
	//LPCWSTR aaa = L"intersterller.wav";
	//PlaySound(aaa, 0, SND_LOOP | SND_ASYNC);
	glutFullScreen();

	glEnable(GL_LIGHT0);

	GLfloat di[] = { 0.2,0.2,0.2,0 };
	glLightfv(GL_LIGHT0, GL_DIFFUSE, di);

	glLightfv(GL_LIGHT0, GL_AMBIENT, di);

	GLfloat Specular[] = { 0,0,0,0 };
	glLightfv(GL_LIGHT0, GL_SPECULAR, Specular);

	glNewList(1, GL_COMPILE);



	/// ///////


	glPushMatrix();
	glColor3f(0.33, 0.209, 0.169);

	glRotatef(90, 1, 0, 0);
	gluCylinder(a, 2, 2, 15, 30, 30);

	glPopMatrix();

	////////
	glPushMatrix();

	glColor3f(0.227, 0.375, 0.04);
	glTranslatef(2, 1, 0);
	glRotatef(-90, 1, 0, 0);
	gluSphere(a, 4, 30, 30);

	glPopMatrix();
	////////////////


	glPushMatrix();

	glColor3f(0.227, 0.375, 0.04);
	glTranslatef(-2, 1, 0);
	glRotatef(-90, 1, 0, 0);
	gluSphere(a, 4, 30, 30);

	glPopMatrix();
	////////////////


	glPushMatrix();
	glColor3f(0.227, 0.375, 0.04);
	glTranslatef(0, 1, 0);
	glRotatef(-90, 1, 0, 0);
	gluSphere(a, 4, 30, 30);

	glPopMatrix();

	/// /////


	glPushMatrix();
	glColor3f(0.227, 0.375, 0.04);
	glTranslatef(0, 3, 0);
	glRotatef(-90, 1, 0, 0);
	gluSphere(a, 4, 30, 30);

	glPopMatrix();


	////////////first col
	glPushMatrix();
	glColor3f(1, 0.0313, 0);
	glTranslatef(1.5, 0, 3.5);
	glRotatef(-90, 1, 0, 0);
	gluSphere(a, 0.5, 30, 30);

	glPopMatrix();

	////////

	glPushMatrix();
	glColor3f(1, 0.0313, 0);
	glTranslatef(1.5, 2, 3.5);
	glRotatef(-90, 1, 0, 0);
	gluSphere(a, 0.5, 30, 30);

	glPopMatrix();
	///////////////
	glPushMatrix();
	glColor3f(1, 0.0313, 0);
	glTranslatef(1.5, 3.5, 3.5);
	glRotatef(-90, 1, 0, 0);
	gluSphere(a, 0.5, 30, 30);

	glPopMatrix();
	////////////////

	////////////sec col
	glPushMatrix();
	glColor3f(1, 0.0313, 0);
	glTranslatef(0, 0, 4);
	glRotatef(-90, 1, 0, 0);
	gluSphere(a, 0.5, 30, 30);

	glPopMatrix();

	////////

	glPushMatrix();
	glColor3f(1, 0.0313, 0);
	glTranslatef(0, 2, 4);
	glRotatef(-90, 1, 0, 0);
	gluSphere(a, 0.5, 30, 30);

	glPopMatrix();
	///////////////
	glPushMatrix();
	glColor3f(1, 0.0313, 0);
	glTranslatef(0, 3.5, 4);
	glRotatef(-90, 1, 0, 0);
	gluSphere(a, 0.5, 30, 30);

	glPopMatrix();
	////////////////

	////////////third col
	glPushMatrix();
	glColor3f(1, 0.0313, 0);
	glTranslatef(-1.5, 0, 3.5);
	glRotatef(-90, 1, 0, 0);
	gluSphere(a, 0.5, 30, 30);

	glPopMatrix();

	////////

	glPushMatrix();
	glColor3f(1, 0.0313, 0);
	glTranslatef(-1.5, 2, 3.5);
	glRotatef(-90, 1, 0, 0);
	gluSphere(a, 0.5, 30, 30);

	glPopMatrix();
	///////////////
	glPushMatrix();
	glColor3f(1, 0.0313, 0);
	glTranslatef(-1.5, 3.5, 3.5);
	glRotatef(-90, 1, 0, 0);
	gluSphere(a, 0.5, 30, 30);

	glPopMatrix();
	////////////////


	////////////4th col
	glPushMatrix();
	glColor3f(1, 0.0313, 0);
	glTranslatef(-3, 0, 3.5);
	glRotatef(-90, 1, 0, 0);
	gluSphere(a, 0.5, 30, 30);

	glPopMatrix();

	////////

	glPushMatrix();
	glColor3f(1, 0.0313, 0);
	glTranslatef(-3, 2, 3.5);
	glRotatef(-90, 1, 0, 0);
	gluSphere(a, 0.5, 30, 30);

	glPopMatrix();
	///////////////
	glPushMatrix();
	glColor3f(1, 0.0313, 0);
	glTranslatef(-3, 3.5, 3.5);
	glRotatef(-90, 1, 0, 0);
	gluSphere(a, 0.5, 30, 30);

	glPopMatrix();
	////////////////

	//reflection

	////////////first col
	glPushMatrix();
	glColor3f(1, 0.0313, 0);
	glTranslatef(1.5, 0, -3.5);
	glRotatef(-90, 1, 0, 0);
	gluSphere(a, 0.5, 30, 30);

	glPopMatrix();

	////////

	glPushMatrix();
	glColor3f(1, 0.0313, 0);
	glTranslatef(1.5, 2, -3.5);
	glRotatef(-90, 1, 0, 0);
	gluSphere(a, 0.5, 30, 30);

	glPopMatrix();
	///////////////
	glPushMatrix();
	glColor3f(1, 0.0313, 0);
	glTranslatef(1.5, 3.5, -3.5);
	glRotatef(-90, 1, 0, 0);
	gluSphere(a, 0.5, 30, 30);

	glPopMatrix();
	////////////////

	////////////sec col
	glPushMatrix();
	glColor3f(1, 0.0313, 0);
	glTranslatef(0, 0, -4);
	glRotatef(-90, 1, 0, 0);
	gluSphere(a, 0.5, 30, 30);

	glPopMatrix();

	////////

	glPushMatrix();
	glColor3f(1, 0.0313, 0);
	glTranslatef(0, 2, -4);
	glRotatef(-90, 1, 0, 0);
	gluSphere(a, 0.5, 30, 30);

	glPopMatrix();
	///////////////
	glPushMatrix();
	glColor3f(1, 0.0313, 0);
	glTranslatef(0, 3.5, -4);
	glRotatef(-90, 1, 0, 0);
	gluSphere(a, 0.5, 30, 30);

	glPopMatrix();
	////////////////

	////////////third col
	glPushMatrix();
	glColor3f(1, 0.0313, 0);
	glTranslatef(-1.5, 0, -3.5);
	glRotatef(-90, 1, 0, 0);
	gluSphere(a, 0.5, 30, 30);

	glPopMatrix();

	////////

	glPushMatrix();
	glColor3f(1, 0.0313, 0);
	glTranslatef(-1.5, 2, -3.5);
	glRotatef(-90, 1, 0, 0);
	gluSphere(a, 0.5, 30, 30);

	glPopMatrix();
	///////////////
	glPushMatrix();
	glColor3f(1, 0.0313, 0);
	glTranslatef(-1.5, 3.5, -3.5);
	glRotatef(-90, 1, 0, 0);
	gluSphere(a, 0.5, 30, 30);

	glPopMatrix();
	////////////////


	////////////4th col
	glPushMatrix();
	glColor3f(1, 0.0313, 0);
	glTranslatef(-3, 0, -3.5);
	glRotatef(-90, 1, 0, 0);
	gluSphere(a, 0.5, 30, 30);

	glPopMatrix();

	////////

	glPushMatrix();
	glColor3f(1, 0.0313, 0);
	glTranslatef(-3, 2, -3.5);
	glRotatef(-90, 1, 0, 0);
	gluSphere(a, 0.5, 30, 30);

	glPopMatrix();
	///////////////
	glPushMatrix();
	glColor3f(1, 0.0313, 0);
	glTranslatef(-3, 3.5, -3.5);
	glRotatef(-90, 1, 0, 0);
	gluSphere(a, 0.5, 30, 30);

	glPopMatrix();
	////////////////






	glEndList();




	glNewList(2, GL_COMPILE);


	glPushMatrix();
	glColor3f(0.219, 0.119, 0.1);
	glRotatef(90, 1, 0, 0);
	gluCylinder(a, 1, 1, 8, 20, 20);

	glPopMatrix();

	glPushMatrix();
	glColor3f(0.219, 0.119, 0.1);
	glRotatef(90, 0, 1, 0);
	glTranslatef(0, -4, 0);
	gluCylinder(a, 1, 1, 4, 20, 20);

	glPopMatrix();

	glPushMatrix();
	glColor3f(0.219, 0.119, 0.1);
	glRotatef(90, 1, 0, 0);
	glTranslatef(5, 0, 0);
	gluCylinder(a, 1, 1, 8, 20, 20);

	glPopMatrix();




	glEndList();
	//new one

	glNewList(3, GL_COMPILE);


	glPushMatrix();
	glColor3f(0.756, 0.780, 0.776);
	glRotatef(90, 1, 0, 0);
	gluCylinder(a, 1, 1, 8, 20, 20);

	glPopMatrix();

	glPushMatrix();
	glColor3f(0.756, 0.780, 0.776);
	glRotatef(90, 0, 1, 0);
	glTranslatef(0, -4, 0);
	gluCylinder(a, 1, 1, 4, 20, 20);

	glPopMatrix();

	glPushMatrix();
	glColor3f(0.756, 0.780, 0.776);
	glRotatef(90, 1, 0, 0);
	glTranslatef(5, 0, 0);
	gluCylinder(a, 1, 1, 8, 20, 20);

	glPopMatrix();




	glEndList();


	glNewList(4, GL_COMPILE);


	glPushMatrix();
	glColor3f(0.756, 0.780, 0.776);
	glRotatef(90, 1, 0, 0);
	gluCylinder(a, 1, 1, 4, 20, 20);

	glPopMatrix();

	glPushMatrix();
	glColor3f(0.756, 0.780, 0.776);
	glRotatef(90, 0, 1, 0);
	glTranslatef(0, -2, 0);
	gluCylinder(a, 1, 1, 2, 20, 20);

	glPopMatrix();

	glPushMatrix();
	glColor3f(0.756, 0.780, 0.776);
	glRotatef(90, 1, 0, 0);
	glTranslatef(5, 0, 0);
	gluCylinder(a, 1, 1, 4, 20, 20);

	glPopMatrix();




	glEndList();



	glNewList(12, GL_COMPILE);
	//GLUquadricObj* a = gluNewQuadric();

	glPushMatrix();

	glPushMatrix();

	glTranslated(2, 0, 0);
	//cover
	glPushMatrix();
	glScaled(2, 0.05, 2);
	glColor3f(0.6, 0, 0);
	glutSolidCube(5);
	glPopMatrix();

	//فرشة
	glPushMatrix();
	glTranslated(0, -0.6, 0);
	glScaled(2, 0.2, 2);
	glColor3f(1, 1, 1);
	glutSolidCube(5);
	glPopMatrix();

	//قاعدة التخت
	glPushMatrix();
	glTranslated(0, -1.4, 0);
	glScaled(2, 0.14, 2);
	glColor3f(0.4, 0, 0);
	glutSolidCube(5);
	glPopMatrix();

	//foots of the bed
	glPushMatrix();
	glTranslated(-4, -1, -4);
	glRotatef(90, 1, 0, 0);
	gluCylinder(a, 0.5, 0.5, 3, 30, 30);
	glPopMatrix();

	glPushMatrix();
	glTranslated(4, -1, -4);
	glRotatef(90, 1, 0, 0);
	gluCylinder(a, 0.5, 0.5, 3, 30, 30);
	glPopMatrix();

	glPushMatrix();
	glTranslated(-4, -1, 4);
	glRotatef(90, 1, 0, 0);
	gluCylinder(a, 0.5, 0.5, 3, 30, 30);
	glPopMatrix();

	glPushMatrix();
	glTranslated(4, -1, 4);
	glRotatef(90, 1, 0, 0);
	gluCylinder(a, 0.5, 0.5, 3, 30, 30);
	glPopMatrix();

	//pillow
	glPushMatrix();
	glColor3f(1, 1, 1);
	glTranslated(0, 1, 3.3);
	glScaled(1.5, 0.3, 0.4);
	gluSphere(a, 3, 40, 40);
	glPopMatrix();

	//small table beside the bed
	glPushMatrix();
	glColor3f(0.5, 0, 0);
	glTranslated(-7, -1, 2.5);
	glRotated(90, 1, 0, 0);
	gluDisk(a, 0, 2, 30, 30);
	glPopMatrix();

	//table foot
	glPushMatrix();
	glTranslated(-7, -1, 2.5);
	glRotatef(90, 1, 0, 0);
	gluCylinder(a, 0.5, 0.5, 3, 30, 30);
	glPopMatrix();

	//another small table beside the bed
	glPushMatrix();
	glColor3f(0.5, 0, 0);
	glTranslated(7, -1, 2.5);
	glRotated(90, 1, 0, 0);
	gluDisk(a, 0, 2, 30, 30);
	glPopMatrix();

	glPushMatrix();
	glTranslated(7, -1, 2.5);
	glRotatef(90, 1, 0, 0);
	gluCylinder(a, 0.5, 0.5, 3, 30, 30);
	glPopMatrix();


	//laptop on the 1st table that is beside bed
	glPushMatrix();
	glColor3f(0.25, 0.25, 0.25);
	glTranslated(-7, -0.9, 2.5);
	glScaled(2, 0.2, 3);
	glRotated(20, 0, 1, 0);
	glutSolidCube(0.6);
	glPopMatrix();

	//phone on the 2nd table that is beside bed
	glPushMatrix();
	glColor3f(0.25, 0.25, 0.25);
	glTranslated(7, -0.9, 2.5);
	glScaled(3, 0.2, 1.3);
	glRotated(20, 0, 1, 0);
	glutSolidCube(0.3);
	glPopMatrix();

	glPushMatrix();
	glColor3f(0, 0, 1);
	glTranslated(7, -0.89, 2.5);
	glScaled(3, 0.2, 1.3);
	glRotated(20, 0, 1, 0);
	glutSolidCube(0.25);
	glPopMatrix();
	glPopMatrix();
	//wardrobe
	glPushMatrix();
	glColor3f(0.25, 0, 0);
	glTranslated(20, 4, -5);
	glScaled(1, 5, 4);
	glutSolidCube(3);
	glPopMatrix();

	//1st door of the wardrobe
	glPushMatrix();
	glColor3f(0.40, 0, 0);
	glTranslated(19, 4, -2.4);
	glScaled(0.5, 5, 1.7);
	glutSolidCube(2.6);
	glPopMatrix();

	//handles
	glPushMatrix();
	glColor3f(1, 1, 0);
	glTranslated(18, 4, -3.8);
	gluSphere(a, 0.3, 20, 20);
	glPopMatrix();

	glPushMatrix();
	glColor3f(1, 1, 0);
	glTranslated(18, 4, -6.35);
	gluSphere(a, 0.3, 20, 20);
	glPopMatrix();

	glPushMatrix();
	glColor3f(1, 1, 0);
	glTranslated(18, 4, -15.8);
	gluSphere(a, 0.3, 20, 20);
	glPopMatrix();

	glPushMatrix();
	glColor3f(1, 1, 0);
	glTranslated(18, 4, -18);
	gluSphere(a, 0.3, 20, 20);
	glPopMatrix();

	//2nd door of the wardrobe
	glPushMatrix();
	glColor3f(0.40, 0, 0);
	glTranslated(19, 4, -7.6);
	glScaled(0.5, 5, 1.7);
	glutSolidCube(2.6);
	glPopMatrix();

	//2nd wardrobe
	glTranslated(0, 0, -12);
	//wardrobe
	glPushMatrix();
	glColor3f(0.25, 0, 0);
	glTranslated(20, 4, -5);
	glScaled(1, 5, 4);
	glutSolidCube(3);
	glPopMatrix();

	//1st door of the wardrobe
	glPushMatrix();
	glColor3f(0.40, 0, 0);
	glTranslated(19, 4, -2.4);
	glScaled(0.5, 5, 1.7);
	glutSolidCube(2.6);
	glPopMatrix();

	//2st door of the wardrope
	glPushMatrix();
	glColor3f(0.40, 0, 0);
	glTranslated(19, 4, -7.6);
	glScaled(0.5, 5, 1.7);
	glutSolidCube(2.6);
	glPopMatrix();


	//table with mirror
	glPushMatrix();
	glTranslatef(0, -0.7, -9.5);
	glScaled(3, 2, 1);
	glColor3f(0.25, 0, 0);
	glutSolidCube(2);
	glPopMatrix();

	glPushMatrix();
	glTranslatef(0, -0.7, -9.17);
	glScaled(3, 2, 1);
	glColor3f(0.4, 0, 0);
	glutSolidCube(1.6);
	glPopMatrix();

	/////////////////////////////////////////////////////handle
	glPushMatrix();
	glTranslated(1.7, -1.2, -8);
	glColor3f(1, 1, 0);
	gluSphere(a, 0.3, 20, 20);
	glPopMatrix();

	glPushMatrix();

	glTranslated(0, 5, -10.15);
	glScaled(2, 4, 0.01);
	glColor4ub(135, 206, 250, 69);
	gluSphere(a, 1, 30, 30);
	glPopMatrix();

	glPushMatrix();
	glTranslated(0, 5, -10.2);
	glScaled(2, 4, 0.01);
	glColor3f(0.25, 0, 0);
	gluSphere(a, 1.1, 30, 30);
	glPopMatrix();




	glPopMatrix();
	glEndList();





	glNewList(13, GL_COMPILE);
	//GLUquadricObj* a = gluNewQuadric();

	glPushMatrix();
	////////////////////////////////////////////


	//to scale
	glPushMatrix();
	glScaled(0.5, 0.5, 0.5);
	glTranslated(-8, 3, 0);
	//table
	glPushMatrix();
	glTranslated(15, 2, -5);
	glColor3f(0.07, 0.3, 0.07);
	glScaled(36, 0.5, 7);
	glutSolidCube(1);
	glPopMatrix();




	//1
	glPushMatrix();
	glTranslated(-4, 0, -5);
	glRotated(-90, 0, 1, 0);
	//chair base
	glPushMatrix();
	glColor3f(0, 0.25, 0);
	glScaled(3, 0.5, 3);
	glutSolidCube(1);
	glPopMatrix();

	glPushMatrix();
	glTranslated(0, 0.5, 0);
	glColor3f(0, 0.5, 0);
	glScaled(3, 0.5, 3);
	glutSolidCube(1);
	glPopMatrix();

	glPushMatrix();
	glTranslated(0, 2, 1.3);
	glRotated(90, 1, 0, 0);

	glColor3f(0, 0.25, 0);
	glScaled(3.2, 0.5, 5);
	glutSolidCube(1);
	glPopMatrix();

	//legs of chair
	glPushMatrix();
	glTranslated(-1, -1.3, -1);
	glColor3f(0, 0.25, 0);
	glScaled(0.5, 3, 0.5);
	glutSolidCube(1);
	glPopMatrix();

	glPushMatrix();
	glTranslated(1, -1.3, -1);
	glColor3f(0, 0.25, 0);
	glScaled(0.5, 3, 0.5);
	glutSolidCube(1);
	glPopMatrix();

	glPushMatrix();
	glTranslated(-1, -1.3, 1);
	glColor3f(0, 0.25, 0);
	glScaled(0.5, 3, 0.5);
	glutSolidCube(1);
	glPopMatrix();

	glPushMatrix();
	glTranslated(1, -1.3, 1);
	glColor3f(0, 0.25, 0);
	glScaled(0.5, 3, 0.5);
	glutSolidCube(1);
	glPopMatrix();

	glPopMatrix();
	//e1




	//2
	glPushMatrix();
	glTranslated(34, 0, -5);
	glRotated(90, 0, 1, 0);
	//chair base
	glPushMatrix();
	glColor3f(0, 0.25, 0);
	glScaled(3, 0.5, 3);
	glutSolidCube(1);
	glPopMatrix();

	glPushMatrix();
	glTranslated(0, 0.5, 0);
	glColor3f(0, 0.5, 0);
	glScaled(3, 0.5, 3);
	glutSolidCube(1);
	glPopMatrix();

	glPushMatrix();
	glTranslated(0, 2, 1.3);
	glRotated(90, 1, 0, 0);

	glColor3f(0, 0.25, 0);
	glScaled(3.2, 0.5, 5);
	glutSolidCube(1);
	glPopMatrix();

	//legs of chair
	glPushMatrix();
	glTranslated(-1, -1.3, -1);
	glColor3f(0, 0.25, 0);
	glScaled(0.5, 3, 0.5);
	glutSolidCube(1);
	glPopMatrix();

	glPushMatrix();
	glTranslated(1, -1.3, -1);
	glColor3f(0, 0.25, 0);
	glScaled(0.5, 3, 0.5);
	glutSolidCube(1);
	glPopMatrix();

	glPushMatrix();
	glTranslated(-1, -1.3, 1);
	glColor3f(0, 0.25, 0);
	glScaled(0.5, 3, 0.5);
	glutSolidCube(1);
	glPopMatrix();

	glPushMatrix();
	glTranslated(1, -1.3, 1);
	glColor3f(0, 0.25, 0);
	glScaled(0.5, 3, 0.5);
	glutSolidCube(1);
	glPopMatrix();

	glPopMatrix();
	//e2





	////////////////////////////////////////////
	// 
	//chair base
	glPushMatrix();
	glColor3f(0, 0.25, 0);
	glScaled(3, 0.5, 3);
	glutSolidCube(1);
	glPopMatrix();

	glPushMatrix();
	glTranslated(0, 0.5, 0);
	glColor3f(0, 0.5, 0);
	glScaled(3, 0.5, 3);
	glutSolidCube(1);
	glPopMatrix();

	glPushMatrix();
	glTranslated(0, 2, 1.3);
	glRotated(90, 1, 0, 0);

	glColor3f(0, 0.25, 0);
	glScaled(3.2, 0.5, 5);
	glutSolidCube(1);
	glPopMatrix();

	//legs of chair
	glPushMatrix();
	glTranslated(-1, -1.3, -1);
	glColor3f(0, 0.25, 0);
	glScaled(0.5, 3, 0.5);
	glutSolidCube(1);
	glPopMatrix();

	glPushMatrix();
	glTranslated(1, -1.3, -1);
	glColor3f(0, 0.25, 0);
	glScaled(0.5, 3, 0.5);
	glutSolidCube(1);
	glPopMatrix();

	glPushMatrix();
	glTranslated(-1, -1.3, 1);
	glColor3f(0, 0.25, 0);
	glScaled(0.5, 3, 0.5);
	glutSolidCube(1);
	glPopMatrix();

	glPushMatrix();
	glTranslated(1, -1.3, 1);
	glColor3f(0, 0.25, 0);
	glScaled(0.5, 3, 0.5);
	glutSolidCube(1);
	glPopMatrix();
	////////////////////////////////////////////
	glTranslated(7, 0, 0);
	//chair base
	glPushMatrix();
	glColor3f(0, 0.25, 0);
	glScaled(3, 0.5, 3);
	glutSolidCube(1);
	glPopMatrix();

	glPushMatrix();
	glTranslated(0, 0.5, 0);
	glColor3f(0, 0.5, 0);
	glScaled(3, 0.5, 3);
	glutSolidCube(1);
	glPopMatrix();

	glPushMatrix();
	glTranslated(0, 2, 1.3);
	glRotated(90, 1, 0, 0);

	glColor3f(0, 0.25, 0);
	glScaled(3.2, 0.5, 5);
	glutSolidCube(1);
	glPopMatrix();

	//legs of chair
	glPushMatrix();
	glTranslated(-1, -1.3, -1);
	glColor3f(0, 0.25, 0);
	glScaled(0.5, 3, 0.5);
	glutSolidCube(1);
	glPopMatrix();

	glPushMatrix();
	glTranslated(1, -1.3, -1);
	glColor3f(0, 0.25, 0);
	glScaled(0.5, 3, 0.5);
	glutSolidCube(1);
	glPopMatrix();

	glPushMatrix();
	glTranslated(-1, -1.3, 1);
	glColor3f(0, 0.25, 0);
	glScaled(0.5, 3, 0.5);
	glutSolidCube(1);
	glPopMatrix();

	glPushMatrix();
	glTranslated(1, -1.3, 1);
	glColor3f(0, 0.25, 0);
	glScaled(0.5, 3, 0.5);
	glutSolidCube(1);
	glPopMatrix();
	//////////////////////////////////////////////////
	glTranslated(7, 0, 0);
	//chair base
	glPushMatrix();
	glColor3f(0, 0.25, 0);
	glScaled(3, 0.5, 3);
	glutSolidCube(1);
	glPopMatrix();

	glPushMatrix();
	glTranslated(0, 0.5, 0);
	glColor3f(0, 0.5, 0);
	glScaled(3, 0.5, 3);
	glutSolidCube(1);
	glPopMatrix();

	glPushMatrix();
	glTranslated(0, 2, 1.3);
	glRotated(90, 1, 0, 0);

	glColor3f(0, 0.25, 0);
	glScaled(3.2, 0.5, 5);
	glutSolidCube(1);
	glPopMatrix();

	//legs of chair
	glPushMatrix();
	glTranslated(-1, -1.3, -1);
	glColor3f(0, 0.25, 0);
	glScaled(0.5, 3, 0.5);
	glutSolidCube(1);
	glPopMatrix();

	glPushMatrix();
	glTranslated(1, -1.3, -1);
	glColor3f(0, 0.25, 0);
	glScaled(0.5, 3, 0.5);
	glutSolidCube(1);
	glPopMatrix();

	glPushMatrix();
	glTranslated(-1, -1.3, 1);
	glColor3f(0, 0.25, 0);
	glScaled(0.5, 3, 0.5);
	glutSolidCube(1);
	glPopMatrix();

	glPushMatrix();
	glTranslated(1, -1.3, 1);
	glColor3f(0, 0.25, 0);
	glScaled(0.5, 3, 0.5);
	glutSolidCube(1);
	glPopMatrix();
	////////////////////////////////////////////////////////////////////
	glTranslated(7, 0, 0);
	//chair base
	glPushMatrix();
	glColor3f(0, 0.25, 0);
	glScaled(3, 0.5, 3);
	glutSolidCube(1);
	glPopMatrix();

	glPushMatrix();
	glTranslated(0, 0.5, 0);
	glColor3f(0, 0.5, 0);
	glScaled(3, 0.5, 3);
	glutSolidCube(1);
	glPopMatrix();

	glPushMatrix();
	glTranslated(0, 2, 1.3);
	glRotated(90, 1, 0, 0);

	glColor3f(0, 0.25, 0);
	glScaled(3.2, 0.5, 5);
	glutSolidCube(1);
	glPopMatrix();

	//legs of chair
	glPushMatrix();
	glTranslated(-1, -1.3, -1);
	glColor3f(0, 0.25, 0);
	glScaled(0.5, 3, 0.5);
	glutSolidCube(1);
	glPopMatrix();

	glPushMatrix();
	glTranslated(1, -1.3, -1);
	glColor3f(0, 0.25, 0);
	glScaled(0.5, 3, 0.5);
	glutSolidCube(1);
	glPopMatrix();

	glPushMatrix();
	glTranslated(-1, -1.3, 1);
	glColor3f(0, 0.25, 0);
	glScaled(0.5, 3, 0.5);
	glutSolidCube(1);
	glPopMatrix();

	glPushMatrix();
	glTranslated(1, -1.3, 1);
	glColor3f(0, 0.25, 0);
	glScaled(0.5, 3, 0.5);
	glutSolidCube(1);
	glPopMatrix();
	///////////////////////////////////////////////////////////////////////////////
	glTranslated(7, 0, 0);
	//chair base
	glPushMatrix();
	glColor3f(0, 0.25, 0);
	glScaled(3, 0.5, 3);
	glutSolidCube(1);
	glPopMatrix();

	glPushMatrix();
	glTranslated(0, 0.5, 0);
	glColor3f(0, 0.5, 0);
	glScaled(3, 0.5, 3);
	glutSolidCube(1);
	glPopMatrix();

	glPushMatrix();
	glTranslated(0, 2, 1.3);
	glRotated(90, 1, 0, 0);

	glColor3f(0, 0.25, 0);
	glScaled(3.2, 0.5, 5);
	glutSolidCube(1);
	glPopMatrix();

	//legs of chair
	glPushMatrix();
	glTranslated(-1, -1.3, -1);
	glColor3f(0, 0.25, 0);
	glScaled(0.5, 3, 0.5);
	glutSolidCube(1);
	glPopMatrix();

	glPushMatrix();
	glTranslated(1, -1.3, -1);
	glColor3f(0, 0.25, 0);
	glScaled(0.5, 3, 0.5);
	glutSolidCube(1);
	glPopMatrix();

	glPushMatrix();
	glTranslated(-1, -1.3, 1);
	glColor3f(0, 0.25, 0);

	glScaled(0.5, 3, 0.5);
	glutSolidCube(1);
	glPopMatrix();

	glPushMatrix();
	glTranslated(1, -1.3, 1);
	glColor3f(0, 0.25, 0);
	glScaled(0.5, 3, 0.5);
	glutSolidCube(1);
	glPopMatrix();
	/////////////////////////////////////////////////////////////
	////////////////////////////////////////////
	//chair base
	glRotated(180, 0, 1, 0);
	glTranslated(0, 0, 10);
	glPushMatrix();
	glColor3f(0, 0.25, 0);
	glScaled(3, 0.5, 3);
	glutSolidCube(1);
	glPopMatrix();

	glPushMatrix();
	glTranslated(0, 0.5, 0);
	glColor3f(0, 0.5, 0);
	glScaled(3, 0.5, 3);
	glutSolidCube(1);
	glPopMatrix();

	glPushMatrix();
	glTranslated(0, 2, 1.3);
	glRotated(90, 1, 0, 0);

	glColor3f(0, 0.25, 0);
	glScaled(3.2, 0.5, 5);
	glutSolidCube(1);
	glPopMatrix();

	//legs of chair
	glPushMatrix();
	glTranslated(-1, -1.3, -1);
	glColor3f(0, 0.25, 0);
	glScaled(0.5, 3, 0.5);
	glutSolidCube(1);
	glPopMatrix();

	glPushMatrix();
	glTranslated(1, -1.3, -1);
	glColor3f(0, 0.25, 0);
	glScaled(0.5, 3, 0.5);
	glutSolidCube(1);
	glPopMatrix();

	glPushMatrix();
	glTranslated(-1, -1.3, 1);
	glColor3f(0, 0.25, 0);
	glScaled(0.5, 3, 0.5);
	glutSolidCube(1);
	glPopMatrix();

	glPushMatrix();
	glTranslated(1, -1.3, 1);
	glColor3f(0, 0.25, 0);
	glScaled(0.5, 3, 0.5);
	glutSolidCube(1);
	glPopMatrix();
	////////////////////////////////////////////
	glTranslated(7, 0, 0);
	//chair base
	glPushMatrix();
	glColor3f(0, 0.25, 0);
	glScaled(3, 0.5, 3);
	glutSolidCube(1);
	glPopMatrix();

	glPushMatrix();
	glTranslated(0, 0.5, 0);
	glColor3f(0, 0.5, 0);
	glScaled(3, 0.5, 3);
	glutSolidCube(1);
	glPopMatrix();

	glPushMatrix();
	glTranslated(0, 2, 1.3);
	glRotated(90, 1, 0, 0);

	glColor3f(0, 0.25, 0);
	glScaled(3.2, 0.5, 5);
	glutSolidCube(1);
	glPopMatrix();

	//legs of chair
	glPushMatrix();
	glTranslated(-1, -1.3, -1);
	glColor3f(0, 0.25, 0);
	glScaled(0.5, 3, 0.5);
	glutSolidCube(1);
	glPopMatrix();

	glPushMatrix();
	glTranslated(1, -1.3, -1);
	glColor3f(0, 0.25, 0);
	glScaled(0.5, 3, 0.5);
	glutSolidCube(1);
	glPopMatrix();

	glPushMatrix();
	glTranslated(-1, -1.3, 1);
	glColor3f(0, 0.25, 0);
	glScaled(0.5, 3, 0.5);
	glutSolidCube(1);
	glPopMatrix();

	glPushMatrix();
	glTranslated(1, -1.3, 1);
	glColor3f(0, 0.25, 0);
	glScaled(0.5, 3, 0.5);
	glutSolidCube(1);
	glPopMatrix();
	//////////////////////////////////////////////////
	glTranslated(7, 0, 0);
	//chair base
	glPushMatrix();
	glColor3f(0, 0.25, 0);
	glScaled(3, 0.5, 3);
	glutSolidCube(1);
	glPopMatrix();

	glPushMatrix();
	glTranslated(0, 0.5, 0);
	glColor3f(0, 0.5, 0);
	glScaled(3, 0.5, 3);
	glutSolidCube(1);
	glPopMatrix();

	glPushMatrix();
	glTranslated(0, 2, 1.3);
	glRotated(90, 1, 0, 0);

	glColor3f(0, 0.25, 0);
	glScaled(3.2, 0.5, 5);
	glutSolidCube(1);
	glPopMatrix();

	//legs of chair
	glPushMatrix();
	glTranslated(-1, -1.3, -1);
	glColor3f(0, 0.25, 0);
	glScaled(0.5, 3, 0.5);
	glutSolidCube(1);
	glPopMatrix();

	glPushMatrix();
	glTranslated(1, -1.3, -1);
	glColor3f(0, 0.25, 0);
	glScaled(0.5, 3, 0.5);
	glutSolidCube(1);
	glPopMatrix();

	glPushMatrix();
	glTranslated(-1, -1.3, 1);
	glColor3f(0, 0.25, 0);
	glScaled(0.5, 3, 0.5);
	glutSolidCube(1);
	glPopMatrix();

	glPushMatrix();
	glTranslated(1, -1.3, 1);
	glColor3f(0, 0.25, 0);
	glScaled(0.5, 3, 0.5);
	glutSolidCube(1);
	glPopMatrix();
	////////////////////////////////////////////////////////////////////
	glTranslated(7, 0, 0);
	//chair base
	glPushMatrix();
	glColor3f(0, 0.25, 0);
	glScaled(3, 0.5, 3);
	glutSolidCube(1);
	glPopMatrix();

	glPushMatrix();
	glTranslated(0, 0.5, 0);
	glColor3f(0, 0.5, 0);
	glScaled(3, 0.5, 3);
	glutSolidCube(1);
	glPopMatrix();

	glPushMatrix();
	glTranslated(0, 2, 1.3);
	glRotated(90, 1, 0, 0);

	glColor3f(0, 0.25, 0);
	glScaled(3.2, 0.5, 5);
	glutSolidCube(1);
	glPopMatrix();

	//legs of chair
	glPushMatrix();
	glTranslated(-1, -1.3, -1);
	glColor3f(0, 0.25, 0);
	glScaled(0.5, 3, 0.5);
	glutSolidCube(1);
	glPopMatrix();

	glPushMatrix();
	glTranslated(1, -1.3, -1);
	glColor3f(0, 0.25, 0);
	glScaled(0.5, 3, 0.5);
	glutSolidCube(1);
	glPopMatrix();

	glPushMatrix();
	glTranslated(-1, -1.3, 1);
	glColor3f(0, 0.25, 0);
	glScaled(0.5, 3, 0.5);
	glutSolidCube(1);
	glPopMatrix();

	glPushMatrix();
	glTranslated(1, -1.3, 1);
	glColor3f(0, 0.25, 0);
	glScaled(0.5, 3, 0.5);
	glutSolidCube(1);
	glPopMatrix();
	///////////////////////////////////////////////////////////////////////////////
	glTranslated(7, 0, 0);
	//chair base
	glPushMatrix();
	glColor3f(0, 0.25, 0);
	glScaled(3, 0.5, 3);
	glutSolidCube(1);
	glPopMatrix();

	glPushMatrix();
	glTranslated(0, 0.5, 0);
	glColor3f(0, 0.5, 0);
	glScaled(3, 0.5, 3);
	glutSolidCube(1);
	glPopMatrix();

	glPushMatrix();
	glTranslated(0, 2, 1.3);
	glRotated(90, 1, 0, 0);

	glColor3f(0, 0.25, 0);
	glScaled(3.2, 0.5, 5);
	glutSolidCube(1);
	glPopMatrix();

	//legs of chair
	glPushMatrix();
	glTranslated(-1, -1.3, -1);
	glColor3f(0, 0.25, 0);
	glScaled(0.5, 3, 0.5);
	glutSolidCube(1);
	glPopMatrix();

	glPushMatrix();
	glTranslated(1, -1.3, -1);
	glColor3f(0, 0.25, 0);
	glScaled(0.5, 3, 0.5);
	glutSolidCube(1);
	glPopMatrix();

	glPushMatrix();
	glTranslated(-1, -1.3, 1);
	glColor3f(0, 0.25, 0);
	glScaled(0.5, 3, 0.5);
	glutSolidCube(1);
	glPopMatrix();

	glPushMatrix();
	glTranslated(1, -1.3, 1);
	glColor3f(0, 0.25, 0);
	glScaled(0.5, 3, 0.5);
	glutSolidCube(1);
	glPopMatrix();

	glPopMatrix();

	//vetrena
	glPushMatrix();

	glTranslatef(0, 2.6, -10.7);
	glRotatef(180, 0, 1, 0);
	glPushMatrix();
	glTranslated(5, 1, 10);
	glColor3f(0.6, 0.6, 0.6);
	glScaled(5, 5, 0.2);
	glutSolidCube(1);
	glPopMatrix();
	//رف
	glPushMatrix();
	glTranslated(5, 0, 9.5);
	glColor3f(0.5, 0.5, 0.5);
	glScaled(5, 0.2, 1);
	glutSolidCube(0.99);
	glPopMatrix();
	//رف
	glPushMatrix();
	glTranslated(5, 1.8, 9.5);
	glColor3f(0.5, 0.5, 0.5);
	glScaled(5, 0.2, 1);
	glutSolidCube(0.99);
	glPopMatrix();

	//up and down layers
	glPushMatrix();
	glTranslated(5, -1.4, 9.5);
	glColor3f(0.6, 0.6, 0.6);
	glScaled(5, 0.2, 1);
	glutSolidCube(1);
	glPopMatrix();


	glPushMatrix();
	glTranslated(5, 3.4, 9.5);
	glColor3f(0.6, 0.6, 0.6);
	glScaled(5, 0.2, 1);
	glutSolidCube(1);
	glPopMatrix();

	//left and right layers
	glPushMatrix();

	glTranslated(7.4, 1, 9.5);
	glRotated(90, 0, 0, 1);
	glColor3f(0.6, 0.6, 0.6);
	glScaled(5, 0.2, 1);
	glutSolidCube(1);
	glPopMatrix();

	glPushMatrix();
	glTranslated(2.5, 1, 9.5);
	glRotated(90, 0, 0, 1);
	glColor3f(0.6, 0.6, 0.6);
	glScaled(5, 0.2, 1);
	glutSolidCube(1);
	glPopMatrix();


	//glass
	glPushMatrix();
	glTranslated(5, 0.5, 9.5);
	glRotated(90, 1, 0, 0);
	glColor4f(1, 1, 1, 0.2);
	glScaled(1, 1, 1);
	gluCylinder(a, 0.15, 0.15, 0.4, 20, 20);
	glPopMatrix();

	glPushMatrix();
	glTranslated(5.5, 0.5, 9.5);
	glRotated(90, 1, 0, 0);
	glColor4f(1, 1, 1, 0.2);
	glScaled(1, 1, 1);
	gluCylinder(a, 0.15, 0.15, 0.4, 20, 20);
	glPopMatrix();

	glPushMatrix();
	glTranslated(6, 0.5, 9.5);
	glRotated(90, 1, 0, 0);
	glColor4f(1, 1, 1, 0.2);
	glScaled(1, 1, 1);
	gluCylinder(a, 0.15, 0.15, 0.4, 20, 20);
	glPopMatrix();

	glPushMatrix();
	glTranslated(6.5, 0.5, 9.5);
	glRotated(90, 1, 0, 0);
	glColor4f(1, 1, 1, 0.2);
	glScaled(1, 1, 1);
	gluCylinder(a, 0.15, 0.15, 0.4, 20, 20);
	glPopMatrix();

	//plates
	glPushMatrix();
	glTranslated(4, 0.2, 9.5);
	glColor3f(1, 1, 1);
	glRotated(80, 1, 0, 0);
	gluDisk(a, 0, 0.4, 20, 20);
	glPopMatrix();

	glPushMatrix();
	glTranslated(4, 0.25, 9.5);
	glColor3f(1, 1, 1);
	glRotated(80, 1, 0, 0);
	gluDisk(a, 0, 0.4, 20, 20);
	glPopMatrix();

	glPushMatrix();
	glTranslated(4, 0.3, 9.5);
	glColor3f(1, 1, 1);
	glRotated(80, 1, 0, 0);
	gluDisk(a, 0, 0.4, 20, 20);
	glPopMatrix();

	glPushMatrix();
	glTranslated(4, 0.35, 9.5);
	glColor3f(1, 1, 1);
	glRotated(80, 1, 0, 0);
	gluDisk(a, 0, 0.4, 20, 20);
	glPopMatrix();

	//tea pots
	glPushMatrix();
	glTranslated(3.5, 2.2, 9.5);
	glColor4f(1, 1, 1, 01);
	glutSolidTeapot(0.3);
	glPopMatrix();

	glPushMatrix();
	glTranslated(4.7, 2.2, 9.5);
	glColor4f(1, 1, 1, 01);
	glutSolidTeapot(0.4);
	glPopMatrix();

	glPushMatrix();
	glTranslated(6.1, 2.2, 9.5);
	glColor4f(1, 1, 1, 01);
	glutSolidTeapot(0.5);
	glPopMatrix();
	glPopMatrix();


	glPopMatrix();
	glEndList();






	//last list
	glNewList(9, GL_COMPILE);
	glColor3f(0.25, 0, 0);
	glPushMatrix();
	glTranslatef(-60, 0, -33);
	glScaled(0.5, 1, 0.5);
	//glScaled(0.02, 0.01, 0.02);
	glutSolidCube(5);
	glPopMatrix();

	glEndList();


	glNewList(8, GL_COMPILE);
	glPushMatrix();
	glColor3ub(238, 232, 170);
	glTranslatef(-60, 2, -33);
	glScaled(0.5, 1, 0.5);
	//glScaled(0.005, 0.05, 0.005);
	glutSolidCube(5);
	glPopMatrix();
	glEndList();

	glNewList(10, GL_COMPILE);
	glPushMatrix();
	glColor4f(0.274, 0.509, 0.705, 0.699);
	glTranslatef(-48, 1.9, -31);
	//glRotatef(90, 1, 0, 0);
	glScalef(1.4, 0.023, 0.8);
	glutSolidSphere(5, 20, 20);
	glPopMatrix();

	glPushMatrix();
	glColor3f(0.25, 0, 0);
	glTranslatef(-48, 2, -31);
	glRotatef(90, 1, 0, 0);
	glScalef(1.8, 1, 1);
	gluCylinder(a, 4, 3, 10, 20, 20);

	glPopMatrix();

	glPushMatrix();
	glTranslatef(-55, 12, -29);
	glRotatef(90, 1, 0, 0);
	gluCylinder(a, 0.4, 0.4, 12, 20, 20);



	glPopMatrix();

	glPushMatrix();

	glTranslatef(-55, 12, -29);
	glRotatef(160, 1, 0, 1);
	gluCylinder(a, 0.4, 0.4, 4, 20, 20);


	glPopMatrix();

	glPushMatrix();
	glColor3ub(238, 232, 170);
	glTranslatef(-51.2, 9, -28.7);
	glRotatef(90, 0, 1, 0);

	glRotatef(90, 1, 0, 0);
	glRotatef(180, 1, 0, 0);

	glutSolidCone(2, 3, 20, 20);



	glPopMatrix();


	glPopMatrix();
	glEndList();


	glNewList(11, GL_COMPILE);

	glPushMatrix();

	glPushMatrix();

	glTranslatef(-86, 3.5, -39);
	glScaled(2, 3, 3);
	glColor3f(0.25, 0, 0);
	glutSolidCube(2);
	glPopMatrix();

	glPushMatrix();
	glTranslatef(-86, 6.5, -39);
	//glRotatef(90, 1, 0, 0);
	glScaled(4, 0.05, 6);
	glColor3ub(240, 230, 140);
	glutSolidCube(1);
	glPopMatrix();

	glPushMatrix();
	glColor3ub(238, 232, 170);
	glTranslatef(-85.8, 3.8, -39);
	//glRotatef(90, 1, 0, 0);
	glScaled(4, 0.05, 5.5);

	glutSolidCube(1);
	glPopMatrix();

	glPushMatrix();
	glColor3ub(238, 232, 170);
	glTranslatef(-84, 2.6, -37.3);
	glRotatef(90, 1, 0, 0);
	//glScaled(4, 0.05, 5.5);

	glutSolidSphere(0.3, 20, 20);
	glPopMatrix();

	glPushMatrix();
	glColor3ub(238, 232, 170);
	glTranslatef(-84, 2.6, -41.5);
	glRotatef(90, 1, 0, 0);
	//glScaled(4, 0.05, 5.5);

	glutSolidSphere(0.3, 20, 20);
	glPopMatrix();
	//
	glPushMatrix();
	glColor3ub(238, 232, 170);
	glTranslatef(-84, 4.5, -37.3);
	glRotatef(90, 1, 0, 0);
	//glScaled(4, 0.05, 5.5);

	glutSolidSphere(0.3, 20, 20);
	glPopMatrix();

	glPushMatrix();
	glColor3ub(238, 232, 170);
	glTranslatef(-84, 4.5, -41.5);
	glRotatef(90, 1, 0, 0);
	//glScaled(4, 0.05, 5.5);

	glutSolidSphere(0.3, 20, 20);
	glPopMatrix();

	glPushMatrix();
	glColor3ub(238, 232, 170);
	glTranslatef(-86.3, 12, -39);
	glRotatef(90, 1, 0, 0);
	glScaled(0.05, 6.5, 13);

	glutSolidCube(0.9);
	glPopMatrix();
	glPopMatrix();
	//sphere
	glPushMatrix();

	glColor4f(0.69, 0.78, 0.87, 0.788);
	glTranslatef(-86, 12, -39);
	glRotatef(90, 1, 0, 0);
	glScaled(0.05, 2, 6);

	glutSolidSphere(0.9, 20, 20);

	glPopMatrix();










	//glPushMatrix();
	//glTranslatef(-51, 5, -28.7);
	////glScaled(3, 2, 1);
	////glColor3f(0.4, 0, 0);
	//glutSolidCube(1.6);
	//glPopMatrix();






	glEndList();




	glNewList(19, GL_COMPILE);
	glPushMatrix();
	glTranslatef(0, 0, 6);

	glPushMatrix();

	glPushMatrix();
	glTranslatef(-86, 3.5, -39);
	glScaled(2, 3, 3);
	glColor3f(0.25, 0, 0);
	glutSolidCube(2);
	glPopMatrix();

	glPushMatrix();
	glTranslatef(-86, 6.5, -39);
	//glRotatef(90, 1, 0, 0);
	glScaled(4, 0.05, 6);
	//glColor3ub(238, 232, 170);
	glColor3ub(240, 230, 140);
	glutSolidCube(1);
	glPopMatrix();

	glPushMatrix();
	//glColor3ub(238, 232, 170);
	glColor3ub(238, 232, 170);
	glTranslatef(-85.8, 3.8, -39);
	//glRotatef(90, 1, 0, 0);
	glScaled(4, 0.05, 5.5);

	glutSolidCube(1);
	glPopMatrix();

	glPushMatrix();
	glColor3ub(238, 232, 170);

	glTranslatef(-84, 2.6, -37.3);
	glRotatef(90, 1, 0, 0);
	//glScaled(4, 0.05, 5.5);

	glutSolidSphere(0.3, 20, 20);
	glPopMatrix();

	glPushMatrix();
	glColor3ub(238, 232, 170);
	glTranslatef(-84, 2.6, -41.5);
	glRotatef(90, 1, 0, 0);
	//glScaled(4, 0.05, 5.5);

	glutSolidSphere(0.3, 20, 20);
	glPopMatrix();
	//
	glPushMatrix();
	glColor3ub(238, 232, 170);
	glTranslatef(-84, 4.5, -37.3);
	glRotatef(90, 1, 0, 0);
	//glScaled(4, 0.05, 5.5);

	glutSolidSphere(0.3, 20, 20);
	glPopMatrix();

	glPushMatrix();
	glColor3ub(238, 232, 170);
	glTranslatef(-84, 4.5, -41.5);
	glRotatef(90, 1, 0, 0);
	//glScaled(4, 0.05, 5.5);

	glutSolidSphere(0.3, 20, 20);
	glPopMatrix();

	glPushMatrix();


	glColor3ub(238, 232, 170);
	glTranslatef(-86.3, 12, -39.4);
	glRotatef(90, 1, 0, 0);
	glScaled(0.05, 6.5, 13);

	glutSolidCube(0.9);
	glPopMatrix();

	glPushMatrix();
	glColor3ub(110, 123, 139);
	glTranslatef(-86.5, 10, -40);
	glRotatef(90, 0, 1, 0);
	gluCylinder(a, 0.3, 0.3, 0.6, 20, 20);



	glPopMatrix();

	glPushMatrix();
	glColor3ub(110, 123, 139);
	glTranslatef(-86, 10.1, -40);
	glRotatef(90, 1, 0, 1);
	gluCylinder(a, 0.3, 0.3, 0.9, 20, 20);
	glPopMatrix();

	glPushMatrix();
	glColor3ub(0, 191, 255);
	glTranslatef(-85.6, 10.3, -40);
	//glRotatef(90, 0, 1, 0);
	glutSolidSphere(0.3, 20, 20);



	glPopMatrix();

	glPushMatrix();

	glPushMatrix();
	glTranslatef(-85.1, 6.7, -39.2);
	glRotatef(90, 1, 0, 0);
	//glScaled(4, 0.05, 6);
	glColor3ub(110, 123, 139);

	gluDisk(a, 0.1, 1.1, 20, 20);
	glScalef(1, 0.4, 1);
	glPopMatrix();


	glPopMatrix();

	glPushMatrix();
	glTranslatef(-85, 6.6, -39.2);
	glRotatef(-90, 1, 0, 0);
	//glScaled(4, 0.05, 6);
	glColor3ub(162, 181, 205);

	gluCylinder(a, 0, 1.4, 2, 20, 20);
	//glScalef(1, 0.4, 1);
	glPopMatrix();
	glColor4f(0.274, 0.509, 0.705, 0.699);
	glTranslatef(-84.9, 8.2, -39.2);
	glScalef(1, 1, 2);
	gluSphere(a, 0.5, 20, 20);

	glPopMatrix();



	glPushMatrix();


	glColor3f(0.25, 0, 0);
	glTranslatef(-86, 13, -39.4);
	glRotatef(90, 1, 0, 0);
	glScaled(0.05, 6.5, 13);

	glutSolidCube(0.8);
	glPopMatrix();



	glPushMatrix();
	glColor3ub(238, 232, 170);
	glTranslatef(-85.9, 12, -39.4);
	//glRotatef(90, 1, 0, 0);
	glScaled(1.5, 0.05, 5);

	glutSolidCube(1);
	glPopMatrix();

	glPushMatrix();
	glColor3ub(238, 232, 170);
	glTranslatef(-85.9, 15, -39.4);
	//glRotatef(90, 1, 0, 0);
	glScaled(1.5, 0.05, 5);

	glutSolidCube(1);
	glPopMatrix();






	glPopMatrix();
	glEndList();

	glNewList(20, GL_COMPILE);
	//glass

	glPushMatrix();
	glColor4ub(224, 255, 255, 206);
	glTranslatef(-85.3, 13.5, -35);
	glRotatef(90, 1, 0, 0);
	//glScaled(1.5, 0.05, 5);

	gluCylinder(a, 0.3, 0.2, 1.5, 20, 20);
	glPopMatrix();


	glPushMatrix();
	glColor4ub(224, 255, 255, 206);
	glTranslatef(-85.3, 16.6, -31.9);
	glRotatef(90, 1, 0, 0);
	//glScaled(1.5, 0.05, 5);

	gluCylinder(a, 0.3, 0.2, 1.5, 20, 20);
	glPopMatrix();
	//شامبو
	glPushMatrix();
	glColor3ub(255, 20, 147);
	glTranslatef(-85.3, 13.5, -31.9);
	glRotatef(90, 1, 0, 0);
	//glScaled(1.5, 0.05, 5);

	gluCylinder(a, 0.2, 0.3, 1.5, 20, 20);
	glPopMatrix();

	glPushMatrix();
	glColor3ub(218, 112, 214);
	glTranslatef(-85.3, 13.5, -31.9);
	glRotatef(90, 1, 0, 0);
	//glScaled(1.5, 0.05, 5);

	gluSphere(a, 0.3, 20, 20);
	glPopMatrix();


	//شامبو
	glPushMatrix();
	glColor3ub(162, 205, 90);
	glTranslatef(-85.3, 13.5, -33.5);
	glRotatef(90, 1, 0, 0);
	//glScaled(1.5, 0.05, 5);

	gluCylinder(a, 0.2, 0.3, 1.5, 20, 20);
	glPopMatrix();

	glPushMatrix();
	glColor3ub(84, 255, 159);
	glTranslatef(-85.3, 13.5, -33.5);
	glRotatef(90, 1, 0, 0);
	//glScaled(1.5, 0.05, 5);

	gluSphere(a, 0.3, 20, 20);
	glPopMatrix();

	//شامبو
	glPushMatrix();
	glColor3ub(153, 50, 204);
	glTranslatef(-85.3, 16.5, -33.5);
	glRotatef(90, 1, 0, 0);
	//glScaled(1.5, 0.05, 5);

	gluCylinder(a, 0.2, 0.3, 1.5, 20, 20);
	glPopMatrix();

	glPushMatrix();
	glColor3ub(69, 69, 169);
	glTranslatef(-85.3, 16.5, -33.5);
	glRotatef(90, 1, 0, 0);
	//glScaled(1.5, 0.05, 5);

	gluSphere(a, 0.3, 20, 20);
	glPopMatrix();


	//معجون سنان
	glPushMatrix();
	glColor3ub(25, 25, 112);
	glTranslatef(-85.3, 15.2, -35.8);
	//glRotatef(90, 1, 0, 0);
	//glScaled(1.5, 0.05, 5);

	gluCylinder(a, 0.2, 0.2, 1.3, 20, 20);
	glPopMatrix();
	//ضو
	glPushMatrix();
	glColor4ub(176, 224, 230, 230);
	glTranslatef(-65.3, 18, -38.3);
	//glRotatef(90, 1, 0, 0);
	//glScaled(1.5, 0.05, 5);

	gluCylinder(a, 0.5, 0.5, 12, 20, 20);
	glPopMatrix();


	glEndList();

	//////////////////////////////////////////////////////////////////////////////////
	glNewList(22, GL_COMPILE);
	GLUquadricObj* a = gluNewQuadric();
	glPushMatrix();

	//First_Bed

	glPushMatrix();

	//cover
	glPushMatrix();
	glScaled(1, 0.05, 2);
	glTranslated(-6, -0.6, 0);
	glColor3f(0.28, 0.31, 0.16);
	glutSolidCube(4);
	glPopMatrix();

	//فرشة
	glPushMatrix();
	glTranslated(-6, -0.6, 0);
	glScaled(1, 0.2, 2);
	glColor3f(0.57, 0.59, 0.48);
	glutSolidCube(4);
	glPopMatrix();

	//قاعدة التخت
	glPushMatrix();
	glTranslated(-6, -1.4, 0);
	glScaled(1, 0.14, 2);
	glColor3f(0.28, 0.31, 0.16);
	glutSolidCube(4);
	glPopMatrix();

	//foots of the bed
	glPushMatrix();
	glTranslated(-4.5, -1.7, -3);
	glRotatef(90, 1, 0, 0);
	gluCylinder(a, 0.5, 0.5, 3, 30, 30);
	glPopMatrix();

	glPushMatrix();
	glTranslated(-7.5, -1.7, -3);
	glRotatef(90, 1, 0, 0);
	gluCylinder(a, 0.5, 0.5, 3, 30, 30);
	glPopMatrix();

	glPushMatrix();
	glTranslated(-4.5, -1.7, 3);
	glRotatef(90, 1, 0, 0);
	gluCylinder(a, 0.5, 0.5, 3, 30, 30);
	glPopMatrix();

	glPushMatrix();
	glTranslated(-7.5, -1.7, 3);
	glRotatef(90, 1, 0, 0);
	gluCylinder(a, 0.5, 0.5, 3, 30, 30);
	glPopMatrix();

	glPopMatrix();
	//pillow
	glPushMatrix();
	glColor3f(0.99, 0.98, 0.87);
	glTranslated(-6, -0.1, 3);
	glScaled(0.5, 0.1, 0.2);
	gluSphere(a, 3, 40, 40);
	glPopMatrix();

	//small table beside the bed
	glPushMatrix();
	glColor3f(0.28, 0.31, 0.16);
	glTranslated(0, -1, 2.5);
	glRotated(90, 1, 0, 0);
	gluDisk(a, 0, 2, 30, 30);
	glPopMatrix();

	//table foot
	glPushMatrix();
	glTranslated(0, -1, 2.5);
	glRotatef(90, 1, 0, 0);
	gluCylinder(a, 0.5, 0.5, 3, 30, 30);
	glPopMatrix();

	//laptop on the table that is beside bed
	glPushMatrix();
	glTranslated(0, -0.9, 2.5);
	glScaled(2, 0.2, 3);
	glColor3f(0.99, 0.98, 0.87);
	glRotated(20, 0, 1, 0);
	glutSolidCube(0.6);
	glPopMatrix();

	//Second_Bed


	//cover
	glPushMatrix();
	glScaled(1, 0.05, 2);
	glTranslated(6, -0.6, 0);
	glColor3f(0.28, 0.31, 0.16);
	glutSolidCube(4);
	glPopMatrix();

	//فرشة
	glPushMatrix();
	glTranslated(6, -0.6, 0);
	glScaled(1, 0.2, 2);
	glColor3f(0.57, 0.59, 0.48);
	glutSolidCube(4);
	glPopMatrix();

	//قاعدة التخت
	glPushMatrix();
	glTranslated(6, -1.4, 0);
	glScaled(1, 0.14, 2);
	glColor3f(0.28, 0.31, 0.16);
	glutSolidCube(4);
	glPopMatrix();

	//foots of the bed
	glPushMatrix();
	glTranslated(4.5, -1.7, -3);
	glRotatef(90, 1, 0, 0);
	gluCylinder(a, 0.5, 0.5, 3, 30, 30);
	glPopMatrix();

	glPushMatrix();
	glTranslated(7.5, -1.7, -3);
	glRotatef(90, 1, 0, 0);
	gluCylinder(a, 0.5, 0.5, 3, 30, 30);
	glPopMatrix();

	glPushMatrix();
	glTranslated(4.5, -1.7, 3);
	glRotatef(90, 1, 0, 0);
	gluCylinder(a, 0.5, 0.5, 3, 30, 30);
	glPopMatrix();

	glPushMatrix();
	glTranslated(7.5, -1.7, 3);
	glRotatef(90, 1, 0, 0);
	gluCylinder(a, 0.5, 0.5, 3, 30, 30);
	glPopMatrix();

	//pillow
	glPushMatrix();
	glColor3f(0.99, 0.98, 0.87);
	glTranslated(6, -0.1, 3);
	glScaled(0.5, 0.1, 0.2);
	gluSphere(a, 3, 40, 40);
	glPopMatrix();

	// Clothet



	glPushMatrix();
	glTranslated(18, -0.6, 0);
	glScaled(1, 3, 3);
	glColor3f(0.57, 0.59, 0.48);
	glutSolidCube(4);
	glPopMatrix();

	glPushMatrix();
	glTranslated(16, -0.6, 0);
	glScaled(0.5, 5, 4);
	glColor3f(0.28, 0.31, 0.16);
	glutSolidCube(2);
	glPopMatrix();

	glPushMatrix();
	glColor3f(0.99, 0.98, 0.87);
	glTranslated(16, -0.3, 3);
	glScaled(0.5, 0.1, 0.2);
	gluSphere(a, 3, 40, 40);
	glPopMatrix();

	// Desk


	glPushMatrix();
	glTranslated(-17, -1.6, 3);
	glScaled(1, 0.16, 3);
	glColor3f(0.57, 0.59, 0.48);
	glutSolidCube(4);
	glPopMatrix();

	glPushMatrix();
	glTranslated(16, -0.6, 0);
	glScaled(0.5, 5, 4);
	glColor3f(0.28, 0.31, 0.16);
	glutSolidCube(2);
	glPopMatrix();

	glPushMatrix();
	glColor3f(0.99, 0.98, 0.87);
	glTranslated(16, -0.3, 3);
	glScaled(0.5, 0.1, 0.2);
	gluSphere(a, 3, 40, 40);
	glPopMatrix();

	glPushMatrix();
	glTranslated(6, -1.4, 0);
	glScaled(1, 0.14, 2);
	glColor3f(0.28, 0.31, 0.16);
	glutSolidCube(4);
	glPopMatrix();

	// Light
	glPushMatrix();
	glTranslated(-17, 1.2, 3);
	glRotatef(90, 1, 0, 0);
	gluCylinder(a, 0.5, 0.5, 3, 30, 30);
	glPopMatrix();

	glPushMatrix();
	glColor3f(0.93, 0.929, 0.788);
	glTranslated(-17, 1.2, 3);
	glScaled(0.5, 0.1, 0.2);
	gluSphere(a, 3, 40, 40);
	glPopMatrix();

	//foots of the desk
	glPushMatrix();
	glColor3f(0.28, 0.31, 0.16);
	glTranslated(-18, -1.8, -2);
	glRotatef(90, 1, 0, 0);
	gluCylinder(a, 0.5, 0.5, 3, 30, 30);
	glPopMatrix();

	glPushMatrix();
	glTranslated(-18, -1.8, 7);
	glRotatef(90, 1, 0, 0);
	gluCylinder(a, 0.5, 0.5, 3, 30, 30);
	glPopMatrix();

	glPushMatrix();
	glTranslated(-16, -1.8, -2);
	glRotatef(90, 1, 0, 0);
	gluCylinder(a, 0.5, 0.5, 3, 30, 30);
	glPopMatrix();


	glPushMatrix();
	glTranslated(-16, -1.8, 7);
	glRotatef(90, 1, 0, 0);
	gluCylinder(a, 0.5, 0.5, 3, 30, 30);
	glPopMatrix();


	glPopMatrix();
	glPopMatrix();

	glEndList();

	glNewList(27, GL_COMPILE);

	//GLUquadricObj* a = gluNewQuadric();

	glPushMatrix();

	//small table
	glPushMatrix();
	glColor3f(0.56, 0.87, 0.93);
	glTranslated(-6, -3, -6);
	glScaled(0.7, 3, 0.7);
	glutSolidCube(2);
	glPopMatrix();

	glPushMatrix();
	glTranslated(6, -3, -6);
	glScaled(0.7, 3, 0.7);
	glutSolidCube(2);
	glPopMatrix();

	glPushMatrix();
	glTranslated(-6, -3, 6);
	glScaled(0.7, 3, 0.7);
	glutSolidCube(2);
	glPopMatrix();

	glPushMatrix();
	glTranslated(6, -3, 6);
	glScaled(0.7, 3, 0.7);
	glutSolidCube(2);
	glPopMatrix();

	//Base
	glPushMatrix();
	glScaled(7, 0.5, 7);
	glutSolidCube(2);
	glPopMatrix();


	//المجلى
	glPushMatrix();
	glColor3f(0, 0.46, 0.71);
	glTranslated(0, -2, 25);
	glScaled(30, 7, 4);
	glRotatef(-90, 0, 1, 0);
	glutSolidCube(1);
	glPopMatrix();

	//fridg
	glPushMatrix();
	glColor3f(0.79, 0.94, 0.97);
	glTranslated(35, 0, 17);
	glScaled(5, 10, 6);
	glRotatef(-90, 0, 1, 0);
	glutSolidCube(2);
	glPopMatrix();

	// chair 
	glPushMatrix();
	glTranslated(0, -4, -8);
	glScaled(3, 0.5, 3);
	glutSolidCube(2);
	glPopMatrix();


	glPopMatrix();



	//glPopMatrix();
	glEndList();
}

void half_ball(float red, float green, float blue) {
	glPushMatrix();
	glColor4f(red, green, blue, 0.5);
	glBegin(GL_POLYGON);
	glVertex3d(-42.677669525146484, 30.865827560424805, 27.677669525146484);
	glVertex3d(-46.19397735595703, 30.865827560424805, 10.0);
	glVertex3d(-38.40888595581055, 22.22148895263672, 25.9094820022583);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex3d(-46.19397735595703, 30.865827560424805, 10.0);
	glVertex3d(-41.573482513427734, 22.22148895263672, 10.0);
	glVertex3d(-38.40888595581055, 22.22148895263672, 25.9094820022583);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex3d(-32.6640739440918, 30.865827560424805, 42.6640739440918);
	glVertex3d(-42.677669525146484, 30.865827560424805, 27.677669525146484);
	glVertex3d(-29.39689064025879, 22.22148895263672, 39.39689064025879);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex3d(-42.677669525146484, 30.865827560424805, 27.677669525146484);
	glVertex3d(-38.40888595581055, 22.22148895263672, 25.9094820022583);
	glVertex3d(-29.39689064025879, 22.22148895263672, 39.39689064025879);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex3d(-17.677669525146484, 30.865827560424805, 52.677669525146484);
	glVertex3d(-32.6640739440918, 30.865827560424805, 42.6640739440918);
	glVertex3d(-15.9094820022583, 22.22148895263672, 48.40888595581055);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex3d(-32.6640739440918, 30.865827560424805, 42.6640739440918);
	glVertex3d(-29.39689064025879, 22.22148895263672, 39.39689064025879);
	glVertex3d(-15.9094820022583, 22.22148895263672, 48.40888595581055);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex3d(-2.828565306918539e-15, 30.865827560424805, 56.19397735595703);
	glVertex3d(-17.677669525146484, 30.865827560424805, 52.677669525146484);
	glVertex3d(-2.545641479459026e-15, 22.22148895263672, 51.573482513427734);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex3d(-17.677669525146484, 30.865827560424805, 52.677669525146484);
	glVertex3d(-15.9094820022583, 22.22148895263672, 48.40888595581055);
	glVertex3d(-2.545641479459026e-15, 22.22148895263672, 51.573482513427734);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex3d(17.677669525146484, 30.865827560424805, 52.677669525146484);
	glVertex3d(-2.828565306918539e-15, 30.865827560424805, 56.19397735595703);
	glVertex3d(15.9094820022583, 22.22148895263672, 48.40888595581055);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex3d(-2.828565306918539e-15, 30.865827560424805, 56.19397735595703);
	glVertex3d(-2.545641479459026e-15, 22.22148895263672, 51.573482513427734);
	glVertex3d(15.9094820022583, 22.22148895263672, 48.40888595581055);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex3d(32.6640739440918, 30.865827560424805, 42.6640739440918);
	glVertex3d(17.677669525146484, 30.865827560424805, 52.677669525146484);
	glVertex3d(29.39689064025879, 22.22148895263672, 39.39689064025879);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex3d(17.677669525146484, 30.865827560424805, 52.677669525146484);
	glVertex3d(15.9094820022583, 22.22148895263672, 48.40888595581055);
	glVertex3d(29.39689064025879, 22.22148895263672, 39.39689064025879);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex3d(42.677669525146484, 30.865827560424805, 27.677669525146484);
	glVertex3d(32.6640739440918, 30.865827560424805, 42.6640739440918);
	glVertex3d(38.40888595581055, 22.22148895263672, 25.9094820022583);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex3d(32.6640739440918, 30.865827560424805, 42.6640739440918);
	glVertex3d(29.39689064025879, 22.22148895263672, 39.39689064025879);
	glVertex3d(38.40888595581055, 22.22148895263672, 25.9094820022583);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex3d(46.19397735595703, 30.865827560424805, 10.000000000000005);
	glVertex3d(42.677669525146484, 30.865827560424805, 27.677669525146484);
	glVertex3d(41.573482513427734, 22.22148895263672, 10.000000000000005);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex3d(42.677669525146484, 30.865827560424805, 27.677669525146484);
	glVertex3d(38.40888595581055, 22.22148895263672, 25.9094820022583);
	glVertex3d(41.573482513427734, 22.22148895263672, 10.000000000000005);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex3d(42.677669525146484, 30.865827560424805, -7.677669525146484);
	glVertex3d(46.19397735595703, 30.865827560424805, 10.000000000000005);
	glVertex3d(38.40888595581055, 22.22148895263672, -5.909482002258301);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex3d(46.19397735595703, 30.865827560424805, 10.000000000000005);
	glVertex3d(41.573482513427734, 22.22148895263672, 10.000000000000005);
	glVertex3d(38.40888595581055, 22.22148895263672, -5.909482002258301);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex3d(32.6640739440918, 30.865827560424805, -22.664073944091797);
	glVertex3d(42.677669525146484, 30.865827560424805, -7.677669525146484);
	glVertex3d(29.39689064025879, 22.22148895263672, -19.39689064025879);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex3d(42.677669525146484, 30.865827560424805, -7.677669525146484);
	glVertex3d(38.40888595581055, 22.22148895263672, -5.909482002258301);
	glVertex3d(29.39689064025879, 22.22148895263672, -19.39689064025879);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex3d(17.677669525146484, 30.865827560424805, -32.677669525146484);
	glVertex3d(32.6640739440918, 30.865827560424805, -22.664073944091797);
	glVertex3d(15.9094820022583, 22.22148895263672, -28.408885955810547);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex3d(32.6640739440918, 30.865827560424805, -22.664073944091797);
	glVertex3d(29.39689064025879, 22.22148895263672, -19.39689064025879);
	glVertex3d(15.9094820022583, 22.22148895263672, -28.408885955810547);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex3d(8.485695497239144e-15, 30.865827560424805, -36.19397735595703);
	glVertex3d(17.677669525146484, 30.865827560424805, -32.677669525146484);
	glVertex3d(7.636924438377077e-15, 22.22148895263672, -31.573482513427734);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex3d(17.677669525146484, 30.865827560424805, -32.677669525146484);
	glVertex3d(15.9094820022583, 22.22148895263672, -28.408885955810547);
	glVertex3d(7.636924438377077e-15, 22.22148895263672, -31.573482513427734);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex3d(-17.677669525146484, 30.865827560424805, -32.677669525146484);
	glVertex3d(8.485695497239144e-15, 30.865827560424805, -36.19397735595703);
	glVertex3d(-15.9094820022583, 22.22148895263672, -28.408885955810547);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex3d(8.485695497239144e-15, 30.865827560424805, -36.19397735595703);
	glVertex3d(7.636924438377077e-15, 22.22148895263672, -31.573482513427734);
	glVertex3d(-15.9094820022583, 22.22148895263672, -28.408885955810547);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex3d(-32.6640739440918, 30.865827560424805, -22.664073944091797);
	glVertex3d(-17.677669525146484, 30.865827560424805, -32.677669525146484);
	glVertex3d(-29.39689064025879, 22.22148895263672, -19.39689064025879);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex3d(-17.677669525146484, 30.865827560424805, -32.677669525146484);
	glVertex3d(-15.9094820022583, 22.22148895263672, -28.408885955810547);
	glVertex3d(-29.39689064025879, 22.22148895263672, -19.39689064025879);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex3d(-42.677669525146484, 30.865827560424805, -7.677669525146484);
	glVertex3d(-32.6640739440918, 30.865827560424805, -22.664073944091797);
	glVertex3d(-38.40888595581055, 22.22148895263672, -5.909482002258301);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex3d(-32.6640739440918, 30.865827560424805, -22.664073944091797);
	glVertex3d(-29.39689064025879, 22.22148895263672, -19.39689064025879);
	glVertex3d(-38.40888595581055, 22.22148895263672, -5.909482002258301);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex3d(-46.19397735595703, 30.865827560424805, 10.0);
	glVertex3d(-42.677669525146484, 30.865827560424805, -7.677669525146484);
	glVertex3d(-41.573482513427734, 22.22148895263672, 10.0);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex3d(-42.677669525146484, 30.865827560424805, -7.677669525146484);
	glVertex3d(-38.40888595581055, 22.22148895263672, -5.909482002258301);
	glVertex3d(-41.573482513427734, 22.22148895263672, 10.0);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex3d(-38.40888595581055, 22.22148895263672, 25.9094820022583);
	glVertex3d(-41.573482513427734, 22.22148895263672, 10.0);
	glVertex3d(-32.6640739440918, 14.644660949707031, 23.529902458190918);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex3d(-41.573482513427734, 22.22148895263672, 10.0);
	glVertex3d(-35.35533905029297, 14.644660949707031, 10.0);
	glVertex3d(-32.6640739440918, 14.644660949707031, 23.529902458190918);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex3d(-29.39689064025879, 22.22148895263672, 39.39689064025879);
	glVertex3d(-38.40888595581055, 22.22148895263672, 25.9094820022583);
	glVertex3d(-25.0, 14.644660949707031, 35.0);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex3d(-38.40888595581055, 22.22148895263672, 25.9094820022583);
	glVertex3d(-32.6640739440918, 14.644660949707031, 23.529902458190918);
	glVertex3d(-25.0, 14.644660949707031, 35.0);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex3d(-15.9094820022583, 22.22148895263672, 48.40888595581055);
	glVertex3d(-29.39689064025879, 22.22148895263672, 39.39689064025879);
	glVertex3d(-13.529902458190918, 14.644660949707031, 42.6640739440918);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex3d(-29.39689064025879, 22.22148895263672, 39.39689064025879);
	glVertex3d(-25.0, 14.644660949707031, 35.0);
	glVertex3d(-13.529902458190918, 14.644660949707031, 42.6640739440918);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex3d(-2.545641479459026e-15, 22.22148895263672, 51.573482513427734);
	glVertex3d(-15.9094820022583, 22.22148895263672, 48.40888595581055);
	glVertex3d(-2.1648902170310876e-15, 14.644660949707031, 45.35533905029297);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex3d(-15.9094820022583, 22.22148895263672, 48.40888595581055);
	glVertex3d(-13.529902458190918, 14.644660949707031, 42.6640739440918);
	glVertex3d(-2.1648902170310876e-15, 14.644660949707031, 45.35533905029297);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex3d(15.9094820022583, 22.22148895263672, 48.40888595581055);
	glVertex3d(-2.545641479459026e-15, 22.22148895263672, 51.573482513427734);
	glVertex3d(13.529902458190918, 14.644660949707031, 42.6640739440918);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex3d(-2.545641479459026e-15, 22.22148895263672, 51.573482513427734);
	glVertex3d(-2.1648902170310876e-15, 14.644660949707031, 45.35533905029297);
	glVertex3d(13.529902458190918, 14.644660949707031, 42.6640739440918);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex3d(29.39689064025879, 22.22148895263672, 39.39689064025879);
	glVertex3d(15.9094820022583, 22.22148895263672, 48.40888595581055);
	glVertex3d(25.0, 14.644660949707031, 35.0);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex3d(15.9094820022583, 22.22148895263672, 48.40888595581055);
	glVertex3d(13.529902458190918, 14.644660949707031, 42.6640739440918);
	glVertex3d(25.0, 14.644660949707031, 35.0);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex3d(38.40888595581055, 22.22148895263672, 25.9094820022583);
	glVertex3d(29.39689064025879, 22.22148895263672, 39.39689064025879);
	glVertex3d(32.6640739440918, 14.644660949707031, 23.529902458190918);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex3d(29.39689064025879, 22.22148895263672, 39.39689064025879);
	glVertex3d(25.0, 14.644660949707031, 35.0);
	glVertex3d(32.6640739440918, 14.644660949707031, 23.529902458190918);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex3d(41.573482513427734, 22.22148895263672, 10.000000000000005);
	glVertex3d(38.40888595581055, 22.22148895263672, 25.9094820022583);
	glVertex3d(35.35533905029297, 14.644660949707031, 10.000000000000004);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex3d(38.40888595581055, 22.22148895263672, 25.9094820022583);
	glVertex3d(32.6640739440918, 14.644660949707031, 23.529902458190918);
	glVertex3d(35.35533905029297, 14.644660949707031, 10.000000000000004);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex3d(38.40888595581055, 22.22148895263672, -5.909482002258301);
	glVertex3d(41.573482513427734, 22.22148895263672, 10.000000000000005);
	glVertex3d(32.6640739440918, 14.644660949707031, -3.529902458190918);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex3d(41.573482513427734, 22.22148895263672, 10.000000000000005);
	glVertex3d(35.35533905029297, 14.644660949707031, 10.000000000000004);
	glVertex3d(32.6640739440918, 14.644660949707031, -3.529902458190918);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex3d(29.39689064025879, 22.22148895263672, -19.39689064025879);
	glVertex3d(38.40888595581055, 22.22148895263672, -5.909482002258301);
	glVertex3d(25.0, 14.644660949707031, -15.0);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex3d(38.40888595581055, 22.22148895263672, -5.909482002258301);
	glVertex3d(32.6640739440918, 14.644660949707031, -3.529902458190918);
	glVertex3d(25.0, 14.644660949707031, -15.0);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex3d(15.9094820022583, 22.22148895263672, -28.408885955810547);
	glVertex3d(29.39689064025879, 22.22148895263672, -19.39689064025879);
	glVertex3d(13.529902458190918, 14.644660949707031, -22.664073944091797);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex3d(29.39689064025879, 22.22148895263672, -19.39689064025879);
	glVertex3d(25.0, 14.644660949707031, -15.0);
	glVertex3d(13.529902458190918, 14.644660949707031, -22.664073944091797);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex3d(7.636924438377077e-15, 22.22148895263672, -31.573482513427734);
	glVertex3d(15.9094820022583, 22.22148895263672, -28.408885955810547);
	glVertex3d(6.494670439335026e-15, 14.644660949707031, -25.35533905029297);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex3d(15.9094820022583, 22.22148895263672, -28.408885955810547);
	glVertex3d(13.529902458190918, 14.644660949707031, -22.664073944091797);
	glVertex3d(6.494670439335026e-15, 14.644660949707031, -25.35533905029297);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex3d(-15.9094820022583, 22.22148895263672, -28.408885955810547);
	glVertex3d(7.636924438377077e-15, 22.22148895263672, -31.573482513427734);
	glVertex3d(-13.529902458190918, 14.644660949707031, -22.664073944091797);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex3d(7.636924438377077e-15, 22.22148895263672, -31.573482513427734);
	glVertex3d(6.494670439335026e-15, 14.644660949707031, -25.35533905029297);
	glVertex3d(-13.529902458190918, 14.644660949707031, -22.664073944091797);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex3d(-29.39689064025879, 22.22148895263672, -19.39689064025879);
	glVertex3d(-15.9094820022583, 22.22148895263672, -28.408885955810547);
	glVertex3d(-25.0, 14.644660949707031, -15.0);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex3d(-15.9094820022583, 22.22148895263672, -28.408885955810547);
	glVertex3d(-13.529902458190918, 14.644660949707031, -22.664073944091797);
	glVertex3d(-25.0, 14.644660949707031, -15.0);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex3d(-38.40888595581055, 22.22148895263672, -5.909482002258301);
	glVertex3d(-29.39689064025879, 22.22148895263672, -19.39689064025879);
	glVertex3d(-32.6640739440918, 14.644660949707031, -3.529902458190918);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex3d(-29.39689064025879, 22.22148895263672, -19.39689064025879);
	glVertex3d(-25.0, 14.644660949707031, -15.0);
	glVertex3d(-32.6640739440918, 14.644660949707031, -3.529902458190918);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex3d(-41.573482513427734, 22.22148895263672, 10.0);
	glVertex3d(-38.40888595581055, 22.22148895263672, -5.909482002258301);
	glVertex3d(-35.35533905029297, 14.644660949707031, 10.0);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex3d(-38.40888595581055, 22.22148895263672, -5.909482002258301);
	glVertex3d(-32.6640739440918, 14.644660949707031, -3.529902458190918);
	glVertex3d(-35.35533905029297, 14.644660949707031, 10.0);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex3d(-32.6640739440918, 14.644660949707031, 23.529902458190918);
	glVertex3d(-35.35533905029297, 14.644660949707031, 10.0);
	glVertex3d(-25.663997650146484, 8.426517486572266, 20.630375862121582);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex3d(-35.35533905029297, 14.644660949707031, 10.0);
	glVertex3d(-27.77851104736328, 8.426517486572266, 10.0);
	glVertex3d(-25.663997650146484, 8.426517486572266, 20.630375862121582);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex3d(-25.0, 14.644660949707031, 35.0);
	glVertex3d(-32.6640739440918, 14.644660949707031, 23.529902458190918);
	glVertex3d(-19.64237403869629, 8.426517486572266, 29.64237403869629);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex3d(-32.6640739440918, 14.644660949707031, 23.529902458190918);
	glVertex3d(-25.663997650146484, 8.426517486572266, 20.630375862121582);
	glVertex3d(-19.64237403869629, 8.426517486572266, 29.64237403869629);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex3d(-13.529902458190918, 14.644660949707031, 42.6640739440918);
	glVertex3d(-25.0, 14.644660949707031, 35.0);
	glVertex3d(-10.630375862121582, 8.426517486572266, 35.663997650146484);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex3d(-25.0, 14.644660949707031, 35.0);
	glVertex3d(-19.64237403869629, 8.426517486572266, 29.64237403869629);
	glVertex3d(-10.630375862121582, 8.426517486572266, 35.663997650146484);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex3d(-2.1648902170310876e-15, 14.644660949707031, 45.35533905029297);
	glVertex3d(-13.529902458190918, 14.644660949707031, 42.6640739440918);
	glVertex3d(-1.7009432726447136e-15, 8.426517486572266, 37.77851104736328);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex3d(-13.529902458190918, 14.644660949707031, 42.6640739440918);
	glVertex3d(-10.630375862121582, 8.426517486572266, 35.663997650146484);
	glVertex3d(-1.7009432726447136e-15, 8.426517486572266, 37.77851104736328);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex3d(13.529902458190918, 14.644660949707031, 42.6640739440918);
	glVertex3d(-2.1648902170310876e-15, 14.644660949707031, 45.35533905029297);
	glVertex3d(10.630375862121582, 8.426517486572266, 35.663997650146484);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex3d(-2.1648902170310876e-15, 14.644660949707031, 45.35533905029297);
	glVertex3d(-1.7009432726447136e-15, 8.426517486572266, 37.77851104736328);
	glVertex3d(10.630375862121582, 8.426517486572266, 35.663997650146484);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex3d(25.0, 14.644660949707031, 35.0);
	glVertex3d(13.529902458190918, 14.644660949707031, 42.6640739440918);
	glVertex3d(19.64237403869629, 8.426517486572266, 29.64237403869629);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex3d(13.529902458190918, 14.644660949707031, 42.6640739440918);
	glVertex3d(10.630375862121582, 8.426517486572266, 35.663997650146484);
	glVertex3d(19.64237403869629, 8.426517486572266, 29.64237403869629);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex3d(32.6640739440918, 14.644660949707031, 23.529902458190918);
	glVertex3d(25.0, 14.644660949707031, 35.0);
	glVertex3d(25.663997650146484, 8.426517486572266, 20.630375862121582);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex3d(25.0, 14.644660949707031, 35.0);
	glVertex3d(19.64237403869629, 8.426517486572266, 29.64237403869629);
	glVertex3d(25.663997650146484, 8.426517486572266, 20.630375862121582);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex3d(35.35533905029297, 14.644660949707031, 10.000000000000004);
	glVertex3d(32.6640739440918, 14.644660949707031, 23.529902458190918);
	glVertex3d(27.77851104736328, 8.426517486572266, 10.000000000000004);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex3d(32.6640739440918, 14.644660949707031, 23.529902458190918);
	glVertex3d(25.663997650146484, 8.426517486572266, 20.630375862121582);
	glVertex3d(27.77851104736328, 8.426517486572266, 10.000000000000004);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex3d(32.6640739440918, 14.644660949707031, -3.529902458190918);
	glVertex3d(35.35533905029297, 14.644660949707031, 10.000000000000004);
	glVertex3d(25.663997650146484, 8.426517486572266, -0.630375862121582);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex3d(35.35533905029297, 14.644660949707031, 10.000000000000004);
	glVertex3d(27.77851104736328, 8.426517486572266, 10.000000000000004);
	glVertex3d(25.663997650146484, 8.426517486572266, -0.630375862121582);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex3d(25.0, 14.644660949707031, -15.0);
	glVertex3d(32.6640739440918, 14.644660949707031, -3.529902458190918);
	glVertex3d(19.64237403869629, 8.426517486572266, -9.642374038696289);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex3d(32.6640739440918, 14.644660949707031, -3.529902458190918);
	glVertex3d(25.663997650146484, 8.426517486572266, -0.630375862121582);
	glVertex3d(19.64237403869629, 8.426517486572266, -9.642374038696289);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex3d(13.529902458190918, 14.644660949707031, -22.664073944091797);
	glVertex3d(25.0, 14.644660949707031, -15.0);
	glVertex3d(10.630375862121582, 8.426517486572266, -15.663997650146484);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex3d(25.0, 14.644660949707031, -15.0);
	glVertex3d(19.64237403869629, 8.426517486572266, -9.642374038696289);
	glVertex3d(10.630375862121582, 8.426517486572266, -15.663997650146484);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex3d(6.494670439335026e-15, 14.644660949707031, -25.35533905029297);
	glVertex3d(13.529902458190918, 14.644660949707031, -22.664073944091797);
	glVertex3d(5.102829712055022e-15, 8.426517486572266, -17.77851104736328);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex3d(13.529902458190918, 14.644660949707031, -22.664073944091797);
	glVertex3d(10.630375862121582, 8.426517486572266, -15.663997650146484);
	glVertex3d(5.102829712055022e-15, 8.426517486572266, -17.77851104736328);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex3d(-13.529902458190918, 14.644660949707031, -22.664073944091797);
	glVertex3d(6.494670439335026e-15, 14.644660949707031, -25.35533905029297);
	glVertex3d(-10.630375862121582, 8.426517486572266, -15.663997650146484);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex3d(6.494670439335026e-15, 14.644660949707031, -25.35533905029297);
	glVertex3d(5.102829712055022e-15, 8.426517486572266, -17.77851104736328);
	glVertex3d(-10.630375862121582, 8.426517486572266, -15.663997650146484);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex3d(-25.0, 14.644660949707031, -15.0);
	glVertex3d(-13.529902458190918, 14.644660949707031, -22.664073944091797);
	glVertex3d(-19.64237403869629, 8.426517486572266, -9.642374038696289);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex3d(-13.529902458190918, 14.644660949707031, -22.664073944091797);
	glVertex3d(-10.630375862121582, 8.426517486572266, -15.663997650146484);
	glVertex3d(-19.64237403869629, 8.426517486572266, -9.642374038696289);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex3d(-32.6640739440918, 14.644660949707031, -3.529902458190918);
	glVertex3d(-25.0, 14.644660949707031, -15.0);
	glVertex3d(-25.663997650146484, 8.426517486572266, -0.630375862121582);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex3d(-25.0, 14.644660949707031, -15.0);
	glVertex3d(-19.64237403869629, 8.426517486572266, -9.642374038696289);
	glVertex3d(-25.663997650146484, 8.426517486572266, -0.630375862121582);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex3d(-35.35533905029297, 14.644660949707031, 10.0);
	glVertex3d(-32.6640739440918, 14.644660949707031, -3.529902458190918);
	glVertex3d(-27.77851104736328, 8.426517486572266, 10.0);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex3d(-32.6640739440918, 14.644660949707031, -3.529902458190918);
	glVertex3d(-25.663997650146484, 8.426517486572266, -0.630375862121582);
	glVertex3d(-27.77851104736328, 8.426517486572266, 10.0);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex3d(-25.663997650146484, 8.426517486572266, 20.630375862121582);
	glVertex3d(-27.77851104736328, 8.426517486572266, 10.0);
	glVertex3d(-17.677669525146484, 3.8060226440429688, 17.322330474853516);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex3d(-27.77851104736328, 8.426517486572266, 10.0);
	glVertex3d(-19.134172439575195, 3.8060226440429688, 10.0);
	glVertex3d(-17.677669525146484, 3.8060226440429688, 17.322330474853516);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex3d(-19.64237403869629, 8.426517486572266, 29.64237403869629);
	glVertex3d(-25.663997650146484, 8.426517486572266, 20.630375862121582);
	glVertex3d(-13.529902458190918, 3.8060226440429688, 23.529902458190918);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex3d(-25.663997650146484, 8.426517486572266, 20.630375862121582);
	glVertex3d(-17.677669525146484, 3.8060226440429688, 17.322330474853516);
	glVertex3d(-13.529902458190918, 3.8060226440429688, 23.529902458190918);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex3d(-10.630375862121582, 8.426517486572266, 35.663997650146484);
	glVertex3d(-19.64237403869629, 8.426517486572266, 29.64237403869629);
	glVertex3d(-7.322330474853516, 3.8060226440429688, 27.677669525146484);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex3d(-19.64237403869629, 8.426517486572266, 29.64237403869629);
	glVertex3d(-13.529902458190918, 3.8060226440429688, 23.529902458190918);
	glVertex3d(-7.322330474853516, 3.8060226440429688, 27.677669525146484);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex3d(-1.7009432726447136e-15, 8.426517486572266, 37.77851104736328);
	glVertex3d(-10.630375862121582, 8.426517486572266, 35.663997650146484);
	glVertex3d(-1.1716300545648963e-15, 3.8060226440429688, 29.134172439575195);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex3d(-10.630375862121582, 8.426517486572266, 35.663997650146484);
	glVertex3d(-7.322330474853516, 3.8060226440429688, 27.677669525146484);
	glVertex3d(-1.1716300545648963e-15, 3.8060226440429688, 29.134172439575195);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex3d(10.630375862121582, 8.426517486572266, 35.663997650146484);
	glVertex3d(-1.7009432726447136e-15, 8.426517486572266, 37.77851104736328);
	glVertex3d(7.322330474853516, 3.8060226440429688, 27.677669525146484);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex3d(-1.7009432726447136e-15, 8.426517486572266, 37.77851104736328);
	glVertex3d(-1.1716300545648963e-15, 3.8060226440429688, 29.134172439575195);
	glVertex3d(7.322330474853516, 3.8060226440429688, 27.677669525146484);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex3d(19.64237403869629, 8.426517486572266, 29.64237403869629);
	glVertex3d(10.630375862121582, 8.426517486572266, 35.663997650146484);
	glVertex3d(13.529902458190918, 3.8060226440429688, 23.529902458190918);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex3d(10.630375862121582, 8.426517486572266, 35.663997650146484);
	glVertex3d(7.322330474853516, 3.8060226440429688, 27.677669525146484);
	glVertex3d(13.529902458190918, 3.8060226440429688, 23.529902458190918);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex3d(25.663997650146484, 8.426517486572266, 20.630375862121582);
	glVertex3d(19.64237403869629, 8.426517486572266, 29.64237403869629);
	glVertex3d(17.677669525146484, 3.8060226440429688, 17.322330474853516);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex3d(19.64237403869629, 8.426517486572266, 29.64237403869629);
	glVertex3d(13.529902458190918, 3.8060226440429688, 23.529902458190918);
	glVertex3d(17.677669525146484, 3.8060226440429688, 17.322330474853516);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex3d(27.77851104736328, 8.426517486572266, 10.000000000000004);
	glVertex3d(25.663997650146484, 8.426517486572266, 20.630375862121582);
	glVertex3d(19.134172439575195, 3.8060226440429688, 10.000000000000002);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex3d(25.663997650146484, 8.426517486572266, 20.630375862121582);
	glVertex3d(17.677669525146484, 3.8060226440429688, 17.322330474853516);
	glVertex3d(19.134172439575195, 3.8060226440429688, 10.000000000000002);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex3d(25.663997650146484, 8.426517486572266, -0.630375862121582);
	glVertex3d(27.77851104736328, 8.426517486572266, 10.000000000000004);
	glVertex3d(17.677669525146484, 3.8060226440429688, 2.6776695251464844);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex3d(27.77851104736328, 8.426517486572266, 10.000000000000004);
	glVertex3d(19.134172439575195, 3.8060226440429688, 10.000000000000002);
	glVertex3d(17.677669525146484, 3.8060226440429688, 2.6776695251464844);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex3d(19.64237403869629, 8.426517486572266, -9.642374038696289);
	glVertex3d(25.663997650146484, 8.426517486572266, -0.630375862121582);
	glVertex3d(13.529902458190918, 3.8060226440429688, -3.529902458190918);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex3d(25.663997650146484, 8.426517486572266, -0.630375862121582);
	glVertex3d(17.677669525146484, 3.8060226440429688, 2.6776695251464844);
	glVertex3d(13.529902458190918, 3.8060226440429688, -3.529902458190918);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex3d(10.630375862121582, 8.426517486572266, -15.663997650146484);
	glVertex3d(19.64237403869629, 8.426517486572266, -9.642374038696289);
	glVertex3d(7.322330474853516, 3.8060226440429688, -7.677669525146484);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex3d(19.64237403869629, 8.426517486572266, -9.642374038696289);
	glVertex3d(13.529902458190918, 3.8060226440429688, -3.529902458190918);
	glVertex3d(7.322330474853516, 3.8060226440429688, -7.677669525146484);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex3d(5.102829712055022e-15, 8.426517486572266, -17.77851104736328);
	glVertex3d(10.630375862121582, 8.426517486572266, -15.663997650146484);
	glVertex3d(3.5148902695738074e-15, 3.8060226440429688, -9.134172439575195);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex3d(10.630375862121582, 8.426517486572266, -15.663997650146484);
	glVertex3d(7.322330474853516, 3.8060226440429688, -7.677669525146484);
	glVertex3d(3.5148902695738074e-15, 3.8060226440429688, -9.134172439575195);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex3d(-10.630375862121582, 8.426517486572266, -15.663997650146484);
	glVertex3d(5.102829712055022e-15, 8.426517486572266, -17.77851104736328);
	glVertex3d(-7.322330474853516, 3.8060226440429688, -7.677669525146484);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex3d(5.102829712055022e-15, 8.426517486572266, -17.77851104736328);
	glVertex3d(3.5148902695738074e-15, 3.8060226440429688, -9.134172439575195);
	glVertex3d(-7.322330474853516, 3.8060226440429688, -7.677669525146484);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex3d(-19.64237403869629, 8.426517486572266, -9.642374038696289);
	glVertex3d(-10.630375862121582, 8.426517486572266, -15.663997650146484);
	glVertex3d(-13.529902458190918, 3.8060226440429688, -3.529902458190918);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex3d(-10.630375862121582, 8.426517486572266, -15.663997650146484);
	glVertex3d(-7.322330474853516, 3.8060226440429688, -7.677669525146484);
	glVertex3d(-13.529902458190918, 3.8060226440429688, -3.529902458190918);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex3d(-25.663997650146484, 8.426517486572266, -0.630375862121582);
	glVertex3d(-19.64237403869629, 8.426517486572266, -9.642374038696289);
	glVertex3d(-17.677669525146484, 3.8060226440429688, 2.6776695251464844);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex3d(-19.64237403869629, 8.426517486572266, -9.642374038696289);
	glVertex3d(-13.529902458190918, 3.8060226440429688, -3.529902458190918);
	glVertex3d(-17.677669525146484, 3.8060226440429688, 2.6776695251464844);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex3d(-27.77851104736328, 8.426517486572266, 10.0);
	glVertex3d(-25.663997650146484, 8.426517486572266, -0.630375862121582);
	glVertex3d(-19.134172439575195, 3.8060226440429688, 10.0);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex3d(-25.663997650146484, 8.426517486572266, -0.630375862121582);
	glVertex3d(-17.677669525146484, 3.8060226440429688, 2.6776695251464844);
	glVertex3d(-19.134172439575195, 3.8060226440429688, 10.0);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex3d(-17.677669525146484, 3.8060226440429688, 17.322330474853516);
	glVertex3d(-19.134172439575195, 3.8060226440429688, 10.0);
	glVertex3d(-9.011998176574707, 0.9607353210449219, 13.73289179801941);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex3d(-19.134172439575195, 3.8060226440429688, 10.0);
	glVertex3d(-9.754515647888184, 0.9607353210449219, 10.0);
	glVertex3d(-9.011998176574707, 0.9607353210449219, 13.73289179801941);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex3d(-13.529902458190918, 3.8060226440429688, 23.529902458190918);
	glVertex3d(-17.677669525146484, 3.8060226440429688, 17.322330474853516);
	glVertex3d(-6.897484302520752, 0.9607353210449219, 16.897484302520752);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex3d(-17.677669525146484, 3.8060226440429688, 17.322330474853516);
	glVertex3d(-9.011998176574707, 0.9607353210449219, 13.73289179801941);
	glVertex3d(-6.897484302520752, 0.9607353210449219, 16.897484302520752);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex3d(-7.322330474853516, 3.8060226440429688, 27.677669525146484);
	glVertex3d(-13.529902458190918, 3.8060226440429688, 23.529902458190918);
	glVertex3d(-3.732891798019409, 0.9607353210449219, 19.011998176574707);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex3d(-13.529902458190918, 3.8060226440429688, 23.529902458190918);
	glVertex3d(-6.897484302520752, 0.9607353210449219, 16.897484302520752);
	glVertex3d(-3.732891798019409, 0.9607353210449219, 19.011998176574707);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex3d(-1.1716300545648963e-15, 3.8060226440429688, 29.134172439575195);
	glVertex3d(-7.322330474853516, 3.8060226440429688, 27.677669525146484);
	glVertex3d(-5.972918472617111e-16, 0.9607353210449219, 19.754515647888184);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex3d(-7.322330474853516, 3.8060226440429688, 27.677669525146484);
	glVertex3d(-3.732891798019409, 0.9607353210449219, 19.011998176574707);
	glVertex3d(-5.972918472617111e-16, 0.9607353210449219, 19.754515647888184);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex3d(7.322330474853516, 3.8060226440429688, 27.677669525146484);
	glVertex3d(-1.1716300545648963e-15, 3.8060226440429688, 29.134172439575195);
	glVertex3d(3.732891798019409, 0.9607353210449219, 19.011998176574707);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex3d(-1.1716300545648963e-15, 3.8060226440429688, 29.134172439575195);
	glVertex3d(-5.972918472617111e-16, 0.9607353210449219, 19.754515647888184);
	glVertex3d(3.732891798019409, 0.9607353210449219, 19.011998176574707);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex3d(13.529902458190918, 3.8060226440429688, 23.529902458190918);
	glVertex3d(7.322330474853516, 3.8060226440429688, 27.677669525146484);
	glVertex3d(6.897484302520752, 0.9607353210449219, 16.897484302520752);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex3d(7.322330474853516, 3.8060226440429688, 27.677669525146484);
	glVertex3d(3.732891798019409, 0.9607353210449219, 19.011998176574707);
	glVertex3d(6.897484302520752, 0.9607353210449219, 16.897484302520752);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex3d(17.677669525146484, 3.8060226440429688, 17.322330474853516);
	glVertex3d(13.529902458190918, 3.8060226440429688, 23.529902458190918);
	glVertex3d(9.011998176574707, 0.9607353210449219, 13.73289179801941);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex3d(13.529902458190918, 3.8060226440429688, 23.529902458190918);
	glVertex3d(6.897484302520752, 0.9607353210449219, 16.897484302520752);
	glVertex3d(9.011998176574707, 0.9607353210449219, 13.73289179801941);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex3d(19.134172439575195, 3.8060226440429688, 10.000000000000002);
	glVertex3d(17.677669525146484, 3.8060226440429688, 17.322330474853516);
	glVertex3d(9.754515647888184, 0.9607353210449219, 10.000000000000002);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex3d(17.677669525146484, 3.8060226440429688, 17.322330474853516);
	glVertex3d(9.011998176574707, 0.9607353210449219, 13.73289179801941);
	glVertex3d(9.754515647888184, 0.9607353210449219, 10.000000000000002);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex3d(17.677669525146484, 3.8060226440429688, 2.6776695251464844);
	glVertex3d(19.134172439575195, 3.8060226440429688, 10.000000000000002);
	glVertex3d(9.011998176574707, 0.9607353210449219, 6.267108201980591);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex3d(19.134172439575195, 3.8060226440429688, 10.000000000000002);
	glVertex3d(9.754515647888184, 0.9607353210449219, 10.000000000000002);
	glVertex3d(9.011998176574707, 0.9607353210449219, 6.267108201980591);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex3d(13.529902458190918, 3.8060226440429688, -3.529902458190918);
	glVertex3d(17.677669525146484, 3.8060226440429688, 2.6776695251464844);
	glVertex3d(6.897484302520752, 0.9607353210449219, 3.102515697479248);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex3d(17.677669525146484, 3.8060226440429688, 2.6776695251464844);
	glVertex3d(9.011998176574707, 0.9607353210449219, 6.267108201980591);
	glVertex3d(6.897484302520752, 0.9607353210449219, 3.102515697479248);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex3d(7.322330474853516, 3.8060226440429688, -7.677669525146484);
	glVertex3d(13.529902458190918, 3.8060226440429688, -3.529902458190918);
	glVertex3d(3.732891798019409, 0.9607353210449219, 0.988001823425293);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex3d(13.529902458190918, 3.8060226440429688, -3.529902458190918);
	glVertex3d(6.897484302520752, 0.9607353210449219, 3.102515697479248);
	glVertex3d(3.732891798019409, 0.9607353210449219, 0.988001823425293);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex3d(3.5148902695738074e-15, 3.8060226440429688, -9.134172439575195);
	glVertex3d(7.322330474853516, 3.8060226440429688, -7.677669525146484);
	glVertex3d(1.7918755417851333e-15, 0.9607353210449219, 0.2454843521118164);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex3d(7.322330474853516, 3.8060226440429688, -7.677669525146484);
	glVertex3d(3.732891798019409, 0.9607353210449219, 0.988001823425293);
	glVertex3d(1.7918755417851333e-15, 0.9607353210449219, 0.2454843521118164);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex3d(-7.322330474853516, 3.8060226440429688, -7.677669525146484);
	glVertex3d(3.5148902695738074e-15, 3.8060226440429688, -9.134172439575195);
	glVertex3d(-3.732891798019409, 0.9607353210449219, 0.988001823425293);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex3d(3.5148902695738074e-15, 3.8060226440429688, -9.134172439575195);
	glVertex3d(1.7918755417851333e-15, 0.9607353210449219, 0.2454843521118164);
	glVertex3d(-3.732891798019409, 0.9607353210449219, 0.988001823425293);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex3d(-13.529902458190918, 3.8060226440429688, -3.529902458190918);
	glVertex3d(-7.322330474853516, 3.8060226440429688, -7.677669525146484);
	glVertex3d(-6.897484302520752, 0.9607353210449219, 3.102515697479248);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex3d(-7.322330474853516, 3.8060226440429688, -7.677669525146484);
	glVertex3d(-3.732891798019409, 0.9607353210449219, 0.988001823425293);
	glVertex3d(-6.897484302520752, 0.9607353210449219, 3.102515697479248);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex3d(-17.677669525146484, 3.8060226440429688, 2.6776695251464844);
	glVertex3d(-13.529902458190918, 3.8060226440429688, -3.529902458190918);
	glVertex3d(-9.011998176574707, 0.9607353210449219, 6.267108201980591);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex3d(-13.529902458190918, 3.8060226440429688, -3.529902458190918);
	glVertex3d(-6.897484302520752, 0.9607353210449219, 3.102515697479248);
	glVertex3d(-9.011998176574707, 0.9607353210449219, 6.267108201980591);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex3d(-19.134172439575195, 3.8060226440429688, 10.0);
	glVertex3d(-17.677669525146484, 3.8060226440429688, 2.6776695251464844);
	glVertex3d(-9.754515647888184, 0.9607353210449219, 10.0);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex3d(-17.677669525146484, 3.8060226440429688, 2.6776695251464844);
	glVertex3d(-9.011998176574707, 0.9607353210449219, 6.267108201980591);
	glVertex3d(-9.754515647888184, 0.9607353210449219, 10.0);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex3d(-9.011998176574707, 0.9607353210449219, 13.73289179801941);
	glVertex3d(-9.754515647888184, 0.9607353210449219, 10.0);
	glVertex3d(-5.657130613837078e-15, 0.0, 10.000000000000002);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex3d(-6.897484302520752, 0.9607353210449219, 16.897484302520752);
	glVertex3d(-9.011998176574707, 0.9607353210449219, 13.73289179801941);
	glVertex3d(-5.657130613837078e-15, 0.0, 10.000000000000002);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex3d(-3.732891798019409, 0.9607353210449219, 19.011998176574707);
	glVertex3d(-6.897484302520752, 0.9607353210449219, 16.897484302520752);
	glVertex3d(-5.657130613837078e-15, 0.0, 10.000000000000002);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex3d(-5.972918472617111e-16, 0.9607353210449219, 19.754515647888184);
	glVertex3d(-3.732891798019409, 0.9607353210449219, 19.011998176574707);
	glVertex3d(-5.657130613837078e-15, 0.0, 10.000000000000002);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex3d(3.732891798019409, 0.9607353210449219, 19.011998176574707);
	glVertex3d(-5.972918472617111e-16, 0.9607353210449219, 19.754515647888184);
	glVertex3d(-5.657130613837078e-15, 0.0, 10.000000000000002);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex3d(6.897484302520752, 0.9607353210449219, 16.897484302520752);
	glVertex3d(3.732891798019409, 0.9607353210449219, 19.011998176574707);
	glVertex3d(-5.657130613837078e-15, 0.0, 10.000000000000002);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex3d(9.011998176574707, 0.9607353210449219, 13.73289179801941);
	glVertex3d(6.897484302520752, 0.9607353210449219, 16.897484302520752);
	glVertex3d(-5.657130613837078e-15, 0.0, 10.000000000000002);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex3d(9.754515647888184, 0.9607353210449219, 10.000000000000002);
	glVertex3d(9.011998176574707, 0.9607353210449219, 13.73289179801941);
	glVertex3d(-5.657130613837078e-15, 0.0, 10.000000000000002);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex3d(9.011998176574707, 0.9607353210449219, 6.267108201980591);
	glVertex3d(9.754515647888184, 0.9607353210449219, 10.000000000000002);
	glVertex3d(-5.657130613837078e-15, 0.0, 10.000000000000002);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex3d(6.897484302520752, 0.9607353210449219, 3.102515697479248);
	glVertex3d(9.011998176574707, 0.9607353210449219, 6.267108201980591);
	glVertex3d(-5.657130613837078e-15, 0.0, 10.000000000000002);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex3d(3.732891798019409, 0.9607353210449219, 0.988001823425293);
	glVertex3d(6.897484302520752, 0.9607353210449219, 3.102515697479248);
	glVertex3d(-5.657130613837078e-15, 0.0, 10.000000000000002);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex3d(1.7918755417851333e-15, 0.9607353210449219, 0.2454843521118164);
	glVertex3d(3.732891798019409, 0.9607353210449219, 0.988001823425293);
	glVertex3d(-5.657130613837078e-15, 0.0, 10.000000000000002);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex3d(-3.732891798019409, 0.9607353210449219, 0.988001823425293);
	glVertex3d(1.7918755417851333e-15, 0.9607353210449219, 0.2454843521118164);
	glVertex3d(-5.657130613837078e-15, 0.0, 10.000000000000002);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex3d(-6.897484302520752, 0.9607353210449219, 3.102515697479248);
	glVertex3d(-3.732891798019409, 0.9607353210449219, 0.988001823425293);
	glVertex3d(-5.657130613837078e-15, 0.0, 10.000000000000002);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex3d(-9.011998176574707, 0.9607353210449219, 6.267108201980591);
	glVertex3d(-6.897484302520752, 0.9607353210449219, 3.102515697479248);
	glVertex3d(-5.657130613837078e-15, 0.0, 10.000000000000002);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex3d(-9.754515647888184, 0.9607353210449219, 10.0);
	glVertex3d(-9.011998176574707, 0.9607353210449219, 6.267108201980591);
	glVertex3d(-5.657130613837078e-15, 0.0, 10.000000000000002);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex3d(-45.23757553100586, 40.0, 28.73801612854004);
	glVertex3d(-48.87276840209961, 40.0, 10.462659925222397);
	glVertex3d(-42.677669525146484, 30.865827560424805, 27.677669525146484);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex3d(-48.87276840209961, 40.0, 10.462659925222397);
	glVertex3d(-48.96479797363281, 40.0, 10.0);
	glVertex3d(-46.19397735595703, 30.865827560424805, 10.0);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex3d(-48.87276840209961, 40.0, 10.462659925222397);
	glVertex3d(-46.19397735595703, 30.865827560424805, 10.0);
	glVertex3d(-42.677669525146484, 30.865827560424805, 27.677669525146484);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex3d(-34.62334060668945, 40.0, 44.62334060668945);
	glVertex3d(-44.97549819946289, 40.0, 29.13024139404297);
	glVertex3d(-32.6640739440918, 30.865827560424805, 42.6640739440918);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex3d(-44.97549819946289, 40.0, 29.13024139404297);
	glVertex3d(-45.23757553100586, 40.0, 28.73801612854004);
	glVertex3d(-42.677669525146484, 30.865827560424805, 27.677669525146484);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex3d(-44.97549819946289, 40.0, 29.13024139404297);
	glVertex3d(-42.677669525146484, 30.865827560424805, 27.677669525146484);
	glVertex3d(-32.6640739440918, 30.865827560424805, 42.6640739440918);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex3d(-18.73801612854004, 40.0, 55.23757553100586);
	glVertex3d(-34.23111343383789, 40.0, 44.885414123535156);
	glVertex3d(-17.677669525146484, 30.865827560424805, 52.677669525146484);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex3d(-34.23111343383789, 40.0, 44.885414123535156);
	glVertex3d(-34.62334060668945, 40.0, 44.62334060668945);
	glVertex3d(-32.6640739440918, 30.865827560424805, 42.6640739440918);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex3d(-34.23111343383789, 40.0, 44.885414123535156);
	glVertex3d(-32.6640739440918, 30.865827560424805, 42.6640739440918);
	glVertex3d(-17.677669525146484, 30.865827560424805, 52.677669525146484);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex3d(-2.9982291826271277e-15, 40.0, 58.96479797363281);
	glVertex3d(-18.27535629272461, 40.0, 55.32960510253906);
	glVertex3d(-2.828565306918539e-15, 30.865827560424805, 56.19397735595703);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex3d(-18.27535629272461, 40.0, 55.32960510253906);
	glVertex3d(-18.73801612854004, 40.0, 55.23757553100586);
	glVertex3d(-17.677669525146484, 30.865827560424805, 52.677669525146484);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex3d(-18.27535629272461, 40.0, 55.32960510253906);
	glVertex3d(-17.677669525146484, 30.865827560424805, 52.677669525146484);
	glVertex3d(-2.828565306918539e-15, 30.865827560424805, 56.19397735595703);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex3d(18.73801612854004, 40.0, 55.23757553100586);
	glVertex3d(0.46265992522239685, 40.0, 58.87276840209961);
	glVertex3d(17.677669525146484, 30.865827560424805, 52.677669525146484);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex3d(0.46265992522239685, 40.0, 58.87276840209961);
	glVertex3d(-2.9982291826271277e-15, 40.0, 58.96479797363281);
	glVertex3d(-2.828565306918539e-15, 30.865827560424805, 56.19397735595703);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex3d(0.46265992522239685, 40.0, 58.87276840209961);
	glVertex3d(-2.828565306918539e-15, 30.865827560424805, 56.19397735595703);
	glVertex3d(17.677669525146484, 30.865827560424805, 52.677669525146484);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex3d(34.62334060668945, 40.0, 44.62334060668945);
	glVertex3d(19.13024139404297, 40.0, 54.97549819946289);
	glVertex3d(32.6640739440918, 30.865827560424805, 42.6640739440918);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex3d(19.13024139404297, 40.0, 54.97549819946289);
	glVertex3d(18.73801612854004, 40.0, 55.23757553100586);
	glVertex3d(17.677669525146484, 30.865827560424805, 52.677669525146484);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex3d(19.13024139404297, 40.0, 54.97549819946289);
	glVertex3d(17.677669525146484, 30.865827560424805, 52.677669525146484);
	glVertex3d(32.6640739440918, 30.865827560424805, 42.6640739440918);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex3d(45.23757553100586, 40.0, 28.73801612854004);
	glVertex3d(34.885414123535156, 40.0, 44.23111343383789);
	glVertex3d(42.677669525146484, 30.865827560424805, 27.677669525146484);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex3d(34.885414123535156, 40.0, 44.23111343383789);
	glVertex3d(34.62334060668945, 40.0, 44.62334060668945);
	glVertex3d(32.6640739440918, 30.865827560424805, 42.6640739440918);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex3d(34.885414123535156, 40.0, 44.23111343383789);
	glVertex3d(32.6640739440918, 30.865827560424805, 42.6640739440918);
	glVertex3d(42.677669525146484, 30.865827560424805, 27.677669525146484);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex3d(48.96479797363281, 40.0, 10.000000000000005);
	glVertex3d(45.32960510253906, 40.0, 28.27535629272461);
	glVertex3d(46.19397735595703, 30.865827560424805, 10.000000000000005);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex3d(45.32960510253906, 40.0, 28.27535629272461);
	glVertex3d(45.23757553100586, 40.0, 28.73801612854004);
	glVertex3d(42.677669525146484, 30.865827560424805, 27.677669525146484);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex3d(45.32960510253906, 40.0, 28.27535629272461);
	glVertex3d(42.677669525146484, 30.865827560424805, 27.677669525146484);
	glVertex3d(46.19397735595703, 30.865827560424805, 10.000000000000005);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex3d(45.23757553100586, 40.0, -8.738016128540039);
	glVertex3d(48.87276840209961, 40.0, 9.537340074777603);
	glVertex3d(42.677669525146484, 30.865827560424805, -7.677669525146484);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex3d(48.87276840209961, 40.0, 9.537340074777603);
	glVertex3d(48.96479797363281, 40.0, 10.000000000000005);
	glVertex3d(46.19397735595703, 30.865827560424805, 10.000000000000005);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex3d(48.87276840209961, 40.0, 9.537340074777603);
	glVertex3d(46.19397735595703, 30.865827560424805, 10.000000000000005);
	glVertex3d(42.677669525146484, 30.865827560424805, -7.677669525146484);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex3d(34.62334060668945, 40.0, -24.623340606689453);
	glVertex3d(44.97549819946289, 40.0, -9.130241394042969);
	glVertex3d(32.6640739440918, 30.865827560424805, -22.664073944091797);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex3d(44.97549819946289, 40.0, -9.130241394042969);
	glVertex3d(45.23757553100586, 40.0, -8.738016128540039);
	glVertex3d(42.677669525146484, 30.865827560424805, -7.677669525146484);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex3d(44.97549819946289, 40.0, -9.130241394042969);
	glVertex3d(42.677669525146484, 30.865827560424805, -7.677669525146484);
	glVertex3d(32.6640739440918, 30.865827560424805, -22.664073944091797);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex3d(18.73801612854004, 40.0, -35.23757553100586);
	glVertex3d(34.23111343383789, 40.0, -24.885414123535156);
	glVertex3d(17.677669525146484, 30.865827560424805, -32.677669525146484);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex3d(34.23111343383789, 40.0, -24.885414123535156);
	glVertex3d(34.62334060668945, 40.0, -24.623340606689453);
	glVertex3d(32.6640739440918, 30.865827560424805, -22.664073944091797);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex3d(34.23111343383789, 40.0, -24.885414123535156);
	glVertex3d(32.6640739440918, 30.865827560424805, -22.664073944091797);
	glVertex3d(17.677669525146484, 30.865827560424805, -32.677669525146484);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex3d(8.994686912606673e-15, 40.0, -38.96479797363281);
	glVertex3d(18.27535629272461, 40.0, -35.32960510253906);
	glVertex3d(8.485695497239144e-15, 30.865827560424805, -36.19397735595703);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex3d(18.27535629272461, 40.0, -35.32960510253906);
	glVertex3d(18.73801612854004, 40.0, -35.23757553100586);
	glVertex3d(17.677669525146484, 30.865827560424805, -32.677669525146484);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex3d(18.27535629272461, 40.0, -35.32960510253906);
	glVertex3d(17.677669525146484, 30.865827560424805, -32.677669525146484);
	glVertex3d(8.485695497239144e-15, 30.865827560424805, -36.19397735595703);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex3d(-18.73801612854004, 40.0, -35.23757553100586);
	glVertex3d(-0.46265992522239685, 40.0, -38.87276840209961);
	glVertex3d(-17.677669525146484, 30.865827560424805, -32.677669525146484);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex3d(-0.46265992522239685, 40.0, -38.87276840209961);
	glVertex3d(8.994686912606673e-15, 40.0, -38.96479797363281);
	glVertex3d(8.485695497239144e-15, 30.865827560424805, -36.19397735595703);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex3d(-0.46265992522239685, 40.0, -38.87276840209961);
	glVertex3d(8.485695497239144e-15, 30.865827560424805, -36.19397735595703);
	glVertex3d(-17.677669525146484, 30.865827560424805, -32.677669525146484);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex3d(-34.62334060668945, 40.0, -24.623340606689453);
	glVertex3d(-19.13024139404297, 40.0, -34.97549819946289);
	glVertex3d(-32.6640739440918, 30.865827560424805, -22.664073944091797);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex3d(-19.13024139404297, 40.0, -34.97549819946289);
	glVertex3d(-18.73801612854004, 40.0, -35.23757553100586);
	glVertex3d(-17.677669525146484, 30.865827560424805, -32.677669525146484);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex3d(-19.13024139404297, 40.0, -34.97549819946289);
	glVertex3d(-17.677669525146484, 30.865827560424805, -32.677669525146484);
	glVertex3d(-32.6640739440918, 30.865827560424805, -22.664073944091797);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex3d(-45.23757553100586, 40.0, -8.738016128540039);
	glVertex3d(-34.885414123535156, 40.0, -24.23111343383789);
	glVertex3d(-42.677669525146484, 30.865827560424805, -7.677669525146484);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex3d(-34.885414123535156, 40.0, -24.23111343383789);
	glVertex3d(-34.62334060668945, 40.0, -24.623340606689453);
	glVertex3d(-32.6640739440918, 30.865827560424805, -22.664073944091797);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex3d(-34.885414123535156, 40.0, -24.23111343383789);
	glVertex3d(-32.6640739440918, 30.865827560424805, -22.664073944091797);
	glVertex3d(-42.677669525146484, 30.865827560424805, -7.677669525146484);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex3d(-48.96479797363281, 40.0, 10.0);
	glVertex3d(-45.32960510253906, 40.0, -8.27535629272461);
	glVertex3d(-46.19397735595703, 30.865827560424805, 10.0);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex3d(-45.32960510253906, 40.0, -8.27535629272461);
	glVertex3d(-45.23757553100586, 40.0, -8.738016128540039);
	glVertex3d(-42.677669525146484, 30.865827560424805, -7.677669525146484);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex3d(-45.32960510253906, 40.0, -8.27535629272461);
	glVertex3d(-42.677669525146484, 30.865827560424805, -7.677669525146484);
	glVertex3d(-46.19397735595703, 30.865827560424805, 10.0);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex3d(-49.01508712768555, 40.0, 10.000000027625198);
	glVertex3d(-45.28403854370117, 40.0, 28.75725746154785);
	glVertex3d(-34.658897399902344, 40.0, 44.65890121459961);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex3d(-49.01508712768555, 40.0, 10.000000027625198);
	glVertex3d(-34.658897399902344, 40.0, 44.65890121459961);
	glVertex3d(-18.757261276245117, 40.0, 55.284034729003906);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex3d(-49.01508712768555, 40.0, 10.000000027625198);
	glVertex3d(-18.757261276245117, 40.0, 55.284034729003906);
	glVertex3d(2.683231627997884e-07, 40.0, 59.01508712768555);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex3d(-49.01508712768555, 40.0, 10.000000027625198);
	glVertex3d(2.683231627997884e-07, 40.0, 59.01508712768555);
	glVertex3d(18.75725746154785, 40.0, 55.28403854370117);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex3d(-49.01508712768555, 40.0, 10.000000027625198);
	glVertex3d(18.75725746154785, 40.0, 55.28403854370117);
	glVertex3d(34.658897399902344, 40.0, 44.658897399902344);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex3d(-49.01508712768555, 40.0, 10.000000027625198);
	glVertex3d(34.658897399902344, 40.0, 44.658897399902344);
	glVertex3d(-34.658897399902344, 40.0, -24.658897399902344);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex3d(-49.01508712768555, 40.0, 10.000000027625198);
	glVertex3d(-34.658897399902344, 40.0, -24.658897399902344);
	glVertex3d(-45.284034729003906, 40.0, -8.757259368896484);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex3d(-18.75725746154785, 40.0, -35.28403854370117);
	glVertex3d(-34.658897399902344, 40.0, -24.658897399902344);
	glVertex3d(34.658897399902344, 40.0, 44.658897399902344);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex3d(-18.75725746154785, 40.0, -35.28403854370117);
	glVertex3d(34.658897399902344, 40.0, 44.658897399902344);
	glVertex3d(45.284034729003906, 40.0, 28.757259368896484);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex3d(-18.75725746154785, 40.0, -35.28403854370117);
	glVertex3d(45.284034729003906, 40.0, 28.757259368896484);
	glVertex3d(49.01508712768555, 40.0, 9.999999731676866);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex3d(-18.75725746154785, 40.0, -35.28403854370117);
	glVertex3d(49.01508712768555, 40.0, 9.999999731676866);
	glVertex3d(45.28403854370117, 40.0, -8.757257461547852);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex3d(-18.75725746154785, 40.0, -35.28403854370117);
	glVertex3d(45.28403854370117, 40.0, -8.757257461547852);
	glVertex3d(34.658897399902344, 40.0, -24.65890121459961);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex3d(-18.75725746154785, 40.0, -35.28403854370117);
	glVertex3d(34.658897399902344, 40.0, -24.65890121459961);
	glVertex3d(18.757261276245117, 40.0, -35.284034729003906);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex3d(-18.75725746154785, 40.0, -35.28403854370117);
	glVertex3d(18.757261276245117, 40.0, -35.284034729003906);
	glVertex3d(-2.68323134378079e-07, 40.0, -39.01508712768555);
	glEnd();
	glPopMatrix();


}
void drawCube2(int length, float red1, float green1, float blue1, float red2, float green2, float blue2, float red3, float green3, float blue3, float red4, float green4, float blue4, float red5, float green5, float blue5, float red6, float green6, float blue6) {
	glPushMatrix();

	glBegin(GL_QUADS);
	glColor3f(red1, green1, blue1);
	glVertex3f(0.0, length, 0.0);
	glVertex3f(length, length, 0.0);
	glVertex3f(length, 0.0, 0.0);
	glVertex3f(0.0, 0.0, 0.0);

	glColor3f(red2, green2, blue2);
	glVertex3f(0.0, 0.0, -length);
	glVertex3f(length, 0.0, -length);
	glVertex3f(length, length, -length);
	glVertex3f(0.0, length, -length);

	glColor3f(red3, green3, blue3);
	glVertex3f(0.0, length, 0.0);
	glVertex3f(0.0, length, -length);
	glVertex3f(length, length, -length);
	glVertex3f(length, length, 0.0);

	glColor3f(red4, green4, blue4);
	glVertex3f(0.0, 0.0, 0.0);
	glVertex3f(length, 0.0, 0.0);
	glVertex3f(length, 0.0, -length);
	glVertex3f(0.0, 0.0, -length);

	glColor3f(red5, green5, blue5);
	glVertex3f(length, length, 0.0);
	glVertex3f(length, length, -length);
	glVertex3f(length, 0.0, -length);
	glVertex3f(length, 0.0, 0.0);

	glColor3f(red6, green6, blue6);
	glVertex3f(0.0, length, 0.0);
	glVertex3f(0.0, 0.0, 0.0);
	glVertex3f(0.0, 0.0, -length);
	glVertex3f(0.0, length, -length);
	glEnd();
	glPopMatrix();
}
void drawCube(int length, float x, float y, float z, float red, float green, float blue, int switch_value) {
	switch (switch_value)
	{
	case 1:
		glPushMatrix();
		glTranslatef(x, y, z);
		glBegin(GL_QUADS);
		glColor3f(red, green, blue);
		glVertex3f(0.0, length, 0.0);
		glVertex3f(length, length, 0.0);
		glVertex3f(length, 0.0, 0.0);
		glVertex3f(0.0, 0.0, 0.0);


		glVertex3f(0.0, 0.0, -length);
		glVertex3f(length, 0.0, -length);
		glVertex3f(length, length, -length);
		glVertex3f(0.0, length, -length);

		glVertex3f(0.0, length, 0.0);
		glVertex3f(0.0, length, -length);
		glVertex3f(length, length, -length);
		glVertex3f(length, length, 0.0);


		glVertex3f(0.0, 0.0, 0.0);
		glVertex3f(length, 0.0, 0.0);
		glVertex3f(length, 0.0, -length);
		glVertex3f(0.0, 0.0, -length);


		glVertex3f(length, length, 0.0);
		glVertex3f(length, length, -length);
		glVertex3f(length, 0.0, -length);
		glVertex3f(length, 0.0, 0.0);


		glVertex3f(0.0, length, 0.0);
		glVertex3f(0.0, 0.0, 0.0);
		glVertex3f(0.0, 0.0, -length);
		glVertex3f(0.0, length, -length);
		glEnd();
		glPopMatrix();
		break;
	case 2:
		glPushMatrix();
		glTranslatef(x, y, z);
		glBegin(GL_QUADS);
		glColor4f(red, green, blue, 0.5);
		glVertex3f(0.0, length, 0.0);
		glVertex3f(length, length, 0.0);
		glVertex3f(length, 0.0, 0.0);
		glVertex3f(0.0, 0.0, 0.0);


		glVertex3f(0.0, 0.0, -length);
		glVertex3f(length, 0.0, -length);
		glVertex3f(length, length, -length);
		glVertex3f(0.0, length, -length);

		glVertex3f(0.0, length, 0.0);
		glVertex3f(0.0, length, -length);
		glVertex3f(length, length, -length);
		glVertex3f(length, length, 0.0);


		glVertex3f(0.0, 0.0, 0.0);
		glVertex3f(length, 0.0, 0.0);
		glVertex3f(length, 0.0, -length);
		glVertex3f(0.0, 0.0, -length);


		glVertex3f(length, length, 0.0);
		glVertex3f(length, length, -length);
		glVertex3f(length, 0.0, -length);
		glVertex3f(length, 0.0, 0.0);


		glVertex3f(0.0, length, 0.0);
		glVertex3f(0.0, 0.0, 0.0);
		glVertex3f(0.0, 0.0, -length);
		glVertex3f(0.0, length, -length);
		glEnd();
		glPopMatrix();
		break;
	default:
		break;
	}

}
void drawFloor(float x, float z, float red1, float green1, float blue1, float red2, float green2, float blue2, float x1, float y1, float z1) {
	for (int i = -x; i <= x; i++) {
		for (int j = -z; j <= z; j++) {
			if ((i + j) % 2 == 0) {
				glPushMatrix();
				glTranslatef(i, 0, j);
				glScalef(x1, y1, z1);
				drawCube(2, i, 0, j, red1, green1, blue1, 1);
				glPopMatrix();
			}
			else {
				glPushMatrix();
				glTranslatef(i, 0, j);
				glScalef(x1, y1, z1);
				drawCube(2, i, 0, j, red2, green2, blue2, 1);
				glPopMatrix();
			}
		}
	}
}
void draw_wall_with_door(int x, int y, int i1, int i2, int j1, int j2, float red1, float green1, float blue1, float x2, float y2, float z2, float red, float green, float blue) {

	for (int i = -x; i <= x; i++) {
		for (int j = -y; j <= y; j++) {
			if ((i >= i1 && i <= i2) && (j >= j1 && j <= j2)) {
				glPushMatrix();
				glTranslatef(i, 0, j);
				glScalef(x2, y2, z2);
				glRotated(dAngle, 0, 0, 1);
				drawCube(2, i, 0, j, red, green, blue, 1);
				glPopMatrix();
			}
			else {
				glPushMatrix();
				glTranslatef(i, 0, j);
				glScalef(x2, y2, z2);
				drawCube(2, i, 0, j, red1, green1, blue1, 1);
				glPopMatrix();
			}
		}
	}
}
void draw_wall_with_door_and_tow_windows(int x, int y, int i1_for_door, int i2_for_door, int j1_for_door, int j2_for_door, float red_for_wall, float green_for_wall, float blue_for_wall, float x2, float y2, float z2, float red_for_door, float green_for_door, float blue_for_door, int i1_for_window1, int i2_for_window1, int j1_for_window1, int j2_for_window1, int i1_for_window2, int i2_for_window2, int j1_for_window2, int j2_for_window2, float red_for_windows, float green_for_windows, float blue_for_windows) {

	for (int i = -x; i <= x; i++) {
		for (int j = -y; j <= y; j++) {
			if ((i >= i1_for_window1 && i <= i2_for_window1) && (j >= j1_for_window1 && j <= j2_for_window1)) {
				glPushMatrix();
				glTranslatef(i, 0, j);
				glScalef(x2, y2, z2);
				drawCube(2, i, 0, j, red_for_windows, green_for_windows, blue_for_windows, 2);
				glPopMatrix();
			}
			else if ((i >= i1_for_window2 && i <= i2_for_window2) && (j >= j1_for_window2 && j <= j2_for_window2)) {
				glPushMatrix();
				glTranslatef(i, 0, j);
				glScalef(x2, y2, z2);
				drawCube(2, i, 0, j, red_for_windows, green_for_windows, blue_for_windows, 2);
				glPopMatrix();
			}
			else if ((i >= i1_for_door && i <= i2_for_door) && (j >= j1_for_door && j <= j2_for_door)) {
				glPushMatrix();
				glTranslatef(i, 0, j);
				glScalef(x2, y2, z2);
				glRotated(dAngle, 0, 0, 1);
				drawCube(2, i, 0, j, red_for_door, green_for_door, blue_for_door, 1);
				glPopMatrix();
			}
			else {
				glPushMatrix();
				glTranslatef(i, 0, j);
				glScalef(x2, y2, z2);
				drawCube(2, i, 0, j, red_for_wall, green_for_wall, blue_for_wall, 1);
				glPopMatrix();
			}
		}
	}
}
void draw_wall_with_door_and_one_window(int x, int y, int i1_for_door, int i2_for_door, int j1_for_door, int j2_for_door, float red_for_wall, float green_for_wall, float blue_for_wall, float x2, float y2, float z2, float red_for_door, float green_for_door, float blue_for_door, int i1_for_window1, int i2_for_window1, int j1_for_window1, int j2_for_window1, float red_for_windows, float green_for_windows, float blue_for_windows) {

	for (int i = -x; i <= x; i++) {
		for (int j = -y; j <= y; j++) {
			if ((i >= i1_for_window1 && i <= i2_for_window1) && (j >= j1_for_window1 && j <= j2_for_window1)) {
				glPushMatrix();
				glTranslatef(i, 0, j);
				glScalef(x2, y2, z2);
				drawCube(2, i, 0, j, red_for_windows, green_for_windows, blue_for_windows, 2);
				glPopMatrix();
			}
			else if ((i >= i1_for_door && i <= i2_for_door) && (j >= j1_for_door && j <= j2_for_door)) {
				glPushMatrix();
				glTranslatef(i, 0, j);
				glScalef(x2, y2, z2);
				glRotated(dAngle, 0, 0, 1);
				drawCube(2, i, 0, j, red_for_door, green_for_door, blue_for_door, 1);
				glPopMatrix();
			}
			else {
				glPushMatrix();
				glTranslatef(i, 0, j);
				glScalef(x2, y2, z2);
				drawCube(2, i, 0, j, red_for_wall, green_for_wall, blue_for_wall, 1);
				glPopMatrix();
			}
		}
	}
}
void Draw_wall(float x, float y, float red, float green, float blue, float x3, float y3, float z3) {
	for (int i = -x; i <= x; i++) {
		for (int j = -y; j <= y; j++) {
			glPushMatrix();
			glTranslatef(i, 0, j);
			glScalef(x3, y3, z3);
			drawCube(2, i, 0, j, red, green, blue, 1);
			glPopMatrix();
		}


	}
}
void Draw_wall_with_one_window(float x, float y, float red, float green, float blue, float x3, float y3, float z3, int i1_for_window1, int i2_for_window1, int j1_for_window1, int j2_for_window1, float red_for_windows, float green_for_windows, float blue_for_windows) {
	for (int i = -x; i <= x; i++) {
		for (int j = -y; j <= y; j++) {
			if ((i >= i1_for_window1 && i <= i2_for_window1) && (j >= j1_for_window1 && j <= j2_for_window1)) {
				glPushMatrix();
				glTranslatef(i, 0, j);
				glScalef(x3, y3, z3);
				drawCube(2, i, 0, j, red_for_windows, green_for_windows, blue_for_windows, 2);
				glPopMatrix();
			}
			else {
				glPushMatrix();
				glTranslatef(i, 0, j);
				glScalef(x3, y3, z3);
				drawCube(2, i, 0, j, red, green, blue, 1);
				glPopMatrix();
			}
		}


	}
}
void ReSizeGLScene(int w, int h)
{
	glViewport(0, 0, (GLsizei)w, (GLsizei)h);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluPerspective(120.0, 1.0f, 0.1f, 1000.0f);
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
}


void drawSofa() {

	glColor3f(1.0, 0.0, 0.0);

	glPushMatrix();
	glTranslatef(0.5, 1, 0.0);
	glScalef(1, 2, 0.4);
	glutSolidCube(1.0);
	glPopMatrix();

	glPushMatrix();
	glTranslatef(0.5, 0.5, 0.5);
	glScalef(1, 2 / 2.0, 1.0);
	glutSolidCube(1.0);
	glPopMatrix();

	glPushMatrix();
	glTranslatef(1.0 / 6.0, 0.0, 1 / 6.0);
	glScalef(0.1, 1, 0.3);
	glutSolidCube(1.0);
	glPopMatrix();

	glPushMatrix();
	glTranslatef(5.0 / 6.0, 0.0, 1 / 6.0);
	glScalef(0.1, 1, 0.3);
	glutSolidCube(1.0);
	glPopMatrix();

	glPushMatrix();
	glTranslatef(1.0 / 6.0, 0.0, 5.0 / 6.0);
	glScalef(0.1, 1, 0.3);
	glutSolidCube(1.0);
	glPopMatrix();

	glPushMatrix();
	glTranslatef(1.0 * 5.0 / 6.0, 0.0, 5.0 / 6.0);
	glScalef(0.1, 1, 0.3);
	glutSolidCube(1.0);
	glPopMatrix();
}

void drawTableTT(float sth = 1, float lth = 1) {
	glPushMatrix();
	glScaled(4, 0.2 * sth, 2);
	glutSolidCube(2);
	glPopMatrix();

	GLUquadric* obj = gluNewQuadric();
	float tl[4][2] = { {3.5, 1.5}, {-3.5, -1.5}, {-3.5, 1.5}, {3.5, -1.5} };
	for (int i = 0; i < 4; i++) {
		glPushMatrix();

		glTranslated(tl[i][0], 0, tl[i][1]);
		glRotated(90, 1, 0, 0);
		gluCylinder(obj, 0.25 * lth, 0.25 * lth, 5, 32, 32);
		glPopMatrix();

	}
}

void drawDesk() {
	glColor3ub(61, 28, 11);
	glPushMatrix();
	//Draw Table
	glTranslated(3, -1, -2);
	drawTableTT();

	// Draw the chair
	glColor3f(0, 0, 0);

	glTranslated(0, 0, -1.5);
	glPushMatrix(); {
		glTranslated(0, -2, 0);

		glPushMatrix(); {
			glTranslatef(0, 0, 6);
			glScaled(0.25, 0.6, 0.5);
			drawTableTT(2.5, 2);
			glPopMatrix(); }
		glTranslated(-3, 0, 0);
		glPushMatrix(); {
			glTranslated(3.9, 1, 5.8);
			glScaled(0.2, 1.5, 1.5);
			glutSolidCube(1);
			glPopMatrix(); }

		glPushMatrix(); {
			glTranslated(2.1, 1, 5.8);
			glScaled(0.2, 1.5, 1.5);
			glutSolidCube(1);
			glPopMatrix(); }

		glPushMatrix(); {
			glTranslated(3, 1, 6.8);
			glScaled(2, 1.5, 0.5);
			glutSolidCube(1);
			glPopMatrix(); }
		glPopMatrix(); }

}

void drawPC() {
	drawDesk();
	GLUquadric* obj = gluNewQuadric();
	//Monitor
	glTranslated(-2.8, 0, 0);

	glPushMatrix(); {
		glScaled(1.2, 1.2, 1);
		glTranslated(2, 1.5, 0.5);
		glPushMatrix(); {
			//Screen
			glColor3f(1, 1, 1);
			glTranslated(0, 0, 0.1);
			glScaled(1.1, 0.5, 0.01);
			glutSolidCube(3);
			glPopMatrix(); }
		glPushMatrix(); {
			//Non-glowing part of the monitor
			glColor3f(0, 0, 0);
			glScaled(1, 0.5, 0.05);
			glutSolidCube(3.5);
			glPopMatrix(); }
		glPushMatrix(); {
			//Neck
			glTranslated(0, -0.7, 0);
			glRotated(90, 1, 0, 0);
			gluCylinder(obj, 0.08, 0.08, 0.6, 15, 15);
			glPopMatrix(); }
		glPushMatrix(); {
			//base
			glTranslated(0, -1.3, 0);
			glRotated(90, 1, 0, 0);
			gluDisk(obj, 0, 0.32, 32, 10);
			glTranslated(0, -0.00, 0);
			gluCylinder(obj, 0.3, 0.3, 0.1, 32, 10);
			glPopMatrix(); }
		glPopMatrix(); }

	//PC case
	glPushMatrix(); {
		glTranslated(6, 1.3, 1.1);

		glPushMatrix(); {
			glScaled(0.7, 1.3, 1.2);
			glutSolidCube(2);
			glPopMatrix(); }
		glPushMatrix(); {
			glColor3f(1, 1, 1);
			glTranslated(0, 0, 1.25);
			gluDisk(obj, 0.1, 0.15, 32, 32);
			//gluCylinder(obj, 0.1, 0.1, 0.02, 32, 10);
			glTranslated(0, 0.05, 0);
			glRotated(90, 1, 0, 0);
			gluCylinder(obj, 0.02, 0.02, 0.1, 32, 10);

			glPopMatrix(); }
		glPopMatrix(); }
	//skichy keyboard, we don't use mice. we're hotkey masters!
	glPushMatrix(); {

		//void drawFloor(float x, float z, float red1, float green1, float blue1, float red2, float green2, float blue2, float x1, float y1, float z1);
		//drawFloor(10, 16, , 1.32, 0.01, 0.6);
		glTranslated(2, 0.2, 2);
		glScaled(0.09, 2, 0.05);
		drawFloor(10, 6, 0, 1, 1, 1, 0.3125, 0.3242, 1, 0.05, 1);

		glPopMatrix();
	}
	glPopMatrix();

}

float Sangle = 90;
void DrawGLScene(void)
{
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	glLoadIdentity();
	cx = ex + cos(th);
	cz = ez + sin(th);
	gluLookAt(ex, myHeight, ez, cx, myHeight, cz, 0, myHeight + 1, 0);
	glPushMatrix();
	if (light) {
		glEnable(GL_LIGHTING);
	}
	else {
		glDisable(GL_LIGHTING);
	}
	glRotated(Sangle, 0, 0, 1);
	GLfloat Position[] = { -300,0,150,0 };
	glLightfv(GL_LIGHT0, GL_POSITION, Position);
	glPopMatrix();


	glEnable(GL_COLOR_MATERIAL);
	glColorMaterial(GL_FRONT_AND_BACK, GL_AMBIENT_AND_DIFFUSE);
	////lights
	//glPushMatrix();
	//glEnable(GL_LIGHTING);
	//glEnable(GL_LIGHT0);
	//glRotatef(angle+=50,0, 0, 1);
	//GLfloat position[] = { 50,0,0,0 };
	//glLightfv(GL_LIGHT0, GL_POSITION, position);
	//glPopMatrix();

	//glTranslatef(-4, -4, -100); 
	glRotatef(180, 0, 1, 0);
	glTranslatef(-4, -4, -100);
	//glRotatef(90, 1, 0, 0);
		//living room
	glPushMatrix();
	glPushMatrix();
	drawFloor(16, 7, 0.765, 0.64, 0.515, 0.99609375, 0.95703125, 0.9296875, 1, 0.05, 1);
	glPopMatrix();
	glPushMatrix();
	glTranslatef(0, 18, 0);
	Draw_wall(16, 7, 0.2109375, 0.26953125, 0.30859375, 1, 0.05, 1);
	glPopMatrix();
	glPushMatrix();
	glTranslatef(0, 10, -16);
	glRotatef(-90, 1, 0, 0);
	draw_wall_with_door(16, 4, -1, 1, -4, 3, 0.2109375, 0.26953125, 0.30859375, 1, 0.05, 1, 0.765, 0.64, 0.515);
	glPopMatrix();
	glPushMatrix();
	glTranslatef(0, 10, 14.1);
	glRotatef(-90, 1, 0, 0);
	draw_wall_with_door_and_tow_windows(16, 4, -1, 1, -4, 3, 0.2109375, 0.26953125, 0.30859375, 1, 0.05, 1, 0.765, 0.64, 0.515, -15, -4, 0, 2, 4, 15, 0, 2, 0.765, 0.64, 0.515);
	glPopMatrix();
	glPushMatrix();
	glTranslatef(-32, 8, 0);
	glRotatef(90, 0, 0, 1);
	Draw_wall(4, 7, 0.2109375, 0.26953125, 0.30859375, 1, 0.05, 1);
	glPopMatrix();
	glPushMatrix();
	glTranslatef(34.1, 8, 0);
	glRotatef(90, 0, 0, 1);
	Draw_wall(4, 7, 0.2109375, 0.26953125, 0.30859375, 1, 0.05, 1);
	glPopMatrix();

	glPushMatrix();
	glTranslatef(15, 0, -12);
	glScalef(2, 2, 2);
	glPushMatrix();
	glColor3f(0.39453125, 0.26171875, 0.12890625);
	glScalef(4, 1, 1);
	drawCube2(2, 0.39453125, 0.26171875, 0.12890625, 0.39453125, 0.26171875, 0.12890625, 0.99609375, 0.95703125, 0.9296875, 0.39453125, 0.26171875, 0.12890625, 0.39453125, 0.26171875, 0.12890625, 0.39453125, 0.26171875, 0.12890625);
	glPopMatrix();

	glPushMatrix();
	glTranslatef(-0.0001, 0, 0);
	glColor3f(0.39453125, 0.26171875, 0.12890625);
	glRotatef(90, 0, 1, 0);
	glScalef(1, 2, 0.5);
	drawCube2(2, 0.99609375, 0.95703125, 0.9296875, 0.39453125, 0.26171875, 0.12890625, 0.39453125, 0.26171875, 0.12890625, 0.39453125, 0.26171875, 0.12890625, 0.39453125, 0.26171875, 0.12890625, 0.39453125, 0.26171875, 0.12890625);
	glPopMatrix();

	glPushMatrix();
	glColor3f(0.39453125, 0.26171875, 0.12890625);
	glTranslatef(8.01, 0, 0);
	glRotatef(90, 0, 1, 0);
	glScalef(1, 2, 0.5);
	drawCube2(2, 0.39453125, 0.26171875, 0.12890625, 0.99609375, 0.95703125, 0.9296875, 0.39453125, 0.26171875, 0.12890625, 0.39453125, 0.26171875, 0.12890625, 0.39453125, 0.26171875, 0.12890625, 0.39453125, 0.26171875, 0.12890625);
	glPopMatrix();

	glPushMatrix();
	glColor3f(0.39453125, 0.26171875, 0.12890625);
	glTranslatef(0, 2, -1.2);
	glScalef(4, 1, 0.4);
	drawCube2(2, 0.99609375, 0.95703125, 0.9296875, 0.39453125, 0.26171875, 0.12890625, 0.39453125, 0.26171875, 0.12890625, 0.39453125, 0.26171875, 0.12890625, 0.39453125, 0.26171875, 0.12890625, 0.39453125, 0.26171875, 0.12890625);
	glPopMatrix();
	glPopMatrix();

	glPushMatrix();
	glTranslatef(28, 0, 10);
	glRotatef(-180, 0, 1, 0);
	glScalef(2, 2, 2);
	glPushMatrix();
	glColor3f(0.39453125, 0.26171875, 0.12890625);
	glScalef(4, 1, 1);
	drawCube2(2, 0.39453125, 0.26171875, 0.12890625, 0.39453125, 0.26171875, 0.12890625, 0.99609375, 0.95703125, 0.9296875, 0.39453125, 0.26171875, 0.12890625, 0.39453125, 0.26171875, 0.12890625, 0.39453125, 0.26171875, 0.12890625);
	glPopMatrix();

	glPushMatrix();
	glTranslatef(-0.0001, 0, 0);
	glColor3f(0.39453125, 0.26171875, 0.12890625);
	glRotatef(90, 0, 1, 0);
	glScalef(1, 2, 0.5);
	drawCube2(2, 0.99609375, 0.95703125, 0.9296875, 0.39453125, 0.26171875, 0.12890625, 0.39453125, 0.26171875, 0.12890625, 0.39453125, 0.26171875, 0.12890625, 0.39453125, 0.26171875, 0.12890625, 0.39453125, 0.26171875, 0.12890625);
	glPopMatrix();

	glPushMatrix();
	glColor3f(0.39453125, 0.26171875, 0.12890625);
	glTranslatef(8.01, 0, 0);
	glRotatef(90, 0, 1, 0);
	glScalef(1, 2, 0.5);
	drawCube2(2, 0.39453125, 0.26171875, 0.12890625, 0.99609375, 0.95703125, 0.9296875, 0.39453125, 0.26171875, 0.12890625, 0.39453125, 0.26171875, 0.12890625, 0.39453125, 0.26171875, 0.12890625, 0.39453125, 0.26171875, 0.12890625);
	glPopMatrix();

	glPushMatrix();
	glColor3f(0.39453125, 0.26171875, 0.12890625);
	glTranslatef(0, 2, -1.2);
	glScalef(4, 1, 0.4);
	drawCube2(2, 0.99609375, 0.95703125, 0.9296875, 0.39453125, 0.26171875, 0.12890625, 0.39453125, 0.26171875, 0.12890625, 0.39453125, 0.26171875, 0.12890625, 0.39453125, 0.26171875, 0.12890625, 0.39453125, 0.26171875, 0.12890625);
	glPopMatrix();
	glPopMatrix();


	glPushMatrix();
	glTranslatef(-12, 0, -8);
	glRotatef(-90, 0, 1, 0);
	glScalef(2, 2, 2);
	glPushMatrix();
	glColor3f(0.39453125, 0.26171875, 0.12890625);
	glScalef(4, 1, 1);
	drawCube2(2, 0.39453125, 0.26171875, 0.12890625, 0.39453125, 0.26171875, 0.12890625, 0.99609375, 0.95703125, 0.9296875, 0.39453125, 0.26171875, 0.12890625, 0.39453125, 0.26171875, 0.12890625, 0.39453125, 0.26171875, 0.12890625);
	glPopMatrix();

	glPushMatrix();
	glTranslatef(-0.0001, 0, 0);
	glColor3f(0.39453125, 0.26171875, 0.12890625);
	glRotatef(90, 0, 1, 0);
	glScalef(1, 2, 0.5);
	drawCube2(2, 0.99609375, 0.95703125, 0.9296875, 0.39453125, 0.26171875, 0.12890625, 0.39453125, 0.26171875, 0.12890625, 0.39453125, 0.26171875, 0.12890625, 0.39453125, 0.26171875, 0.12890625, 0.39453125, 0.26171875, 0.12890625);
	glPopMatrix();

	glPushMatrix();
	glColor3f(0.39453125, 0.26171875, 0.12890625);
	glTranslatef(8.01, 0, 0);
	glRotatef(90, 0, 1, 0);
	glScalef(1, 2, 0.5);
	drawCube2(2, 0.39453125, 0.26171875, 0.12890625, 0.99609375, 0.95703125, 0.9296875, 0.39453125, 0.26171875, 0.12890625, 0.39453125, 0.26171875, 0.12890625, 0.39453125, 0.26171875, 0.12890625, 0.39453125, 0.26171875, 0.12890625);
	glPopMatrix();

	glPushMatrix();
	glColor3f(0.39453125, 0.26171875, 0.12890625);
	glTranslatef(0, 2, -1.2);
	glScalef(4, 1, 0.4);
	drawCube2(2, 0.99609375, 0.95703125, 0.9296875, 0.39453125, 0.26171875, 0.12890625, 0.39453125, 0.26171875, 0.12890625, 0.39453125, 0.26171875, 0.12890625, 0.39453125, 0.26171875, 0.12890625, 0.39453125, 0.26171875, 0.12890625);
	glPopMatrix();
	glPopMatrix();

	glPushMatrix();
	glTranslatef(-15, 0, 10);
	glRotatef(-180, 0, 1, 0);
	glScalef(2, 2, 2);
	glPushMatrix();
	glColor3f(0.39453125, 0.26171875, 0.12890625);
	glScalef(4, 1, 1);
	drawCube2(2, 0.39453125, 0.26171875, 0.12890625, 0.39453125, 0.26171875, 0.12890625, 0.99609375, 0.95703125, 0.9296875, 0.39453125, 0.26171875, 0.12890625, 0.39453125, 0.26171875, 0.12890625, 0.39453125, 0.26171875, 0.12890625);
	glPopMatrix();

	glPushMatrix();
	glTranslatef(-0.0001, 0, 0);
	glColor3f(0.39453125, 0.26171875, 0.12890625);
	glRotatef(90, 0, 1, 0);
	glScalef(1, 2, 0.5);
	drawCube2(2, 0.99609375, 0.95703125, 0.9296875, 0.39453125, 0.26171875, 0.12890625, 0.39453125, 0.26171875, 0.12890625, 0.39453125, 0.26171875, 0.12890625, 0.39453125, 0.26171875, 0.12890625, 0.39453125, 0.26171875, 0.12890625);
	glPopMatrix();

	glPushMatrix();
	glColor3f(0.39453125, 0.26171875, 0.12890625);
	glTranslatef(8.01, 0, 0);
	glRotatef(90, 0, 1, 0);
	glScalef(1, 2, 0.5);
	drawCube2(2, 0.39453125, 0.26171875, 0.12890625, 0.99609375, 0.95703125, 0.9296875, 0.39453125, 0.26171875, 0.12890625, 0.39453125, 0.26171875, 0.12890625, 0.39453125, 0.26171875, 0.12890625, 0.39453125, 0.26171875, 0.12890625);
	glPopMatrix();

	glPushMatrix();
	glColor3f(0.39453125, 0.26171875, 0.12890625);
	glTranslatef(0, 2, -1.2);
	glScalef(4, 1, 0.4);
	drawCube2(2, 0.99609375, 0.95703125, 0.9296875, 0.39453125, 0.26171875, 0.12890625, 0.39453125, 0.26171875, 0.12890625, 0.39453125, 0.26171875, 0.12890625, 0.39453125, 0.26171875, 0.12890625, 0.39453125, 0.26171875, 0.12890625);
	glPopMatrix();
	glPopMatrix();

	glPushMatrix();
	glTranslatef(-28, 0, 4);
	glRotatef(90, 0, 1, 0);
	glScalef(0.5, 2, 2);
	glPushMatrix();
	glColor3f(0.39453125, 0.26171875, 0.12890625);
	glScalef(4, 1, 1);
	drawCube2(2, 0.39453125, 0.26171875, 0.12890625, 0.39453125, 0.26171875, 0.12890625, 0.99609375, 0.95703125, 0.9296875, 0.39453125, 0.26171875, 0.12890625, 0.39453125, 0.26171875, 0.12890625, 0.39453125, 0.26171875, 0.12890625);
	glPopMatrix();

	glPushMatrix();
	glTranslatef(-0.0001, 0, 0);
	glColor3f(0.39453125, 0.26171875, 0.12890625);
	glRotatef(90, 0, 1, 0);
	glScalef(1, 2, 0.5);
	drawCube2(2, 0.99609375, 0.95703125, 0.9296875, 0.39453125, 0.26171875, 0.12890625, 0.39453125, 0.26171875, 0.12890625, 0.39453125, 0.26171875, 0.12890625, 0.39453125, 0.26171875, 0.12890625, 0.39453125, 0.26171875, 0.12890625);
	glPopMatrix();

	glPushMatrix();
	glColor3f(0.39453125, 0.26171875, 0.12890625);
	glTranslatef(8.01, 0, 0);
	glRotatef(90, 0, 1, 0);
	glScalef(1, 2, 0.5);
	drawCube2(2, 0.39453125, 0.26171875, 0.12890625, 0.99609375, 0.95703125, 0.9296875, 0.39453125, 0.26171875, 0.12890625, 0.39453125, 0.26171875, 0.12890625, 0.39453125, 0.26171875, 0.12890625, 0.39453125, 0.26171875, 0.12890625);
	glPopMatrix();

	glPushMatrix();
	glColor3f(0.39453125, 0.26171875, 0.12890625);
	glTranslatef(0, 2, -1.2);
	glScalef(4, 1, 0.4);
	drawCube2(2, 0.99609375, 0.95703125, 0.9296875, 0.39453125, 0.26171875, 0.12890625, 0.39453125, 0.26171875, 0.12890625, 0.39453125, 0.26171875, 0.12890625, 0.39453125, 0.26171875, 0.12890625, 0.39453125, 0.26171875, 0.12890625);
	glPopMatrix();
	glPopMatrix();

	glPushMatrix();
	glTranslatef(-28, 0, -6);
	glRotatef(90, 0, 1, 0);
	glScalef(0.5, 2, 2);
	glPushMatrix();
	glColor3f(0.39453125, 0.26171875, 0.12890625);
	glScalef(4, 1, 1);
	drawCube2(2, 0.39453125, 0.26171875, 0.12890625, 0.39453125, 0.26171875, 0.12890625, 0.99609375, 0.95703125, 0.9296875, 0.39453125, 0.26171875, 0.12890625, 0.39453125, 0.26171875, 0.12890625, 0.39453125, 0.26171875, 0.12890625);
	glPopMatrix();

	glPushMatrix();
	glTranslatef(-0.0001, 0, 0);
	glColor3f(0.39453125, 0.26171875, 0.12890625);
	glRotatef(90, 0, 1, 0);
	glScalef(1, 2, 0.5);
	drawCube2(2, 0.99609375, 0.95703125, 0.9296875, 0.39453125, 0.26171875, 0.12890625, 0.39453125, 0.26171875, 0.12890625, 0.39453125, 0.26171875, 0.12890625, 0.39453125, 0.26171875, 0.12890625, 0.39453125, 0.26171875, 0.12890625);
	glPopMatrix();

	glPushMatrix();
	glColor3f(0.39453125, 0.26171875, 0.12890625);
	glTranslatef(8.01, 0, 0);
	glRotatef(90, 0, 1, 0);
	glScalef(1, 2, 0.5);
	drawCube2(2, 0.39453125, 0.26171875, 0.12890625, 0.99609375, 0.95703125, 0.9296875, 0.39453125, 0.26171875, 0.12890625, 0.39453125, 0.26171875, 0.12890625, 0.39453125, 0.26171875, 0.12890625, 0.39453125, 0.26171875, 0.12890625);
	glPopMatrix();

	glPushMatrix();
	glColor3f(0.39453125, 0.26171875, 0.12890625);
	glTranslatef(0, 2, -1.2);
	glScalef(4, 1, 0.4);
	drawCube2(2, 0.99609375, 0.95703125, 0.9296875, 0.39453125, 0.26171875, 0.12890625, 0.39453125, 0.26171875, 0.12890625, 0.39453125, 0.26171875, 0.12890625, 0.39453125, 0.26171875, 0.12890625, 0.39453125, 0.26171875, 0.12890625);
	glPopMatrix();
	glPopMatrix();

	glPushMatrix();
	glTranslatef(18, 5, 0);
	glScalef(1.5, 1, 1.5);
	glPushMatrix();
	glColor3f(0.39453125, 0.26171875, 0.12890625);
	glScaled(3.5, 0.1, 2);
	glutSolidCube(2);
	glPopMatrix();

	glPushMatrix();
	glColor3f(0.39453125, 0.26171875, 0.12890625);
	glRotatef(90, 1, 0, 0);
	glTranslatef(3, 1.5, 0);
	glScaled(0.2, 0.2, 1.5);
	gluCylinder(p, 0.5, 0.5, 3, 40, 30);
	glPopMatrix();

	glPushMatrix();
	glColor3f(0.39453125, 0.26171875, 0.12890625);
	glRotatef(90, 1, 0, 0);
	glTranslatef(-3, 1.5, 0);
	glScaled(0.2, 0.2, 1.5);
	gluCylinder(p, 0.5, 0.5, 3, 40, 30);
	glPopMatrix();

	glPushMatrix();
	glColor3f(0.39453125, 0.26171875, 0.12890625);
	glRotatef(90, 1, 0, 0);
	glTranslatef(3, -1.5, 0);
	glScaled(0.2, 0.2, 1.5);
	gluCylinder(p, 0.5, 0.5, 3, 40, 30);
	glPopMatrix();

	glPushMatrix();
	glColor3f(0.39453125, 0.26171875, 0.12890625);
	glRotatef(90, 1, 0, 0);
	glTranslatef(-3, -1.5, 0);
	glScaled(0.2, 0.2, 1.5);
	gluCylinder(p, 0.5, 0.5, 3, 40, 30);
	glPopMatrix();

	glPushMatrix();
	glColor3f(0.5, 0.5, 1);
	glTranslatef(-2, 0.8, 0);
	glutSolidTeapot(1);
	glPopMatrix();

	glPushMatrix();
	glColor3f(1.5, 0.5, 1);
	glRotatef(-90, 1, 0, 0);
	glTranslatef(0.5, 0.5, 0);
	glScaled(0.5, 0.5, 1);
	gluCylinder(p, 0.5, 1, 1, 40, 30);
	glPopMatrix();

	glPushMatrix();
	glColor3f(1.5, 1.5, 0.5);
	glRotatef(-90, 1, 0, 0);
	glTranslatef(0.5, -0.8, 0);
	glScaled(0.5, 0.5, 1);
	gluCylinder(p, 0.5, 1, 1, 40, 30);
	glPopMatrix();
	glPopMatrix();
	///////////////////////شاشة
	glPushMatrix();
	glTranslatef(-30, 5, -15.8);
	//glRotatef(90, 0, 0, 1);
	glScalef(9, 6, 0.1);
	drawCube2(2, 1, 1, 1, 0.765, 0.64, 0.515, 1, 1, 1, 1, 1, 1, 0.765, 0.64, 0.515, 0.765, 0.64, 0.515);

	glPopMatrix();
	//الضو
	glPushMatrix();
	glTranslatef(0, 22, 0);

	glPushMatrix();
	glColor3f(0.765, 0.64, 0.515);
	glTranslatef(0, -4, 0);
	glRotatef(90, 1, 0, 0);
	gluCylinder(p, 0.2, 1, 1, 40, 30);
	glPopMatrix();

	glPushMatrix();
	glTranslatef(0, -5, 0);
	glScalef(0.01, 0.01, 0.01);
	half_ball(1, 1, 1);
	glPopMatrix();

	glPopMatrix();

	glPushMatrix();
	glTranslatef(-18, 22, 0);

	glPushMatrix();
	glColor3f(0.765, 0.64, 0.515);
	glTranslatef(0, -4, 0);
	glRotatef(90, 1, 0, 0);
	gluCylinder(p, 0.2, 1, 1, 40, 30);
	glPopMatrix();

	glPushMatrix();
	glTranslatef(0, -5, 0);
	glScalef(0.01, 0.01, 0.01);
	half_ball(1, 1, 1);
	glPopMatrix();

	glPopMatrix();

	glPushMatrix();
	glTranslatef(18, 22, 0);

	glPushMatrix();
	glColor3f(0.765, 0.64, 0.515);
	glTranslatef(0, -4, 0);
	glRotatef(90, 1, 0, 0);
	gluCylinder(p, 0.2, 1, 1, 40, 30);
	glPopMatrix();

	glPushMatrix();
	glTranslatef(0, -5, 0);
	glScalef(0.01, 0.01, 0.01);
	half_ball(1, 1, 1);
	glPopMatrix();

	glPopMatrix();

	glPopMatrix();
	/////////////////////////////////////////////////////////////////////////////////////////
	//main bedroom
	glPushMatrix();
	glTranslatef(-48.2, 0, 0);
	glPushMatrix();
	drawFloor(7, 7, 0.2109375, 0.26953125, 0.30859375, 0.3984275, 0, 0, 1, 0.05, 1);
	glPopMatrix();
	glPushMatrix();
	glTranslatef(0, 10, -16);
	glRotatef(-90, 1, 0, 0);
	draw_wall_with_door(7, 4, -1, 0, -7, 2, 0.2109375, 0.26953125, 0.30859375, 1, 0.05, 1, 0.3984275, 0, 0);
	glPopMatrix();
	glPushMatrix();
	glTranslatef(0, 10, 14.1);
	glRotatef(-90, 1, 0, 0);
	Draw_wall_with_one_window(7, 4, 0.2109375, 0.26953125, 0.30859375, 1, 0.05, 1, -5, 5, 0, 3, 0.3984275, 0, 0);
	glPopMatrix();
	glPushMatrix();
	glTranslatef(-14, 8, 0);
	glRotatef(90, 0, 0, 1);
	Draw_wall(4, 7, 0.2109375, 0.26953125, 0.30859375, 1, 0.05, 1);
	glPopMatrix();
	glPushMatrix();
	glTranslatef(16.1, 8, 0);
	glRotatef(90, 0, 0, 1);
	Draw_wall(4, 7, 0.2109375, 0.26953125, 0.30859375, 1, 0.05, 1);
	glPopMatrix();
	glPushMatrix();
	glTranslatef(0, 18, 0);
	Draw_wall(7, 7, 0.2109375, 0.26953125, 0.30859375, 1, 0.05, 1);
	glPopMatrix();
	glPushMatrix();
	drawFloor(7, 7, 0.2109375, 0.26953125, 0.30859375, 0.3984275, 0, 0, 1, 0.05, 1);
	glPopMatrix();
	glPopMatrix();

	//waseem
	glPushMatrix();
	glTranslatef(-54, 4.5, 8);
	glCallList(12);
	glPopMatrix();

	glPushMatrix();
	glTranslatef(-49, 18, 0);
	glRotatef(90, 1, 0, 0);
	gluCylinder(a, 0.5, 0.5, 3, 20, 20);
	glPopMatrix();



	glPushMatrix();
	glTranslatef(-49, 15, 0);
	glutSolidSphere(1.5, 20, 20);
	glPopMatrix();


	/*float em[] = { 1,1,1 };
	glMaterialfv(GL_FRONT_AND_BACK, GL_EMISSION, em);*/

	/*float gm[] = { 0,0,0 };
	glMaterialfv(GL_FRONT_AND_BACK, GL_EMISSION, gm);*/
	/////////////////////////////////////////////////////////////////////////////////////////
	// 
	//kids bedroom
	glPushMatrix();
	glTranslatef(-76.4, 0, 0);
	glPushMatrix();
	drawFloor(6, 7, 0.99609375, 0.98828125, 0.8125, 0.03125, 0.55859375, 0.55859375, 1, 0.05, 1);
	glPopMatrix();
	glPushMatrix();
	glTranslatef(0, 10, -16);
	glRotatef(-90, 1, 0, 0);
	draw_wall_with_door(6, 4, -1, 0, -6, 2, 0.3125, 0.78125, 0.46875, 1, 0.05, 1, 0.8828125, 0.87109375, 0.8203125);
	glPopMatrix();
	glPushMatrix();
	glTranslatef(0, 10, 14.1);
	glRotatef(-90, 1, 0, 0);
	Draw_wall_with_one_window(6, 4, 0.3125, 0.78125, 0.46875, 1, 0.05, 1, -3, 3, -1, 2, 0.8828125, 0.87109375, 0.8203125);
	glPopMatrix();
	glPushMatrix();
	glTranslatef(-12, 8, 0);
	glRotatef(90, 0, 0, 1);
	Draw_wall_with_one_window(4, 7, 0.3125, 0.78125, 0.46875, 1, 0.05, 1, -1, 2, -3, 3, 0.8828125, 0.87109375, 0.8203125);
	glPopMatrix();
	glPushMatrix();
	glTranslatef(14.1, 8, 0);
	glRotatef(90, 0, 0, 1);
	Draw_wall(4, 7, 0.3125, 0.78125, 0.46875, 1, 0.05, 1);
	glPopMatrix();
	glPushMatrix();
	glTranslatef(0, 18, 0);
	Draw_wall(6, 7, 0.3125, 0.78125, 0.46875, 1, 0.05, 1);
	glPopMatrix();
	glPushMatrix();
	glTranslatef(-3.5, 3.5, 3);
	glScalef(0.8, 0.8, 0.8);
	glCallList(22);

	glPopMatrix();


	glPopMatrix();
	///////////////////////////////////////////////////////////////////////////////////////////
	//corridor
	glPushMatrix();
	glTranslatef(-28.45, 0, -20.1);
	drawFloor(30, 2, 1, 1, 1, 0, 0, 0, 1, 0.05, 1);
	glPopMatrix();
	glPushMatrix();
	glTranslatef(-28.45, 18, -20.1);
	drawFloor(30, 2, 0.3984375, 0.38671875, 0.3828125, 0.3984375, 0.38671875, 0.3828125, 1, 0.05, 1);
	glPopMatrix();
	glPushMatrix();
	glTranslatef(33.55, 10, -22.1);
	glRotatef(-90, 1, 0, 0);
	glRotatef(270, 0, 0, 1);
	Draw_wall(2, 4, 0.3984375, 0.38671875, 0.3828125, 1, 0.3, 1);
	glPopMatrix();
	glPushMatrix();
	glTranslatef(-88.5, 10, -22.1);
	glRotatef(-90, 1, 0, 0);
	glRotatef(270, 0, 0, 1);
	Draw_wall(2, 4, 0.3984375, 0.38671875, 0.3828125, 1, 0.05, 1);
	glPopMatrix();
	glPopMatrix();
	///////////////////////////////////////////////////////////////////////////////////////////
	//theater and gaming room
	//theater and gaming room
	glPushMatrix();
	glPushMatrix();
	glTranslatef(11.5, 0, -38.1);
	drawFloor(10, 6, 0, 0, 0, 0.25, 0.25, 0.25, 1, 0.05, 1);
	glPopMatrix();
	glPushMatrix();
	glTranslatef(11.5, 18, -38.1);
	Draw_wall(10, 6, 0.25, 0.25, 0.25, 1, 0.05, 1);
	glPopMatrix();
	glPushMatrix();
	glTranslatef(11.5, 10, -52.1);
	glRotatef(-90, 1, 0, 0);
	Draw_wall(10, 4, 0.25, 0.25, 0.25, 1, 0.05, 1);
	glPopMatrix();
	glPushMatrix();
	glTranslatef(-8.51, 10, -40.1);
	glRotatef(-90, 1, 0, 0);
	glRotatef(-90, 0, 0, 1);
	Draw_wall(6, 4, 0.25, 0.25, 0.25, 1, 0.05, 1);
	glPopMatrix();
	glPushMatrix();
	glTranslatef(33.2, 10, -40.1);
	glRotatef(-90, 1, 0, 0);
	glRotatef(-90, 0, 0, 1);

	Draw_wall(6, 4, 0.25, 0.25, 0.25, 1, 0.5, 1);
	glPopMatrix();
	glPushMatrix();
	glTranslatef(11.5, 10, -26);
	glRotatef(-90, 1, 0, 0);
	draw_wall_with_door(10, 4, -1, 1, -4, 2, 0.25, 0.25, 0.25, 1, 0.05, 1, 1, 1, 0);
	glPopMatrix();
	glTranslated(0, 4, -40);
	glPushMatrix(); {
		glColor3f(1, 1, 1);
		glTranslated(32, 5, 0);
		glScaled(0.02, 1.1, 1.5);
		glutSolidCube(15);
		glPopMatrix(); }


	glPushMatrix(); {
		//
		glTranslated(17, -2.5, 8);
		glScaled(3, 2.5, 18);
		glRotated(90, 0, 1, 0);
		drawSofa();
		glPopMatrix(); }

	glPushMatrix(); {
		glColor3f(0, 0, 0);
		glTranslated(12.5, -2.5, -1);
		glScaled(0.8, 0.25, 1.8);
		glutSolidCube(10);
		glPopMatrix(); }

	glPushMatrix(); {
		//
		glTranslated(11, 0, 8);
		glScaled(3, 2.5, 18);
		glRotated(90, 0, 1, 0);
		drawSofa();
		glPopMatrix(); }




	//Draw the PCs
	glPushMatrix(); {
		glPushMatrix(); {
			glTranslated(-7, 2, -8);
			drawPC();

			glPopMatrix(); }
		glPushMatrix(); {
			glRotated(180, 0, 2, 0);
			glTranslated(0, 2, -9.5);

			drawPC();

			glPopMatrix(); }

		glPopMatrix(); }
	glPopMatrix();
	glPopMatrix();

	///////////////////////////////////////////////////////////////////////////////////////////
	//dining room
	glPushMatrix();
	glPushMatrix();
	glTranslatef(-22.5, 0, -38.1);
	drawFloor(6, 6, 0.95703125, 0.95703125, 0.9453125, 0.6015625, 0.80076125, 0.1953125, 1, 0.05, 1);
	glPopMatrix();
	glPushMatrix();
	glTranslatef(-22.5, 18, -38.1);
	Draw_wall(6, 6, 0.6015625, 0.80076125, 0.1953125, 1, 0.05, 1);
	glPopMatrix();
	glPushMatrix();
	glTranslatef(-34.5, 10, -38.1);
	glRotatef(-90, 1, 0, 0);
	glRotatef(90, 0, 0, 1);
	Draw_wall(6, 4, 0.6015625, 0.80076125, 0.1953125, 1, 0.05, 1);
	glPopMatrix();
	glPushMatrix();
	glTranslatef(-8.5, 10, -38.1);
	glRotatef(-90, 1, 0, 0);
	glRotatef(90, 0, 0, 1);
	Draw_wall(6, 4, 0.6015625, 0.80076125, 0.1953125, 1, 0.05, 1);
	glPopMatrix();
	glPushMatrix();
	glTranslatef(-22.5, 10, -52.1);
	glRotatef(-90, 1, 0, 0);
	Draw_wall_with_one_window(6, 4, 0.6015625, 0.80076125, 0.1953125, 1, 0.05, 1, -3, 3, -1, 3, 0.95703125, 0.95703125, 0.9453125);
	glPopMatrix();
	glPushMatrix();
	glTranslatef(-22.5, 10, -26);
	glRotatef(-90, 1, 0, 0);
	draw_wall_with_door(6, 4, -1, 1, -4, 3, 0.6015625, 0.80076125, 0.1953125, 1, 0.05, 1, 0.95703125, 0.95703125, 0.9453125);
	glPopMatrix();
	glPopMatrix();
	//waseem

	glPushMatrix();
	glTranslatef(-25, 0, -31.2);
	glCallList(13);

	glPopMatrix();


	glPushMatrix();
	glTranslatef(-23, 18, -36);
	glRotatef(90, 1, 0, 0);
	gluCylinder(a, 0.5, 0.5, 3, 20, 20);
	glPopMatrix();



	glPushMatrix();
	glTranslatef(-23, 15, -36);
	glutSolidSphere(1.5, 20, 20);
	glPopMatrix();

	///////////////////////////////////////////////////////////////////////////////////////////
	//kitchen
	glPushMatrix();
	glPushMatrix();
	glTranslatef(-50.5, 0, -38.1);
	drawFloor(7, 6, 0.41015625, 0.41015625, 0.41015625, 0.9765625, 0.97265625, 0.9609375, 1, 0.05, 1);
	glPopMatrix();
	glPushMatrix();
	glTranslatef(-50.5, 18, -38.1);
	Draw_wall(7, 6, 0.41015625, 0.41015625, 0.41015625, 1, 0.05, 1);
	glPopMatrix();
	glPushMatrix();
	glTranslatef(-64.5, 10, -38.1);
	glRotatef(-90, 1, 0, 0);
	glRotatef(90, 0, 0, 1);
	Draw_wall(6, 4, 0.41015625, 0.41015625, 0.41015625, 1, 0.05, 1);
	glPopMatrix();
	glPushMatrix();
	glTranslatef(-34.6, 10, -38.1);
	glRotatef(-90, 1, 0, 0);
	glRotatef(90, 0, 0, 1);
	Draw_wall(6, 4, 0.41015625, 0.41015625, 0.41015625, 1, 0.05, 1);
	glPopMatrix();
	glPushMatrix();
	glTranslatef(-50.6, 10, -52.1);
	glRotatef(-90, 1, 0, 0);
	Draw_wall_with_one_window(7, 4, 0.41015625, 0.41015625, 0.41015625, 1, 0.05, 1, -5, 5, -1, 2, 0.9765625, 0.97265625, 0.9609375);
	glPopMatrix();
	glPushMatrix();
	glTranslatef(-50.6, 10, -26.1);
	glRotatef(-90, 1, 0, 0);
	draw_wall_with_door(7, 4, -1, 1, -7, 3, 0.41015625, 0.41015625, 0.41015625, 1, 0.05, 1, 0.9765625, 0.97265625, 0.9609375);
	glPopMatrix();

	glPushMatrix();
	glTranslatef(-43, 3.6, -38);
	glScalef(0.5, 0.5, 0.5);
	glRotatef(180, 0, 1, 0);
	glCallList(27);

	glPopMatrix();

	glPopMatrix();
	///////////////////////////////////////////////////////////////////////////////////////////
	//bathroom

	glPushMatrix();
	glPushMatrix();
	glTranslatef(-76.6, 0, -38.1);
	//216 191 216
	drawFloor(5, 6, 0.95, 0.8, 0.86, 0.7109375, 0.7109375, 0.703125, 1, 0.05, 1);
	glPopMatrix();
	glPushMatrix();
	glTranslatef(-76.6, 18, -38.1);
	Draw_wall(5, 6, 0.7109375, 0.7109375, 0.703125, 1, 0.05, 1);
	glPopMatrix();
	glPushMatrix();
	glTranslatef(-76.55, 10, -52.1);
	glRotatef(-90, 1, 0, 0);
	Draw_wall(5, 4, 0.7109375, 0.7109375, 0.703125, 1, 0.05, 1);
	glPopMatrix();
	glPushMatrix();
	glTranslatef(-86.5, 10, -38.1);
	glRotatef(-90, 1, 0, 0);
	glRotatef(90, 0, 0, 1);
	Draw_wall(6, 4, 0.7109375, 0.7109375, 0.703125, 1.01, 1, 1);
	glPopMatrix();
	glPushMatrix();
	glTranslatef(-64.6, 10, -38.1);
	glRotatef(-90, 1, 0, 0);
	glRotatef(90, 0, 0, 1);
	Draw_wall(6, 4, 0.7109375, 0.7109375, 0.703125, 1, 0.05, 1);
	glPopMatrix();
	glPushMatrix();
	glTranslatef(-76.6, 10, -26.1);
	glRotatef(-90, 1, 0, 0);
	draw_wall_with_door(5, 4, -1, 1, -5, 3, 0.7109375, 0.7109375, 0.703125, 1, 0.05, 1, 0, 0, 0);
	glPopMatrix();
	glPopMatrix();

	glPushMatrix();
	glTranslatef(-6, 2, -17.3);
	for (int i = 0; i < 8; i++) {
		glTranslatef(0, 0, 1);
		glCallList(8);
		glCallList(9);

	}
	glPopMatrix();

	glPushMatrix();

	glTranslatef(-30, 2, -17);

	glCallList(10);

	glPopMatrix();

	glPushMatrix();



	glCallList(11);

	glPopMatrix();



	glPushMatrix();

	glCallList(19);

	glPopMatrix();
	glPushMatrix();
	glCallList(20);
	glPopMatrix();






	//garden floor
	glPushMatrix();
	glTranslatef(-12, 0, 0);
	drawFloor(50, 32, 0.1, 0.9, 0.2, 0, 0.8, 0.1, 1, 0.02, 1);
	glPopMatrix();



	//trees

	glPushMatrix();
	glTranslatef(88, 14, 72);
	glRotatef(90, 0, 1, 0);

	for (int i = 0; i < 11; i++) {
		glTranslatef(12, 0, 0);
		glCallList(1);
	}
	glPopMatrix();


	glPushMatrix();
	glTranslatef(38, 14, 72);
	glRotatef(90, 0, 1, 0);

	for (int i = 0; i < 4; i++) {
		glTranslatef(12, 0, 0);
		glCallList(1);
	}
	glPopMatrix();


	//street
	glPushMatrix();
	glTranslatef(63, 0, 0);
	drawFloor(10, 32.99999, 0.1215, 0.149, 0.167, 0.1215, 0.149, 0.167, 1, 0.04, 1);
	glPopMatrix();

	//enter
	glPushMatrix();
	glTranslatef(38, 0, -23.999);
	drawFloor(2, 20.9999, 0, 0, 0, 0, 0, 0.145, 1, 0.03, 1);
	glPopMatrix();

	//rest
	glPushMatrix();
	glTranslatef(-40, 0, -58);
	drawFloor(36, 3, 0, 0, 0, 0, 0, 0.145, 1, 0.03, 1);
	glPopMatrix();



	glPushMatrix();
	glTranslatef(-100, 0, -18);
	drawFloor(6, 16, 0, 0, 0, 0, 0, 0.145, 1, 0.03, 1);
	glPopMatrix();



	glPushMatrix();
	glTranslatef(38, 0, 18);
	drawFloor(2, 0.8, 0, 0, 0, 0, 0, 0.145, 1, 0.03, 1);
	glPopMatrix();


	///end of the rest

	//dirt for the trees

	glPushMatrix();
	glTranslatef(38, 0, 42);
	drawFloor(2, 11.9999995, 0.507, 0.362, 0.225, 0.507, 0.362, 0.225, 1, 0.03, 1);
	glPopMatrix();


	glPushMatrix();
	glTranslatef(86, 0, 0);
	drawFloor(1.8, 32, 0.507, 0.362, 0.225, 0.507, 0.362, 0.225, 1, 0.03, 1);
	glPopMatrix();

	//white lines 
	glPushMatrix();
	glTranslatef(63, 0, 58);
	drawFloor(0.5, 1, 0.929, 0.917, 0.878, 0.929, 0.917, 0.878, 1, 0.045, 1);
	glPopMatrix();

	glPushMatrix();
	glTranslatef(63, 0, 48);
	drawFloor(0.5, 1, 0.929, 0.917, 0.878, 0.929, 0.917, 0.878, 1, 0.045, 1);
	glPopMatrix();

	glPushMatrix();

	glTranslatef(63, 0, 38);
	drawFloor(0.5, 1, 0.929, 0.917, 0.878, 0.929, 0.917, 0.878, 1, 0.045, 1);
	glPopMatrix();


	glPushMatrix();
	glTranslatef(63, 0, 28);
	drawFloor(0.5, 1, 0.929, 0.917, 0.878, 0.929, 0.917, 0.878, 1, 0.045, 1);
	glPopMatrix();


	glPushMatrix();
	glTranslatef(63, 0, 18);
	drawFloor(0.5, 1, 0.929, 0.917, 0.878, 0.929, 0.917, 0.878, 1, 0.045, 1);
	glPopMatrix();


	glPushMatrix();
	glTranslatef(63, 0, 8);
	drawFloor(0.5, 1, 0.929, 0.917, 0.878, 0.929, 0.917, 0.878, 1, 0.045, 1);
	glPopMatrix();

	glPushMatrix();
	glTranslatef(63, 0, 0);
	drawFloor(0.5, 1, 0.929, 0.917, 0.878, 0.929, 0.917, 0.878, 1, 0.045, 1);
	glPopMatrix();


	glPushMatrix();
	glTranslatef(63, 0, -8);
	drawFloor(0.5, 1, 0.929, 0.917, 0.878, 0.929, 0.917, 0.878, 1, 0.045, 1);
	glPopMatrix();


	glPushMatrix();
	glTranslatef(63, 0, -16);
	drawFloor(0.5, 1, 0.929, 0.917, 0.878, 0.929, 0.917, 0.878, 1, 0.045, 1);
	glPopMatrix();


	glPushMatrix();
	glTranslatef(63, 0, -24);
	drawFloor(0.5, 1, 0.929, 0.917, 0.878, 0.929, 0.917, 0.878, 1, 0.045, 1);
	glPopMatrix();




	//garage
	//back
	glPushMatrix();
	glColor3f(0.4, 0.4, 0.4);
	glTranslatef(63, 20, -46);
	glScaled(7, 10, 0.1);
	glutSolidCube(5);
	glPopMatrix();
	//right
	glPushMatrix();
	glColor3f(0.4, 0.4, 0.4);
	glTranslatef(80, 20, -28);
	glRotated(-90, 0, 1, 0);
	glScaled(7, 10, 0.1);
	glutSolidCube(5);
	glPopMatrix();

	//left
	glPushMatrix();
	glColor3f(0.4, 0.4, 0.4);
	glTranslatef(46, 20, -28);
	glRotated(-90, 0, 1, 0);
	glScaled(7, 10, 0.1);
	glutSolidCube(5);
	glPopMatrix();

	//roof of garage
	glPushMatrix();
	glColor3f(0.1, 0.1, 0.1);
	glTranslatef(63, 45, -28);
	glRotated(90, 1, 0, 0);
	glScaled(6, 6, 0.1);
	glutSolidCube(5.7);
	glPopMatrix();

	//car

	glPushMatrix();
	glTranslatef(120, 3, -30);
	glRotated(90, 0, 1, 0);
	//glScaled(6, 6, 0.1);


	glColor3d(0.7, 0.5, 0.5);
	glTranslated(0, 0, -50);

	glPushMatrix();
	glScaled(1, 1, 0.1);
	glColor3d(0.1, 0.1, 0.1);
	gluSphere(a, 3, 120, 120);
	glPopMatrix();

	glTranslated(0, 0, -10);

	glPushMatrix();
	glScaled(1, 1, 0.1);
	glColor3d(0.1, 0.1, 0.1);
	gluSphere(a, 3, 120, 120);
	glPopMatrix();


	glTranslated(0, 0, +10);
	glTranslated(7, 0, 0);
	glTranslated(0, 0, -10);

	glPushMatrix();
	glScaled(1, 1, 0.1);
	glColor3d(0.1, 0.1, 0.1);
	gluSphere(a, 3, 120, 120);
	glPopMatrix();


	glTranslated(0, 0, +10);
	glPushMatrix();
	glScaled(1, 1, 0.1);
	glColor3d(0.1, 0.1, 0.1);
	gluSphere(a, 3, 120, 120);
	glPopMatrix();



	glTranslated(-24, 0, 0);
	glTranslated(0, 0, -10);

	glPushMatrix();
	glScaled(1, 1, 0.1);
	glColor3d(0.1, 0.1, 0.1);
	gluSphere(a, 3, 120, 120);
	glPopMatrix();


	glTranslated(0, 0, +10);

	glPushMatrix();
	glScaled(1, 1, 0.1);
	glColor3d(0.1, 0.1, 0.1);
	gluSphere(a, 3, 120, 120);
	glPopMatrix();


	glColor3d(0.7, 0, 0.1);
	glBegin(GL_POLYGON);     // lowest surface ''tires''
	glVertex3d(-12, 0, 0);
	glVertex3d(28, 0, 0);
	glVertex3d(28, 0, -10);
	glVertex3d(-12, 0, -10);
	glEnd();
	glBegin(GL_POLYGON);   // higher surface ''tires''
	glVertex3d(-12, 1, 0);
	glVertex3d(28, 1, 0);
	glVertex3d(28, 1, -10);
	glVertex3d(-12, 1, -10);
	glEnd();
	glBegin(GL_POLYGON); // front connection
	glVertex3d(-12, 0, 0);
	glVertex3d(28, 0, 0);
	glVertex3d(-12, 1, 0);
	glVertex3d(28, 1, 0);
	glEnd();
	glBegin(GL_POLYGON); //  right connection
	glVertex3d(28, 0, 0);
	glVertex3d(28, 0, -10);
	glVertex3d(28, 1, -10);
	glVertex3d(28, 1, 0);
	glEnd();
	glBegin(GL_POLYGON); // back connection
	glVertex3d(28, 0, -10);
	glVertex3d(28, 1, -10);
	glVertex3d(-12, 1, -10);
	glVertex3d(-12, 0, -10);
	glEnd();
	glBegin(GL_POLYGON); // left connection
	glVertex3d(-12, 0, 0);
	glVertex3d(28, 0, -10);
	glVertex3d(-12, 1, -10);
	glVertex3d(28, 1, 0);
	glEnd();


	glColor3d(0.5, 0.5, 0.5);
	glTranslated(18, 7, -5);
	glScaled(5, 3, 2.5);
	glutSolidCube(4);  // truck carrier
	glScaled(1.0f / 5, 1.0f / 3, (1.0f / 2.5));
	glTranslated(-18, -7, 5);

	glColor3d(0.7, 0, 0.1);
	glTranslated(3, 7.5, -5);
	glScaled(1.3, 2.1, 1);   // block before windows
	glutSolidCube(6);
	glScaled(1.0f / 1.3, 1.0f / 2.1, 1);
	glTranslated(-3, -7.5, 5);

	glColor3d(0.7, 0, 0.1);
	glLineWidth(3);
	glBegin(GL_LINE_STRIP);
	glVertex3d(0.5, 5, 0);
	glVertex3d(0.5, 13, 0);
	glVertex3d(-4.5, 13, 0);
	glVertex3d(-7.5, 8, 0);  // windows
	glVertex3d(-11.5, 8, 0);


	glVertex3d(0.5, 5, -10);
	glVertex3d(0.5, 13, -10);
	glVertex3d(-4.5, 13, -10);
	glVertex3d(-7.5, 8, -10);
	glVertex3d(-11.5, 8, -10);

	glEnd();

	glTranslated(-5, 4.5, -5);
	glScaled(2.2, 1.1, 2);
	glRotated(3, 0, 0, 1);
	glutSolidCube(6);    // engine
	glRotated(-3, 0, 0, 1);
	glScaled(1.0f / 2.2, 1.0f / 1.1, 1.0f / 2);
	glTranslated(5, -4.5, 5);

	glBegin(GL_POLYGON);
	glVertex3d(0.5, 13, 0);
	glVertex3d(0.5, 13, -10);
	glVertex3d(-4.5, 13, -10);
	glVertex3d(-4.5, 13, 0);
	glEnd();

	glPopMatrix();



	//soor
	glPushMatrix();
	glTranslatef(83, 8, 67);
	glRotatef(90, 0, 1, 0);

	for (int i = 0; i < 25; i++) {
		glTranslatef(5, 0, 0);
		glCallList(2);

	}
	glPopMatrix();
	//another one

	glPushMatrix();
	glTranslatef(44, 8, 68);
	glRotatef(90, 0, 1, 0);

	for (int i = 0; i < 8; i++) {
		glTranslatef(5, 0, 0);
		glCallList(2);

	}
	glPopMatrix();

	//silver soor

	glPushMatrix();
	glTranslatef(44, 8, -4);
	glRotatef(90, 0, 1, 0);

	for (int i = 0; i < 11; i++) {
		glTranslatef(5, 0, 0);
		glCallList(3);

	}
	glPopMatrix();


	glPushMatrix();
	glTranslatef(44, 8, 25);
	glRotatef(90, 0, 1, 0);

	for (int i = 0; i < 3; i++) {
		glTranslatef(5, 0, 0);
		glCallList(3);

	}
	glPopMatrix();
	//ارضية المسبح 


	glPushMatrix();
	glTranslatef(-16, 0, 26);
	drawFloor(10, 5, 1, 0.992, 0.815, 0.996, 0.925, 0.784, 1, 0.04999, 1);
	glPopMatrix();

	glPushMatrix();
	glTranslatef(-34, 4, 62);
	glRotatef(90, 0, 1, 0);

	for (int i = 0; i < 21; i++) {
		glTranslatef(1, 0, 0);
		glCallList(4);

	}
	glPopMatrix();

	glPushMatrix();
	glTranslatef(12, 4, 62);
	glRotatef(90, 0, 1, 0);

	for (int i = 0; i < 21; i++) {
		glTranslatef(1, 0, 0);
		glCallList(4);

	}
	glPopMatrix();


	glPushMatrix();
	glTranslatef(-34, 4, 60);
	//glRotatef(90, 0, 1, 0);

	for (int i = 0; i < 40; i++) {
		glTranslatef(1, 0, 0);
		glCallList(4);

	}
	glPopMatrix();



	glPushMatrix();
	glTranslatef(-34, 4, 36);
	//glRotatef(90, 0, 1, 0);

	for (int i = 0; i < 40; i++) {
		glTranslatef(1, 0, 0);
		glCallList(4);

	}
	glPopMatrix();



	//swiming pool 
	glPushMatrix();
	glTranslatef(-13, 2, 49);
	drawFloor(10.9999999, 5.9999, 0, 0, 0.274, 0, 0, 0.245, 1, 0.05, 1);

	glPopMatrix();

	glFlush();
}
void animation(int x) {

	glutTimerFunc(1000 / 60, animation, 0);
	Sangle += 0.3;
	glutPostRedisplay();
}
int main(int argc, char** argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_RGB | GLUT_SINGLE | GLUT_DEPTH); // Use single display buffer.
	glutInitWindowSize(1280, 720);
	glutInitWindowPosition(0, 0);
	glutCreateWindow("EMPTY WINDOW");
	InitGL();
	glutReshapeFunc(ReSizeGLScene);
	glutDisplayFunc(DrawGLScene);
	glutKeyboardFunc(keyboard);
	glutSpecialFunc(spacial);
	animation(0);
	glutMainLoop();
	return 0;
}