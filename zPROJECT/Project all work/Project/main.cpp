#include <windows.h>
#include <GL/glut.h>
#include <math.h>>
#include <cstdio>
#define PI 3.14159265358979323846

GLfloat position1 = 0.0f;
GLfloat speed1 = 0.5f;

GLfloat position2 = 0.0f;
GLfloat speed2 = 0.08f;

GLfloat position3 = 0.0f;
GLfloat speed3 = 0.08f;

GLfloat position4 = 0.0f;
GLfloat speed4 = 1.0f;

GLfloat position5 = 0.0f;
GLfloat speed5 = 0.8f;

void update1(int value1) {

 if(position1<-17.0)
position1 =17.0f;

 position1 -= speed1;

 glutPostRedisplay();

glutTimerFunc(100, update1, 0);
}


void update2(int value1) {

 if(position2 <-5.0)
position2 =1.0f;

 position2 -= speed2;
///MOON
 glutPostRedisplay();

glutTimerFunc(100, update2, 0);
}

void update3(int value1) {

 if(position3 >5.0f)
position3 =-1.0f;
///SUN
 position3 += speed3;

 glutPostRedisplay();

glutTimerFunc(100, update3, 0);
}


void update4(int value1) {

 if(position4 <-3.0)
position4 =3.0f;

 position4 -= speed4;
///RAIN
 glutPostRedisplay();

glutTimerFunc(100, update4, 0);
}

void update5(int value1) {

 if(position5 >10.0f)
position5 =-10.0f;
///BIRD
 position5 += speed5;

 glutPostRedisplay();

glutTimerFunc(100, update5, 0);
}


void Idle()
{
    glutPostRedisplay();
}

void init()
{
    glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(-10.0f,10.0f,-10.0f,10.0f);
    glMatrixMode(GL_MODELVIEW);
}

void day();

void day_demo(int a)
{
    glutDisplayFunc(day);
}




void nightrain() {
	glClear(GL_COLOR_BUFFER_BIT);
	glLineWidth(2.5);

//background start
	glBegin(GL_QUADS);
	//glColor3ub(220, 220, 220);
	glColor3ub(47, 79, 79);
	glVertex2f(-10.0f, 10.0f);
	glVertex2f(-10.0f, -10.0f);
	glVertex2f(10.0f, -10.0f);
	glVertex2f(10.0f, 10.0f);
	glEnd();
//background finish

///moon start

// GLfloat sunx=6.0f; GLfloat suny=8.10f; GLfloat sunradius =0.75f;
//
// GLfloat suntwicePi = 2.0f * PI;
//
 int i;
	int triangleAmount = 500;
//
// glBegin(GL_TRIANGLE_FAN);
//glColor3ub(208, 213,210);
//glVertex2f(sunx, suny);
//for(i = 0; i <=triangleAmount;i++) {
//glVertex2f(
//sunx + (sunradius * cos(i * suntwicePi / triangleAmount)),
//suny + (sunradius * sin(i * suntwicePi / triangleAmount))
//);
//}
//glEnd();
///moon end

///cloud Animation

     glLoadIdentity();

    glPushMatrix();
    glTranslatef(position1,0,0);
///cloud1
    GLfloat cxx=-8.0f; GLfloat cyy=7.10f; GLfloat cradiuss =1.0f;

	GLfloat ctwicePii = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(126, 135,150);
	//glColor3ub(248, 248,255);
		glVertex2f(cxx, cyy);
		for(i = 0; i <=triangleAmount;i++) {
			glVertex2f(
		            cxx + (cradiuss * cos(i *  ctwicePii / triangleAmount)),
			    cyy + (cradiuss * sin(i * ctwicePii / triangleAmount))
			);
		}
	glEnd();

	///cloud2

	GLfloat cxx1=-9.0f; GLfloat cyy1=7.10f; GLfloat cradiuss1 =1.0f;

	GLfloat ctwicePii1 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(126, 135,150);
	//glColor3ub(248, 248,255);
		glVertex2f(cxx1, cyy1);
		for(i = 0; i <=triangleAmount;i++) {
			glVertex2f(
		            cxx1 + (cradiuss1 * cos(i *  ctwicePii1 / triangleAmount)),
			    cyy1 + (cradiuss * sin(i * ctwicePii1 / triangleAmount))
			);
		}
	glEnd();

	///cloud3
	GLfloat cxx2=-8.0f; GLfloat cyy2=8.10f; GLfloat cradiuss2 =1.0f;

	GLfloat ctwicePii2 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(126, 135,150);
	//glColor3ub(248, 248,255);
		glVertex2f(cxx2, cyy2);
		for(i = 0; i <=triangleAmount;i++) {
			glVertex2f(
		            cxx2 + (cradiuss2 * cos(i *  ctwicePii2 / triangleAmount)),
			    cyy2 + (cradiuss2 * sin(i * ctwicePii2 / triangleAmount))
			);
		}
	glEnd();

	///cloud4

	GLfloat cxx3=-1.0f; GLfloat cyy3=9.10f; GLfloat cradiuss3 =1.0f;

	GLfloat ctwicePii3 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(126, 135,150);
	//glColor3ub(248, 248,255);
		glVertex2f(cxx3, cyy3);
		for(i = 0; i <=triangleAmount;i++) {
			glVertex2f(
		            cxx3 + (cradiuss3 * cos(i *  ctwicePii3 / triangleAmount)),
			    cyy3 + (cradiuss3 * sin(i * ctwicePii3 / triangleAmount))
			);
		}
	glEnd();



	///cloud5

	GLfloat cxx4=0.0f; GLfloat cyy4=9.10f; GLfloat cradiuss4 =1.0f;

	GLfloat ctwicePii4 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(126, 135,150);
	//glColor3ub(248, 248,255);
		glVertex2f(cxx4, cyy4);
		for(i = 0; i <=triangleAmount;i++) {
			glVertex2f(
		            cxx4 + (cradiuss4 * cos(i *  ctwicePii4 / triangleAmount)),
			    cyy4 + (cradiuss4 * sin(i * ctwicePii4 / triangleAmount))
			);
		}
	glEnd();

	glPopMatrix();
	///cloud end

//grass
glBegin(GL_QUADS);
	glColor3ub(1, 110, 1);
	glVertex2f(-10.0f, 2.00f);
	glVertex2f(-10.0f, -10.0f);
	glVertex2f(10.0f, -10.0f);
	glVertex2f(10.0f, 2.00f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(17, 59, 21);
	glVertex2f(-10.0f, 1.00f);
	glVertex2f(-10.0f, -10.0f);
	glVertex2f(10.0f, -10.0f);
	glVertex2f(10.0f, 1.00f);
	glEnd();

//roads
    glBegin(GL_QUADS);
	glColor3ub(138, 135, 128);
	glVertex2f(-1.05f, 0.00f);
	glVertex2f(-5.0f, -10.0f);
	glVertex2f(5.0f, -10.0f);
	glVertex2f(1.05f, 0.00f);
	glEnd();



/// Sixty Dome Mosque start
	/// platform
	glBegin(GL_QUADS);
	glColor3ub(154, 122, 97);
	glVertex2f(-9.0f, 1.0f);
	glVertex2f(-10.0f, 0.0f);
	glVertex2f(10.0f, 0.0f);
	glVertex2f(9.0f, 1.0f);
	glEnd();

	// platform border
	glBegin(GL_QUADS);
	glColor3ub(115, 91, 72);
	glVertex2f(-10.0f, 0.0f);
	glVertex2f(10.0f, 0.0f);
	glVertex2f(9.90f, 0.10f);
	glVertex2f(-9.90f, 0.10f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(115, 91, 72);
	glVertex2f(-10.0f, 0.0f);
	glVertex2f(-9.90f, 0.0f);
	glVertex2f(-8.90f, 1.00f);
	glVertex2f(-9.0f, 1.0f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(115, 91, 72);
	glVertex2f(10.0f, 0.0f);
	glVertex2f(9.90f, 0.0f);
	glVertex2f(8.90f, 1.00f);
	glVertex2f(9.0f, 1.0f);
	glEnd();

	///building
	glBegin(GL_POLYGON);
	glColor3ub(225, 150, 82);
	glVertex2f(-9.0f, 1.0f);
	glVertex2f(9.0f, 1.0f);
	glVertex2f(9.0f, 5.0f);
	glVertex2f(0.0f, 5.50f);
	glVertex2f(-9.0f, 5.0f);
	glVertex2f(-9.0f, 1.0f);
	glEnd();
//middle circle
//border
	GLfloat x3=0.0f; GLfloat y3=5.60f; GLfloat radius3 =1.00f;
	GLfloat twicePi3 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(188, 118, 46);
		glVertex2f(x3, y3);
		for(i = 0; i <=triangleAmount;i++) {
			glVertex2f(
		            x3 + (radius3 * cos(i *  twicePi3 / triangleAmount)),
			    y3 + (radius3 * sin(i * twicePi3 / triangleAmount))
			);
		}
	glEnd();

	GLfloat xx3=0.0f; GLfloat yy3=5.50f; GLfloat radiuss3 =1.00f;
	GLfloat twicePii3 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(225, 150, 82);
		glVertex2f(xx3, yy3);
		for(i = 0; i <=triangleAmount;i++) {
			glVertex2f(
		            xx3 + (radiuss3 * cos(i *  twicePii3 / triangleAmount)),
			    yy3 + (radiuss3 * sin(i * twicePii3 / triangleAmount))
			);
		}
	glEnd();
//left circle
//1st
	GLfloat x4=-1.7f; GLfloat y4=5.55f; GLfloat radius4 =0.50f;
	GLfloat twicePi4 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(188, 118, 46);
		glVertex2f(x4, y4);
		for(i = 0; i <=triangleAmount;i++) {
			glVertex2f(
		            x4 + (radius4 * cos(i *  twicePi4 / triangleAmount)),
			    y4 + (radius4 * sin(i * twicePi4 / triangleAmount))
			);
		}
	glEnd();

	GLfloat xx4=-1.7f; GLfloat yy4=5.45f; GLfloat radiuss4 =0.50f;
	GLfloat twicePii4 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(225, 150, 82);
		glVertex2f(xx4, yy4);
		for(i = 0; i <=triangleAmount;i++) {
			glVertex2f(
		            xx4 + (radiuss4 * cos(i *  twicePii4 / triangleAmount)),
			    yy4 + (radiuss4 * sin(i * twicePii4 / triangleAmount))
			);
		}
	glEnd();
//2nd
	GLfloat x5=-2.9f; GLfloat y5=5.50f; GLfloat radius5 =0.50f;
	GLfloat twicePi5 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(188, 118, 46);
		glVertex2f(x5, y5);
		for(i = 0; i <=triangleAmount;i++) {
			glVertex2f(
		            x5 + (radius5 * cos(i *  twicePi5 / triangleAmount)),
			    y5 + (radius5 * sin(i * twicePi5 / triangleAmount))
			);
		}
	glEnd();

	GLfloat xx5=-2.9f; GLfloat yy5=5.40f; GLfloat radiuss5 =0.50f;
	GLfloat twicePii5 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(225, 150, 82);
		glVertex2f(xx5, yy5);
		for(i = 0; i <=triangleAmount;i++) {
			glVertex2f(
		            xx5 + (radiuss5 * cos(i *  twicePii5 / triangleAmount)),
			    yy5 + (radiuss5 * sin(i * twicePii5 / triangleAmount))
			);
		}
	glEnd();
//3rd
GLfloat x6=-4.1f; GLfloat y6=5.45f; GLfloat radius6 =0.50f;
	GLfloat twicePi6 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(188, 118, 46);
		glVertex2f(x6, y6);
		for(i = 0; i <=triangleAmount;i++) {
			glVertex2f(
		            x6 + (radius6 * cos(i *  twicePi6 / triangleAmount)),
			    y6 + (radius6 * sin(i * twicePi6 / triangleAmount))
			);
		}
	glEnd();

	GLfloat xx6=-4.1f; GLfloat yy6=5.35f; GLfloat radiuss6 =0.50f;
	GLfloat twicePii6 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(225, 150, 82);
		glVertex2f(xx6, yy6);
		for(i = 0; i <=triangleAmount;i++) {
			glVertex2f(
		            xx6 + (radiuss6 * cos(i *  twicePii6 / triangleAmount)),
			    yy6 + (radiuss6 * sin(i * twicePii6 / triangleAmount))
			);
		}
	glEnd();
//4th
GLfloat x7=-5.3f; GLfloat y7=5.40f; GLfloat radius7 =0.50f;
	GLfloat twicePi7 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(188, 118, 46);
		glVertex2f(x7, y7);
		for(i = 0; i <=triangleAmount;i++) {
			glVertex2f(
		            x7 + (radius7 * cos(i *  twicePi7 / triangleAmount)),
			    y7 + (radius7 * sin(i * twicePi7 / triangleAmount))
			);
		}
	glEnd();

	GLfloat xx7=-5.3f; GLfloat yy7=5.30f; GLfloat radiuss7 =0.50f;
	GLfloat twicePii7 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(225, 150, 82);
		glVertex2f(xx7, yy7);
		for(i = 0; i <=triangleAmount;i++) {
			glVertex2f(
		            xx7 + (radiuss7 * cos(i *  twicePii7 / triangleAmount)),
			    yy7 + (radiuss7 * sin(i * twicePii7 / triangleAmount))
			);
		}
	glEnd();
//5th
    GLfloat x8=-6.4f; GLfloat y8=5.35f; GLfloat radius8 =0.50f;
	GLfloat twicePi8 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(188, 118, 46);
		glVertex2f(x8, y8);
		for(i = 0; i <=triangleAmount;i++) {
			glVertex2f(
		            x8 + (radius8 * cos(i *  twicePi8 / triangleAmount)),
			    y8 + (radius8 * sin(i * twicePi8 / triangleAmount))
			);
		}
	glEnd();

	GLfloat xx8=-6.4f; GLfloat yy8=5.25f; GLfloat radiuss8 =0.50f;
	GLfloat twicePii8 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(225, 150, 82);
		glVertex2f(xx8, yy8);
		for(i = 0; i <=triangleAmount;i++) {
			glVertex2f(
		            xx8 + (radiuss8 * cos(i *  twicePii8 / triangleAmount)),
			    yy8 + (radiuss8 * sin(i * twicePii8 / triangleAmount))
			);
		}
	glEnd();
//right circle
//1st
	GLfloat x9=1.7f; GLfloat y9=5.55f; GLfloat radius9 =0.50f;
	GLfloat twicePi9 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(188, 118, 46);
		glVertex2f(x9, y9);
		for(i = 0; i <=triangleAmount;i++) {
			glVertex2f(
		            x9 + (radius9 * cos(i *  twicePi9 / triangleAmount)),
			    y9 + (radius9 * sin(i * twicePi9 / triangleAmount))
			);
		}
	glEnd();

	GLfloat xx9=1.7f; GLfloat yy9=5.45f; GLfloat radiuss9 =0.50f;
	GLfloat twicePii9 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(225, 150, 82);
		glVertex2f(xx9, yy9);
		for(i = 0; i <=triangleAmount;i++) {
			glVertex2f(
		            xx9 + (radiuss9 * cos(i *  twicePii9 / triangleAmount)),
			    yy9 + (radiuss9 * sin(i * twicePii9 / triangleAmount))
			);
		}
	glEnd();
//2nd
	GLfloat x10=2.9f; GLfloat y10=5.50f; GLfloat radius10 =0.50f;
	GLfloat twicePi10 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(188, 118, 46);
		glVertex2f(x10, y10);
		for(i = 0; i <=triangleAmount;i++) {
			glVertex2f(
		            x10 + (radius10 * cos(i *  twicePi10 / triangleAmount)),
			    y10 + (radius10 * sin(i * twicePi10 / triangleAmount))
			);
		}
	glEnd();

	GLfloat xx10=2.9f; GLfloat yy10=5.40f; GLfloat radiuss10 =0.50f;
	GLfloat twicePii10 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(225, 150, 82);
		glVertex2f(xx10, yy10);
		for(i = 0; i <=triangleAmount;i++) {
			glVertex2f(
		            xx10 + (radiuss10 * cos(i *  twicePii10 / triangleAmount)),
			    yy10 + (radiuss10 * sin(i * twicePii10 / triangleAmount))
			);
		}
	glEnd();
//3rd
GLfloat x11=4.1f; GLfloat y11=5.45f; GLfloat radius11 =0.50f;
	GLfloat twicePi11 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(188, 118, 46);
		glVertex2f(x11, y11);
		for(i = 0; i <=triangleAmount;i++) {
			glVertex2f(
		            x11 + (radius11 * cos(i *  twicePi11 / triangleAmount)),
			    y11 + (radius11 * sin(i * twicePi11 / triangleAmount))
			);
		}
	glEnd();

	GLfloat xx11=4.1f; GLfloat yy11=5.35f; GLfloat radiuss11 =0.50f;
	GLfloat twicePii11 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(225, 150, 82);
		glVertex2f(xx11, yy11);
		for(i = 0; i <=triangleAmount;i++) {
			glVertex2f(
		            xx11 + (radiuss11 * cos(i *  twicePii11 / triangleAmount)),
			    yy11 + (radiuss11 * sin(i * twicePii11 / triangleAmount))
			);
		}
	glEnd();
//4th
GLfloat x12=5.3f; GLfloat y12=5.40f; GLfloat radius12 =0.50f;
	GLfloat twicePi12 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(188, 118, 46);
		glVertex2f(x12, y12);
		for(i = 0; i <=triangleAmount;i++) {
			glVertex2f(
		            x12 + (radius12 * cos(i *  twicePi12 / triangleAmount)),
			    y12 + (radius12 * sin(i * twicePi12 / triangleAmount))
			);
		}
	glEnd();

	GLfloat xx12=5.3f; GLfloat yy12=5.30f; GLfloat radiuss12 =0.50f;
	GLfloat twicePii12 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(225, 150, 82);
		glVertex2f(xx12, yy12);
		for(i = 0; i <=triangleAmount;i++) {
			glVertex2f(
		            xx12 + (radiuss12 * cos(i *  twicePii12 / triangleAmount)),
			    yy12 + (radiuss12 * sin(i * twicePii12 / triangleAmount))
			);
		}
	glEnd();
//5th
GLfloat x13=6.4f; GLfloat y13=5.35f; GLfloat radius13 =0.50f;
	GLfloat twicePi13 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(188, 118, 46);
		glVertex2f(x13, y13);
		for(i = 0; i <=triangleAmount;i++) {
			glVertex2f(
		            x13 + (radius13 * cos(i *  twicePi13 / triangleAmount)),
			    y13 + (radius13 * sin(i * twicePi13 / triangleAmount))
			);
		}
	glEnd();

	GLfloat xx13=6.4f; GLfloat yy13=5.25f; GLfloat radiuss13 =0.50f;
	GLfloat twicePii13 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(225, 150, 82);
		glVertex2f(xx13, yy13);
		for(i = 0; i <=triangleAmount;i++) {
			glVertex2f(
		            xx13 + (radiuss13 * cos(i *  twicePii13 / triangleAmount)),
			    yy13 + (radiuss13 * sin(i * twicePii13 / triangleAmount))
			);
		}
	glEnd();
///border
	glBegin(GL_QUADS);
	glColor3ub(188, 118, 46);
	glVertex2f(-9.0f, 5.0f);
	glVertex2f(0.0f, 5.50f);
	glVertex2f(0.0f, 5.60f);
	glVertex2f(-9.0f, 5.10f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(188, 118, 46);
	glVertex2f(9.0f, 5.0f);
	glVertex2f(0.0f, 5.50f);
	glVertex2f(0.0f, 5.60f);
	glVertex2f(9.0f, 5.10f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(188, 118, 46);
	glVertex2f(-9.0f, 1.0f);
	glVertex2f(9.0f, 1.0f);
	glVertex2f(9.0f, 1.10f);
	glVertex2f(-9.0f, 1.10f);
	glEnd();

//main gate
	glBegin(GL_QUADS);
	glColor3ub(188, 113, 48);
	glVertex2f(-0.5f, 1.00f);
	glVertex2f(0.5f, 1.00f);
	glVertex2f(0.5f, 4.50f);
	glVertex2f(-0.5f, 4.50f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(162, 93, 34);
	glVertex2f(-0.5f, 1.00f);
	glVertex2f(0.5f, 1.00f);
	glVertex2f(0.5f, 3.20f);
	glVertex2f(-0.5f, 3.20f);
	glEnd();

	GLfloat x24=0.0f; GLfloat y24=3.20f; GLfloat radius24 =0.5f;
	GLfloat twicePi24 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(162, 93, 34);
		glVertex2f(x24, y24);
		for(i = 0; i <=triangleAmount;i++) {
			glVertex2f(
		            x24 + (radius24 * cos(i *  twicePi24 / triangleAmount)),
			    y24 + (radius24 * sin(i * twicePi24/ triangleAmount))
			);
		}
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(79, 43, 19);
	glVertex2f(-0.2f, 1.00f);
	glVertex2f(0.2f, 1.00f);
	glVertex2f(0.2f, 2.50f);
	glVertex2f(-0.2f, 2.50f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(173, 99, 38);
	glVertex2f(-0.5f, 4.30f);
	glVertex2f(0.5f, 4.30f);
	glVertex2f(0.5f, 4.50f);
	glVertex2f(-0.5f, 4.50f);
	glEnd();

//left gates
//1st
	glBegin(GL_QUADS);
	glColor3ub(188, 113, 48);
	glVertex2f(-1.75f, 1.00f);
	glVertex2f(-1.05f, 1.00f);
	glVertex2f(-1.05f, 3.20f);
	glVertex2f(-1.75f, 3.20f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(162, 93, 34);
	glVertex2f(-1.75f, 1.00f);
	glVertex2f(-1.05f, 1.00f);
	glVertex2f(-1.05f, 2.20f);
	glVertex2f(-1.75f, 2.20f);
	glEnd();

	GLfloat x14=-1.399f; GLfloat y14=2.20f; GLfloat radius14 =0.35f;
	GLfloat twicePi14 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(162, 93, 34);
		glVertex2f(x14, y14);
		for(i = 0; i <=triangleAmount;i++) {
			glVertex2f(
		            x14 + (radius14 * cos(i *  twicePi14 / triangleAmount)),
			    y14 + (radius14 * sin(i * twicePi14/ triangleAmount))
			);
		}
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(79, 43, 19);
	glVertex2f(-1.55f, 1.00f);
	glVertex2f(-1.25f, 1.00f);
	glVertex2f(-1.25f, 2.05f);
	glVertex2f(-1.55f, 2.05f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(173, 99, 38);
	glVertex2f(-1.75f, 3.00f);
	glVertex2f(-1.05f, 3.00f);
	glVertex2f(-1.05f, 3.20f);
	glVertex2f(-1.75f, 3.20f);
	glEnd();
//2nd
	glBegin(GL_QUADS);
	glColor3ub(188, 113, 48);
	glVertex2f(-2.75f, 1.00f);
	glVertex2f(-2.05f, 1.00f);
	glVertex2f(-2.05f, 3.20f);
	glVertex2f(-2.75f, 3.20f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(162, 93, 34);
	glVertex2f(-2.75f, 1.00f);
	glVertex2f(-2.05f, 1.00f);
	glVertex2f(-2.05f, 2.20f);
	glVertex2f(-2.75f, 2.20f);
	glEnd();

	GLfloat x15=-2.399f; GLfloat y15=2.20f; GLfloat radius15 =0.35f;
	GLfloat twicePi15 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(162, 93, 34);
		glVertex2f(x15, y15);
		for(i = 0; i <=triangleAmount;i++) {
			glVertex2f(
		            x15 + (radius15 * cos(i *  twicePi15 / triangleAmount)),
			    y15 + (radius15 * sin(i * twicePi15 / triangleAmount))
			);
		}
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(79, 43, 19);
	glVertex2f(-2.55f, 1.00f);
	glVertex2f(-2.25f, 1.00f);
	glVertex2f(-2.25f, 2.05f);
	glVertex2f(-2.55f, 2.05f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(173, 99, 38);
	glVertex2f(-2.75f, 3.00f);
	glVertex2f(-2.05f, 3.00f);
	glVertex2f(-2.05f, 3.20f);
	glVertex2f(-2.75f, 3.20f);
	glEnd();
//3rd
	glBegin(GL_QUADS);
	glColor3ub(188, 113, 48);
	glVertex2f(-3.75f, 1.00f);
	glVertex2f(-3.05f, 1.00f);
	glVertex2f(-3.05f, 3.20f);
	glVertex2f(-3.75f, 3.20f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(162, 93, 34);
	glVertex2f(-3.75f, 1.00f);
	glVertex2f(-3.05f, 1.00f);
	glVertex2f(-3.05f, 2.20f);
	glVertex2f(-3.75f, 2.20f);
	glEnd();

	GLfloat x16=-3.399f; GLfloat y16=2.20f; GLfloat radius16 =0.35f;
	GLfloat twicePi16 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(162, 93, 34);
		glVertex2f(x16, y16);
		for(i = 0; i <=triangleAmount;i++) {
			glVertex2f(
		            x16 + (radius16 * cos(i *  twicePi16 / triangleAmount)),
			    y16 + (radius16 * sin(i * twicePi16 / triangleAmount))
			);
		}
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(79, 43, 19);
	glVertex2f(-3.55f, 1.00f);
	glVertex2f(-3.25f, 1.00f);
	glVertex2f(-3.25f, 2.05f);
	glVertex2f(-3.55f, 2.05f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(173, 99, 38);
	glVertex2f(-3.75f, 3.00f);
	glVertex2f(-3.05f, 3.00f);
	glVertex2f(-3.05f, 3.20f);
	glVertex2f(-3.75f, 3.20f);
	glEnd();
//4th
	glBegin(GL_QUADS);
	glColor3ub(188, 113, 48);
	glVertex2f(-4.75f, 1.00f);
	glVertex2f(-4.05f, 1.00f);
	glVertex2f(-4.05f, 3.20f);
	glVertex2f(-4.75f, 3.20f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(162, 93, 34);
	glVertex2f(-4.75f, 1.00f);
	glVertex2f(-4.05f, 1.00f);
	glVertex2f(-4.05f, 2.20f);
	glVertex2f(-4.75f, 2.20f);
	glEnd();

	GLfloat x17=-4.399f; GLfloat y17=2.20f; GLfloat radius17 =0.35f;
	GLfloat twicePi17 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(162, 93, 34);
		glVertex2f(x17, y17);
		for(i = 0; i <=triangleAmount;i++) {
			glVertex2f(
		            x17 + (radius17 * cos(i *  twicePi17 / triangleAmount)),
			    y17 + (radius17 * sin(i * twicePi17 / triangleAmount))
			);
		}
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(79, 43, 19);
	glVertex2f(-4.55f, 1.00f);
	glVertex2f(-4.25f, 1.00f);
	glVertex2f(-4.25f, 2.05f);
	glVertex2f(-4.55f, 2.05f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(173, 99, 38);
	glVertex2f(-4.75f, 3.00f);
	glVertex2f(-4.05f, 3.00f);
	glVertex2f(-4.05f, 3.20f);
	glVertex2f(-4.75f, 3.20f);
	glEnd();

//5th
	glBegin(GL_QUADS);
	glColor3ub(188, 113, 48);
	glVertex2f(-5.75f, 1.00f);
	glVertex2f(-5.05f, 1.00f);
	glVertex2f(-5.05f, 3.20f);
	glVertex2f(-5.75f, 3.20f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(162, 93, 34);
	glVertex2f(-5.75f, 1.00f);
	glVertex2f(-5.05f, 1.00f);
	glVertex2f(-5.05f, 2.20f);
	glVertex2f(-5.75f, 2.20f);
	glEnd();

	GLfloat x18=-5.399f; GLfloat y18=2.20f; GLfloat radius18 =0.35f;
	GLfloat twicePi18 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(162, 93, 34);
		glVertex2f(x18, y18);
		for(i = 0; i <=triangleAmount;i++) {
			glVertex2f(
		            x18 + (radius18 * cos(i *  twicePi18 / triangleAmount)),
			    y18 + (radius18 * sin(i * twicePi18/ triangleAmount))
			);
		}
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(79, 43, 19);
	glVertex2f(-5.55f, 1.00f);
	glVertex2f(-5.25f, 1.00f);
	glVertex2f(-5.25f, 2.05f);
	glVertex2f(-5.55f, 2.05f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(173, 99, 38);
	glVertex2f(-5.75f, 3.00f);
	glVertex2f(-5.05f, 3.00f);
	glVertex2f(-5.05f, 3.20f);
	glVertex2f(-5.75f, 3.20f);
	glEnd();

	//right gates
//1st
	glBegin(GL_QUADS);
	glColor3ub(188, 113, 48);
	glVertex2f(1.75f, 1.00f);
	glVertex2f(1.05f, 1.00f);
	glVertex2f(1.05f, 3.20f);
	glVertex2f(1.75f, 3.20f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(162, 93, 34);
	glVertex2f(1.75f, 1.00f);
	glVertex2f(1.05f, 1.00f);
	glVertex2f(1.05f, 2.20f);
	glVertex2f(1.75f, 2.20f);
	glEnd();

	GLfloat x19=1.399f; GLfloat y19=2.20f; GLfloat radius19 =0.35f;
	GLfloat twicePi19 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(162, 93, 34);
		glVertex2f(x19, y19);
		for(i = 0; i <=triangleAmount;i++) {
			glVertex2f(
		            x19 + (radius19 * cos(i *  twicePi19 / triangleAmount)),
			    y19 + (radius19 * sin(i * twicePi19 / triangleAmount))
			);
		}
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(79, 43, 19);
	glVertex2f(1.55f, 1.00f);
	glVertex2f(1.25f, 1.00f);
	glVertex2f(1.25f, 2.05f);
	glVertex2f(1.55f, 2.05f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(173, 99, 38);
	glVertex2f(1.75f, 3.00f);
	glVertex2f(1.05f, 3.00f);
	glVertex2f(1.05f, 3.20f);
	glVertex2f(1.75f, 3.20f);
	glEnd();
//2nd
	glBegin(GL_QUADS);
	glColor3ub(188, 113, 48);
	glVertex2f(2.75f, 1.00f);
	glVertex2f(2.05f, 1.00f);
	glVertex2f(2.05f, 3.20f);
	glVertex2f(2.75f, 3.20f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(162, 93, 34);
	glVertex2f(2.75f, 1.00f);
	glVertex2f(2.05f, 1.00f);
	glVertex2f(2.05f, 2.20f);
	glVertex2f(2.75f, 2.20f);
	glEnd();

	GLfloat x20=2.399f; GLfloat y20=2.20f; GLfloat radius20 =0.35f;
	GLfloat twicePi20 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(162, 93, 34);
		glVertex2f(x20, y20);
		for(i = 0; i <=triangleAmount;i++) {
			glVertex2f(
		            x20 + (radius20 * cos(i *  twicePi20 / triangleAmount)),
			    y20 + (radius20 * sin(i * twicePi20 / triangleAmount))
			);
		}
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(79, 43, 19);
	glVertex2f(2.55f, 1.00f);
	glVertex2f(2.25f, 1.00f);
	glVertex2f(2.25f, 2.05f);
	glVertex2f(2.55f, 2.05f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(173, 99, 38);
	glVertex2f(2.75f, 3.00f);
	glVertex2f(2.05f, 3.00f);
	glVertex2f(2.05f, 3.20f);
	glVertex2f(2.75f, 3.20f);
	glEnd();
//3rd
	glBegin(GL_QUADS);
	glColor3ub(188, 113, 48);
	glVertex2f(3.75f, 1.00f);
	glVertex2f(3.05f, 1.00f);
	glVertex2f(3.05f, 3.20f);
	glVertex2f(3.75f, 3.20f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(162, 93, 34);
	glVertex2f(3.75f, 1.00f);
	glVertex2f(3.05f, 1.00f);
	glVertex2f(3.05f, 2.20f);
	glVertex2f(3.75f, 2.20f);
	glEnd();

	GLfloat x21=3.399f; GLfloat y21=2.20f; GLfloat radius21 =0.35f;
	GLfloat twicePi21 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(162, 93, 34);
		glVertex2f(x21, y21);
		for(i = 0; i <=triangleAmount;i++) {
			glVertex2f(
		            x21 + (radius21 * cos(i *  twicePi21 / triangleAmount)),
			    y21 + (radius21 * sin(i * twicePi21 / triangleAmount))
			);
		}
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(79, 43, 19);
	glVertex2f(3.55f, 1.00f);
	glVertex2f(3.25f, 1.00f);
	glVertex2f(3.25f, 2.05f);
	glVertex2f(3.55f, 2.05f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(173, 99, 38);
	glVertex2f(3.75f, 3.00f);
	glVertex2f(3.05f, 3.00f);
	glVertex2f(3.05f, 3.20f);
	glVertex2f(3.75f, 3.20f);
	glEnd();
//4th
	glBegin(GL_QUADS);
	glColor3ub(188, 113, 48);
	glVertex2f(4.75f, 1.00f);
	glVertex2f(4.05f, 1.00f);
	glVertex2f(4.05f, 3.20f);
	glVertex2f(4.75f, 3.20f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(162, 93, 34);
	glVertex2f(4.75f, 1.00f);
	glVertex2f(4.05f, 1.00f);
	glVertex2f(4.05f, 2.20f);
	glVertex2f(4.75f, 2.20f);
	glEnd();

	GLfloat x22=4.399f; GLfloat y22=2.20f; GLfloat radius22 =0.35f;
	GLfloat twicePi22 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(162, 93, 34);
		glVertex2f(x22, y22);
		for(i = 0; i <=triangleAmount;i++) {
			glVertex2f(
		            x22 + (radius22 * cos(i *  twicePi22 / triangleAmount)),
			    y22 + (radius22 * sin(i * twicePi22 / triangleAmount))
			);
		}
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(79, 43, 19);
	glVertex2f(4.55f, 1.00f);
	glVertex2f(4.25f, 1.00f);
	glVertex2f(4.25f, 2.05f);
	glVertex2f(4.55f, 2.05f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(173, 99, 38);
	glVertex2f(4.75f, 3.00f);
	glVertex2f(4.05f, 3.00f);
	glVertex2f(4.05f, 3.20f);
	glVertex2f(4.75f, 3.20f);
	glEnd();
//5th
	glBegin(GL_QUADS);
	glColor3ub(188, 113, 48);
	glVertex2f(5.75f, 1.00f);
	glVertex2f(5.05f, 1.00f);
	glVertex2f(5.05f, 3.20f);
	glVertex2f(5.75f, 3.20f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(162, 93, 34);
	glVertex2f(5.75f, 1.00f);
	glVertex2f(5.05f, 1.00f);
	glVertex2f(5.05f, 2.20f);
	glVertex2f(5.75f, 2.20f);
	glEnd();

	GLfloat x23=5.399f; GLfloat y23=2.20f; GLfloat radius23 =0.35f;
	GLfloat twicePi23 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(162, 93, 34);
		glVertex2f(x23, y23);
		for(i = 0; i <=triangleAmount;i++) {
			glVertex2f(
		            x23 + (radius23 * cos(i *  twicePi23 / triangleAmount)),
			    y23 + (radius23 * sin(i * twicePi23 / triangleAmount))
			);
		}
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(79, 43, 19);
	glVertex2f(5.55f, 1.00f);
	glVertex2f(5.25f, 1.00f);
	glVertex2f(5.25f, 2.05f);
	glVertex2f(5.55f, 2.05f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(173, 99, 38);
	glVertex2f(5.75f, 3.00f);
	glVertex2f(5.05f, 3.00f);
	glVertex2f(5.05f, 3.20f);
	glVertex2f(5.75f, 3.20f);
	glEnd();


	///2 pillars
	//1st pillar
	GLfloat x1=-8.0f; GLfloat y1=7.10f; GLfloat radius1 =1.0f;

	GLfloat twicePi1 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(188, 118, 46);
		glVertex2f(x1, y1);
		for(i = 0; i <=triangleAmount;i++) {
			glVertex2f(
		            x1 + (radius1 * cos(i *  twicePi1 / triangleAmount)),
			    y1 + (radius1 * sin(i * twicePi1 / triangleAmount))
			);
		}
	glEnd();

	GLfloat xx1=-8.0f; GLfloat yy1=6.90f; GLfloat radiuss1 =1.0f;

	GLfloat twicePii1 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(225, 150, 82);
		glVertex2f(xx1, yy1);
		for(i = 0; i <=triangleAmount;i++) {
			glVertex2f(
		            xx1 + (radiuss1 * cos(i *  twicePii1 / triangleAmount)),
			    yy1 + (radiuss1 * sin(i * twicePii1 / triangleAmount))
			);
		}
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(225, 150, 82);
	glVertex2f(-9.0f, 1.0f);
	glVertex2f(-7.0f, 1.0f);
	glVertex2f(-7.0f, 5.50f);
	glVertex2f(-9.0f, 5.50f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(164, 93, 29);
	glVertex2f(-9.05f, 5.50f);
	glVertex2f(-6.95f, 5.50f);
	glVertex2f(-6.95f, 5.60f);
	glVertex2f(-9.05f, 5.60f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(225, 150, 82);
	glVertex2f(-7.0f, 5.60f);
	glVertex2f(-9.0f, 5.60f);
	glVertex2f(-9.0f, 7.00f);
	glVertex2f(-7.0f, 7.00f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(164, 93, 29);
	glVertex2f(-9.05f, 7.00f);
	glVertex2f(-6.95f, 7.00f);
	glVertex2f(-6.95f, 7.10f);
	glVertex2f(-9.05f, 7.10f);
	glEnd();
    //pillar border
	glBegin(GL_QUADS);
	glColor3ub(188, 118, 46);
	glVertex2f(-9.0f, 1.0f);
	glVertex2f(-7.0f, 1.0f);
	glVertex2f(-7.0f, 1.10f);
	glVertex2f(-9.0f, 1.10f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(188, 118, 46);
	glVertex2f(-9.0f, 1.0f);
	glVertex2f(-8.90f, 1.0f);
	glVertex2f(-8.90f, 5.50f);
	glVertex2f(-9.0f, 5.50f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(188, 118, 46);
	glVertex2f(-9.0f, 5.60f);
	glVertex2f(-8.90f, 5.60f);
	glVertex2f(-8.90f, 7.00f);
	glVertex2f(-9.0f, 7.00f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(188, 118, 46);
	glVertex2f(-7.0f, 1.0f);
	glVertex2f(-7.10f, 1.0f);
	glVertex2f(-7.10f, 5.50f);
	glVertex2f(-7.0f, 5.50f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(188, 118, 46);
	glVertex2f(-7.0f, 5.60f);
	glVertex2f(-7.10f, 5.60f);
	glVertex2f(-7.10f, 7.00f);
	glVertex2f(-7.0f, 7.00f);
	glEnd();

	//windows
	//1st
	GLfloat x27=-7.3f; GLfloat y27=6.40f; GLfloat radius27 =0.09f;
	GLfloat twicePi27 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(102, 75, 30);
		glVertex2f(x27, y27);
		for(i = 0; i <=triangleAmount;i++) {
			glVertex2f(
		            x27 + (radius27 * cos(i *  twicePi27 / triangleAmount)),
			    y27 + (radius27 * sin(i * twicePi27 / triangleAmount))
			);
		}
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(102, 75, 30);
	glVertex2f(-7.40f, 5.700f);
	glVertex2f(-7.2f, 5.700f);
	glVertex2f(-7.2f, 6.40f);
	glVertex2f(-7.40f, 6.40f);
	glEnd();

	//2nd
	GLfloat x28=-8.7f; GLfloat y28=6.40f; GLfloat radius28 =0.09f;
	GLfloat twicePi28 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(102, 75, 30);
		glVertex2f(x28, y28);
		for(i = 0; i <=triangleAmount;i++) {
			glVertex2f(
		            x28 + (radius28 * cos(i *  twicePi28 / triangleAmount)),
			    y28 + (radius28 * sin(i * twicePi28 / triangleAmount))
			);
		}
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(102, 75, 30);
	glVertex2f(-8.80f, 5.700f);
	glVertex2f(-8.6f, 5.700f);
	glVertex2f(-8.6f, 6.40f);
	glVertex2f(-8.80f, 6.40f);
	glEnd();

    //2nd pillar
    GLfloat x2=8.0f; GLfloat y2=7.10f; GLfloat radius2 =1.0f;

	GLfloat twicePi2 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(188, 118, 46);
		glVertex2f(x2, y2);
		for(i = 0; i <=triangleAmount;i++) {
			glVertex2f(
		            x2 + (radius2 * cos(i *  twicePi2 / triangleAmount)),
			    y2 + (radius2 * sin(i * twicePi2 / triangleAmount))
			);
		}
	glEnd();

	GLfloat xx2=8.0f; GLfloat yy2=6.90f; GLfloat radiuss2 =1.0f;

	GLfloat twicePii2 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(225, 150, 82);
		glVertex2f(xx2, yy2);
		for(i = 0; i <=triangleAmount;i++) {
			glVertex2f(
		            xx2 + (radiuss2 * cos(i *  twicePii2 / triangleAmount)),
			    yy2 + (radiuss2 * sin(i * twicePii2 / triangleAmount))
			);
		}
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(225, 150, 82);
	glVertex2f(9.0f, 1.0f);
	glVertex2f(7.0f, 1.0f);
	glVertex2f(7.0f, 5.50f);
	glVertex2f(9.0f, 5.50f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(164, 93, 29);
	glVertex2f(9.05f, 5.50f);
	glVertex2f(6.95f, 5.50f);
	glVertex2f(6.95f, 5.60f);
	glVertex2f(9.05f, 5.60f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(225, 150, 82);
	glVertex2f(7.0f, 5.60f);
	glVertex2f(9.0f, 5.60f);
	glVertex2f(9.0f, 7.00f);
	glVertex2f(7.0f, 7.00f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(164, 93, 29);
	glVertex2f(9.05f, 7.00f);
	glVertex2f(6.95f, 7.00f);
	glVertex2f(6.95f, 7.10f);
	glVertex2f(9.05f, 7.10f);
	glEnd();

	//windows
	//1st
	GLfloat x26=7.3f; GLfloat y26=6.40f; GLfloat radius26 =0.09f;
	GLfloat twicePi26 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(102, 75, 30);
		glVertex2f(x26, y26);
		for(i = 0; i <=triangleAmount;i++) {
			glVertex2f(
		            x26 + (radius26 * cos(i *  twicePi26 / triangleAmount)),
			    y26 + (radius26 * sin(i * twicePi26 / triangleAmount))
			);
		}
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(102, 75, 30);
	glVertex2f(7.40f, 5.700f);
	glVertex2f(7.2f, 5.700f);
	glVertex2f(7.2f, 6.40f);
	glVertex2f(7.40f, 6.40f);
	glEnd();

	//2nd
	GLfloat x25=8.7f; GLfloat y25=6.40f; GLfloat radius25 =0.09f;
	GLfloat twicePi25 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(102, 75, 30);
		glVertex2f(x25, y25);
		for(i = 0; i <=triangleAmount;i++) {
			glVertex2f(
		            x25 + (radius25 * cos(i *  twicePi25 / triangleAmount)),
			    y25 + (radius25 * sin(i * twicePi25 / triangleAmount))
			);
		}
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(102, 75, 30);
	glVertex2f(8.80f, 5.700f);
	glVertex2f(8.6f, 5.700f);
	glVertex2f(8.6f, 6.40f);
	glVertex2f(8.80f, 6.40f);
	glEnd();


	//pillar border
	glBegin(GL_QUADS);
	glColor3ub(188, 118, 46);
	glVertex2f(9.0f, 1.0f);
	glVertex2f(7.0f, 1.0f);
	glVertex2f(7.0f, 1.10f);
	glVertex2f(9.0f, 1.10f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(188, 118, 46);
	glVertex2f(9.0f, 1.0f);
	glVertex2f(8.90f, 1.0f);
	glVertex2f(8.90f, 5.50f);
	glVertex2f(9.0f, 5.50f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(188, 118, 46);
	glVertex2f(9.0f, 5.60f);
	glVertex2f(8.90f, 5.60f);
	glVertex2f(8.90f, 7.00f);
	glVertex2f(9.0f, 7.00f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(188, 118, 46);
	glVertex2f(7.0f, 1.0f);
	glVertex2f(7.10f, 1.0f);
	glVertex2f(7.10f, 5.50f);
	glVertex2f(7.0f, 5.50f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(188, 118, 46);
	glVertex2f(7.0f, 5.60f);
	glVertex2f(7.10f, 5.60f);
	glVertex2f(7.10f, 7.00f);
	glVertex2f(7.0f, 7.00f);
	glEnd();

/// Sixty Dome Mosque end

//bush
    glBegin(GL_QUADS);
	glColor3ub(51, 153, 51);
	glVertex2f(1.05f, 0.00f);
	glVertex2f(5.0f, -10.0f);
	glVertex2f(5.70f, -10.0f);
	glVertex2f(1.750f, 0.00f);
	glEnd();

    glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(1.05f, 0.00f);
	glVertex2f(5.0f, -10.00f);
	glEnd();

	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(1.75f, 0.00f);
	glVertex2f(5.70f, -10.00f);
	glEnd();


    glBegin(GL_QUADS);
	glColor3ub(51, 153, 51);
	glVertex2f(-1.05f, 0.00f);
	glVertex2f(-5.0f, -10.0f);
	glVertex2f(-5.70f, -10.0f);
	glVertex2f(-1.750f, 0.00f);
	glEnd();

	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(-1.05f, 0.00f);
	glVertex2f(-5.0f, -10.00f);
	glEnd();

	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(-1.75f, 0.00f);
	glVertex2f(-5.70f, -10.00f);
	glEnd();

	//trees
	//left
//1st
glBegin(GL_QUADS);
	glColor3ub(118, 92, 72);
	glVertex2f(-6.05f, -5.00f);
	glVertex2f(-6.70f, -5.00f);
	glVertex2f(-6.70f, -8.50f);
	glVertex2f(-6.05f, -8.50f);
	glEnd();

GLfloat treex1=-6.1f; GLfloat treey1=-4.45f; GLfloat treeradius1 =1.00f;
	GLfloat treetwicePi1 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(1, 110, 1);
		glVertex2f(treex1, treey1);
		for(i = 0; i <=triangleAmount;i++) {
			glVertex2f(
		            treex1 + (treeradius1 * cos(i *  treetwicePi1 / triangleAmount)),
			    treey1 + (treeradius1 * sin(i * treetwicePi1 / triangleAmount))
			);
		}
	glEnd();

	GLfloat treex2=-5.3f; GLfloat treey2=-5.85f; GLfloat treeradius2 =1.00f;
	GLfloat treetwicePi2 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(1, 110, 1);
		glVertex2f(treex2, treey2);
		for(i = 0; i <=triangleAmount;i++) {
			glVertex2f(
		            treex2 + (treeradius2 * cos(i *  treetwicePi2 / triangleAmount)),
			    treey2 + (treeradius2 * sin(i * treetwicePi2 / triangleAmount))
			);
		}
	glEnd();

	GLfloat treex3=-7.1f; GLfloat treey3=-5.85f; GLfloat treeradius3 =1.00f;
	GLfloat treetwicePi3 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(1, 110, 1);
		glVertex2f(treex3, treey3);
		for(i = 0; i <=triangleAmount;i++) {
			glVertex2f(
		            treex3 + (treeradius3 * cos(i *  treetwicePi3 / triangleAmount)),
			    treey3 + (treeradius3 * sin(i * treetwicePi3 / triangleAmount))
			);
		}
	glEnd();

//2nd

glBegin(GL_QUADS);
	glColor3ub(118, 92, 72);
	glVertex2f(-4.35f, -1.00f);
	glVertex2f(-5.00f, -1.00f);
	glVertex2f(-5.00f, -4.50f);
	glVertex2f(-4.35f, -4.50f);
	glEnd();

GLfloat treex7=-4.4f; GLfloat treey7=-0.45f; GLfloat treeradius7 =1.00f;
	GLfloat treetwicePi7 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(1, 110, 1);
		glVertex2f(treex7, treey7);
		for(i = 0; i <=triangleAmount;i++) {
			glVertex2f(
		            treex7 + (treeradius7 * cos(i *  treetwicePi7 / triangleAmount)),
			    treey7 + (treeradius7 * sin(i * treetwicePi7 / triangleAmount))
			);
		}
	glEnd();

	GLfloat treex8=-3.6f; GLfloat treey8=-1.85f; GLfloat treeradius8 =1.00f;
	GLfloat treetwicePi8 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(1, 110, 1);
		glVertex2f(treex8, treey8);
		for(i = 0; i <=triangleAmount;i++) {
			glVertex2f(
		            treex8 + (treeradius8 * cos(i *  treetwicePi8 / triangleAmount)),
			    treey8 + (treeradius8 * sin(i * treetwicePi8 / triangleAmount))
			);
		}
	glEnd();

	GLfloat treex9=-5.4f; GLfloat treey9=-1.85f; GLfloat treeradius9 =1.00f;
	GLfloat treetwicePi9 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(1, 110, 1);
		glVertex2f(treex9, treey9);
		for(i = 0; i <=triangleAmount;i++) {
			glVertex2f(
		            treex9 + (treeradius9 * cos(i *  treetwicePi9 / triangleAmount)),
			    treey9 + (treeradius9 * sin(i * treetwicePi9 / triangleAmount))
			);
		}
	glEnd();

//right
//1st

glBegin(GL_QUADS);
	glColor3ub(118, 92, 72);
	glVertex2f(6.05f, -5.00f);
	glVertex2f(6.70f, -5.00f);
	glVertex2f(6.70f, -8.50f);
	glVertex2f(6.05f, -8.50f);
	glEnd();

GLfloat treex4=6.1f; GLfloat treey4=-4.45f; GLfloat treeradius4 =1.00f;
	GLfloat treetwicePi4 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(1, 110, 1);
		glVertex2f(treex4, treey4);
		for(i = 0; i <=triangleAmount;i++) {
			glVertex2f(
		            treex4 + (treeradius4 * cos(i *  treetwicePi4 / triangleAmount)),
			    treey4 + (treeradius4 * sin(i * treetwicePi4 / triangleAmount))
			);
		}
	glEnd();

	GLfloat treex5=5.3f; GLfloat treey5=-5.85f; GLfloat treeradius5 =1.00f;
	GLfloat treetwicePi5 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(1, 110, 1);
		glVertex2f(treex5, treey5);
		for(i = 0; i <=triangleAmount;i++) {
			glVertex2f(
		            treex5 + (treeradius5 * cos(i *  treetwicePi5 / triangleAmount)),
			    treey5 + (treeradius5 * sin(i * treetwicePi5 / triangleAmount))
			);
		}
	glEnd();

	GLfloat treex6=7.1f; GLfloat treey6=-5.85f; GLfloat treeradius6 =1.00f;
	GLfloat treetwicePi6 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(1, 110, 1);
		glVertex2f(treex6, treey6);
		for(i = 0; i <=triangleAmount;i++) {
			glVertex2f(
		            treex6 + (treeradius6 * cos(i *  treetwicePi6 / triangleAmount)),
			    treey6 + (treeradius6 * sin(i * treetwicePi6 / triangleAmount))
			);
		}
	glEnd();

	//2nd

	glBegin(GL_QUADS);
	glColor3ub(118, 92, 72);
	glVertex2f(4.35f, -1.00f);
	glVertex2f(5.00f, -1.00f);
	glVertex2f(5.00f, -4.50f);
	glVertex2f(4.35f, -4.50f);
	glEnd();

GLfloat treex10=4.4f; GLfloat treey10=-0.45f; GLfloat treeradius10 =1.00f;
	GLfloat treetwicePi10 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(1, 110, 1);
		glVertex2f(treex10, treey10);
		for(i = 0; i <=triangleAmount;i++) {
			glVertex2f(
		            treex10 + (treeradius10 * cos(i *  treetwicePi10 / triangleAmount)),
			    treey10 + (treeradius10 * sin(i * treetwicePi10 / triangleAmount))
			);
		}
	glEnd();

	GLfloat treex11=3.6f; GLfloat treey11=-1.85f; GLfloat treeradius11 =1.00f;
	GLfloat treetwicePi11 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(1, 110, 1);
		glVertex2f(treex11, treey11);
		for(i = 0; i <=triangleAmount;i++) {
			glVertex2f(
		            treex11 + (treeradius11 * cos(i *  treetwicePi11 / triangleAmount)),
			    treey11 + (treeradius11 * sin(i * treetwicePi11 / triangleAmount))
			);
		}
	glEnd();

	GLfloat treex12=5.4f; GLfloat treey12=-1.85f; GLfloat treeradius12 =1.00f;
	GLfloat treetwicePi12 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(1, 110, 1);
		glVertex2f(treex12, treey12);
		for(i = 0; i <=triangleAmount;i++) {
			glVertex2f(
		            treex12 + (treeradius12 * cos(i *  treetwicePi12 / triangleAmount)),
			    treey12 + (treeradius12 * sin(i * treetwicePi12 / triangleAmount))
			);
		}
	glEnd();

///lamp post
//right
//1st
glBegin(GL_QUADS);
	glColor3ub(0, 0, 0);
	glVertex2f(5.00f, -10.00f);
	glVertex2f(5.00f, -3.00f);
	glVertex2f(4.80f, -3.00f);
	glVertex2f(4.80f, -10.00f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(0, 0, 0);
	glVertex2f(5.50f, -3.00f);
	glVertex2f(5.50f, -1.00f);
	glVertex2f(4.30f, -1.00f);
	glVertex2f(4.30f, -3.00f);
	glEnd();

	///light
	glBegin(GL_QUADS);
	glColor3ub(255, 195, 36);
	//glColor3ub(179, 179, 179);
	glVertex2f(5.40f, -2.90f);
	glVertex2f(5.40f, -1.10f);
	glVertex2f(4.40f, -1.10f);
	glVertex2f(4.40f, -2.90f);
	glEnd();

	//lines
    glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(5.20f, -2.90f);
	glVertex2f(5.20f, -1.10f);
	glEnd();

	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(4.60f, -2.90f);
	glVertex2f(4.60f, -1.10f);
	glEnd();

	//2nd
    glBegin(GL_QUADS);
	glColor3ub(0, 0, 0);
	glVertex2f(8.20f, 0.00f);
	glVertex2f(8.20f, 3.00f);
	glVertex2f(8.0f, 3.00f);
	glVertex2f(8.0f, 0.00f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(0, 0, 0);
	glVertex2f(7.80f, 3.00f);
	glVertex2f(7.80f, 4.00f);
	glVertex2f(8.40f, 4.00f);
	glVertex2f(8.40f, 3.00f);
	glEnd();

	///light
	glBegin(GL_QUADS);
	glColor3ub(255, 195, 36);
	//glColor3ub(179, 179, 179);
	glVertex2f(7.85f, 3.05f);
	glVertex2f(7.85f, 3.95f);
	glVertex2f(8.35f, 3.95f);
	glVertex2f(8.35f, 3.05f);
	glEnd();

//lines
    glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(7.95f, 3.05f);
	glVertex2f(7.95f, 4.0f);
	glEnd();

	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(8.25f, 4.0f);
	glVertex2f(8.25f, 3.05f);
	glEnd();


	//left
//1st
glBegin(GL_QUADS);
	glColor3ub(0, 0, 0);
	glVertex2f(-5.00f, -10.00f);
	glVertex2f(-5.00f, -3.00f);
	glVertex2f(-4.80f, -3.00f);
	glVertex2f(-4.80f, -10.00f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(0, 0, 0);
	glVertex2f(-5.50f, -3.00f);
	glVertex2f(-5.50f, -1.00f);
	glVertex2f(-4.30f, -1.00f);
	glVertex2f(-4.30f, -3.00f);
	glEnd();

	///light
	glBegin(GL_QUADS);
	glColor3ub(255, 195, 36);
	//glColor3ub(179, 179, 179);
	glVertex2f(-5.40f, -2.90f);
	glVertex2f(-5.40f, -1.10f);
	glVertex2f(-4.40f, -1.10f);
	glVertex2f(-4.40f, -2.90f);
	glEnd();

//lines
    glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(-5.20f, -2.90f);
	glVertex2f(-5.20f, -1.10f);
	glEnd();

	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(-4.60f, -2.90f);
	glVertex2f(-4.60f, -1.10f);
	glEnd();

//2nd
    glBegin(GL_QUADS);
	glColor3ub(0, 0, 0);
	glVertex2f(-8.20f, 0.00f);
	glVertex2f(-8.20f, 3.00f);
	glVertex2f(-8.0f, 3.00f);
	glVertex2f(-8.0f, 0.00f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(0, 0, 0);
	glVertex2f(-7.80f, 3.00f);
	glVertex2f(-7.80f, 4.00f);
	glVertex2f(-8.40f, 4.00f);
	glVertex2f(-8.40f, 3.00f);
	glEnd();

	///light
	glBegin(GL_QUADS);
	glColor3ub(255, 195, 36);
	//glColor3ub(179, 179, 179);
	glVertex2f(-7.85f, 3.05f);
	glVertex2f(-7.85f, 3.95f);
	glVertex2f(-8.35f, 3.95f);
	glVertex2f(-8.35f, 3.05f);
	glEnd();

//lines
    glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(-7.95f, 3.05f);
	glVertex2f(-7.95f, 4.0f);
	glEnd();

	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(-8.25f, 4.0f);
	glVertex2f(-8.25f, 3.05f);
	glEnd();


	///Rain start

    glPushMatrix();
    glTranslatef(position4,position4,0);
    glScalef(1.1,1.1,0);
    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-9.250f, 2.25f);
    glVertex2f(-9.5f, 2.0f);
    glEnd();


    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-8.250f, 2.25f);
    glVertex2f(-8.5f, 2.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-7.250f, 2.25f);
    glVertex2f(-7.5f, 2.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-6.250f, 2.25f);
    glVertex2f(-6.5f, 2.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-5.250f, 2.25f);
    glVertex2f(-5.5f, 2.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-4.250f, 2.25f);
    glVertex2f(-4.5f, 2.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-3.250f, 2.25f);
    glVertex2f(-3.5f, 2.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-2.250f, 2.25f);
    glVertex2f(-2.5f, 2.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-1.250f, 2.25f);
    glVertex2f(-1.5f, 2.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-0.250f, 2.25f);
    glVertex2f(-0.5f,2.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(0.750f, 2.25f);
    glVertex2f(0.5f,2.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(1.750f, 2.25f);
    glVertex2f(1.5f,2.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(2.750f, 2.25f);
    glVertex2f(2.5f,2.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(3.750f, 2.25f);
    glVertex2f(3.5f,2.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(4.750f, 2.25f);
    glVertex2f(4.5f,2.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(5.750f, 2.25f);
    glVertex2f(5.5f,2.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(6.750f, 2.25f);
    glVertex2f(6.5f,2.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(7.750f, 2.25f);
    glVertex2f(7.5f,2.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(8.750f, 2.25f);
    glVertex2f(8.5f,2.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(9.750f, 2.25f);
    glVertex2f(9.5f,2.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(10.750f, 2.25f);
    glVertex2f(10.5f,2.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(11.750f, 2.25f);
    glVertex2f(11.5f,2.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(12.750f, 2.25f);
    glVertex2f(12.5f,2.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(13.750f, 2.25f);
    glVertex2f(13.5f,2.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(14.750f, 2.25f);
    glVertex2f(14.5f,2.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(15.750f, 2.25f);
    glVertex2f(15.5f,2.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(16.750f, 2.25f);
    glVertex2f(16.5f,2.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(17.750f, 2.25f);
    glVertex2f(17.5f,2.0f);
    glEnd();

///2nd line
    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-8.250f, 1.25f);
    glVertex2f(-8.5f, 1.0f);
    glEnd();


    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-7.250f, 1.25f);
    glVertex2f(-7.5f, 1.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-6.250f, 1.25f);
    glVertex2f(-6.5f, 1.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-5.250f, 1.25f);
    glVertex2f(-5.5f, 1.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-4.250f, 1.25f);
    glVertex2f(-4.5f, 1.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-3.250f, 1.25f);
    glVertex2f(-3.5f, 1.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-2.250f, 1.25f);
    glVertex2f(-2.5f, 1.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-1.250f, 1.25f);
    glVertex2f(-1.5f, 1.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-0.250f, 1.25f);
    glVertex2f(-0.5f, 1.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(0.750f, 1.25f);
    glVertex2f(0.5f, 1.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(1.750f, 1.25f);
    glVertex2f(1.5f, 1.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(2.750f, 1.25f);
    glVertex2f(2.5f, 1.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(3.750f, 1.25f);
    glVertex2f(3.5f, 1.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(4.750f, 1.25f);
    glVertex2f(4.5f, 1.0f);
    glEnd();


    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(5.750f, 1.25f);
    glVertex2f(5.5f, 1.0f);
    glEnd();


    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(6.750f, 1.25f);
    glVertex2f(6.5f, 1.0f);
    glEnd();


    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(7.750f, 1.25f);
    glVertex2f(7.5f, 1.0f);
    glEnd();


    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(8.750f, 1.25f);
    glVertex2f(8.5f, 1.0f);
    glEnd();


    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(9.750f, 1.25f);
    glVertex2f(9.5f, 1.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(10.750f, 1.25f);
    glVertex2f(10.5f, 1.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(11.750f, 1.25f);
    glVertex2f(11.5f, 1.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(12.750f, 1.25f);
    glVertex2f(12.5f, 1.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(13.750f, 1.25f);
    glVertex2f(13.5f, 1.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(14.750f, 1.25f);
    glVertex2f(14.5f, 1.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(15.750f, 1.25f);
    glVertex2f(15.5f, 1.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(16.750f, 1.25f);
    glVertex2f(16.5f, 1.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(17.750f, 1.25f);
    glVertex2f(17.5f, 1.0f);
    glEnd();

///line 2 end

///line 3 start
glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(17.750f, 3.25f);
    glVertex2f(17.5f, 3.0f);
    glEnd();

glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(16.750f, 3.25f);
    glVertex2f(16.5f, 3.0f);
    glEnd();

glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(15.750f, 3.25f);
    glVertex2f(15.5f, 3.0f);
    glEnd();

glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(14.750f, 3.25f);
    glVertex2f(14.5f, 3.0f);
    glEnd();

glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(13.750f, 3.25f);
    glVertex2f(13.5f, 3.0f);
    glEnd();

glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(12.750f, 3.25f);
    glVertex2f(12.5f, 3.0f);
    glEnd();

glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(11.750f, 3.25f);
    glVertex2f(11.5f, 3.0f);
    glEnd();

glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(10.750f, 3.25f);
    glVertex2f(10.5f, 3.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(9.750f, 3.25f);
    glVertex2f(9.5f, 3.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(8.750f, 3.25f);
    glVertex2f(8.5f, 3.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(7.750f, 3.25f);
    glVertex2f(7.5f, 3.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(6.750f, 3.25f);
    glVertex2f(6.5f, 3.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(5.750f, 3.25f);
    glVertex2f(5.5f, 3.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(4.750f, 3.25f);
    glVertex2f(4.5f, 3.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(3.750f, 3.25f);
    glVertex2f(3.5f, 3.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(2.750f, 3.25f);
    glVertex2f(2.5f, 3.0f);
    glEnd();


    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(1.750f, 3.25f);
    glVertex2f(1.5f, 3.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(0.750f, 3.25f);
    glVertex2f(0.5f, 3.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-0.25f, 3.25f);
    glVertex2f(-0.5f, 3.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-1.25f, 3.25f);
    glVertex2f(-1.5f, 3.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-2.25f, 3.25f);
    glVertex2f(-2.5f, 3.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-3.25f, 3.25f);
    glVertex2f(-3.5f, 3.0f);
    glEnd();



    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-4.25f, 3.25f);
    glVertex2f(-4.5f, 3.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-5.25f, 3.25f);
    glVertex2f(-5.5f, 3.0f);
    glEnd();



    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-6.25f, 3.25f);
    glVertex2f(-6.5f, 3.0f);
    glEnd();


glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-7.25f, 3.25f);
    glVertex2f(-7.5f, 3.0f);
    glEnd();


glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-8.25f, 3.25f);
    glVertex2f(-8.5f, 3.0f);
    glEnd();


glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-9.25f, 3.25f);
    glVertex2f(-9.5f, 3.0f);
    glEnd();
///4th

glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-9.25f, 4.25f);
    glVertex2f(-9.5f, 4.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-9.25f, 4.25f);
    glVertex2f(-9.5f, 4.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-8.25f, 4.25f);
    glVertex2f(-8.5f, 4.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-7.25f, 4.25f);
    glVertex2f(-7.5f, 4.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-6.25f, 4.25f);
    glVertex2f(-6.5f, 4.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-5.25f, 4.25f);
    glVertex2f(-5.5f, 4.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-4.25f, 4.25f);
    glVertex2f(-4.5f, 4.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-3.25f, 4.25f);
    glVertex2f(-3.5f, 4.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-2.25f, 4.25f);
    glVertex2f(-2.5f, 4.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-1.25f, 4.25f);
    glVertex2f(-1.5f, 4.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-0.25f, 4.25f);
    glVertex2f(-0.5f, 4.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(0.75f, 4.25f);
    glVertex2f(0.5f, 4.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(1.75f, 4.25f);
    glVertex2f(1.5f, 4.0f);
    glEnd();
    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(2.75f, 4.25f);
    glVertex2f(2.5f, 4.0f);
    glEnd();
    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(3.75f, 4.25f);
    glVertex2f(3.5f, 4.0f);
    glEnd();
    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(4.75f, 4.25f);
    glVertex2f(4.5f, 4.0f);
    glEnd();
    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(5.75f, 4.25f);
    glVertex2f(5.5f, 4.0f);
    glEnd();
    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(6.75f, 4.25f);
    glVertex2f(6.5f, 4.0f);
    glEnd();
    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(7.75f, 4.25f);
    glVertex2f(7.5f, 4.0f);
    glEnd();
    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(8.75f, 4.25f);
    glVertex2f(8.5f, 4.0f);
    glEnd();
    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(9.75f, 4.25f);
    glVertex2f(9.5f, 4.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(10.75f, 4.25f);
    glVertex2f(10.5f, 4.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(11.75f, 4.25f);
    glVertex2f(11.5f, 4.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(12.75f, 4.25f);
    glVertex2f(12.5f, 4.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(13.75f, 4.25f);
    glVertex2f(13.5f, 4.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(14.75f, 4.25f);
    glVertex2f(14.5f, 4.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(15.75f, 4.25f);
    glVertex2f(15.5f, 4.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(16.75f, 4.25f);
    glVertex2f(16.5f, 4.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(17.75f, 4.25f);
    glVertex2f(17.5f, 4.0f);
    glEnd();

    ///555
    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(17.75f, 5.25f);
    glVertex2f(17.5f, 5.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(16.75f, 5.25f);
    glVertex2f(16.5f, 5.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(15.75f, 5.25f);
    glVertex2f(15.5f, 5.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(14.75f, 5.25f);
    glVertex2f(14.5f, 5.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(13.75f, 5.25f);
    glVertex2f(13.5f, 5.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(12.75f, 5.25f);
    glVertex2f(12.5f, 5.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(11.75f, 5.25f);
    glVertex2f(11.5f, 5.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(10.75f, 5.25f);
    glVertex2f(10.5f, 5.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(9.75f, 5.25f);
    glVertex2f(9.5f, 5.0f);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(8.75f, 5.25f);
    glVertex2f(8.5f, 5.0f);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(7.75f, 5.25f);
    glVertex2f(7.5f, 5.0f);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(6.75f, 5.25f);
    glVertex2f(6.5f, 5.0f);
    glEnd();
     glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(5.75f, 5.25f);
    glVertex2f(5.5f, 5.0f);
    glEnd();
     glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(4.75f, 5.25f);
    glVertex2f(4.5f, 5.0f);
    glEnd();
     glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(3.75f, 5.25f);
    glVertex2f(3.5f, 5.0f);
    glEnd();
     glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(2.75f, 5.25f);
    glVertex2f(2.5f, 5.0f);
    glEnd();
     glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(1.75f, 5.25f);
    glVertex2f(1.5f, 5.0f);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(0.75f, 5.25f);
    glVertex2f(0.5f, 5.0f);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-0.25f, 5.25f);
    glVertex2f(-0.5f, 5.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-1.25f, 5.25f);
    glVertex2f(-1.5f, 5.0f);
    glEnd();
glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-2.25f, 5.25f);
    glVertex2f(-2.5f, 5.0f);
    glEnd();
glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-3.25f, 5.25f);
    glVertex2f(-3.5f, 5.0f);
    glEnd();
glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-9.25f, 5.25f);
    glVertex2f(-9.5f, 5.0f);
    glEnd();
glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-4.25f, 5.25f);
    glVertex2f(-4.5f, 5.0f);
    glEnd();
glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-5.25f, 5.25f);
    glVertex2f(-5.5f, 5.0f);
    glEnd();
glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-6.25f, 5.25f);
    glVertex2f(-6.5f, 5.0f);
    glEnd();
glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-7.25f, 5.25f);
    glVertex2f(-7.5f, 5.0f);
    glEnd();
glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-8.25f, 5.25f);
    glVertex2f(-8.5f, 5.0f);
    glEnd();
///666

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-8.25f, 6.25f);
    glVertex2f(-8.5f, 6.0f);
    glEnd();


    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-7.25f, 6.25f);
    glVertex2f(-7.5f, 6.0f);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-6.25f, 6.25f);
    glVertex2f(-6.5f, 6.0f);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-5.25f, 6.25f);
    glVertex2f(-5.5f, 6.0f);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-4.25f, 6.25f);
    glVertex2f(-4.5f, 6.0f);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-3.25f, 6.25f);
    glVertex2f(-3.5f, 6.0f);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-2.25f, 6.25f);
    glVertex2f(-2.5f, 6.0f);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-1.25f, 6.25f);
    glVertex2f(-1.5f, 6.0f);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-0.25f, 6.25f);
    glVertex2f(-0.5f, 6.0f);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-9.25f, 6.25f);
    glVertex2f(-9.5f, 6.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(0.75f, 6.25f);
    glVertex2f(0.5f, 6.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(1.75f, 6.25f);
    glVertex2f(1.5f, 6.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(2.75f, 6.25f);
    glVertex2f(2.5f, 6.0f);
    glEnd();
    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(0.75f, 6.25f);
    glVertex2f(0.5f, 6.0f);
    glEnd();
    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(3.75f, 6.25f);
    glVertex2f(3.5f, 6.0f);
    glEnd();
    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(4.75f, 6.25f);
    glVertex2f(4.5f, 6.0f);
    glEnd();
    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(5.75f, 6.25f);
    glVertex2f(5.5f, 6.0f);
    glEnd();
    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(6.75f, 6.25f);
    glVertex2f(6.5f, 6.0f);
    glEnd();
    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(07.75f, 6.25f);
    glVertex2f(07.5f, 6.0f);
    glEnd();
    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(08.75f, 6.25f);
    glVertex2f(08.5f, 6.0f);
    glEnd();
glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(09.75f, 6.25f);
    glVertex2f(09.5f, 6.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(10.75f, 6.25f);
    glVertex2f(10.5f, 6.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(11.75f, 6.25f);
    glVertex2f(11.5f, 6.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(12.75f, 6.25f);
    glVertex2f(12.5f, 6.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(13.75f, 6.25f);
    glVertex2f(13.5f, 6.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(14.75f, 6.25f);
    glVertex2f(14.5f, 6.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(15.75f, 6.25f);
    glVertex2f(15.5f, 6.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(16.75f, 6.25f);
    glVertex2f(16.5f, 6.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(17.75f, 6.25f);
    glVertex2f(17.5f, 6.0f);
    glEnd();

    ///777

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-8.25f, 7.25f);
    glVertex2f(-8.5f, 7.0f);
    glEnd();


    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-7.25f, 7.25f);
    glVertex2f(-7.5f, 7.0f);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-6.25f, 7.25f);
    glVertex2f(-6.5f, 7.0f);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-5.25f, 7.25f);
    glVertex2f(-5.5f, 7.0f);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-4.25f, 7.25f);
    glVertex2f(-4.5f, 7.0f);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-3.25f, 7.25f);
    glVertex2f(-3.5f, 7.0f);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-2.25f, 7.25f);
    glVertex2f(-2.5f, 7.0f);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-1.25f, 7.25f);
    glVertex2f(-1.5f, 7.0f);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-0.25f, 7.25f);
    glVertex2f(-0.5f, 7.0f);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-9.25f, 7.25f);
    glVertex2f(-9.5f, 7.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(0.75f, 7.25f);
    glVertex2f(0.5f, 7.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(1.75f, 7.25f);
    glVertex2f(1.5f, 7.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(2.75f, 7.25f);
    glVertex2f(2.5f, 7.0f);
    glEnd();
    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(0.75f, 7.25f);
    glVertex2f(0.5f, 7.0f);
    glEnd();
    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(3.75f, 7.25f);
    glVertex2f(3.5f, 7.0f);
    glEnd();
    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(4.75f, 7.25f);
    glVertex2f(4.5f, 7.0f);
    glEnd();
    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(5.75f, 7.25f);
    glVertex2f(5.5f, 7.0f);
    glEnd();
    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(6.75f, 7.25f);
    glVertex2f(6.5f, 7.0f);
    glEnd();
    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(07.75f,7.25f);
    glVertex2f(07.5f, 7.0f);
    glEnd();
    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(08.75f, 7.25f);
    glVertex2f(08.5f, 7.0f);
    glEnd();
glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(09.75f, 7.25f);
    glVertex2f(09.5f, 7.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(10.75f, 7.25f);
    glVertex2f(10.5f, 7.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(11.75f, 7.25f);
    glVertex2f(11.5f, 7.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(12.75f, 7.25f);
    glVertex2f(12.5f, 7.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(13.75f, 7.25f);
    glVertex2f(13.5f, 7.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(14.75f, 7.25f);
    glVertex2f(14.5f, 7.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(15.75f, 7.25f);
    glVertex2f(15.5f, 7.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(16.75f, 7.25f);
    glVertex2f(16.5f, 7.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(17.75f, 7.25f);
    glVertex2f(17.5f, 7.0f);
    glEnd();

    ///888

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-8.25f, 8.25f);
    glVertex2f(-8.5f, 8.0f);
    glEnd();


    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-7.25f, 8.25f);
    glVertex2f(-7.5f, 8.0f);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-6.25f, 8.25f);
    glVertex2f(-6.5f, 8.0f);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-5.25f, 8.25f);
    glVertex2f(-5.5f, 8.0f);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-4.25f, 8.25f);
    glVertex2f(-4.5f, 8.0f);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-3.25f, 8.25f);
    glVertex2f(-3.5f, 8.0f);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-2.25f, 8.25f);
    glVertex2f(-2.5f, 8.0f);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-1.25f, 8.25f);
    glVertex2f(-1.5f, 8.0f);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-0.25f, 8.25f);
    glVertex2f(-0.5f, 8.0f);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-9.25f, 8.25f);
    glVertex2f(-9.5f, 8.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(0.75f, 8.25f);
    glVertex2f(0.5f, 8.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(1.75f, 8.25f);
    glVertex2f(1.5f, 8.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(2.75f, 8.25f);
    glVertex2f(2.5f, 8.0f);
    glEnd();
    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(0.75f, 8.25f);
    glVertex2f(0.5f, 8.0f);
    glEnd();
    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(3.75f, 8.25f);
    glVertex2f(3.5f, 8.0f);
    glEnd();
    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(4.75f, 8.25f);
    glVertex2f(4.5f, 8.0f);
    glEnd();
    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(5.75f, 8.25f);
    glVertex2f(5.5f, 8.0f);
    glEnd();
    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(6.75f, 8.25f);
    glVertex2f(6.5f, 8.0f);
    glEnd();
    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(07.75f, 8.25f);
    glVertex2f(07.5f, 8.0f);
    glEnd();
    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(08.75f, 8.25f);
    glVertex2f(08.5f, 8.0f);
    glEnd();
glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(09.75f, 8.25f);
    glVertex2f(09.5f, 8.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(10.75f, 8.25f);
    glVertex2f(10.5f, 8.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(11.75f, 8.25f);
    glVertex2f(11.5f, 8.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(12.75f, 8.25f);
    glVertex2f(12.5f, 8.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(13.75f, 8.25f);
    glVertex2f(13.5f, 8.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(14.75f, 8.25f);
    glVertex2f(14.5f, 8.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(15.75f, 8.25f);
    glVertex2f(15.5f, 8.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(16.75f, 8.25f);
    glVertex2f(16.5f, 8.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(17.75f, 8.25f);
    glVertex2f(17.5f, 8.0f);
    glEnd();


    ///999

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-8.25f, 9.25f);
    glVertex2f(-8.5f, 9.0f);
    glEnd();


    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-7.25f, 9.25f);
    glVertex2f(-7.5f, 9.0f);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-6.25f, 9.25f);
    glVertex2f(-6.5f, 9.0f);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-5.25f, 9.25f);
    glVertex2f(-5.5f, 9.0f);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-4.25f, 9.25f);
    glVertex2f(-4.5f, 9.0f);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-3.25f, 9.25f);
    glVertex2f(-3.5f, 9.0f);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-2.25f, 9.25f);
    glVertex2f(-2.5f, 9.0f);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-1.25f, 9.25f);
    glVertex2f(-1.5f, 9.0f);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-0.25f, 9.25f);
    glVertex2f(-0.5f, 9.0f);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-9.25f, 9.25f);
    glVertex2f(-9.5f, 9.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(0.75f, 9.25f);
    glVertex2f(0.5f, 9.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(1.75f, 9.25f);
    glVertex2f(1.5f, 9.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(2.75f, 9.25f);
    glVertex2f(2.5f, 9.0f);
    glEnd();
    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(0.75f, 9.25f);
    glVertex2f(0.5f, 9.0f);
    glEnd();
    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(3.75f, 9.25f);
    glVertex2f(3.5f, 9.0f);
    glEnd();
    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(4.75f, 9.25f);
    glVertex2f(4.5f, 9.0f);
    glEnd();
    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(5.75f, 9.25f);
    glVertex2f(5.5f, 9.0f);
    glEnd();
    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(6.75f, 9.25f);
    glVertex2f(6.5f, 9.0f);
    glEnd();
    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(07.75f, 9.25f);
    glVertex2f(07.5f, 9.0f);
    glEnd();
    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(08.75f, 9.25f);
    glVertex2f(08.5f, 9.0f);
    glEnd();
glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(09.75f, 9.25f);
    glVertex2f(09.5f, 9.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(10.75f, 9.25f);
    glVertex2f(10.5f, 9.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(11.75f, 9.25f);
    glVertex2f(11.5f, 9.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(12.75f, 9.25f);
    glVertex2f(12.5f, 9.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(13.75f, 9.25f);
    glVertex2f(13.5f, 9.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(14.75f, 9.25f);
    glVertex2f(14.5f, 9.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(15.75f, 9.25f);
    glVertex2f(15.5f, 9.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(16.75f, 9.25f);
    glVertex2f(16.5f, 9.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(17.75f, 9.25f);
    glVertex2f(17.5f, 9.0f);
    glEnd();

    ///10

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-8.25f, 10.25f);
    glVertex2f(-8.5f, 10.0f);
    glEnd();


    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-7.25f, 10.25f);
    glVertex2f(-7.5f, 10.0f);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-6.25f, 10.25f);
    glVertex2f(-6.5f, 10.0f);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-5.25f, 10.25f);
    glVertex2f(-5.5f, 10.0f);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-4.25f, 10.25f);
    glVertex2f(-4.5f, 10.0f);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-3.25f, 10.25f);
    glVertex2f(-3.5f, 10.0f);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-2.25f, 10.25f);
    glVertex2f(-2.5f, 10.0f);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-1.25f, 10.25f);
    glVertex2f(-1.5f, 10.0f);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-0.25f, 10.25f);
    glVertex2f(-0.5f, 10.0f);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-9.25f, 10.25f);
    glVertex2f(-9.5f, 10.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(0.75f, 10.25f);
    glVertex2f(0.5f, 10.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(1.75f, 10.25f);
    glVertex2f(1.5f, 10.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(2.75f, 10.25f);
    glVertex2f(2.5f, 10.0f);
    glEnd();
    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(0.75f, 10.25f);
    glVertex2f(0.5f, 10.0f);
    glEnd();
    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(3.75f, 10.25f);
    glVertex2f(3.5f, 10.0f);
    glEnd();
    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(4.75f, 10.25f);
    glVertex2f(4.5f, 10.0f);
    glEnd();
    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(5.75f, 10.25f);
    glVertex2f(5.5f, 10.0f);
    glEnd();
    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(6.75f, 10.25f);
    glVertex2f(6.5f, 10.0f);
    glEnd();
    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(07.75f, 10.25f);
    glVertex2f(07.5f, 10.0f);
    glEnd();
    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(08.75f, 10.25f);
    glVertex2f(08.5f, 10.0f);
    glEnd();
glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(09.75f, 10.25f);
    glVertex2f(09.5f, 10.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(10.75f, 10.25f);
    glVertex2f(10.5f, 10.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(11.75f, 10.25f);
    glVertex2f(11.5f, 10.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(12.75f, 10.25f);
    glVertex2f(12.5f, 10.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(13.75f, 10.25f);
    glVertex2f(13.5f, 10.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(14.75f, 10.25f);
    glVertex2f(14.5f, 10.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(15.75f, 10.25f);
    glVertex2f(15.5f, 10.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(16.75f, 10.25f);
    glVertex2f(16.5f, 10.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(17.75f, 10.25f);
    glVertex2f(17.5f, 10.0f);
    glEnd();

    ///11

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-8.25f, 11.25f);
    glVertex2f(-8.5f, 11.0f);
    glEnd();


    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-7.25f, 11.25f);
    glVertex2f(-7.5f, 11.0f);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-6.25f, 11.25f);
    glVertex2f(-6.5f, 11.0f);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-5.25f, 11.25f);
    glVertex2f(-5.5f, 11.0f);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-4.25f, 11.25f);
    glVertex2f(-4.5f, 11.0f);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-3.25f, 11.25f);
    glVertex2f(-3.5f, 11.0f);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-2.25f, 11.25f);
    glVertex2f(-2.5f, 11.0f);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-1.25f, 11.25f);
    glVertex2f(-1.5f, 11.0f);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-0.25f, 11.25f);
    glVertex2f(-0.5f, 11.0f);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-9.25f, 11.25f);
    glVertex2f(-9.5f, 11.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(0.75f, 11.25f);
    glVertex2f(0.5f, 11.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(1.75f, 11.25f);
    glVertex2f(1.5f, 11.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(2.75f, 11.25f);
    glVertex2f(2.5f, 11.0f);
    glEnd();
    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(0.75f, 11.25f);
    glVertex2f(0.5f,11.0f);
    glEnd();
    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(3.75f, 11.25f);
    glVertex2f(3.5f, 11.0f);
    glEnd();
    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(4.75f, 11.25f);
    glVertex2f(4.5f, 11.0f);
    glEnd();
    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(5.75f, 11.25f);
    glVertex2f(5.5f, 11.0f);
    glEnd();
    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(6.75f, 11.25f);
    glVertex2f(6.5f, 11.0f);
    glEnd();
    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(07.75f, 11.25f);
    glVertex2f(07.5f, 11.0f);
    glEnd();
    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(08.75f, 11.25f);
    glVertex2f(08.5f, 11.0f);
    glEnd();
glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(09.75f, 11.25f);
    glVertex2f(09.5f, 11.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(10.75f, 11.25f);
    glVertex2f(10.5f, 11.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(11.75f, 11.25f);
    glVertex2f(11.5f, 11.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(12.75f, 11.25f);
    glVertex2f(12.5f, 11.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(13.75f, 11.25f);
    glVertex2f(13.5f, 11.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(14.75f, 11.25f);
    glVertex2f(14.5f, 11.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(15.75f, 11.25f);
    glVertex2f(15.5f, 11.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(16.75f, 11.25f);
    glVertex2f(16.5f, 11.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(17.75f, 11.25f);
    glVertex2f(17.5f, 11.0f);
    glEnd();






    /// rain second row

    glTranslatef(0,-10.0,0);
        glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-9.250f, 2.25f);
    glVertex2f(-9.5f, 2.0f);
    glEnd();


    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-8.250f, 2.25f);
    glVertex2f(-8.5f, 2.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-7.250f, 2.25f);
    glVertex2f(-7.5f, 2.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-6.250f, 2.25f);
    glVertex2f(-6.5f, 2.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-5.250f, 2.25f);
    glVertex2f(-5.5f, 2.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-4.250f, 2.25f);
    glVertex2f(-4.5f, 2.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-3.250f, 2.25f);
    glVertex2f(-3.5f, 2.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-2.250f, 2.25f);
    glVertex2f(-2.5f, 2.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-1.250f, 2.25f);
    glVertex2f(-1.5f, 2.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-0.250f, 2.25f);
    glVertex2f(-0.5f,2.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(0.750f, 2.25f);
    glVertex2f(0.5f,2.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(1.750f, 2.25f);
    glVertex2f(1.5f,2.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(2.750f, 2.25f);
    glVertex2f(2.5f,2.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(3.750f, 2.25f);
    glVertex2f(3.5f,2.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(4.750f, 2.25f);
    glVertex2f(4.5f,2.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(5.750f, 2.25f);
    glVertex2f(5.5f,2.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(6.750f, 2.25f);
    glVertex2f(6.5f,2.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(7.750f, 2.25f);
    glVertex2f(7.5f,2.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(8.750f, 2.25f);
    glVertex2f(8.5f,2.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(9.750f, 2.25f);
    glVertex2f(9.5f,2.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(10.750f, 2.25f);
    glVertex2f(10.5f,2.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(11.750f, 2.25f);
    glVertex2f(11.5f,2.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(12.750f, 2.25f);
    glVertex2f(12.5f,2.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(13.750f, 2.25f);
    glVertex2f(13.5f,2.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(14.750f, 2.25f);
    glVertex2f(14.5f,2.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(15.750f, 2.25f);
    glVertex2f(15.5f,2.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(16.750f, 2.25f);
    glVertex2f(16.5f,2.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(17.750f, 2.25f);
    glVertex2f(17.5f,2.0f);
    glEnd();

///2nd line
    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-8.250f, 1.25f);
    glVertex2f(-8.5f, 1.0f);
    glEnd();


    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-7.250f, 1.25f);
    glVertex2f(-7.5f, 1.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-6.250f, 1.25f);
    glVertex2f(-6.5f, 1.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-5.250f, 1.25f);
    glVertex2f(-5.5f, 1.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-4.250f, 1.25f);
    glVertex2f(-4.5f, 1.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-3.250f, 1.25f);
    glVertex2f(-3.5f, 1.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-2.250f, 1.25f);
    glVertex2f(-2.5f, 1.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-1.250f, 1.25f);
    glVertex2f(-1.5f, 1.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-0.250f, 1.25f);
    glVertex2f(-0.5f, 1.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(0.750f, 1.25f);
    glVertex2f(0.5f, 1.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(1.750f, 1.25f);
    glVertex2f(1.5f, 1.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(2.750f, 1.25f);
    glVertex2f(2.5f, 1.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(3.750f, 1.25f);
    glVertex2f(3.5f, 1.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(4.750f, 1.25f);
    glVertex2f(4.5f, 1.0f);
    glEnd();


    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(5.750f, 1.25f);
    glVertex2f(5.5f, 1.0f);
    glEnd();


    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(6.750f, 1.25f);
    glVertex2f(6.5f, 1.0f);
    glEnd();


    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(7.750f, 1.25f);
    glVertex2f(7.5f, 1.0f);
    glEnd();


    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(8.750f, 1.25f);
    glVertex2f(8.5f, 1.0f);
    glEnd();


    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(9.750f, 1.25f);
    glVertex2f(9.5f, 1.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(10.750f, 1.25f);
    glVertex2f(10.5f, 1.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(11.750f, 1.25f);
    glVertex2f(11.5f, 1.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(12.750f, 1.25f);
    glVertex2f(12.5f, 1.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(13.750f, 1.25f);
    glVertex2f(13.5f, 1.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(14.750f, 1.25f);
    glVertex2f(14.5f, 1.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(15.750f, 1.25f);
    glVertex2f(15.5f, 1.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(16.750f, 1.25f);
    glVertex2f(16.5f, 1.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(17.750f, 1.25f);
    glVertex2f(17.5f, 1.0f);
    glEnd();

///line 2 end

///line 3 start
glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(17.750f, 3.25f);
    glVertex2f(17.5f, 3.0f);
    glEnd();

glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(16.750f, 3.25f);
    glVertex2f(16.5f, 3.0f);
    glEnd();

glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(15.750f, 3.25f);
    glVertex2f(15.5f, 3.0f);
    glEnd();

glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(14.750f, 3.25f);
    glVertex2f(14.5f, 3.0f);
    glEnd();

glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(13.750f, 3.25f);
    glVertex2f(13.5f, 3.0f);
    glEnd();

glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(12.750f, 3.25f);
    glVertex2f(12.5f, 3.0f);
    glEnd();

glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(11.750f, 3.25f);
    glVertex2f(11.5f, 3.0f);
    glEnd();

glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(10.750f, 3.25f);
    glVertex2f(10.5f, 3.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(9.750f, 3.25f);
    glVertex2f(9.5f, 3.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(8.750f, 3.25f);
    glVertex2f(8.5f, 3.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(7.750f, 3.25f);
    glVertex2f(7.5f, 3.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(6.750f, 3.25f);
    glVertex2f(6.5f, 3.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(5.750f, 3.25f);
    glVertex2f(5.5f, 3.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(4.750f, 3.25f);
    glVertex2f(4.5f, 3.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(3.750f, 3.25f);
    glVertex2f(3.5f, 3.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(2.750f, 3.25f);
    glVertex2f(2.5f, 3.0f);
    glEnd();


    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(1.750f, 3.25f);
    glVertex2f(1.5f, 3.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(0.750f, 3.25f);
    glVertex2f(0.5f, 3.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-0.25f, 3.25f);
    glVertex2f(-0.5f, 3.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-1.25f, 3.25f);
    glVertex2f(-1.5f, 3.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-2.25f, 3.25f);
    glVertex2f(-2.5f, 3.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-3.25f, 3.25f);
    glVertex2f(-3.5f, 3.0f);
    glEnd();



    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-4.25f, 3.25f);
    glVertex2f(-4.5f, 3.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-5.25f, 3.25f);
    glVertex2f(-5.5f, 3.0f);
    glEnd();



    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-6.25f, 3.25f);
    glVertex2f(-6.5f, 3.0f);
    glEnd();


glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-7.25f, 3.25f);
    glVertex2f(-7.5f, 3.0f);
    glEnd();


glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-8.25f, 3.25f);
    glVertex2f(-8.5f, 3.0f);
    glEnd();


glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-9.25f, 3.25f);
    glVertex2f(-9.5f, 3.0f);
    glEnd();
///4th

glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-9.25f, 4.25f);
    glVertex2f(-9.5f, 4.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-9.25f, 4.25f);
    glVertex2f(-9.5f, 4.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-8.25f, 4.25f);
    glVertex2f(-8.5f, 4.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-7.25f, 4.25f);
    glVertex2f(-7.5f, 4.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-6.25f, 4.25f);
    glVertex2f(-6.5f, 4.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-5.25f, 4.25f);
    glVertex2f(-5.5f, 4.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-4.25f, 4.25f);
    glVertex2f(-4.5f, 4.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-3.25f, 4.25f);
    glVertex2f(-3.5f, 4.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-2.25f, 4.25f);
    glVertex2f(-2.5f, 4.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-1.25f, 4.25f);
    glVertex2f(-1.5f, 4.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-0.25f, 4.25f);
    glVertex2f(-0.5f, 4.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(0.75f, 4.25f);
    glVertex2f(0.5f, 4.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(1.75f, 4.25f);
    glVertex2f(1.5f, 4.0f);
    glEnd();
    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(2.75f, 4.25f);
    glVertex2f(2.5f, 4.0f);
    glEnd();
    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(3.75f, 4.25f);
    glVertex2f(3.5f, 4.0f);
    glEnd();
    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(4.75f, 4.25f);
    glVertex2f(4.5f, 4.0f);
    glEnd();
    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(5.75f, 4.25f);
    glVertex2f(5.5f, 4.0f);
    glEnd();
    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(6.75f, 4.25f);
    glVertex2f(6.5f, 4.0f);
    glEnd();
    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(7.75f, 4.25f);
    glVertex2f(7.5f, 4.0f);
    glEnd();
    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(8.75f, 4.25f);
    glVertex2f(8.5f, 4.0f);
    glEnd();
    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(9.75f, 4.25f);
    glVertex2f(9.5f, 4.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(10.75f, 4.25f);
    glVertex2f(10.5f, 4.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(11.75f, 4.25f);
    glVertex2f(11.5f, 4.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(12.75f, 4.25f);
    glVertex2f(12.5f, 4.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(13.75f, 4.25f);
    glVertex2f(13.5f, 4.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(14.75f, 4.25f);
    glVertex2f(14.5f, 4.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(15.75f, 4.25f);
    glVertex2f(15.5f, 4.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(16.75f, 4.25f);
    glVertex2f(16.5f, 4.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(17.75f, 4.25f);
    glVertex2f(17.5f, 4.0f);
    glEnd();

    ///555
    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(17.75f, 5.25f);
    glVertex2f(17.5f, 5.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(16.75f, 5.25f);
    glVertex2f(16.5f, 5.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(15.75f, 5.25f);
    glVertex2f(15.5f, 5.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(14.75f, 5.25f);
    glVertex2f(14.5f, 5.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(13.75f, 5.25f);
    glVertex2f(13.5f, 5.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(12.75f, 5.25f);
    glVertex2f(12.5f, 5.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(11.75f, 5.25f);
    glVertex2f(11.5f, 5.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(10.75f, 5.25f);
    glVertex2f(10.5f, 5.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(9.75f, 5.25f);
    glVertex2f(9.5f, 5.0f);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(8.75f, 5.25f);
    glVertex2f(8.5f, 5.0f);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(7.75f, 5.25f);
    glVertex2f(7.5f, 5.0f);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(6.75f, 5.25f);
    glVertex2f(6.5f, 5.0f);
    glEnd();
     glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(5.75f, 5.25f);
    glVertex2f(5.5f, 5.0f);
    glEnd();
     glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(4.75f, 5.25f);
    glVertex2f(4.5f, 5.0f);
    glEnd();
     glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(3.75f, 5.25f);
    glVertex2f(3.5f, 5.0f);
    glEnd();
     glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(2.75f, 5.25f);
    glVertex2f(2.5f, 5.0f);
    glEnd();
     glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(1.75f, 5.25f);
    glVertex2f(1.5f, 5.0f);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(0.75f, 5.25f);
    glVertex2f(0.5f, 5.0f);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-0.25f, 5.25f);
    glVertex2f(-0.5f, 5.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-1.25f, 5.25f);
    glVertex2f(-1.5f, 5.0f);
    glEnd();
glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-2.25f, 5.25f);
    glVertex2f(-2.5f, 5.0f);
    glEnd();
glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-3.25f, 5.25f);
    glVertex2f(-3.5f, 5.0f);
    glEnd();
glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-9.25f, 5.25f);
    glVertex2f(-9.5f, 5.0f);
    glEnd();
glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-4.25f, 5.25f);
    glVertex2f(-4.5f, 5.0f);
    glEnd();
glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-5.25f, 5.25f);
    glVertex2f(-5.5f, 5.0f);
    glEnd();
glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-6.25f, 5.25f);
    glVertex2f(-6.5f, 5.0f);
    glEnd();
glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-7.25f, 5.25f);
    glVertex2f(-7.5f, 5.0f);
    glEnd();
glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-8.25f, 5.25f);
    glVertex2f(-8.5f, 5.0f);
    glEnd();
///666

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-8.25f, 6.25f);
    glVertex2f(-8.5f, 6.0f);
    glEnd();


    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-7.25f, 6.25f);
    glVertex2f(-7.5f, 6.0f);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-6.25f, 6.25f);
    glVertex2f(-6.5f, 6.0f);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-5.25f, 6.25f);
    glVertex2f(-5.5f, 6.0f);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-4.25f, 6.25f);
    glVertex2f(-4.5f, 6.0f);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-3.25f, 6.25f);
    glVertex2f(-3.5f, 6.0f);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-2.25f, 6.25f);
    glVertex2f(-2.5f, 6.0f);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-1.25f, 6.25f);
    glVertex2f(-1.5f, 6.0f);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-0.25f, 6.25f);
    glVertex2f(-0.5f, 6.0f);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-9.25f, 6.25f);
    glVertex2f(-9.5f, 6.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(0.75f, 6.25f);
    glVertex2f(0.5f, 6.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(1.75f, 6.25f);
    glVertex2f(1.5f, 6.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(2.75f, 6.25f);
    glVertex2f(2.5f, 6.0f);
    glEnd();
    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(0.75f, 6.25f);
    glVertex2f(0.5f, 6.0f);
    glEnd();
    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(3.75f, 6.25f);
    glVertex2f(3.5f, 6.0f);
    glEnd();
    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(4.75f, 6.25f);
    glVertex2f(4.5f, 6.0f);
    glEnd();
    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(5.75f, 6.25f);
    glVertex2f(5.5f, 6.0f);
    glEnd();
    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(6.75f, 6.25f);
    glVertex2f(6.5f, 6.0f);
    glEnd();
    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(07.75f, 6.25f);
    glVertex2f(07.5f, 6.0f);
    glEnd();
    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(08.75f, 6.25f);
    glVertex2f(08.5f, 6.0f);
    glEnd();
glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(09.75f, 6.25f);
    glVertex2f(09.5f, 6.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(10.75f, 6.25f);
    glVertex2f(10.5f, 6.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(11.75f, 6.25f);
    glVertex2f(11.5f, 6.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(12.75f, 6.25f);
    glVertex2f(12.5f, 6.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(13.75f, 6.25f);
    glVertex2f(13.5f, 6.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(14.75f, 6.25f);
    glVertex2f(14.5f, 6.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(15.75f, 6.25f);
    glVertex2f(15.5f, 6.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(16.75f, 6.25f);
    glVertex2f(16.5f, 6.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(17.75f, 6.25f);
    glVertex2f(17.5f, 6.0f);
    glEnd();

    ///777

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-8.25f, 7.25f);
    glVertex2f(-8.5f, 7.0f);
    glEnd();


    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-7.25f, 7.25f);
    glVertex2f(-7.5f, 7.0f);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-6.25f, 7.25f);
    glVertex2f(-6.5f, 7.0f);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-5.25f, 7.25f);
    glVertex2f(-5.5f, 7.0f);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-4.25f, 7.25f);
    glVertex2f(-4.5f, 7.0f);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-3.25f, 7.25f);
    glVertex2f(-3.5f, 7.0f);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-2.25f, 7.25f);
    glVertex2f(-2.5f, 7.0f);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-1.25f, 7.25f);
    glVertex2f(-1.5f, 7.0f);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-0.25f, 7.25f);
    glVertex2f(-0.5f, 7.0f);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-9.25f, 7.25f);
    glVertex2f(-9.5f, 7.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(0.75f, 7.25f);
    glVertex2f(0.5f, 7.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(1.75f, 7.25f);
    glVertex2f(1.5f, 7.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(2.75f, 7.25f);
    glVertex2f(2.5f, 7.0f);
    glEnd();
    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(0.75f, 7.25f);
    glVertex2f(0.5f, 7.0f);
    glEnd();
    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(3.75f, 7.25f);
    glVertex2f(3.5f, 7.0f);
    glEnd();
    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(4.75f, 7.25f);
    glVertex2f(4.5f, 7.0f);
    glEnd();
    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(5.75f, 7.25f);
    glVertex2f(5.5f, 7.0f);
    glEnd();
    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(6.75f, 7.25f);
    glVertex2f(6.5f, 7.0f);
    glEnd();
    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(07.75f,7.25f);
    glVertex2f(07.5f, 7.0f);
    glEnd();
    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(08.75f, 7.25f);
    glVertex2f(08.5f, 7.0f);
    glEnd();
glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(09.75f, 7.25f);
    glVertex2f(09.5f, 7.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(10.75f, 7.25f);
    glVertex2f(10.5f, 7.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(11.75f, 7.25f);
    glVertex2f(11.5f, 7.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(12.75f, 7.25f);
    glVertex2f(12.5f, 7.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(13.75f, 7.25f);
    glVertex2f(13.5f, 7.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(14.75f, 7.25f);
    glVertex2f(14.5f, 7.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(15.75f, 7.25f);
    glVertex2f(15.5f, 7.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(16.75f, 7.25f);
    glVertex2f(16.5f, 7.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(17.75f, 7.25f);
    glVertex2f(17.5f, 7.0f);
    glEnd();

    ///888

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-8.25f, 8.25f);
    glVertex2f(-8.5f, 8.0f);
    glEnd();


    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-7.25f, 8.25f);
    glVertex2f(-7.5f, 8.0f);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-6.25f, 8.25f);
    glVertex2f(-6.5f, 8.0f);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-5.25f, 8.25f);
    glVertex2f(-5.5f, 8.0f);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-4.25f, 8.25f);
    glVertex2f(-4.5f, 8.0f);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-3.25f, 8.25f);
    glVertex2f(-3.5f, 8.0f);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-2.25f, 8.25f);
    glVertex2f(-2.5f, 8.0f);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-1.25f, 8.25f);
    glVertex2f(-1.5f, 8.0f);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-0.25f, 8.25f);
    glVertex2f(-0.5f, 8.0f);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-9.25f, 8.25f);
    glVertex2f(-9.5f, 8.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(0.75f, 8.25f);
    glVertex2f(0.5f, 8.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(1.75f, 8.25f);
    glVertex2f(1.5f, 8.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(2.75f, 8.25f);
    glVertex2f(2.5f, 8.0f);
    glEnd();
    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(0.75f, 8.25f);
    glVertex2f(0.5f, 8.0f);
    glEnd();
    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(3.75f, 8.25f);
    glVertex2f(3.5f, 8.0f);
    glEnd();
    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(4.75f, 8.25f);
    glVertex2f(4.5f, 8.0f);
    glEnd();
    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(5.75f, 8.25f);
    glVertex2f(5.5f, 8.0f);
    glEnd();
    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(6.75f, 8.25f);
    glVertex2f(6.5f, 8.0f);
    glEnd();
    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(07.75f, 8.25f);
    glVertex2f(07.5f, 8.0f);
    glEnd();
    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(08.75f, 8.25f);
    glVertex2f(08.5f, 8.0f);
    glEnd();
glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(09.75f, 8.25f);
    glVertex2f(09.5f, 8.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(10.75f, 8.25f);
    glVertex2f(10.5f, 8.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(11.75f, 8.25f);
    glVertex2f(11.5f, 8.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(12.75f, 8.25f);
    glVertex2f(12.5f, 8.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(13.75f, 8.25f);
    glVertex2f(13.5f, 8.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(14.75f, 8.25f);
    glVertex2f(14.5f, 8.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(15.75f, 8.25f);
    glVertex2f(15.5f, 8.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(16.75f, 8.25f);
    glVertex2f(16.5f, 8.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(17.75f, 8.25f);
    glVertex2f(17.5f, 8.0f);
    glEnd();


    ///999

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-8.25f, 9.25f);
    glVertex2f(-8.5f, 9.0f);
    glEnd();


    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-7.25f, 9.25f);
    glVertex2f(-7.5f, 9.0f);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-6.25f, 9.25f);
    glVertex2f(-6.5f, 9.0f);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-5.25f, 9.25f);
    glVertex2f(-5.5f, 9.0f);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-4.25f, 9.25f);
    glVertex2f(-4.5f, 9.0f);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-3.25f, 9.25f);
    glVertex2f(-3.5f, 9.0f);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-2.25f, 9.25f);
    glVertex2f(-2.5f, 9.0f);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-1.25f, 9.25f);
    glVertex2f(-1.5f, 9.0f);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-0.25f, 9.25f);
    glVertex2f(-0.5f, 9.0f);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-9.25f, 9.25f);
    glVertex2f(-9.5f, 9.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(0.75f, 9.25f);
    glVertex2f(0.5f, 9.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(1.75f, 9.25f);
    glVertex2f(1.5f, 9.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(2.75f, 9.25f);
    glVertex2f(2.5f, 9.0f);
    glEnd();
    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(0.75f, 9.25f);
    glVertex2f(0.5f, 9.0f);
    glEnd();
    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(3.75f, 9.25f);
    glVertex2f(3.5f, 9.0f);
    glEnd();
    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(4.75f, 9.25f);
    glVertex2f(4.5f, 9.0f);
    glEnd();
    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(5.75f, 9.25f);
    glVertex2f(5.5f, 9.0f);
    glEnd();
    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(6.75f, 9.25f);
    glVertex2f(6.5f, 9.0f);
    glEnd();
    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(07.75f, 9.25f);
    glVertex2f(07.5f, 9.0f);
    glEnd();
    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(08.75f, 9.25f);
    glVertex2f(08.5f, 9.0f);
    glEnd();
glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(09.75f, 9.25f);
    glVertex2f(09.5f, 9.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(10.75f, 9.25f);
    glVertex2f(10.5f, 9.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(11.75f, 9.25f);
    glVertex2f(11.5f, 9.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(12.75f, 9.25f);
    glVertex2f(12.5f, 9.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(13.75f, 9.25f);
    glVertex2f(13.5f, 9.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(14.75f, 9.25f);
    glVertex2f(14.5f, 9.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(15.75f, 9.25f);
    glVertex2f(15.5f, 9.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(16.75f, 9.25f);
    glVertex2f(16.5f, 9.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(17.75f, 9.25f);
    glVertex2f(17.5f, 9.0f);
    glEnd();

    ///10

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-8.25f, 10.25f);
    glVertex2f(-8.5f, 10.0f);
    glEnd();


    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-7.25f, 10.25f);
    glVertex2f(-7.5f, 10.0f);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-6.25f, 10.25f);
    glVertex2f(-6.5f, 10.0f);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-5.25f, 10.25f);
    glVertex2f(-5.5f, 10.0f);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-4.25f, 10.25f);
    glVertex2f(-4.5f, 10.0f);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-3.25f, 10.25f);
    glVertex2f(-3.5f, 10.0f);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-2.25f, 10.25f);
    glVertex2f(-2.5f, 10.0f);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-1.25f, 10.25f);
    glVertex2f(-1.5f, 10.0f);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-0.25f, 10.25f);
    glVertex2f(-0.5f, 10.0f);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-9.25f, 10.25f);
    glVertex2f(-9.5f, 10.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(0.75f, 10.25f);
    glVertex2f(0.5f, 10.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(1.75f, 10.25f);
    glVertex2f(1.5f, 10.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(2.75f, 10.25f);
    glVertex2f(2.5f, 10.0f);
    glEnd();
    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(0.75f, 10.25f);
    glVertex2f(0.5f, 10.0f);
    glEnd();
    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(3.75f, 10.25f);
    glVertex2f(3.5f, 10.0f);
    glEnd();
    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(4.75f, 10.25f);
    glVertex2f(4.5f, 10.0f);
    glEnd();
    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(5.75f, 10.25f);
    glVertex2f(5.5f, 10.0f);
    glEnd();
    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(6.75f, 10.25f);
    glVertex2f(6.5f, 10.0f);
    glEnd();
    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(07.75f, 10.25f);
    glVertex2f(07.5f, 10.0f);
    glEnd();
    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(08.75f, 10.25f);
    glVertex2f(08.5f, 10.0f);
    glEnd();
glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(09.75f, 10.25f);
    glVertex2f(09.5f, 10.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(10.75f, 10.25f);
    glVertex2f(10.5f, 10.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(11.75f, 10.25f);
    glVertex2f(11.5f, 10.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(12.75f, 10.25f);
    glVertex2f(12.5f, 10.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(13.75f, 10.25f);
    glVertex2f(13.5f, 10.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(14.75f, 10.25f);
    glVertex2f(14.5f, 10.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(15.75f, 10.25f);
    glVertex2f(15.5f, 10.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(16.75f, 10.25f);
    glVertex2f(16.5f, 10.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(17.75f, 10.25f);
    glVertex2f(17.5f, 10.0f);
    glEnd();

    ///11

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-8.25f, 11.25f);
    glVertex2f(-8.5f, 11.0f);
    glEnd();


    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-7.25f, 11.25f);
    glVertex2f(-7.5f, 11.0f);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-6.25f, 11.25f);
    glVertex2f(-6.5f, 11.0f);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-5.25f, 11.25f);
    glVertex2f(-5.5f, 11.0f);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-4.25f, 11.25f);
    glVertex2f(-4.5f, 11.0f);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-3.25f, 11.25f);
    glVertex2f(-3.5f, 11.0f);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-2.25f, 11.25f);
    glVertex2f(-2.5f, 11.0f);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-1.25f, 11.25f);
    glVertex2f(-1.5f, 11.0f);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-0.25f, 11.25f);
    glVertex2f(-0.5f, 11.0f);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-9.25f, 11.25f);
    glVertex2f(-9.5f, 11.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(0.75f, 11.25f);
    glVertex2f(0.5f, 11.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(1.75f, 11.25f);
    glVertex2f(1.5f, 11.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(2.75f, 11.25f);
    glVertex2f(2.5f, 11.0f);
    glEnd();
    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(0.75f, 11.25f);
    glVertex2f(0.5f,11.0f);
    glEnd();
    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(3.75f, 11.25f);
    glVertex2f(3.5f, 11.0f);
    glEnd();
    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(4.75f, 11.25f);
    glVertex2f(4.5f, 11.0f);
    glEnd();
    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(5.75f, 11.25f);
    glVertex2f(5.5f, 11.0f);
    glEnd();
    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(6.75f, 11.25f);
    glVertex2f(6.5f, 11.0f);
    glEnd();
    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(07.75f, 11.25f);
    glVertex2f(07.5f, 11.0f);
    glEnd();
    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(08.75f, 11.25f);
    glVertex2f(08.5f, 11.0f);
    glEnd();
glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(09.75f, 11.25f);
    glVertex2f(09.5f, 11.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(10.75f, 11.25f);
    glVertex2f(10.5f, 11.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(11.75f, 11.25f);
    glVertex2f(11.5f, 11.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(12.75f, 11.25f);
    glVertex2f(12.5f, 11.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(13.75f, 11.25f);
    glVertex2f(13.5f, 11.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(14.75f, 11.25f);
    glVertex2f(14.5f, 11.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(15.75f, 11.25f);
    glVertex2f(15.5f, 11.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(16.75f, 11.25f);
    glVertex2f(16.5f, 11.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(17.75f, 11.25f);
    glVertex2f(17.5f, 11.0f);
    glEnd();





    glPopMatrix();
    ///rain End

	glFlush();

	glutTimerFunc(4000,day_demo,9);
}


void nightrain_demo(int a)
{
    glutDisplayFunc(nightrain);
}




void night() {
	glClear(GL_COLOR_BUFFER_BIT);
	glLineWidth(2.5);

//background start
	glBegin(GL_QUADS);
	//glColor3ub(220, 220, 220);
	glColor3ub(47, 79, 79);
	glVertex2f(-10.0f, 10.0f);
	glVertex2f(-10.0f, -10.0f);
	glVertex2f(10.0f, -10.0f);
	glVertex2f(10.0f, 10.0f);
	glEnd();
//background finish

///moon start
glPushMatrix();
    glTranslatef(0,position2,0);
 GLfloat sunx=6.0f; GLfloat suny=10.0f; GLfloat sunradius =0.78f;

 GLfloat suntwicePi = 2.0f * PI;

 int i;
	int triangleAmount = 500;

 glBegin(GL_TRIANGLE_FAN);
glColor3ub(208, 213,210);
glVertex2f(sunx, suny);
for(i = 0; i <=triangleAmount;i++) {
glVertex2f(
sunx + (sunradius * cos(i * suntwicePi / triangleAmount)),
suny + (sunradius * sin(i * suntwicePi / triangleAmount))
);
}
glEnd();
///moon end
glPopMatrix();

///star start
GLfloat sxx8=2.3f; GLfloat syy8=8.30f; GLfloat sradiuss8=0.10f;
GLfloat stwicePii8 = 2.0f * PI;



glBegin(GL_TRIANGLE_FAN);
glColor3ub(248,248,255);
glVertex2f(sxx8, syy8);
for(i = 0; i <=triangleAmount;i++) {
glVertex2f(
sxx8 + (sradiuss8 * cos(i * stwicePii8 / triangleAmount)),
syy8 + (sradiuss8 * sin(i * stwicePii8 / triangleAmount))
);
}
glEnd();
///2



GLfloat sxx7=1.3f; GLfloat syy7=9.30f; GLfloat sradiuss7=0.10f;
GLfloat stwicePii7 = 2.0f * PI;



glBegin(GL_TRIANGLE_FAN);
glColor3ub(248,248,255);
glVertex2f(sxx7, syy7);
for(i = 0; i <=triangleAmount;i++) {
glVertex2f(
sxx7 + (sradiuss7 * cos(i * stwicePii7 / triangleAmount)),
syy7 + (sradiuss7 * sin(i * stwicePii7 / triangleAmount))
);
}
glEnd();



///3
GLfloat sxx6=-2.3f; GLfloat syy6=9.30f; GLfloat sradiuss6=0.10f;
GLfloat stwicePii6 = 2.0f * PI;



glBegin(GL_TRIANGLE_FAN);
glColor3ub(248,248,255);
glVertex2f(sxx6, syy6);
for(i = 0; i <=triangleAmount;i++) {
glVertex2f(
sxx6 + (sradiuss6 * cos(i * stwicePii6/ triangleAmount)),
syy6 + (sradiuss6 * sin(i * stwicePii6 / triangleAmount))
);
}
glEnd();
///4
GLfloat sxx5=-3.3f; GLfloat syy5=8.70f; GLfloat sradiuss5=0.10f;
GLfloat stwicePii5 = 2.0f * PI;



glBegin(GL_TRIANGLE_FAN);
glColor3ub(248,248,255);
glVertex2f(sxx5, syy5);
for(i = 0; i <=triangleAmount;i++) {
glVertex2f(
sxx5 + (sradiuss5 * cos(i * stwicePii5 / triangleAmount)),
syy5 + (sradiuss5 * sin(i * stwicePii5 / triangleAmount))
);
}
glEnd();
///3
GLfloat sxx4=-1.3f; GLfloat syy4=9.30f; GLfloat sradiuss4=0.10f;
GLfloat stwicePii4 = 2.0f * PI;



glBegin(GL_TRIANGLE_FAN);
glColor3ub(248,248,255);
glVertex2f(sxx4, syy4);
for(i = 0; i <=triangleAmount;i++) {
glVertex2f(
sxx4 + (sradiuss4 * cos(i * stwicePii4 / triangleAmount)),
syy4 + (sradiuss4 * sin(i * stwicePii4 / triangleAmount))
);
}
glEnd();



///2
GLfloat sxx3=-0.3f; GLfloat syy3=7.30f; GLfloat sradiuss3=0.10f;
GLfloat stwicePii3 = 2.0f * PI;



glBegin(GL_TRIANGLE_FAN);
glColor3ub(248,248,255);
glVertex2f(sxx3, syy3);
for(i = 0; i <=triangleAmount;i++) {
glVertex2f(
sxx3 + (sradiuss3 * cos(i * stwicePii3 / triangleAmount)),
syy3 + (sradiuss3 * sin(i * stwicePii3 / triangleAmount))
);
}
glEnd();
///1
GLfloat sxx2=-0.3f; GLfloat syy2=9.40f; GLfloat sradiuss2=0.10f;
GLfloat stwicePii2 = 2.0f * PI;



glBegin(GL_TRIANGLE_FAN);
glColor3ub(248,248,255);
glVertex2f(sxx2, syy2);
for(i = 0; i <=triangleAmount;i++) {
glVertex2f(
sxx2 + (sradiuss2 * cos(i * stwicePii2 / triangleAmount)),
syy2 + (sradiuss2 * sin(i * stwicePii2 / triangleAmount))
);
}
glEnd();



///
GLfloat sxx1=-6.0f; GLfloat syy1=9.2f; GLfloat sradiuss1=0.10f;
GLfloat stwicePii1 = 2.0f * PI;



glBegin(GL_TRIANGLE_FAN);
glColor3ub(248,248,255);
glVertex2f(sxx1, syy1);
for(i = 0; i <=triangleAmount;i++) {
glVertex2f(
sxx1 + (sradiuss1 * cos(i * stwicePii1 / triangleAmount)),
syy1 + (sradiuss1 * sin(i * stwicePii1 / triangleAmount))
);
}
glEnd();



///
GLfloat sxx0=9.0f; GLfloat syy0=9.2f; GLfloat sradiuss0=0.10f;
GLfloat stwicePii0 = 2.0f * PI;



glBegin(GL_TRIANGLE_FAN);
glColor3ub(248,248,255);
glVertex2f(sxx0, syy0);
for(i = 0; i <=triangleAmount;i++) {
glVertex2f(
sxx0 + (sradiuss0 * cos(i * stwicePii1 / triangleAmount)),
syy0 + (sradiuss0* sin(i * stwicePii0/ triangleAmount))
);
}
glEnd();
///star

///cloud Animation

     glLoadIdentity();

    glPushMatrix();
    glTranslatef(position1,0,0);
///cloud1
    GLfloat cxx=-8.0f; GLfloat cyy=7.10f; GLfloat cradiuss =1.0f;

	GLfloat ctwicePii = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(126, 135,150);
	//glColor3ub(248, 248,255);
		glVertex2f(cxx, cyy);
		for(i = 0; i <=triangleAmount;i++) {
			glVertex2f(
		            cxx + (cradiuss * cos(i *  ctwicePii / triangleAmount)),
			    cyy + (cradiuss * sin(i * ctwicePii / triangleAmount))
			);
		}
	glEnd();

	///cloud2

	GLfloat cxx1=-9.0f; GLfloat cyy1=7.10f; GLfloat cradiuss1 =1.0f;

	GLfloat ctwicePii1 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(126, 135,150);
	//glColor3ub(248, 248,255);
		glVertex2f(cxx1, cyy1);
		for(i = 0; i <=triangleAmount;i++) {
			glVertex2f(
		            cxx1 + (cradiuss1 * cos(i *  ctwicePii1 / triangleAmount)),
			    cyy1 + (cradiuss * sin(i * ctwicePii1 / triangleAmount))
			);
		}
	glEnd();

	///cloud3
	GLfloat cxx2=-8.0f; GLfloat cyy2=8.10f; GLfloat cradiuss2 =1.0f;

	GLfloat ctwicePii2 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(126, 135,150);
	//glColor3ub(248, 248,255);
		glVertex2f(cxx2, cyy2);
		for(i = 0; i <=triangleAmount;i++) {
			glVertex2f(
		            cxx2 + (cradiuss2 * cos(i *  ctwicePii2 / triangleAmount)),
			    cyy2 + (cradiuss2 * sin(i * ctwicePii2 / triangleAmount))
			);
		}
	glEnd();

	///cloud4

	GLfloat cxx3=-1.0f; GLfloat cyy3=9.10f; GLfloat cradiuss3 =1.0f;

	GLfloat ctwicePii3 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(126, 135,150);
	//glColor3ub(248, 248,255);
		glVertex2f(cxx3, cyy3);
		for(i = 0; i <=triangleAmount;i++) {
			glVertex2f(
		            cxx3 + (cradiuss3 * cos(i *  ctwicePii3 / triangleAmount)),
			    cyy3 + (cradiuss3 * sin(i * ctwicePii3 / triangleAmount))
			);
		}
	glEnd();



	///cloud5

	GLfloat cxx4=0.0f; GLfloat cyy4=9.10f; GLfloat cradiuss4 =1.0f;

	GLfloat ctwicePii4 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(126, 135,150);
	//glColor3ub(248, 248,255);
		glVertex2f(cxx4, cyy4);
		for(i = 0; i <=triangleAmount;i++) {
			glVertex2f(
		            cxx4 + (cradiuss4 * cos(i *  ctwicePii4 / triangleAmount)),
			    cyy4 + (cradiuss4 * sin(i * ctwicePii4 / triangleAmount))
			);
		}
	glEnd();

	glPopMatrix();
	///cloud end

//grass
glBegin(GL_QUADS);
	glColor3ub(1, 110, 1);
	glVertex2f(-10.0f, 2.00f);
	glVertex2f(-10.0f, -10.0f);
	glVertex2f(10.0f, -10.0f);
	glVertex2f(10.0f, 2.00f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(45, 71, 47);
	glVertex2f(-10.0f, 1.00f);
	glVertex2f(-10.0f, -10.0f);
	glVertex2f(10.0f, -10.0f);
	glVertex2f(10.0f, 1.00f);
	glEnd();

//roads
    glBegin(GL_QUADS);
	glColor3ub(138, 135, 128);
	glVertex2f(-1.05f, 0.00f);
	glVertex2f(-5.0f, -10.0f);
	glVertex2f(5.0f, -10.0f);
	glVertex2f(1.05f, 0.00f);
	glEnd();



/// Sixty Dome Mosque start
	/// platform
	glBegin(GL_QUADS);
	glColor3ub(154, 122, 97);
	glVertex2f(-9.0f, 1.0f);
	glVertex2f(-10.0f, 0.0f);
	glVertex2f(10.0f, 0.0f);
	glVertex2f(9.0f, 1.0f);
	glEnd();

	// platform border
	glBegin(GL_QUADS);
	glColor3ub(115, 91, 72);
	glVertex2f(-10.0f, 0.0f);
	glVertex2f(10.0f, 0.0f);
	glVertex2f(9.90f, 0.10f);
	glVertex2f(-9.90f, 0.10f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(115, 91, 72);
	glVertex2f(-10.0f, 0.0f);
	glVertex2f(-9.90f, 0.0f);
	glVertex2f(-8.90f, 1.00f);
	glVertex2f(-9.0f, 1.0f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(115, 91, 72);
	glVertex2f(10.0f, 0.0f);
	glVertex2f(9.90f, 0.0f);
	glVertex2f(8.90f, 1.00f);
	glVertex2f(9.0f, 1.0f);
	glEnd();

	///building
	glBegin(GL_POLYGON);
	glColor3ub(225, 150, 82);
	glVertex2f(-9.0f, 1.0f);
	glVertex2f(9.0f, 1.0f);
	glVertex2f(9.0f, 5.0f);
	glVertex2f(0.0f, 5.50f);
	glVertex2f(-9.0f, 5.0f);
	glVertex2f(-9.0f, 1.0f);
	glEnd();
//middle circle
//border
	GLfloat x3=0.0f; GLfloat y3=5.60f; GLfloat radius3 =1.00f;
	GLfloat twicePi3 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(188, 118, 46);
		glVertex2f(x3, y3);
		for(i = 0; i <=triangleAmount;i++) {
			glVertex2f(
		            x3 + (radius3 * cos(i *  twicePi3 / triangleAmount)),
			    y3 + (radius3 * sin(i * twicePi3 / triangleAmount))
			);
		}
	glEnd();

	GLfloat xx3=0.0f; GLfloat yy3=5.50f; GLfloat radiuss3 =1.00f;
	GLfloat twicePii3 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(225, 150, 82);
		glVertex2f(xx3, yy3);
		for(i = 0; i <=triangleAmount;i++) {
			glVertex2f(
		            xx3 + (radiuss3 * cos(i *  twicePii3 / triangleAmount)),
			    yy3 + (radiuss3 * sin(i * twicePii3 / triangleAmount))
			);
		}
	glEnd();
//left circle
//1st
	GLfloat x4=-1.7f; GLfloat y4=5.55f; GLfloat radius4 =0.50f;
	GLfloat twicePi4 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(188, 118, 46);
		glVertex2f(x4, y4);
		for(i = 0; i <=triangleAmount;i++) {
			glVertex2f(
		            x4 + (radius4 * cos(i *  twicePi4 / triangleAmount)),
			    y4 + (radius4 * sin(i * twicePi4 / triangleAmount))
			);
		}
	glEnd();

	GLfloat xx4=-1.7f; GLfloat yy4=5.45f; GLfloat radiuss4 =0.50f;
	GLfloat twicePii4 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(225, 150, 82);
		glVertex2f(xx4, yy4);
		for(i = 0; i <=triangleAmount;i++) {
			glVertex2f(
		            xx4 + (radiuss4 * cos(i *  twicePii4 / triangleAmount)),
			    yy4 + (radiuss4 * sin(i * twicePii4 / triangleAmount))
			);
		}
	glEnd();
//2nd
	GLfloat x5=-2.9f; GLfloat y5=5.50f; GLfloat radius5 =0.50f;
	GLfloat twicePi5 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(188, 118, 46);
		glVertex2f(x5, y5);
		for(i = 0; i <=triangleAmount;i++) {
			glVertex2f(
		            x5 + (radius5 * cos(i *  twicePi5 / triangleAmount)),
			    y5 + (radius5 * sin(i * twicePi5 / triangleAmount))
			);
		}
	glEnd();

	GLfloat xx5=-2.9f; GLfloat yy5=5.40f; GLfloat radiuss5 =0.50f;
	GLfloat twicePii5 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(225, 150, 82);
		glVertex2f(xx5, yy5);
		for(i = 0; i <=triangleAmount;i++) {
			glVertex2f(
		            xx5 + (radiuss5 * cos(i *  twicePii5 / triangleAmount)),
			    yy5 + (radiuss5 * sin(i * twicePii5 / triangleAmount))
			);
		}
	glEnd();
//3rd
GLfloat x6=-4.1f; GLfloat y6=5.45f; GLfloat radius6 =0.50f;
	GLfloat twicePi6 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(188, 118, 46);
		glVertex2f(x6, y6);
		for(i = 0; i <=triangleAmount;i++) {
			glVertex2f(
		            x6 + (radius6 * cos(i *  twicePi6 / triangleAmount)),
			    y6 + (radius6 * sin(i * twicePi6 / triangleAmount))
			);
		}
	glEnd();

	GLfloat xx6=-4.1f; GLfloat yy6=5.35f; GLfloat radiuss6 =0.50f;
	GLfloat twicePii6 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(225, 150, 82);
		glVertex2f(xx6, yy6);
		for(i = 0; i <=triangleAmount;i++) {
			glVertex2f(
		            xx6 + (radiuss6 * cos(i *  twicePii6 / triangleAmount)),
			    yy6 + (radiuss6 * sin(i * twicePii6 / triangleAmount))
			);
		}
	glEnd();
//4th
GLfloat x7=-5.3f; GLfloat y7=5.40f; GLfloat radius7 =0.50f;
	GLfloat twicePi7 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(188, 118, 46);
		glVertex2f(x7, y7);
		for(i = 0; i <=triangleAmount;i++) {
			glVertex2f(
		            x7 + (radius7 * cos(i *  twicePi7 / triangleAmount)),
			    y7 + (radius7 * sin(i * twicePi7 / triangleAmount))
			);
		}
	glEnd();

	GLfloat xx7=-5.3f; GLfloat yy7=5.30f; GLfloat radiuss7 =0.50f;
	GLfloat twicePii7 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(225, 150, 82);
		glVertex2f(xx7, yy7);
		for(i = 0; i <=triangleAmount;i++) {
			glVertex2f(
		            xx7 + (radiuss7 * cos(i *  twicePii7 / triangleAmount)),
			    yy7 + (radiuss7 * sin(i * twicePii7 / triangleAmount))
			);
		}
	glEnd();
//5th
    GLfloat x8=-6.4f; GLfloat y8=5.35f; GLfloat radius8 =0.50f;
	GLfloat twicePi8 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(188, 118, 46);
		glVertex2f(x8, y8);
		for(i = 0; i <=triangleAmount;i++) {
			glVertex2f(
		            x8 + (radius8 * cos(i *  twicePi8 / triangleAmount)),
			    y8 + (radius8 * sin(i * twicePi8 / triangleAmount))
			);
		}
	glEnd();

	GLfloat xx8=-6.4f; GLfloat yy8=5.25f; GLfloat radiuss8 =0.50f;
	GLfloat twicePii8 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(225, 150, 82);
		glVertex2f(xx8, yy8);
		for(i = 0; i <=triangleAmount;i++) {
			glVertex2f(
		            xx8 + (radiuss8 * cos(i *  twicePii8 / triangleAmount)),
			    yy8 + (radiuss8 * sin(i * twicePii8 / triangleAmount))
			);
		}
	glEnd();
//right circle
//1st
	GLfloat x9=1.7f; GLfloat y9=5.55f; GLfloat radius9 =0.50f;
	GLfloat twicePi9 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(188, 118, 46);
		glVertex2f(x9, y9);
		for(i = 0; i <=triangleAmount;i++) {
			glVertex2f(
		            x9 + (radius9 * cos(i *  twicePi9 / triangleAmount)),
			    y9 + (radius9 * sin(i * twicePi9 / triangleAmount))
			);
		}
	glEnd();

	GLfloat xx9=1.7f; GLfloat yy9=5.45f; GLfloat radiuss9 =0.50f;
	GLfloat twicePii9 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(225, 150, 82);
		glVertex2f(xx9, yy9);
		for(i = 0; i <=triangleAmount;i++) {
			glVertex2f(
		            xx9 + (radiuss9 * cos(i *  twicePii9 / triangleAmount)),
			    yy9 + (radiuss9 * sin(i * twicePii9 / triangleAmount))
			);
		}
	glEnd();
//2nd
	GLfloat x10=2.9f; GLfloat y10=5.50f; GLfloat radius10 =0.50f;
	GLfloat twicePi10 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(188, 118, 46);
		glVertex2f(x10, y10);
		for(i = 0; i <=triangleAmount;i++) {
			glVertex2f(
		            x10 + (radius10 * cos(i *  twicePi10 / triangleAmount)),
			    y10 + (radius10 * sin(i * twicePi10 / triangleAmount))
			);
		}
	glEnd();

	GLfloat xx10=2.9f; GLfloat yy10=5.40f; GLfloat radiuss10 =0.50f;
	GLfloat twicePii10 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(225, 150, 82);
		glVertex2f(xx10, yy10);
		for(i = 0; i <=triangleAmount;i++) {
			glVertex2f(
		            xx10 + (radiuss10 * cos(i *  twicePii10 / triangleAmount)),
			    yy10 + (radiuss10 * sin(i * twicePii10 / triangleAmount))
			);
		}
	glEnd();
//3rd
GLfloat x11=4.1f; GLfloat y11=5.45f; GLfloat radius11 =0.50f;
	GLfloat twicePi11 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(188, 118, 46);
		glVertex2f(x11, y11);
		for(i = 0; i <=triangleAmount;i++) {
			glVertex2f(
		            x11 + (radius11 * cos(i *  twicePi11 / triangleAmount)),
			    y11 + (radius11 * sin(i * twicePi11 / triangleAmount))
			);
		}
	glEnd();

	GLfloat xx11=4.1f; GLfloat yy11=5.35f; GLfloat radiuss11 =0.50f;
	GLfloat twicePii11 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(225, 150, 82);
		glVertex2f(xx11, yy11);
		for(i = 0; i <=triangleAmount;i++) {
			glVertex2f(
		            xx11 + (radiuss11 * cos(i *  twicePii11 / triangleAmount)),
			    yy11 + (radiuss11 * sin(i * twicePii11 / triangleAmount))
			);
		}
	glEnd();
//4th
GLfloat x12=5.3f; GLfloat y12=5.40f; GLfloat radius12 =0.50f;
	GLfloat twicePi12 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(188, 118, 46);
		glVertex2f(x12, y12);
		for(i = 0; i <=triangleAmount;i++) {
			glVertex2f(
		            x12 + (radius12 * cos(i *  twicePi12 / triangleAmount)),
			    y12 + (radius12 * sin(i * twicePi12 / triangleAmount))
			);
		}
	glEnd();

	GLfloat xx12=5.3f; GLfloat yy12=5.30f; GLfloat radiuss12 =0.50f;
	GLfloat twicePii12 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(225, 150, 82);
		glVertex2f(xx12, yy12);
		for(i = 0; i <=triangleAmount;i++) {
			glVertex2f(
		            xx12 + (radiuss12 * cos(i *  twicePii12 / triangleAmount)),
			    yy12 + (radiuss12 * sin(i * twicePii12 / triangleAmount))
			);
		}
	glEnd();
//5th
GLfloat x13=6.4f; GLfloat y13=5.35f; GLfloat radius13 =0.50f;
	GLfloat twicePi13 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(188, 118, 46);
		glVertex2f(x13, y13);
		for(i = 0; i <=triangleAmount;i++) {
			glVertex2f(
		            x13 + (radius13 * cos(i *  twicePi13 / triangleAmount)),
			    y13 + (radius13 * sin(i * twicePi13 / triangleAmount))
			);
		}
	glEnd();

	GLfloat xx13=6.4f; GLfloat yy13=5.25f; GLfloat radiuss13 =0.50f;
	GLfloat twicePii13 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(225, 150, 82);
		glVertex2f(xx13, yy13);
		for(i = 0; i <=triangleAmount;i++) {
			glVertex2f(
		            xx13 + (radiuss13 * cos(i *  twicePii13 / triangleAmount)),
			    yy13 + (radiuss13 * sin(i * twicePii13 / triangleAmount))
			);
		}
	glEnd();
///border
	glBegin(GL_QUADS);
	glColor3ub(188, 118, 46);
	glVertex2f(-9.0f, 5.0f);
	glVertex2f(0.0f, 5.50f);
	glVertex2f(0.0f, 5.60f);
	glVertex2f(-9.0f, 5.10f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(188, 118, 46);
	glVertex2f(9.0f, 5.0f);
	glVertex2f(0.0f, 5.50f);
	glVertex2f(0.0f, 5.60f);
	glVertex2f(9.0f, 5.10f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(188, 118, 46);
	glVertex2f(-9.0f, 1.0f);
	glVertex2f(9.0f, 1.0f);
	glVertex2f(9.0f, 1.10f);
	glVertex2f(-9.0f, 1.10f);
	glEnd();

//main gate
	glBegin(GL_QUADS);
	glColor3ub(188, 113, 48);
	glVertex2f(-0.5f, 1.00f);
	glVertex2f(0.5f, 1.00f);
	glVertex2f(0.5f, 4.50f);
	glVertex2f(-0.5f, 4.50f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(162, 93, 34);
	glVertex2f(-0.5f, 1.00f);
	glVertex2f(0.5f, 1.00f);
	glVertex2f(0.5f, 3.20f);
	glVertex2f(-0.5f, 3.20f);
	glEnd();

	GLfloat x24=0.0f; GLfloat y24=3.20f; GLfloat radius24 =0.5f;
	GLfloat twicePi24 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(162, 93, 34);
		glVertex2f(x24, y24);
		for(i = 0; i <=triangleAmount;i++) {
			glVertex2f(
		            x24 + (radius24 * cos(i *  twicePi24 / triangleAmount)),
			    y24 + (radius24 * sin(i * twicePi24/ triangleAmount))
			);
		}
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(79, 43, 19);
	glVertex2f(-0.2f, 1.00f);
	glVertex2f(0.2f, 1.00f);
	glVertex2f(0.2f, 2.50f);
	glVertex2f(-0.2f, 2.50f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(173, 99, 38);
	glVertex2f(-0.5f, 4.30f);
	glVertex2f(0.5f, 4.30f);
	glVertex2f(0.5f, 4.50f);
	glVertex2f(-0.5f, 4.50f);
	glEnd();

//left gates
//1st
	glBegin(GL_QUADS);
	glColor3ub(188, 113, 48);
	glVertex2f(-1.75f, 1.00f);
	glVertex2f(-1.05f, 1.00f);
	glVertex2f(-1.05f, 3.20f);
	glVertex2f(-1.75f, 3.20f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(162, 93, 34);
	glVertex2f(-1.75f, 1.00f);
	glVertex2f(-1.05f, 1.00f);
	glVertex2f(-1.05f, 2.20f);
	glVertex2f(-1.75f, 2.20f);
	glEnd();

	GLfloat x14=-1.399f; GLfloat y14=2.20f; GLfloat radius14 =0.35f;
	GLfloat twicePi14 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(162, 93, 34);
		glVertex2f(x14, y14);
		for(i = 0; i <=triangleAmount;i++) {
			glVertex2f(
		            x14 + (radius14 * cos(i *  twicePi14 / triangleAmount)),
			    y14 + (radius14 * sin(i * twicePi14/ triangleAmount))
			);
		}
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(79, 43, 19);
	glVertex2f(-1.55f, 1.00f);
	glVertex2f(-1.25f, 1.00f);
	glVertex2f(-1.25f, 2.05f);
	glVertex2f(-1.55f, 2.05f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(173, 99, 38);
	glVertex2f(-1.75f, 3.00f);
	glVertex2f(-1.05f, 3.00f);
	glVertex2f(-1.05f, 3.20f);
	glVertex2f(-1.75f, 3.20f);
	glEnd();
//2nd
	glBegin(GL_QUADS);
	glColor3ub(188, 113, 48);
	glVertex2f(-2.75f, 1.00f);
	glVertex2f(-2.05f, 1.00f);
	glVertex2f(-2.05f, 3.20f);
	glVertex2f(-2.75f, 3.20f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(162, 93, 34);
	glVertex2f(-2.75f, 1.00f);
	glVertex2f(-2.05f, 1.00f);
	glVertex2f(-2.05f, 2.20f);
	glVertex2f(-2.75f, 2.20f);
	glEnd();

	GLfloat x15=-2.399f; GLfloat y15=2.20f; GLfloat radius15 =0.35f;
	GLfloat twicePi15 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(162, 93, 34);
		glVertex2f(x15, y15);
		for(i = 0; i <=triangleAmount;i++) {
			glVertex2f(
		            x15 + (radius15 * cos(i *  twicePi15 / triangleAmount)),
			    y15 + (radius15 * sin(i * twicePi15 / triangleAmount))
			);
		}
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(79, 43, 19);
	glVertex2f(-2.55f, 1.00f);
	glVertex2f(-2.25f, 1.00f);
	glVertex2f(-2.25f, 2.05f);
	glVertex2f(-2.55f, 2.05f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(173, 99, 38);
	glVertex2f(-2.75f, 3.00f);
	glVertex2f(-2.05f, 3.00f);
	glVertex2f(-2.05f, 3.20f);
	glVertex2f(-2.75f, 3.20f);
	glEnd();
//3rd
	glBegin(GL_QUADS);
	glColor3ub(188, 113, 48);
	glVertex2f(-3.75f, 1.00f);
	glVertex2f(-3.05f, 1.00f);
	glVertex2f(-3.05f, 3.20f);
	glVertex2f(-3.75f, 3.20f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(162, 93, 34);
	glVertex2f(-3.75f, 1.00f);
	glVertex2f(-3.05f, 1.00f);
	glVertex2f(-3.05f, 2.20f);
	glVertex2f(-3.75f, 2.20f);
	glEnd();

	GLfloat x16=-3.399f; GLfloat y16=2.20f; GLfloat radius16 =0.35f;
	GLfloat twicePi16 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(162, 93, 34);
		glVertex2f(x16, y16);
		for(i = 0; i <=triangleAmount;i++) {
			glVertex2f(
		            x16 + (radius16 * cos(i *  twicePi16 / triangleAmount)),
			    y16 + (radius16 * sin(i * twicePi16 / triangleAmount))
			);
		}
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(79, 43, 19);
	glVertex2f(-3.55f, 1.00f);
	glVertex2f(-3.25f, 1.00f);
	glVertex2f(-3.25f, 2.05f);
	glVertex2f(-3.55f, 2.05f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(173, 99, 38);
	glVertex2f(-3.75f, 3.00f);
	glVertex2f(-3.05f, 3.00f);
	glVertex2f(-3.05f, 3.20f);
	glVertex2f(-3.75f, 3.20f);
	glEnd();
//4th
	glBegin(GL_QUADS);
	glColor3ub(188, 113, 48);
	glVertex2f(-4.75f, 1.00f);
	glVertex2f(-4.05f, 1.00f);
	glVertex2f(-4.05f, 3.20f);
	glVertex2f(-4.75f, 3.20f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(162, 93, 34);
	glVertex2f(-4.75f, 1.00f);
	glVertex2f(-4.05f, 1.00f);
	glVertex2f(-4.05f, 2.20f);
	glVertex2f(-4.75f, 2.20f);
	glEnd();

	GLfloat x17=-4.399f; GLfloat y17=2.20f; GLfloat radius17 =0.35f;
	GLfloat twicePi17 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(162, 93, 34);
		glVertex2f(x17, y17);
		for(i = 0; i <=triangleAmount;i++) {
			glVertex2f(
		            x17 + (radius17 * cos(i *  twicePi17 / triangleAmount)),
			    y17 + (radius17 * sin(i * twicePi17 / triangleAmount))
			);
		}
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(79, 43, 19);
	glVertex2f(-4.55f, 1.00f);
	glVertex2f(-4.25f, 1.00f);
	glVertex2f(-4.25f, 2.05f);
	glVertex2f(-4.55f, 2.05f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(173, 99, 38);
	glVertex2f(-4.75f, 3.00f);
	glVertex2f(-4.05f, 3.00f);
	glVertex2f(-4.05f, 3.20f);
	glVertex2f(-4.75f, 3.20f);
	glEnd();

//5th
	glBegin(GL_QUADS);
	glColor3ub(188, 113, 48);
	glVertex2f(-5.75f, 1.00f);
	glVertex2f(-5.05f, 1.00f);
	glVertex2f(-5.05f, 3.20f);
	glVertex2f(-5.75f, 3.20f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(162, 93, 34);
	glVertex2f(-5.75f, 1.00f);
	glVertex2f(-5.05f, 1.00f);
	glVertex2f(-5.05f, 2.20f);
	glVertex2f(-5.75f, 2.20f);
	glEnd();

	GLfloat x18=-5.399f; GLfloat y18=2.20f; GLfloat radius18 =0.35f;
	GLfloat twicePi18 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(162, 93, 34);
		glVertex2f(x18, y18);
		for(i = 0; i <=triangleAmount;i++) {
			glVertex2f(
		            x18 + (radius18 * cos(i *  twicePi18 / triangleAmount)),
			    y18 + (radius18 * sin(i * twicePi18/ triangleAmount))
			);
		}
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(79, 43, 19);
	glVertex2f(-5.55f, 1.00f);
	glVertex2f(-5.25f, 1.00f);
	glVertex2f(-5.25f, 2.05f);
	glVertex2f(-5.55f, 2.05f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(173, 99, 38);
	glVertex2f(-5.75f, 3.00f);
	glVertex2f(-5.05f, 3.00f);
	glVertex2f(-5.05f, 3.20f);
	glVertex2f(-5.75f, 3.20f);
	glEnd();

	//right gates
//1st
	glBegin(GL_QUADS);
	glColor3ub(188, 113, 48);
	glVertex2f(1.75f, 1.00f);
	glVertex2f(1.05f, 1.00f);
	glVertex2f(1.05f, 3.20f);
	glVertex2f(1.75f, 3.20f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(162, 93, 34);
	glVertex2f(1.75f, 1.00f);
	glVertex2f(1.05f, 1.00f);
	glVertex2f(1.05f, 2.20f);
	glVertex2f(1.75f, 2.20f);
	glEnd();

	GLfloat x19=1.399f; GLfloat y19=2.20f; GLfloat radius19 =0.35f;
	GLfloat twicePi19 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(162, 93, 34);
		glVertex2f(x19, y19);
		for(i = 0; i <=triangleAmount;i++) {
			glVertex2f(
		            x19 + (radius19 * cos(i *  twicePi19 / triangleAmount)),
			    y19 + (radius19 * sin(i * twicePi19 / triangleAmount))
			);
		}
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(79, 43, 19);
	glVertex2f(1.55f, 1.00f);
	glVertex2f(1.25f, 1.00f);
	glVertex2f(1.25f, 2.05f);
	glVertex2f(1.55f, 2.05f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(173, 99, 38);
	glVertex2f(1.75f, 3.00f);
	glVertex2f(1.05f, 3.00f);
	glVertex2f(1.05f, 3.20f);
	glVertex2f(1.75f, 3.20f);
	glEnd();
//2nd
	glBegin(GL_QUADS);
	glColor3ub(188, 113, 48);
	glVertex2f(2.75f, 1.00f);
	glVertex2f(2.05f, 1.00f);
	glVertex2f(2.05f, 3.20f);
	glVertex2f(2.75f, 3.20f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(162, 93, 34);
	glVertex2f(2.75f, 1.00f);
	glVertex2f(2.05f, 1.00f);
	glVertex2f(2.05f, 2.20f);
	glVertex2f(2.75f, 2.20f);
	glEnd();

	GLfloat x20=2.399f; GLfloat y20=2.20f; GLfloat radius20 =0.35f;
	GLfloat twicePi20 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(162, 93, 34);
		glVertex2f(x20, y20);
		for(i = 0; i <=triangleAmount;i++) {
			glVertex2f(
		            x20 + (radius20 * cos(i *  twicePi20 / triangleAmount)),
			    y20 + (radius20 * sin(i * twicePi20 / triangleAmount))
			);
		}
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(79, 43, 19);
	glVertex2f(2.55f, 1.00f);
	glVertex2f(2.25f, 1.00f);
	glVertex2f(2.25f, 2.05f);
	glVertex2f(2.55f, 2.05f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(173, 99, 38);
	glVertex2f(2.75f, 3.00f);
	glVertex2f(2.05f, 3.00f);
	glVertex2f(2.05f, 3.20f);
	glVertex2f(2.75f, 3.20f);
	glEnd();
//3rd
	glBegin(GL_QUADS);
	glColor3ub(188, 113, 48);
	glVertex2f(3.75f, 1.00f);
	glVertex2f(3.05f, 1.00f);
	glVertex2f(3.05f, 3.20f);
	glVertex2f(3.75f, 3.20f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(162, 93, 34);
	glVertex2f(3.75f, 1.00f);
	glVertex2f(3.05f, 1.00f);
	glVertex2f(3.05f, 2.20f);
	glVertex2f(3.75f, 2.20f);
	glEnd();

	GLfloat x21=3.399f; GLfloat y21=2.20f; GLfloat radius21 =0.35f;
	GLfloat twicePi21 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(162, 93, 34);
		glVertex2f(x21, y21);
		for(i = 0; i <=triangleAmount;i++) {
			glVertex2f(
		            x21 + (radius21 * cos(i *  twicePi21 / triangleAmount)),
			    y21 + (radius21 * sin(i * twicePi21 / triangleAmount))
			);
		}
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(79, 43, 19);
	glVertex2f(3.55f, 1.00f);
	glVertex2f(3.25f, 1.00f);
	glVertex2f(3.25f, 2.05f);
	glVertex2f(3.55f, 2.05f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(173, 99, 38);
	glVertex2f(3.75f, 3.00f);
	glVertex2f(3.05f, 3.00f);
	glVertex2f(3.05f, 3.20f);
	glVertex2f(3.75f, 3.20f);
	glEnd();
//4th
	glBegin(GL_QUADS);
	glColor3ub(188, 113, 48);
	glVertex2f(4.75f, 1.00f);
	glVertex2f(4.05f, 1.00f);
	glVertex2f(4.05f, 3.20f);
	glVertex2f(4.75f, 3.20f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(162, 93, 34);
	glVertex2f(4.75f, 1.00f);
	glVertex2f(4.05f, 1.00f);
	glVertex2f(4.05f, 2.20f);
	glVertex2f(4.75f, 2.20f);
	glEnd();

	GLfloat x22=4.399f; GLfloat y22=2.20f; GLfloat radius22 =0.35f;
	GLfloat twicePi22 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(162, 93, 34);
		glVertex2f(x22, y22);
		for(i = 0; i <=triangleAmount;i++) {
			glVertex2f(
		            x22 + (radius22 * cos(i *  twicePi22 / triangleAmount)),
			    y22 + (radius22 * sin(i * twicePi22 / triangleAmount))
			);
		}
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(79, 43, 19);
	glVertex2f(4.55f, 1.00f);
	glVertex2f(4.25f, 1.00f);
	glVertex2f(4.25f, 2.05f);
	glVertex2f(4.55f, 2.05f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(173, 99, 38);
	glVertex2f(4.75f, 3.00f);
	glVertex2f(4.05f, 3.00f);
	glVertex2f(4.05f, 3.20f);
	glVertex2f(4.75f, 3.20f);
	glEnd();
//5th
	glBegin(GL_QUADS);
	glColor3ub(188, 113, 48);
	glVertex2f(5.75f, 1.00f);
	glVertex2f(5.05f, 1.00f);
	glVertex2f(5.05f, 3.20f);
	glVertex2f(5.75f, 3.20f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(162, 93, 34);
	glVertex2f(5.75f, 1.00f);
	glVertex2f(5.05f, 1.00f);
	glVertex2f(5.05f, 2.20f);
	glVertex2f(5.75f, 2.20f);
	glEnd();

	GLfloat x23=5.399f; GLfloat y23=2.20f; GLfloat radius23 =0.35f;
	GLfloat twicePi23 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(162, 93, 34);
		glVertex2f(x23, y23);
		for(i = 0; i <=triangleAmount;i++) {
			glVertex2f(
		            x23 + (radius23 * cos(i *  twicePi23 / triangleAmount)),
			    y23 + (radius23 * sin(i * twicePi23 / triangleAmount))
			);
		}
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(79, 43, 19);
	glVertex2f(5.55f, 1.00f);
	glVertex2f(5.25f, 1.00f);
	glVertex2f(5.25f, 2.05f);
	glVertex2f(5.55f, 2.05f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(173, 99, 38);
	glVertex2f(5.75f, 3.00f);
	glVertex2f(5.05f, 3.00f);
	glVertex2f(5.05f, 3.20f);
	glVertex2f(5.75f, 3.20f);
	glEnd();


	///2 pillars
	//1st pillar
	GLfloat x1=-8.0f; GLfloat y1=7.10f; GLfloat radius1 =1.0f;

	GLfloat twicePi1 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(188, 118, 46);
		glVertex2f(x1, y1);
		for(i = 0; i <=triangleAmount;i++) {
			glVertex2f(
		            x1 + (radius1 * cos(i *  twicePi1 / triangleAmount)),
			    y1 + (radius1 * sin(i * twicePi1 / triangleAmount))
			);
		}
	glEnd();

	GLfloat xx1=-8.0f; GLfloat yy1=6.90f; GLfloat radiuss1 =1.0f;

	GLfloat twicePii1 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(225, 150, 82);
		glVertex2f(xx1, yy1);
		for(i = 0; i <=triangleAmount;i++) {
			glVertex2f(
		            xx1 + (radiuss1 * cos(i *  twicePii1 / triangleAmount)),
			    yy1 + (radiuss1 * sin(i * twicePii1 / triangleAmount))
			);
		}
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(225, 150, 82);
	glVertex2f(-9.0f, 1.0f);
	glVertex2f(-7.0f, 1.0f);
	glVertex2f(-7.0f, 5.50f);
	glVertex2f(-9.0f, 5.50f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(164, 93, 29);
	glVertex2f(-9.05f, 5.50f);
	glVertex2f(-6.95f, 5.50f);
	glVertex2f(-6.95f, 5.60f);
	glVertex2f(-9.05f, 5.60f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(225, 150, 82);
	glVertex2f(-7.0f, 5.60f);
	glVertex2f(-9.0f, 5.60f);
	glVertex2f(-9.0f, 7.00f);
	glVertex2f(-7.0f, 7.00f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(164, 93, 29);
	glVertex2f(-9.05f, 7.00f);
	glVertex2f(-6.95f, 7.00f);
	glVertex2f(-6.95f, 7.10f);
	glVertex2f(-9.05f, 7.10f);
	glEnd();
    //pillar border
	glBegin(GL_QUADS);
	glColor3ub(188, 118, 46);
	glVertex2f(-9.0f, 1.0f);
	glVertex2f(-7.0f, 1.0f);
	glVertex2f(-7.0f, 1.10f);
	glVertex2f(-9.0f, 1.10f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(188, 118, 46);
	glVertex2f(-9.0f, 1.0f);
	glVertex2f(-8.90f, 1.0f);
	glVertex2f(-8.90f, 5.50f);
	glVertex2f(-9.0f, 5.50f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(188, 118, 46);
	glVertex2f(-9.0f, 5.60f);
	glVertex2f(-8.90f, 5.60f);
	glVertex2f(-8.90f, 7.00f);
	glVertex2f(-9.0f, 7.00f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(188, 118, 46);
	glVertex2f(-7.0f, 1.0f);
	glVertex2f(-7.10f, 1.0f);
	glVertex2f(-7.10f, 5.50f);
	glVertex2f(-7.0f, 5.50f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(188, 118, 46);
	glVertex2f(-7.0f, 5.60f);
	glVertex2f(-7.10f, 5.60f);
	glVertex2f(-7.10f, 7.00f);
	glVertex2f(-7.0f, 7.00f);
	glEnd();

	//windows
	//1st
	GLfloat x27=-7.3f; GLfloat y27=6.40f; GLfloat radius27 =0.09f;
	GLfloat twicePi27 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(102, 75, 30);
		glVertex2f(x27, y27);
		for(i = 0; i <=triangleAmount;i++) {
			glVertex2f(
		            x27 + (radius27 * cos(i *  twicePi27 / triangleAmount)),
			    y27 + (radius27 * sin(i * twicePi27 / triangleAmount))
			);
		}
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(102, 75, 30);
	glVertex2f(-7.40f, 5.700f);
	glVertex2f(-7.2f, 5.700f);
	glVertex2f(-7.2f, 6.40f);
	glVertex2f(-7.40f, 6.40f);
	glEnd();

	//2nd
	GLfloat x28=-8.7f; GLfloat y28=6.40f; GLfloat radius28 =0.09f;
	GLfloat twicePi28 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(102, 75, 30);
		glVertex2f(x28, y28);
		for(i = 0; i <=triangleAmount;i++) {
			glVertex2f(
		            x28 + (radius28 * cos(i *  twicePi28 / triangleAmount)),
			    y28 + (radius28 * sin(i * twicePi28 / triangleAmount))
			);
		}
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(102, 75, 30);
	glVertex2f(-8.80f, 5.700f);
	glVertex2f(-8.6f, 5.700f);
	glVertex2f(-8.6f, 6.40f);
	glVertex2f(-8.80f, 6.40f);
	glEnd();

    //2nd pillar
    GLfloat x2=8.0f; GLfloat y2=7.10f; GLfloat radius2 =1.0f;

	GLfloat twicePi2 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(188, 118, 46);
		glVertex2f(x2, y2);
		for(i = 0; i <=triangleAmount;i++) {
			glVertex2f(
		            x2 + (radius2 * cos(i *  twicePi2 / triangleAmount)),
			    y2 + (radius2 * sin(i * twicePi2 / triangleAmount))
			);
		}
	glEnd();

	GLfloat xx2=8.0f; GLfloat yy2=6.90f; GLfloat radiuss2 =1.0f;

	GLfloat twicePii2 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(225, 150, 82);
		glVertex2f(xx2, yy2);
		for(i = 0; i <=triangleAmount;i++) {
			glVertex2f(
		            xx2 + (radiuss2 * cos(i *  twicePii2 / triangleAmount)),
			    yy2 + (radiuss2 * sin(i * twicePii2 / triangleAmount))
			);
		}
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(225, 150, 82);
	glVertex2f(9.0f, 1.0f);
	glVertex2f(7.0f, 1.0f);
	glVertex2f(7.0f, 5.50f);
	glVertex2f(9.0f, 5.50f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(164, 93, 29);
	glVertex2f(9.05f, 5.50f);
	glVertex2f(6.95f, 5.50f);
	glVertex2f(6.95f, 5.60f);
	glVertex2f(9.05f, 5.60f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(225, 150, 82);
	glVertex2f(7.0f, 5.60f);
	glVertex2f(9.0f, 5.60f);
	glVertex2f(9.0f, 7.00f);
	glVertex2f(7.0f, 7.00f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(164, 93, 29);
	glVertex2f(9.05f, 7.00f);
	glVertex2f(6.95f, 7.00f);
	glVertex2f(6.95f, 7.10f);
	glVertex2f(9.05f, 7.10f);
	glEnd();

	//windows
	//1st
	GLfloat x26=7.3f; GLfloat y26=6.40f; GLfloat radius26 =0.09f;
	GLfloat twicePi26 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(102, 75, 30);
		glVertex2f(x26, y26);
		for(i = 0; i <=triangleAmount;i++) {
			glVertex2f(
		            x26 + (radius26 * cos(i *  twicePi26 / triangleAmount)),
			    y26 + (radius26 * sin(i * twicePi26 / triangleAmount))
			);
		}
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(102, 75, 30);
	glVertex2f(7.40f, 5.700f);
	glVertex2f(7.2f, 5.700f);
	glVertex2f(7.2f, 6.40f);
	glVertex2f(7.40f, 6.40f);
	glEnd();

	//2nd
	GLfloat x25=8.7f; GLfloat y25=6.40f; GLfloat radius25 =0.09f;
	GLfloat twicePi25 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(102, 75, 30);
		glVertex2f(x25, y25);
		for(i = 0; i <=triangleAmount;i++) {
			glVertex2f(
		            x25 + (radius25 * cos(i *  twicePi25 / triangleAmount)),
			    y25 + (radius25 * sin(i * twicePi25 / triangleAmount))
			);
		}
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(102, 75, 30);
	glVertex2f(8.80f, 5.700f);
	glVertex2f(8.6f, 5.700f);
	glVertex2f(8.6f, 6.40f);
	glVertex2f(8.80f, 6.40f);
	glEnd();


	//pillar border
	glBegin(GL_QUADS);
	glColor3ub(188, 118, 46);
	glVertex2f(9.0f, 1.0f);
	glVertex2f(7.0f, 1.0f);
	glVertex2f(7.0f, 1.10f);
	glVertex2f(9.0f, 1.10f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(188, 118, 46);
	glVertex2f(9.0f, 1.0f);
	glVertex2f(8.90f, 1.0f);
	glVertex2f(8.90f, 5.50f);
	glVertex2f(9.0f, 5.50f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(188, 118, 46);
	glVertex2f(9.0f, 5.60f);
	glVertex2f(8.90f, 5.60f);
	glVertex2f(8.90f, 7.00f);
	glVertex2f(9.0f, 7.00f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(188, 118, 46);
	glVertex2f(7.0f, 1.0f);
	glVertex2f(7.10f, 1.0f);
	glVertex2f(7.10f, 5.50f);
	glVertex2f(7.0f, 5.50f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(188, 118, 46);
	glVertex2f(7.0f, 5.60f);
	glVertex2f(7.10f, 5.60f);
	glVertex2f(7.10f, 7.00f);
	glVertex2f(7.0f, 7.00f);
	glEnd();

/// Sixty Dome Mosque end

//bush
    glBegin(GL_QUADS);
	glColor3ub(51, 153, 51);
	glVertex2f(1.05f, 0.00f);
	glVertex2f(5.0f, -10.0f);
	glVertex2f(5.70f, -10.0f);
	glVertex2f(1.750f, 0.00f);
	glEnd();

    glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(1.05f, 0.00f);
	glVertex2f(5.0f, -10.00f);
	glEnd();

	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(1.75f, 0.00f);
	glVertex2f(5.70f, -10.00f);
	glEnd();


    glBegin(GL_QUADS);
	glColor3ub(51, 153, 51);
	glVertex2f(-1.05f, 0.00f);
	glVertex2f(-5.0f, -10.0f);
	glVertex2f(-5.70f, -10.0f);
	glVertex2f(-1.750f, 0.00f);
	glEnd();

	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(-1.05f, 0.00f);
	glVertex2f(-5.0f, -10.00f);
	glEnd();

	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(-1.75f, 0.00f);
	glVertex2f(-5.70f, -10.00f);
	glEnd();

	//trees
	//left
//1st
glBegin(GL_QUADS);
	glColor3ub(118, 92, 72);
	glVertex2f(-6.05f, -5.00f);
	glVertex2f(-6.70f, -5.00f);
	glVertex2f(-6.70f, -8.50f);
	glVertex2f(-6.05f, -8.50f);
	glEnd();

GLfloat treex1=-6.1f; GLfloat treey1=-4.45f; GLfloat treeradius1 =1.00f;
	GLfloat treetwicePi1 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(1, 110, 1);
		glVertex2f(treex1, treey1);
		for(i = 0; i <=triangleAmount;i++) {
			glVertex2f(
		            treex1 + (treeradius1 * cos(i *  treetwicePi1 / triangleAmount)),
			    treey1 + (treeradius1 * sin(i * treetwicePi1 / triangleAmount))
			);
		}
	glEnd();

	GLfloat treex2=-5.3f; GLfloat treey2=-5.85f; GLfloat treeradius2 =1.00f;
	GLfloat treetwicePi2 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(1, 110, 1);
		glVertex2f(treex2, treey2);
		for(i = 0; i <=triangleAmount;i++) {
			glVertex2f(
		            treex2 + (treeradius2 * cos(i *  treetwicePi2 / triangleAmount)),
			    treey2 + (treeradius2 * sin(i * treetwicePi2 / triangleAmount))
			);
		}
	glEnd();

	GLfloat treex3=-7.1f; GLfloat treey3=-5.85f; GLfloat treeradius3 =1.00f;
	GLfloat treetwicePi3 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(1, 110, 1);
		glVertex2f(treex3, treey3);
		for(i = 0; i <=triangleAmount;i++) {
			glVertex2f(
		            treex3 + (treeradius3 * cos(i *  treetwicePi3 / triangleAmount)),
			    treey3 + (treeradius3 * sin(i * treetwicePi3 / triangleAmount))
			);
		}
	glEnd();

//2nd

glBegin(GL_QUADS);
	glColor3ub(118, 92, 72);
	glVertex2f(-4.35f, -1.00f);
	glVertex2f(-5.00f, -1.00f);
	glVertex2f(-5.00f, -4.50f);
	glVertex2f(-4.35f, -4.50f);
	glEnd();

GLfloat treex7=-4.4f; GLfloat treey7=-0.45f; GLfloat treeradius7 =1.00f;
	GLfloat treetwicePi7 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(1, 110, 1);
		glVertex2f(treex7, treey7);
		for(i = 0; i <=triangleAmount;i++) {
			glVertex2f(
		            treex7 + (treeradius7 * cos(i *  treetwicePi7 / triangleAmount)),
			    treey7 + (treeradius7 * sin(i * treetwicePi7 / triangleAmount))
			);
		}
	glEnd();

	GLfloat treex8=-3.6f; GLfloat treey8=-1.85f; GLfloat treeradius8 =1.00f;
	GLfloat treetwicePi8 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(1, 110, 1);
		glVertex2f(treex8, treey8);
		for(i = 0; i <=triangleAmount;i++) {
			glVertex2f(
		            treex8 + (treeradius8 * cos(i *  treetwicePi8 / triangleAmount)),
			    treey8 + (treeradius8 * sin(i * treetwicePi8 / triangleAmount))
			);
		}
	glEnd();

	GLfloat treex9=-5.4f; GLfloat treey9=-1.85f; GLfloat treeradius9 =1.00f;
	GLfloat treetwicePi9 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(1, 110, 1);
		glVertex2f(treex9, treey9);
		for(i = 0; i <=triangleAmount;i++) {
			glVertex2f(
		            treex9 + (treeradius9 * cos(i *  treetwicePi9 / triangleAmount)),
			    treey9 + (treeradius9 * sin(i * treetwicePi9 / triangleAmount))
			);
		}
	glEnd();

//right
//1st

glBegin(GL_QUADS);
	glColor3ub(118, 92, 72);
	glVertex2f(6.05f, -5.00f);
	glVertex2f(6.70f, -5.00f);
	glVertex2f(6.70f, -8.50f);
	glVertex2f(6.05f, -8.50f);
	glEnd();

GLfloat treex4=6.1f; GLfloat treey4=-4.45f; GLfloat treeradius4 =1.00f;
	GLfloat treetwicePi4 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(1, 110, 1);
		glVertex2f(treex4, treey4);
		for(i = 0; i <=triangleAmount;i++) {
			glVertex2f(
		            treex4 + (treeradius4 * cos(i *  treetwicePi4 / triangleAmount)),
			    treey4 + (treeradius4 * sin(i * treetwicePi4 / triangleAmount))
			);
		}
	glEnd();

	GLfloat treex5=5.3f; GLfloat treey5=-5.85f; GLfloat treeradius5 =1.00f;
	GLfloat treetwicePi5 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(1, 110, 1);
		glVertex2f(treex5, treey5);
		for(i = 0; i <=triangleAmount;i++) {
			glVertex2f(
		            treex5 + (treeradius5 * cos(i *  treetwicePi5 / triangleAmount)),
			    treey5 + (treeradius5 * sin(i * treetwicePi5 / triangleAmount))
			);
		}
	glEnd();

	GLfloat treex6=7.1f; GLfloat treey6=-5.85f; GLfloat treeradius6 =1.00f;
	GLfloat treetwicePi6 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(1, 110, 1);
		glVertex2f(treex6, treey6);
		for(i = 0; i <=triangleAmount;i++) {
			glVertex2f(
		            treex6 + (treeradius6 * cos(i *  treetwicePi6 / triangleAmount)),
			    treey6 + (treeradius6 * sin(i * treetwicePi6 / triangleAmount))
			);
		}
	glEnd();

	//2nd

	glBegin(GL_QUADS);
	glColor3ub(118, 92, 72);
	glVertex2f(4.35f, -1.00f);
	glVertex2f(5.00f, -1.00f);
	glVertex2f(5.00f, -4.50f);
	glVertex2f(4.35f, -4.50f);
	glEnd();

GLfloat treex10=4.4f; GLfloat treey10=-0.45f; GLfloat treeradius10 =1.00f;
	GLfloat treetwicePi10 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(1, 110, 1);
		glVertex2f(treex10, treey10);
		for(i = 0; i <=triangleAmount;i++) {
			glVertex2f(
		            treex10 + (treeradius10 * cos(i *  treetwicePi10 / triangleAmount)),
			    treey10 + (treeradius10 * sin(i * treetwicePi10 / triangleAmount))
			);
		}
	glEnd();

	GLfloat treex11=3.6f; GLfloat treey11=-1.85f; GLfloat treeradius11 =1.00f;
	GLfloat treetwicePi11 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(1, 110, 1);
		glVertex2f(treex11, treey11);
		for(i = 0; i <=triangleAmount;i++) {
			glVertex2f(
		            treex11 + (treeradius11 * cos(i *  treetwicePi11 / triangleAmount)),
			    treey11 + (treeradius11 * sin(i * treetwicePi11 / triangleAmount))
			);
		}
	glEnd();

	GLfloat treex12=5.4f; GLfloat treey12=-1.85f; GLfloat treeradius12 =1.00f;
	GLfloat treetwicePi12 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(1, 110, 1);
		glVertex2f(treex12, treey12);
		for(i = 0; i <=triangleAmount;i++) {
			glVertex2f(
		            treex12 + (treeradius12 * cos(i *  treetwicePi12 / triangleAmount)),
			    treey12 + (treeradius12 * sin(i * treetwicePi12 / triangleAmount))
			);
		}
	glEnd();

///lamp post
//right
//1st
glBegin(GL_QUADS);
	glColor3ub(0, 0, 0);
	glVertex2f(5.00f, -10.00f);
	glVertex2f(5.00f, -3.00f);
	glVertex2f(4.80f, -3.00f);
	glVertex2f(4.80f, -10.00f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(0, 0, 0);
	glVertex2f(5.50f, -3.00f);
	glVertex2f(5.50f, -1.00f);
	glVertex2f(4.30f, -1.00f);
	glVertex2f(4.30f, -3.00f);
	glEnd();

	///light
	glBegin(GL_QUADS);
	glColor3ub(255, 195, 36);
	//glColor3ub(179, 179, 179);
	glVertex2f(5.40f, -2.90f);
	glVertex2f(5.40f, -1.10f);
	glVertex2f(4.40f, -1.10f);
	glVertex2f(4.40f, -2.90f);
	glEnd();

	//lines
    glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(5.20f, -2.90f);
	glVertex2f(5.20f, -1.10f);
	glEnd();

	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(4.60f, -2.90f);
	glVertex2f(4.60f, -1.10f);
	glEnd();

	//2nd
    glBegin(GL_QUADS);
	glColor3ub(0, 0, 0);
	glVertex2f(8.20f, 0.00f);
	glVertex2f(8.20f, 3.00f);
	glVertex2f(8.0f, 3.00f);
	glVertex2f(8.0f, 0.00f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(0, 0, 0);
	glVertex2f(7.80f, 3.00f);
	glVertex2f(7.80f, 4.00f);
	glVertex2f(8.40f, 4.00f);
	glVertex2f(8.40f, 3.00f);
	glEnd();

	///light
	glBegin(GL_QUADS);
	glColor3ub(255, 195, 36);
	//glColor3ub(179, 179, 179);
	glVertex2f(7.85f, 3.05f);
	glVertex2f(7.85f, 3.95f);
	glVertex2f(8.35f, 3.95f);
	glVertex2f(8.35f, 3.05f);
	glEnd();

//lines
    glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(7.95f, 3.05f);
	glVertex2f(7.95f, 4.0f);
	glEnd();

	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(8.25f, 4.0f);
	glVertex2f(8.25f, 3.05f);
	glEnd();


	//left
//1st
glBegin(GL_QUADS);
	glColor3ub(0, 0, 0);
	glVertex2f(-5.00f, -10.00f);
	glVertex2f(-5.00f, -3.00f);
	glVertex2f(-4.80f, -3.00f);
	glVertex2f(-4.80f, -10.00f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(0, 0, 0);
	glVertex2f(-5.50f, -3.00f);
	glVertex2f(-5.50f, -1.00f);
	glVertex2f(-4.30f, -1.00f);
	glVertex2f(-4.30f, -3.00f);
	glEnd();

	///light
	glBegin(GL_QUADS);
	glColor3ub(255, 195, 36);
	//glColor3ub(179, 179, 179);
	glVertex2f(-5.40f, -2.90f);
	glVertex2f(-5.40f, -1.10f);
	glVertex2f(-4.40f, -1.10f);
	glVertex2f(-4.40f, -2.90f);
	glEnd();

//lines
    glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(-5.20f, -2.90f);
	glVertex2f(-5.20f, -1.10f);
	glEnd();

	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(-4.60f, -2.90f);
	glVertex2f(-4.60f, -1.10f);
	glEnd();

//2nd
    glBegin(GL_QUADS);
	glColor3ub(0, 0, 0);
	glVertex2f(-8.20f, 0.00f);
	glVertex2f(-8.20f, 3.00f);
	glVertex2f(-8.0f, 3.00f);
	glVertex2f(-8.0f, 0.00f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(0, 0, 0);
	glVertex2f(-7.80f, 3.00f);
	glVertex2f(-7.80f, 4.00f);
	glVertex2f(-8.40f, 4.00f);
	glVertex2f(-8.40f, 3.00f);
	glEnd();

	///light
	glBegin(GL_QUADS);
	glColor3ub(255, 195, 36);
	//glColor3ub(179, 179, 179);
	glVertex2f(-7.85f, 3.05f);
	glVertex2f(-7.85f, 3.95f);
	glVertex2f(-8.35f, 3.95f);
	glVertex2f(-8.35f, 3.05f);
	glEnd();

//lines
    glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(-7.95f, 3.05f);
	glVertex2f(-7.95f, 4.0f);
	glEnd();

	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(-8.25f, 4.0f);
	glVertex2f(-8.25f, 3.05f);
	glEnd();

	glFlush();

	glutTimerFunc(4000,nightrain_demo,9);
}



void night_demo(int a)
{
    glutDisplayFunc(night);
}




void dayrain() {
	glClear(GL_COLOR_BUFFER_BIT);
	glLineWidth(2.5);

//background start
	glBegin(GL_QUADS);
	//glColor3ub(220, 220, 220);
	glColor3ub(135, 206, 235);
	glVertex2f(-10.0f, 10.0f);
	glVertex2f(-10.0f, -10.0f);
	glVertex2f(10.0f, -10.0f);
	glVertex2f(10.0f, 10.0f);
	glEnd();
//background finish

/////sun start
//
// GLfloat sunx=6.0f; GLfloat suny=8.10f; GLfloat sunradius =0.75f;
//
// GLfloat suntwicePi = 2.0f * PI;
//
 int i;
	int triangleAmount = 500;
//
// glBegin(GL_TRIANGLE_FAN);
//glColor3ub(253, 184,19);
//glVertex2f(sunx, suny);
//for(i = 0; i <=triangleAmount;i++) {
//glVertex2f(
//sunx + (sunradius * cos(i * suntwicePi / triangleAmount)),
//suny + (sunradius * sin(i * suntwicePi / triangleAmount))
//);
//}
//glEnd();
///sun end

///cloud Animation

     glLoadIdentity();

    glPushMatrix();
    glTranslatef(position1,0,0);
///cloud1
    GLfloat cxx=-8.0f; GLfloat cyy=7.10f; GLfloat cradiuss =1.0f;

	GLfloat ctwicePii = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(248, 248,255);
		glVertex2f(cxx, cyy);
		for(i = 0; i <=triangleAmount;i++) {
			glVertex2f(
		            cxx + (cradiuss * cos(i *  ctwicePii / triangleAmount)),
			    cyy + (cradiuss * sin(i * ctwicePii / triangleAmount))
			);
		}
	glEnd();

	///cloud2

	GLfloat cxx1=-9.0f; GLfloat cyy1=7.10f; GLfloat cradiuss1 =1.0f;

	GLfloat ctwicePii1 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(248, 248,255);
		glVertex2f(cxx1, cyy1);
		for(i = 0; i <=triangleAmount;i++) {
			glVertex2f(
		            cxx1 + (cradiuss1 * cos(i *  ctwicePii1 / triangleAmount)),
			    cyy1 + (cradiuss * sin(i * ctwicePii1 / triangleAmount))
			);
		}
	glEnd();

	///cloud3
	GLfloat cxx2=-8.0f; GLfloat cyy2=8.10f; GLfloat cradiuss2 =1.0f;

	GLfloat ctwicePii2 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(248, 248,255);
		glVertex2f(cxx2, cyy2);
		for(i = 0; i <=triangleAmount;i++) {
			glVertex2f(
		            cxx2 + (cradiuss2 * cos(i *  ctwicePii2 / triangleAmount)),
			    cyy2 + (cradiuss2 * sin(i * ctwicePii2 / triangleAmount))
			);
		}
	glEnd();

	///cloud4

	GLfloat cxx3=-1.0f; GLfloat cyy3=9.10f; GLfloat cradiuss3 =1.0f;

	GLfloat ctwicePii3 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(248, 248,255);
		glVertex2f(cxx3, cyy3);
		for(i = 0; i <=triangleAmount;i++) {
			glVertex2f(
		            cxx3 + (cradiuss3 * cos(i *  ctwicePii3 / triangleAmount)),
			    cyy3 + (cradiuss3 * sin(i * ctwicePii3 / triangleAmount))
			);
		}
	glEnd();



	///cloud5

	GLfloat cxx4=0.0f; GLfloat cyy4=9.10f; GLfloat cradiuss4 =1.0f;

	GLfloat ctwicePii4 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(248, 248,255);
		glVertex2f(cxx4, cyy4);
		for(i = 0; i <=triangleAmount;i++) {
			glVertex2f(
		            cxx4 + (cradiuss4 * cos(i *  ctwicePii4 / triangleAmount)),
			    cyy4 + (cradiuss4 * sin(i * ctwicePii4 / triangleAmount))
			);
		}
	glEnd();

	glPopMatrix();
	///cloud end

//grass
glBegin(GL_QUADS);
	glColor3ub(1, 110, 1);
	glVertex2f(-10.0f, 2.00f);
	glVertex2f(-10.0f, -10.0f);
	glVertex2f(10.0f, -10.0f);
	glVertex2f(10.0f, 2.00f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(37, 223, 51);
	glVertex2f(-10.0f, 1.00f);
	glVertex2f(-10.0f, -10.0f);
	glVertex2f(10.0f, -10.0f);
	glVertex2f(10.0f, 1.00f);
	glEnd();

//roads
    glBegin(GL_QUADS);
    glColor3ub(138, 135, 128);
	//glColor3ub(253, 228, 197);
	glVertex2f(-1.05f, 0.00f);
	glVertex2f(-5.0f, -10.0f);
	glVertex2f(5.0f, -10.0f);
	glVertex2f(1.05f, 0.00f);
	glEnd();



/// Sixty Dome Mosque start
	/// platform
	glBegin(GL_QUADS);
	glColor3ub(154, 122, 97);
	glVertex2f(-9.0f, 1.0f);
	glVertex2f(-10.0f, 0.0f);
	glVertex2f(10.0f, 0.0f);
	glVertex2f(9.0f, 1.0f);
	glEnd();

	// platform border
	glBegin(GL_QUADS);
	glColor3ub(115, 91, 72);
	glVertex2f(-10.0f, 0.0f);
	glVertex2f(10.0f, 0.0f);
	glVertex2f(9.90f, 0.10f);
	glVertex2f(-9.90f, 0.10f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(115, 91, 72);
	glVertex2f(-10.0f, 0.0f);
	glVertex2f(-9.90f, 0.0f);
	glVertex2f(-8.90f, 1.00f);
	glVertex2f(-9.0f, 1.0f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(115, 91, 72);
	glVertex2f(10.0f, 0.0f);
	glVertex2f(9.90f, 0.0f);
	glVertex2f(8.90f, 1.00f);
	glVertex2f(9.0f, 1.0f);
	glEnd();

	///building
	glBegin(GL_POLYGON);
	glColor3ub(225, 150, 82);
	glVertex2f(-9.0f, 1.0f);
	glVertex2f(9.0f, 1.0f);
	glVertex2f(9.0f, 5.0f);
	glVertex2f(0.0f, 5.50f);
	glVertex2f(-9.0f, 5.0f);
	glVertex2f(-9.0f, 1.0f);
	glEnd();
//middle circle
//border
	GLfloat x3=0.0f; GLfloat y3=5.60f; GLfloat radius3 =1.00f;
	GLfloat twicePi3 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(188, 118, 46);
		glVertex2f(x3, y3);
		for(i = 0; i <=triangleAmount;i++) {
			glVertex2f(
		            x3 + (radius3 * cos(i *  twicePi3 / triangleAmount)),
			    y3 + (radius3 * sin(i * twicePi3 / triangleAmount))
			);
		}
	glEnd();

	GLfloat xx3=0.0f; GLfloat yy3=5.50f; GLfloat radiuss3 =1.00f;
	GLfloat twicePii3 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(225, 150, 82);
		glVertex2f(xx3, yy3);
		for(i = 0; i <=triangleAmount;i++) {
			glVertex2f(
		            xx3 + (radiuss3 * cos(i *  twicePii3 / triangleAmount)),
			    yy3 + (radiuss3 * sin(i * twicePii3 / triangleAmount))
			);
		}
	glEnd();
//left circle
//1st
	GLfloat x4=-1.7f; GLfloat y4=5.55f; GLfloat radius4 =0.50f;
	GLfloat twicePi4 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(188, 118, 46);
		glVertex2f(x4, y4);
		for(i = 0; i <=triangleAmount;i++) {
			glVertex2f(
		            x4 + (radius4 * cos(i *  twicePi4 / triangleAmount)),
			    y4 + (radius4 * sin(i * twicePi4 / triangleAmount))
			);
		}
	glEnd();

	GLfloat xx4=-1.7f; GLfloat yy4=5.45f; GLfloat radiuss4 =0.50f;
	GLfloat twicePii4 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(225, 150, 82);
		glVertex2f(xx4, yy4);
		for(i = 0; i <=triangleAmount;i++) {
			glVertex2f(
		            xx4 + (radiuss4 * cos(i *  twicePii4 / triangleAmount)),
			    yy4 + (radiuss4 * sin(i * twicePii4 / triangleAmount))
			);
		}
	glEnd();
//2nd
	GLfloat x5=-2.9f; GLfloat y5=5.50f; GLfloat radius5 =0.50f;
	GLfloat twicePi5 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(188, 118, 46);
		glVertex2f(x5, y5);
		for(i = 0; i <=triangleAmount;i++) {
			glVertex2f(
		            x5 + (radius5 * cos(i *  twicePi5 / triangleAmount)),
			    y5 + (radius5 * sin(i * twicePi5 / triangleAmount))
			);
		}
	glEnd();

	GLfloat xx5=-2.9f; GLfloat yy5=5.40f; GLfloat radiuss5 =0.50f;
	GLfloat twicePii5 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(225, 150, 82);
		glVertex2f(xx5, yy5);
		for(i = 0; i <=triangleAmount;i++) {
			glVertex2f(
		            xx5 + (radiuss5 * cos(i *  twicePii5 / triangleAmount)),
			    yy5 + (radiuss5 * sin(i * twicePii5 / triangleAmount))
			);
		}
	glEnd();
//3rd
GLfloat x6=-4.1f; GLfloat y6=5.45f; GLfloat radius6 =0.50f;
	GLfloat twicePi6 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(188, 118, 46);
		glVertex2f(x6, y6);
		for(i = 0; i <=triangleAmount;i++) {
			glVertex2f(
		            x6 + (radius6 * cos(i *  twicePi6 / triangleAmount)),
			    y6 + (radius6 * sin(i * twicePi6 / triangleAmount))
			);
		}
	glEnd();

	GLfloat xx6=-4.1f; GLfloat yy6=5.35f; GLfloat radiuss6 =0.50f;
	GLfloat twicePii6 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(225, 150, 82);
		glVertex2f(xx6, yy6);
		for(i = 0; i <=triangleAmount;i++) {
			glVertex2f(
		            xx6 + (radiuss6 * cos(i *  twicePii6 / triangleAmount)),
			    yy6 + (radiuss6 * sin(i * twicePii6 / triangleAmount))
			);
		}
	glEnd();
//4th
GLfloat x7=-5.3f; GLfloat y7=5.40f; GLfloat radius7 =0.50f;
	GLfloat twicePi7 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(188, 118, 46);
		glVertex2f(x7, y7);
		for(i = 0; i <=triangleAmount;i++) {
			glVertex2f(
		            x7 + (radius7 * cos(i *  twicePi7 / triangleAmount)),
			    y7 + (radius7 * sin(i * twicePi7 / triangleAmount))
			);
		}
	glEnd();

	GLfloat xx7=-5.3f; GLfloat yy7=5.30f; GLfloat radiuss7 =0.50f;
	GLfloat twicePii7 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(225, 150, 82);
		glVertex2f(xx7, yy7);
		for(i = 0; i <=triangleAmount;i++) {
			glVertex2f(
		            xx7 + (radiuss7 * cos(i *  twicePii7 / triangleAmount)),
			    yy7 + (radiuss7 * sin(i * twicePii7 / triangleAmount))
			);
		}
	glEnd();
//5th
    GLfloat x8=-6.4f; GLfloat y8=5.35f; GLfloat radius8 =0.50f;
	GLfloat twicePi8 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(188, 118, 46);
		glVertex2f(x8, y8);
		for(i = 0; i <=triangleAmount;i++) {
			glVertex2f(
		            x8 + (radius8 * cos(i *  twicePi8 / triangleAmount)),
			    y8 + (radius8 * sin(i * twicePi8 / triangleAmount))
			);
		}
	glEnd();

	GLfloat xx8=-6.4f; GLfloat yy8=5.25f; GLfloat radiuss8 =0.50f;
	GLfloat twicePii8 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(225, 150, 82);
		glVertex2f(xx8, yy8);
		for(i = 0; i <=triangleAmount;i++) {
			glVertex2f(
		            xx8 + (radiuss8 * cos(i *  twicePii8 / triangleAmount)),
			    yy8 + (radiuss8 * sin(i * twicePii8 / triangleAmount))
			);
		}
	glEnd();
//right circle
//1st
	GLfloat x9=1.7f; GLfloat y9=5.55f; GLfloat radius9 =0.50f;
	GLfloat twicePi9 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(188, 118, 46);
		glVertex2f(x9, y9);
		for(i = 0; i <=triangleAmount;i++) {
			glVertex2f(
		            x9 + (radius9 * cos(i *  twicePi9 / triangleAmount)),
			    y9 + (radius9 * sin(i * twicePi9 / triangleAmount))
			);
		}
	glEnd();

	GLfloat xx9=1.7f; GLfloat yy9=5.45f; GLfloat radiuss9 =0.50f;
	GLfloat twicePii9 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(225, 150, 82);
		glVertex2f(xx9, yy9);
		for(i = 0; i <=triangleAmount;i++) {
			glVertex2f(
		            xx9 + (radiuss9 * cos(i *  twicePii9 / triangleAmount)),
			    yy9 + (radiuss9 * sin(i * twicePii9 / triangleAmount))
			);
		}
	glEnd();
//2nd
	GLfloat x10=2.9f; GLfloat y10=5.50f; GLfloat radius10 =0.50f;
	GLfloat twicePi10 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(188, 118, 46);
		glVertex2f(x10, y10);
		for(i = 0; i <=triangleAmount;i++) {
			glVertex2f(
		            x10 + (radius10 * cos(i *  twicePi10 / triangleAmount)),
			    y10 + (radius10 * sin(i * twicePi10 / triangleAmount))
			);
		}
	glEnd();

	GLfloat xx10=2.9f; GLfloat yy10=5.40f; GLfloat radiuss10 =0.50f;
	GLfloat twicePii10 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(225, 150, 82);
		glVertex2f(xx10, yy10);
		for(i = 0; i <=triangleAmount;i++) {
			glVertex2f(
		            xx10 + (radiuss10 * cos(i *  twicePii10 / triangleAmount)),
			    yy10 + (radiuss10 * sin(i * twicePii10 / triangleAmount))
			);
		}
	glEnd();
//3rd
GLfloat x11=4.1f; GLfloat y11=5.45f; GLfloat radius11 =0.50f;
	GLfloat twicePi11 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(188, 118, 46);
		glVertex2f(x11, y11);
		for(i = 0; i <=triangleAmount;i++) {
			glVertex2f(
		            x11 + (radius11 * cos(i *  twicePi11 / triangleAmount)),
			    y11 + (radius11 * sin(i * twicePi11 / triangleAmount))
			);
		}
	glEnd();

	GLfloat xx11=4.1f; GLfloat yy11=5.35f; GLfloat radiuss11 =0.50f;
	GLfloat twicePii11 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(225, 150, 82);
		glVertex2f(xx11, yy11);
		for(i = 0; i <=triangleAmount;i++) {
			glVertex2f(
		            xx11 + (radiuss11 * cos(i *  twicePii11 / triangleAmount)),
			    yy11 + (radiuss11 * sin(i * twicePii11 / triangleAmount))
			);
		}
	glEnd();
//4th
GLfloat x12=5.3f; GLfloat y12=5.40f; GLfloat radius12 =0.50f;
	GLfloat twicePi12 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(188, 118, 46);
		glVertex2f(x12, y12);
		for(i = 0; i <=triangleAmount;i++) {
			glVertex2f(
		            x12 + (radius12 * cos(i *  twicePi12 / triangleAmount)),
			    y12 + (radius12 * sin(i * twicePi12 / triangleAmount))
			);
		}
	glEnd();

	GLfloat xx12=5.3f; GLfloat yy12=5.30f; GLfloat radiuss12 =0.50f;
	GLfloat twicePii12 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(225, 150, 82);
		glVertex2f(xx12, yy12);
		for(i = 0; i <=triangleAmount;i++) {
			glVertex2f(
		            xx12 + (radiuss12 * cos(i *  twicePii12 / triangleAmount)),
			    yy12 + (radiuss12 * sin(i * twicePii12 / triangleAmount))
			);
		}
	glEnd();
//5th
GLfloat x13=6.4f; GLfloat y13=5.35f; GLfloat radius13 =0.50f;
	GLfloat twicePi13 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(188, 118, 46);
		glVertex2f(x13, y13);
		for(i = 0; i <=triangleAmount;i++) {
			glVertex2f(
		            x13 + (radius13 * cos(i *  twicePi13 / triangleAmount)),
			    y13 + (radius13 * sin(i * twicePi13 / triangleAmount))
			);
		}
	glEnd();

	GLfloat xx13=6.4f; GLfloat yy13=5.25f; GLfloat radiuss13 =0.50f;
	GLfloat twicePii13 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(225, 150, 82);
		glVertex2f(xx13, yy13);
		for(i = 0; i <=triangleAmount;i++) {
			glVertex2f(
		            xx13 + (radiuss13 * cos(i *  twicePii13 / triangleAmount)),
			    yy13 + (radiuss13 * sin(i * twicePii13 / triangleAmount))
			);
		}
	glEnd();
///border
	glBegin(GL_QUADS);
	glColor3ub(188, 118, 46);
	glVertex2f(-9.0f, 5.0f);
	glVertex2f(0.0f, 5.50f);
	glVertex2f(0.0f, 5.60f);
	glVertex2f(-9.0f, 5.10f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(188, 118, 46);
	glVertex2f(9.0f, 5.0f);
	glVertex2f(0.0f, 5.50f);
	glVertex2f(0.0f, 5.60f);
	glVertex2f(9.0f, 5.10f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(188, 118, 46);
	glVertex2f(-9.0f, 1.0f);
	glVertex2f(9.0f, 1.0f);
	glVertex2f(9.0f, 1.10f);
	glVertex2f(-9.0f, 1.10f);
	glEnd();

//main gate
	glBegin(GL_QUADS);
	glColor3ub(188, 113, 48);
	glVertex2f(-0.5f, 1.00f);
	glVertex2f(0.5f, 1.00f);
	glVertex2f(0.5f, 4.50f);
	glVertex2f(-0.5f, 4.50f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(162, 93, 34);
	glVertex2f(-0.5f, 1.00f);
	glVertex2f(0.5f, 1.00f);
	glVertex2f(0.5f, 3.20f);
	glVertex2f(-0.5f, 3.20f);
	glEnd();

	GLfloat x24=0.0f; GLfloat y24=3.20f; GLfloat radius24 =0.5f;
	GLfloat twicePi24 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(162, 93, 34);
		glVertex2f(x24, y24);
		for(i = 0; i <=triangleAmount;i++) {
			glVertex2f(
		            x24 + (radius24 * cos(i *  twicePi24 / triangleAmount)),
			    y24 + (radius24 * sin(i * twicePi24/ triangleAmount))
			);
		}
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(79, 43, 19);
	glVertex2f(-0.2f, 1.00f);
	glVertex2f(0.2f, 1.00f);
	glVertex2f(0.2f, 2.50f);
	glVertex2f(-0.2f, 2.50f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(173, 99, 38);
	glVertex2f(-0.5f, 4.30f);
	glVertex2f(0.5f, 4.30f);
	glVertex2f(0.5f, 4.50f);
	glVertex2f(-0.5f, 4.50f);
	glEnd();

//left gates
//1st
	glBegin(GL_QUADS);
	glColor3ub(188, 113, 48);
	glVertex2f(-1.75f, 1.00f);
	glVertex2f(-1.05f, 1.00f);
	glVertex2f(-1.05f, 3.20f);
	glVertex2f(-1.75f, 3.20f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(162, 93, 34);
	glVertex2f(-1.75f, 1.00f);
	glVertex2f(-1.05f, 1.00f);
	glVertex2f(-1.05f, 2.20f);
	glVertex2f(-1.75f, 2.20f);
	glEnd();

	GLfloat x14=-1.399f; GLfloat y14=2.20f; GLfloat radius14 =0.35f;
	GLfloat twicePi14 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(162, 93, 34);
		glVertex2f(x14, y14);
		for(i = 0; i <=triangleAmount;i++) {
			glVertex2f(
		            x14 + (radius14 * cos(i *  twicePi14 / triangleAmount)),
			    y14 + (radius14 * sin(i * twicePi14/ triangleAmount))
			);
		}
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(79, 43, 19);
	glVertex2f(-1.55f, 1.00f);
	glVertex2f(-1.25f, 1.00f);
	glVertex2f(-1.25f, 2.05f);
	glVertex2f(-1.55f, 2.05f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(173, 99, 38);
	glVertex2f(-1.75f, 3.00f);
	glVertex2f(-1.05f, 3.00f);
	glVertex2f(-1.05f, 3.20f);
	glVertex2f(-1.75f, 3.20f);
	glEnd();
//2nd
	glBegin(GL_QUADS);
	glColor3ub(188, 113, 48);
	glVertex2f(-2.75f, 1.00f);
	glVertex2f(-2.05f, 1.00f);
	glVertex2f(-2.05f, 3.20f);
	glVertex2f(-2.75f, 3.20f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(162, 93, 34);
	glVertex2f(-2.75f, 1.00f);
	glVertex2f(-2.05f, 1.00f);
	glVertex2f(-2.05f, 2.20f);
	glVertex2f(-2.75f, 2.20f);
	glEnd();

	GLfloat x15=-2.399f; GLfloat y15=2.20f; GLfloat radius15 =0.35f;
	GLfloat twicePi15 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(162, 93, 34);
		glVertex2f(x15, y15);
		for(i = 0; i <=triangleAmount;i++) {
			glVertex2f(
		            x15 + (radius15 * cos(i *  twicePi15 / triangleAmount)),
			    y15 + (radius15 * sin(i * twicePi15 / triangleAmount))
			);
		}
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(79, 43, 19);
	glVertex2f(-2.55f, 1.00f);
	glVertex2f(-2.25f, 1.00f);
	glVertex2f(-2.25f, 2.05f);
	glVertex2f(-2.55f, 2.05f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(173, 99, 38);
	glVertex2f(-2.75f, 3.00f);
	glVertex2f(-2.05f, 3.00f);
	glVertex2f(-2.05f, 3.20f);
	glVertex2f(-2.75f, 3.20f);
	glEnd();
//3rd
	glBegin(GL_QUADS);
	glColor3ub(188, 113, 48);
	glVertex2f(-3.75f, 1.00f);
	glVertex2f(-3.05f, 1.00f);
	glVertex2f(-3.05f, 3.20f);
	glVertex2f(-3.75f, 3.20f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(162, 93, 34);
	glVertex2f(-3.75f, 1.00f);
	glVertex2f(-3.05f, 1.00f);
	glVertex2f(-3.05f, 2.20f);
	glVertex2f(-3.75f, 2.20f);
	glEnd();

	GLfloat x16=-3.399f; GLfloat y16=2.20f; GLfloat radius16 =0.35f;
	GLfloat twicePi16 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(162, 93, 34);
		glVertex2f(x16, y16);
		for(i = 0; i <=triangleAmount;i++) {
			glVertex2f(
		            x16 + (radius16 * cos(i *  twicePi16 / triangleAmount)),
			    y16 + (radius16 * sin(i * twicePi16 / triangleAmount))
			);
		}
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(79, 43, 19);
	glVertex2f(-3.55f, 1.00f);
	glVertex2f(-3.25f, 1.00f);
	glVertex2f(-3.25f, 2.05f);
	glVertex2f(-3.55f, 2.05f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(173, 99, 38);
	glVertex2f(-3.75f, 3.00f);
	glVertex2f(-3.05f, 3.00f);
	glVertex2f(-3.05f, 3.20f);
	glVertex2f(-3.75f, 3.20f);
	glEnd();
//4th
	glBegin(GL_QUADS);
	glColor3ub(188, 113, 48);
	glVertex2f(-4.75f, 1.00f);
	glVertex2f(-4.05f, 1.00f);
	glVertex2f(-4.05f, 3.20f);
	glVertex2f(-4.75f, 3.20f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(162, 93, 34);
	glVertex2f(-4.75f, 1.00f);
	glVertex2f(-4.05f, 1.00f);
	glVertex2f(-4.05f, 2.20f);
	glVertex2f(-4.75f, 2.20f);
	glEnd();

	GLfloat x17=-4.399f; GLfloat y17=2.20f; GLfloat radius17 =0.35f;
	GLfloat twicePi17 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(162, 93, 34);
		glVertex2f(x17, y17);
		for(i = 0; i <=triangleAmount;i++) {
			glVertex2f(
		            x17 + (radius17 * cos(i *  twicePi17 / triangleAmount)),
			    y17 + (radius17 * sin(i * twicePi17 / triangleAmount))
			);
		}
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(79, 43, 19);
	glVertex2f(-4.55f, 1.00f);
	glVertex2f(-4.25f, 1.00f);
	glVertex2f(-4.25f, 2.05f);
	glVertex2f(-4.55f, 2.05f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(173, 99, 38);
	glVertex2f(-4.75f, 3.00f);
	glVertex2f(-4.05f, 3.00f);
	glVertex2f(-4.05f, 3.20f);
	glVertex2f(-4.75f, 3.20f);
	glEnd();

//5th
	glBegin(GL_QUADS);
	glColor3ub(188, 113, 48);
	glVertex2f(-5.75f, 1.00f);
	glVertex2f(-5.05f, 1.00f);
	glVertex2f(-5.05f, 3.20f);
	glVertex2f(-5.75f, 3.20f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(162, 93, 34);
	glVertex2f(-5.75f, 1.00f);
	glVertex2f(-5.05f, 1.00f);
	glVertex2f(-5.05f, 2.20f);
	glVertex2f(-5.75f, 2.20f);
	glEnd();

	GLfloat x18=-5.399f; GLfloat y18=2.20f; GLfloat radius18 =0.35f;
	GLfloat twicePi18 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(162, 93, 34);
		glVertex2f(x18, y18);
		for(i = 0; i <=triangleAmount;i++) {
			glVertex2f(
		            x18 + (radius18 * cos(i *  twicePi18 / triangleAmount)),
			    y18 + (radius18 * sin(i * twicePi18/ triangleAmount))
			);
		}
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(79, 43, 19);
	glVertex2f(-5.55f, 1.00f);
	glVertex2f(-5.25f, 1.00f);
	glVertex2f(-5.25f, 2.05f);
	glVertex2f(-5.55f, 2.05f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(173, 99, 38);
	glVertex2f(-5.75f, 3.00f);
	glVertex2f(-5.05f, 3.00f);
	glVertex2f(-5.05f, 3.20f);
	glVertex2f(-5.75f, 3.20f);
	glEnd();

	//right gates
//1st
	glBegin(GL_QUADS);
	glColor3ub(188, 113, 48);
	glVertex2f(1.75f, 1.00f);
	glVertex2f(1.05f, 1.00f);
	glVertex2f(1.05f, 3.20f);
	glVertex2f(1.75f, 3.20f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(162, 93, 34);
	glVertex2f(1.75f, 1.00f);
	glVertex2f(1.05f, 1.00f);
	glVertex2f(1.05f, 2.20f);
	glVertex2f(1.75f, 2.20f);
	glEnd();

	GLfloat x19=1.399f; GLfloat y19=2.20f; GLfloat radius19 =0.35f;
	GLfloat twicePi19 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(162, 93, 34);
		glVertex2f(x19, y19);
		for(i = 0; i <=triangleAmount;i++) {
			glVertex2f(
		            x19 + (radius19 * cos(i *  twicePi19 / triangleAmount)),
			    y19 + (radius19 * sin(i * twicePi19 / triangleAmount))
			);
		}
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(79, 43, 19);
	glVertex2f(1.55f, 1.00f);
	glVertex2f(1.25f, 1.00f);
	glVertex2f(1.25f, 2.05f);
	glVertex2f(1.55f, 2.05f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(173, 99, 38);
	glVertex2f(1.75f, 3.00f);
	glVertex2f(1.05f, 3.00f);
	glVertex2f(1.05f, 3.20f);
	glVertex2f(1.75f, 3.20f);
	glEnd();
//2nd
	glBegin(GL_QUADS);
	glColor3ub(188, 113, 48);
	glVertex2f(2.75f, 1.00f);
	glVertex2f(2.05f, 1.00f);
	glVertex2f(2.05f, 3.20f);
	glVertex2f(2.75f, 3.20f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(162, 93, 34);
	glVertex2f(2.75f, 1.00f);
	glVertex2f(2.05f, 1.00f);
	glVertex2f(2.05f, 2.20f);
	glVertex2f(2.75f, 2.20f);
	glEnd();

	GLfloat x20=2.399f; GLfloat y20=2.20f; GLfloat radius20 =0.35f;
	GLfloat twicePi20 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(162, 93, 34);
		glVertex2f(x20, y20);
		for(i = 0; i <=triangleAmount;i++) {
			glVertex2f(
		            x20 + (radius20 * cos(i *  twicePi20 / triangleAmount)),
			    y20 + (radius20 * sin(i * twicePi20 / triangleAmount))
			);
		}
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(79, 43, 19);
	glVertex2f(2.55f, 1.00f);
	glVertex2f(2.25f, 1.00f);
	glVertex2f(2.25f, 2.05f);
	glVertex2f(2.55f, 2.05f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(173, 99, 38);
	glVertex2f(2.75f, 3.00f);
	glVertex2f(2.05f, 3.00f);
	glVertex2f(2.05f, 3.20f);
	glVertex2f(2.75f, 3.20f);
	glEnd();
//3rd
	glBegin(GL_QUADS);
	glColor3ub(188, 113, 48);
	glVertex2f(3.75f, 1.00f);
	glVertex2f(3.05f, 1.00f);
	glVertex2f(3.05f, 3.20f);
	glVertex2f(3.75f, 3.20f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(162, 93, 34);
	glVertex2f(3.75f, 1.00f);
	glVertex2f(3.05f, 1.00f);
	glVertex2f(3.05f, 2.20f);
	glVertex2f(3.75f, 2.20f);
	glEnd();

	GLfloat x21=3.399f; GLfloat y21=2.20f; GLfloat radius21 =0.35f;
	GLfloat twicePi21 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(162, 93, 34);
		glVertex2f(x21, y21);
		for(i = 0; i <=triangleAmount;i++) {
			glVertex2f(
		            x21 + (radius21 * cos(i *  twicePi21 / triangleAmount)),
			    y21 + (radius21 * sin(i * twicePi21 / triangleAmount))
			);
		}
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(79, 43, 19);
	glVertex2f(3.55f, 1.00f);
	glVertex2f(3.25f, 1.00f);
	glVertex2f(3.25f, 2.05f);
	glVertex2f(3.55f, 2.05f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(173, 99, 38);
	glVertex2f(3.75f, 3.00f);
	glVertex2f(3.05f, 3.00f);
	glVertex2f(3.05f, 3.20f);
	glVertex2f(3.75f, 3.20f);
	glEnd();
//4th
	glBegin(GL_QUADS);
	glColor3ub(188, 113, 48);
	glVertex2f(4.75f, 1.00f);
	glVertex2f(4.05f, 1.00f);
	glVertex2f(4.05f, 3.20f);
	glVertex2f(4.75f, 3.20f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(162, 93, 34);
	glVertex2f(4.75f, 1.00f);
	glVertex2f(4.05f, 1.00f);
	glVertex2f(4.05f, 2.20f);
	glVertex2f(4.75f, 2.20f);
	glEnd();

	GLfloat x22=4.399f; GLfloat y22=2.20f; GLfloat radius22 =0.35f;
	GLfloat twicePi22 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(162, 93, 34);
		glVertex2f(x22, y22);
		for(i = 0; i <=triangleAmount;i++) {
			glVertex2f(
		            x22 + (radius22 * cos(i *  twicePi22 / triangleAmount)),
			    y22 + (radius22 * sin(i * twicePi22 / triangleAmount))
			);
		}
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(79, 43, 19);
	glVertex2f(4.55f, 1.00f);
	glVertex2f(4.25f, 1.00f);
	glVertex2f(4.25f, 2.05f);
	glVertex2f(4.55f, 2.05f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(173, 99, 38);
	glVertex2f(4.75f, 3.00f);
	glVertex2f(4.05f, 3.00f);
	glVertex2f(4.05f, 3.20f);
	glVertex2f(4.75f, 3.20f);
	glEnd();
//5th
	glBegin(GL_QUADS);
	glColor3ub(188, 113, 48);
	glVertex2f(5.75f, 1.00f);
	glVertex2f(5.05f, 1.00f);
	glVertex2f(5.05f, 3.20f);
	glVertex2f(5.75f, 3.20f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(162, 93, 34);
	glVertex2f(5.75f, 1.00f);
	glVertex2f(5.05f, 1.00f);
	glVertex2f(5.05f, 2.20f);
	glVertex2f(5.75f, 2.20f);
	glEnd();

	GLfloat x23=5.399f; GLfloat y23=2.20f; GLfloat radius23 =0.35f;
	GLfloat twicePi23 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(162, 93, 34);
		glVertex2f(x23, y23);
		for(i = 0; i <=triangleAmount;i++) {
			glVertex2f(
		            x23 + (radius23 * cos(i *  twicePi23 / triangleAmount)),
			    y23 + (radius23 * sin(i * twicePi23 / triangleAmount))
			);
		}
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(79, 43, 19);
	glVertex2f(5.55f, 1.00f);
	glVertex2f(5.25f, 1.00f);
	glVertex2f(5.25f, 2.05f);
	glVertex2f(5.55f, 2.05f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(173, 99, 38);
	glVertex2f(5.75f, 3.00f);
	glVertex2f(5.05f, 3.00f);
	glVertex2f(5.05f, 3.20f);
	glVertex2f(5.75f, 3.20f);
	glEnd();


	///2 pillars
	//1st pillar
	GLfloat x1=-8.0f; GLfloat y1=7.10f; GLfloat radius1 =1.0f;

	GLfloat twicePi1 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(188, 118, 46);
		glVertex2f(x1, y1);
		for(i = 0; i <=triangleAmount;i++) {
			glVertex2f(
		            x1 + (radius1 * cos(i *  twicePi1 / triangleAmount)),
			    y1 + (radius1 * sin(i * twicePi1 / triangleAmount))
			);
		}
	glEnd();

	GLfloat xx1=-8.0f; GLfloat yy1=6.90f; GLfloat radiuss1 =1.0f;

	GLfloat twicePii1 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(225, 150, 82);
		glVertex2f(xx1, yy1);
		for(i = 0; i <=triangleAmount;i++) {
			glVertex2f(
		            xx1 + (radiuss1 * cos(i *  twicePii1 / triangleAmount)),
			    yy1 + (radiuss1 * sin(i * twicePii1 / triangleAmount))
			);
		}
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(225, 150, 82);
	glVertex2f(-9.0f, 1.0f);
	glVertex2f(-7.0f, 1.0f);
	glVertex2f(-7.0f, 5.50f);
	glVertex2f(-9.0f, 5.50f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(164, 93, 29);
	glVertex2f(-9.05f, 5.50f);
	glVertex2f(-6.95f, 5.50f);
	glVertex2f(-6.95f, 5.60f);
	glVertex2f(-9.05f, 5.60f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(225, 150, 82);
	glVertex2f(-7.0f, 5.60f);
	glVertex2f(-9.0f, 5.60f);
	glVertex2f(-9.0f, 7.00f);
	glVertex2f(-7.0f, 7.00f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(164, 93, 29);
	glVertex2f(-9.05f, 7.00f);
	glVertex2f(-6.95f, 7.00f);
	glVertex2f(-6.95f, 7.10f);
	glVertex2f(-9.05f, 7.10f);
	glEnd();
    //pillar border
	glBegin(GL_QUADS);
	glColor3ub(188, 118, 46);
	glVertex2f(-9.0f, 1.0f);
	glVertex2f(-7.0f, 1.0f);
	glVertex2f(-7.0f, 1.10f);
	glVertex2f(-9.0f, 1.10f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(188, 118, 46);
	glVertex2f(-9.0f, 1.0f);
	glVertex2f(-8.90f, 1.0f);
	glVertex2f(-8.90f, 5.50f);
	glVertex2f(-9.0f, 5.50f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(188, 118, 46);
	glVertex2f(-9.0f, 5.60f);
	glVertex2f(-8.90f, 5.60f);
	glVertex2f(-8.90f, 7.00f);
	glVertex2f(-9.0f, 7.00f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(188, 118, 46);
	glVertex2f(-7.0f, 1.0f);
	glVertex2f(-7.10f, 1.0f);
	glVertex2f(-7.10f, 5.50f);
	glVertex2f(-7.0f, 5.50f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(188, 118, 46);
	glVertex2f(-7.0f, 5.60f);
	glVertex2f(-7.10f, 5.60f);
	glVertex2f(-7.10f, 7.00f);
	glVertex2f(-7.0f, 7.00f);
	glEnd();

	//windows
	//1st
	GLfloat x27=-7.3f; GLfloat y27=6.40f; GLfloat radius27 =0.09f;
	GLfloat twicePi27 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(102, 75, 30);
		glVertex2f(x27, y27);
		for(i = 0; i <=triangleAmount;i++) {
			glVertex2f(
		            x27 + (radius27 * cos(i *  twicePi27 / triangleAmount)),
			    y27 + (radius27 * sin(i * twicePi27 / triangleAmount))
			);
		}
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(102, 75, 30);
	glVertex2f(-7.40f, 5.700f);
	glVertex2f(-7.2f, 5.700f);
	glVertex2f(-7.2f, 6.40f);
	glVertex2f(-7.40f, 6.40f);
	glEnd();

	//2nd
	GLfloat x28=-8.7f; GLfloat y28=6.40f; GLfloat radius28 =0.09f;
	GLfloat twicePi28 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(102, 75, 30);
		glVertex2f(x28, y28);
		for(i = 0; i <=triangleAmount;i++) {
			glVertex2f(
		            x28 + (radius28 * cos(i *  twicePi28 / triangleAmount)),
			    y28 + (radius28 * sin(i * twicePi28 / triangleAmount))
			);
		}
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(102, 75, 30);
	glVertex2f(-8.80f, 5.700f);
	glVertex2f(-8.6f, 5.700f);
	glVertex2f(-8.6f, 6.40f);
	glVertex2f(-8.80f, 6.40f);
	glEnd();

    //2nd pillar
    GLfloat x2=8.0f; GLfloat y2=7.10f; GLfloat radius2 =1.0f;

	GLfloat twicePi2 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(188, 118, 46);
		glVertex2f(x2, y2);
		for(i = 0; i <=triangleAmount;i++) {
			glVertex2f(
		            x2 + (radius2 * cos(i *  twicePi2 / triangleAmount)),
			    y2 + (radius2 * sin(i * twicePi2 / triangleAmount))
			);
		}
	glEnd();

	GLfloat xx2=8.0f; GLfloat yy2=6.90f; GLfloat radiuss2 =1.0f;

	GLfloat twicePii2 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(225, 150, 82);
		glVertex2f(xx2, yy2);
		for(i = 0; i <=triangleAmount;i++) {
			glVertex2f(
		            xx2 + (radiuss2 * cos(i *  twicePii2 / triangleAmount)),
			    yy2 + (radiuss2 * sin(i * twicePii2 / triangleAmount))
			);
		}
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(225, 150, 82);
	glVertex2f(9.0f, 1.0f);
	glVertex2f(7.0f, 1.0f);
	glVertex2f(7.0f, 5.50f);
	glVertex2f(9.0f, 5.50f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(164, 93, 29);
	glVertex2f(9.05f, 5.50f);
	glVertex2f(6.95f, 5.50f);
	glVertex2f(6.95f, 5.60f);
	glVertex2f(9.05f, 5.60f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(225, 150, 82);
	glVertex2f(7.0f, 5.60f);
	glVertex2f(9.0f, 5.60f);
	glVertex2f(9.0f, 7.00f);
	glVertex2f(7.0f, 7.00f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(164, 93, 29);
	glVertex2f(9.05f, 7.00f);
	glVertex2f(6.95f, 7.00f);
	glVertex2f(6.95f, 7.10f);
	glVertex2f(9.05f, 7.10f);
	glEnd();

	//windows
	//1st
	GLfloat x26=7.3f; GLfloat y26=6.40f; GLfloat radius26 =0.09f;
	GLfloat twicePi26 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(102, 75, 30);
		glVertex2f(x26, y26);
		for(i = 0; i <=triangleAmount;i++) {
			glVertex2f(
		            x26 + (radius26 * cos(i *  twicePi26 / triangleAmount)),
			    y26 + (radius26 * sin(i * twicePi26 / triangleAmount))
			);
		}
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(102, 75, 30);
	glVertex2f(7.40f, 5.700f);
	glVertex2f(7.2f, 5.700f);
	glVertex2f(7.2f, 6.40f);
	glVertex2f(7.40f, 6.40f);
	glEnd();

	//2nd
	GLfloat x25=8.7f; GLfloat y25=6.40f; GLfloat radius25 =0.09f;
	GLfloat twicePi25 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(102, 75, 30);
		glVertex2f(x25, y25);
		for(i = 0; i <=triangleAmount;i++) {
			glVertex2f(
		            x25 + (radius25 * cos(i *  twicePi25 / triangleAmount)),
			    y25 + (radius25 * sin(i * twicePi25 / triangleAmount))
			);
		}
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(102, 75, 30);
	glVertex2f(8.80f, 5.700f);
	glVertex2f(8.6f, 5.700f);
	glVertex2f(8.6f, 6.40f);
	glVertex2f(8.80f, 6.40f);
	glEnd();


	//pillar border
	glBegin(GL_QUADS);
	glColor3ub(188, 118, 46);
	glVertex2f(9.0f, 1.0f);
	glVertex2f(7.0f, 1.0f);
	glVertex2f(7.0f, 1.10f);
	glVertex2f(9.0f, 1.10f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(188, 118, 46);
	glVertex2f(9.0f, 1.0f);
	glVertex2f(8.90f, 1.0f);
	glVertex2f(8.90f, 5.50f);
	glVertex2f(9.0f, 5.50f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(188, 118, 46);
	glVertex2f(9.0f, 5.60f);
	glVertex2f(8.90f, 5.60f);
	glVertex2f(8.90f, 7.00f);
	glVertex2f(9.0f, 7.00f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(188, 118, 46);
	glVertex2f(7.0f, 1.0f);
	glVertex2f(7.10f, 1.0f);
	glVertex2f(7.10f, 5.50f);
	glVertex2f(7.0f, 5.50f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(188, 118, 46);
	glVertex2f(7.0f, 5.60f);
	glVertex2f(7.10f, 5.60f);
	glVertex2f(7.10f, 7.00f);
	glVertex2f(7.0f, 7.00f);
	glEnd();

/// Sixty Dome Mosque end

//bush
    glBegin(GL_QUADS);
	glColor3ub(51, 153, 51);
	glVertex2f(1.05f, 0.00f);
	glVertex2f(5.0f, -10.0f);
	glVertex2f(5.70f, -10.0f);
	glVertex2f(1.750f, 0.00f);
	glEnd();

    glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(1.05f, 0.00f);
	glVertex2f(5.0f, -10.00f);
	glEnd();

	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(1.75f, 0.00f);
	glVertex2f(5.70f, -10.00f);
	glEnd();


    glBegin(GL_QUADS);
	glColor3ub(51, 153, 51);
	glVertex2f(-1.05f, 0.00f);
	glVertex2f(-5.0f, -10.0f);
	glVertex2f(-5.70f, -10.0f);
	glVertex2f(-1.750f, 0.00f);
	glEnd();

	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(-1.05f, 0.00f);
	glVertex2f(-5.0f, -10.00f);
	glEnd();

	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(-1.75f, 0.00f);
	glVertex2f(-5.70f, -10.00f);
	glEnd();

	//trees
	//left
//1st
glBegin(GL_QUADS);
	glColor3ub(118, 92, 72);
	glVertex2f(-6.05f, -5.00f);
	glVertex2f(-6.70f, -5.00f);
	glVertex2f(-6.70f, -8.50f);
	glVertex2f(-6.05f, -8.50f);
	glEnd();

GLfloat treex1=-6.1f; GLfloat treey1=-4.45f; GLfloat treeradius1 =1.00f;
	GLfloat treetwicePi1 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(1, 110, 1);
		glVertex2f(treex1, treey1);
		for(i = 0; i <=triangleAmount;i++) {
			glVertex2f(
		            treex1 + (treeradius1 * cos(i *  treetwicePi1 / triangleAmount)),
			    treey1 + (treeradius1 * sin(i * treetwicePi1 / triangleAmount))
			);
		}
	glEnd();

	GLfloat treex2=-5.3f; GLfloat treey2=-5.85f; GLfloat treeradius2 =1.00f;
	GLfloat treetwicePi2 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(1, 110, 1);
		glVertex2f(treex2, treey2);
		for(i = 0; i <=triangleAmount;i++) {
			glVertex2f(
		            treex2 + (treeradius2 * cos(i *  treetwicePi2 / triangleAmount)),
			    treey2 + (treeradius2 * sin(i * treetwicePi2 / triangleAmount))
			);
		}
	glEnd();

	GLfloat treex3=-7.1f; GLfloat treey3=-5.85f; GLfloat treeradius3 =1.00f;
	GLfloat treetwicePi3 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(1, 110, 1);
		glVertex2f(treex3, treey3);
		for(i = 0; i <=triangleAmount;i++) {
			glVertex2f(
		            treex3 + (treeradius3 * cos(i *  treetwicePi3 / triangleAmount)),
			    treey3 + (treeradius3 * sin(i * treetwicePi3 / triangleAmount))
			);
		}
	glEnd();

//2nd

glBegin(GL_QUADS);
	glColor3ub(118, 92, 72);
	glVertex2f(-4.35f, -1.00f);
	glVertex2f(-5.00f, -1.00f);
	glVertex2f(-5.00f, -4.50f);
	glVertex2f(-4.35f, -4.50f);
	glEnd();

GLfloat treex7=-4.4f; GLfloat treey7=-0.45f; GLfloat treeradius7 =1.00f;
	GLfloat treetwicePi7 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(1, 110, 1);
		glVertex2f(treex7, treey7);
		for(i = 0; i <=triangleAmount;i++) {
			glVertex2f(
		            treex7 + (treeradius7 * cos(i *  treetwicePi7 / triangleAmount)),
			    treey7 + (treeradius7 * sin(i * treetwicePi7 / triangleAmount))
			);
		}
	glEnd();

	GLfloat treex8=-3.6f; GLfloat treey8=-1.85f; GLfloat treeradius8 =1.00f;
	GLfloat treetwicePi8 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(1, 110, 1);
		glVertex2f(treex8, treey8);
		for(i = 0; i <=triangleAmount;i++) {
			glVertex2f(
		            treex8 + (treeradius8 * cos(i *  treetwicePi8 / triangleAmount)),
			    treey8 + (treeradius8 * sin(i * treetwicePi8 / triangleAmount))
			);
		}
	glEnd();

	GLfloat treex9=-5.4f; GLfloat treey9=-1.85f; GLfloat treeradius9 =1.00f;
	GLfloat treetwicePi9 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(1, 110, 1);
		glVertex2f(treex9, treey9);
		for(i = 0; i <=triangleAmount;i++) {
			glVertex2f(
		            treex9 + (treeradius9 * cos(i *  treetwicePi9 / triangleAmount)),
			    treey9 + (treeradius9 * sin(i * treetwicePi9 / triangleAmount))
			);
		}
	glEnd();

//right
//1st

glBegin(GL_QUADS);
	glColor3ub(118, 92, 72);
	glVertex2f(6.05f, -5.00f);
	glVertex2f(6.70f, -5.00f);
	glVertex2f(6.70f, -8.50f);
	glVertex2f(6.05f, -8.50f);
	glEnd();

GLfloat treex4=6.1f; GLfloat treey4=-4.45f; GLfloat treeradius4 =1.00f;
	GLfloat treetwicePi4 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(1, 110, 1);
		glVertex2f(treex4, treey4);
		for(i = 0; i <=triangleAmount;i++) {
			glVertex2f(
		            treex4 + (treeradius4 * cos(i *  treetwicePi4 / triangleAmount)),
			    treey4 + (treeradius4 * sin(i * treetwicePi4 / triangleAmount))
			);
		}
	glEnd();

	GLfloat treex5=5.3f; GLfloat treey5=-5.85f; GLfloat treeradius5 =1.00f;
	GLfloat treetwicePi5 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(1, 110, 1);
		glVertex2f(treex5, treey5);
		for(i = 0; i <=triangleAmount;i++) {
			glVertex2f(
		            treex5 + (treeradius5 * cos(i *  treetwicePi5 / triangleAmount)),
			    treey5 + (treeradius5 * sin(i * treetwicePi5 / triangleAmount))
			);
		}
	glEnd();

	GLfloat treex6=7.1f; GLfloat treey6=-5.85f; GLfloat treeradius6 =1.00f;
	GLfloat treetwicePi6 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(1, 110, 1);
		glVertex2f(treex6, treey6);
		for(i = 0; i <=triangleAmount;i++) {
			glVertex2f(
		            treex6 + (treeradius6 * cos(i *  treetwicePi6 / triangleAmount)),
			    treey6 + (treeradius6 * sin(i * treetwicePi6 / triangleAmount))
			);
		}
	glEnd();

	//2nd

	glBegin(GL_QUADS);
	glColor3ub(118, 92, 72);
	glVertex2f(4.35f, -1.00f);
	glVertex2f(5.00f, -1.00f);
	glVertex2f(5.00f, -4.50f);
	glVertex2f(4.35f, -4.50f);
	glEnd();

GLfloat treex10=4.4f; GLfloat treey10=-0.45f; GLfloat treeradius10 =1.00f;
	GLfloat treetwicePi10 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(1, 110, 1);
		glVertex2f(treex10, treey10);
		for(i = 0; i <=triangleAmount;i++) {
			glVertex2f(
		            treex10 + (treeradius10 * cos(i *  treetwicePi10 / triangleAmount)),
			    treey10 + (treeradius10 * sin(i * treetwicePi10 / triangleAmount))
			);
		}
	glEnd();

	GLfloat treex11=3.6f; GLfloat treey11=-1.85f; GLfloat treeradius11 =1.00f;
	GLfloat treetwicePi11 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(1, 110, 1);
		glVertex2f(treex11, treey11);
		for(i = 0; i <=triangleAmount;i++) {
			glVertex2f(
		            treex11 + (treeradius11 * cos(i *  treetwicePi11 / triangleAmount)),
			    treey11 + (treeradius11 * sin(i * treetwicePi11 / triangleAmount))
			);
		}
	glEnd();

	GLfloat treex12=5.4f; GLfloat treey12=-1.85f; GLfloat treeradius12 =1.00f;
	GLfloat treetwicePi12 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(1, 110, 1);
		glVertex2f(treex12, treey12);
		for(i = 0; i <=triangleAmount;i++) {
			glVertex2f(
		            treex12 + (treeradius12 * cos(i *  treetwicePi12 / triangleAmount)),
			    treey12 + (treeradius12 * sin(i * treetwicePi12 / triangleAmount))
			);
		}
	glEnd();

///lamp post
//right
//1st
glBegin(GL_QUADS);
	glColor3ub(0, 0, 0);
	glVertex2f(5.00f, -10.00f);
	glVertex2f(5.00f, -3.00f);
	glVertex2f(4.80f, -3.00f);
	glVertex2f(4.80f, -10.00f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(0, 0, 0);
	glVertex2f(5.50f, -3.00f);
	glVertex2f(5.50f, -1.00f);
	glVertex2f(4.30f, -1.00f);
	glVertex2f(4.30f, -3.00f);
	glEnd();

	///light
	glBegin(GL_QUADS);
	glColor3ub(179, 179, 179);
	glVertex2f(5.40f, -2.90f);
	glVertex2f(5.40f, -1.10f);
	glVertex2f(4.40f, -1.10f);
	glVertex2f(4.40f, -2.90f);
	glEnd();

	//lines
    glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(5.20f, -2.90f);
	glVertex2f(5.20f, -1.10f);
	glEnd();

	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(4.60f, -2.90f);
	glVertex2f(4.60f, -1.10f);
	glEnd();

	//2nd
    glBegin(GL_QUADS);
	glColor3ub(0, 0, 0);
	glVertex2f(8.20f, 0.00f);
	glVertex2f(8.20f, 3.00f);
	glVertex2f(8.0f, 3.00f);
	glVertex2f(8.0f, 0.00f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(0, 0, 0);
	glVertex2f(7.80f, 3.00f);
	glVertex2f(7.80f, 4.00f);
	glVertex2f(8.40f, 4.00f);
	glVertex2f(8.40f, 3.00f);
	glEnd();

	///light
	glBegin(GL_QUADS);
	glColor3ub(179, 179, 179);
	glVertex2f(7.85f, 3.05f);
	glVertex2f(7.85f, 3.95f);
	glVertex2f(8.35f, 3.95f);
	glVertex2f(8.35f, 3.05f);
	glEnd();

//lines
    glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(7.95f, 3.05f);
	glVertex2f(7.95f, 4.0f);
	glEnd();

	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(8.25f, 4.0f);
	glVertex2f(8.25f, 3.05f);
	glEnd();


	//left
//1st
glBegin(GL_QUADS);
	glColor3ub(0, 0, 0);
	glVertex2f(-5.00f, -10.00f);
	glVertex2f(-5.00f, -3.00f);
	glVertex2f(-4.80f, -3.00f);
	glVertex2f(-4.80f, -10.00f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(0, 0, 0);
	glVertex2f(-5.50f, -3.00f);
	glVertex2f(-5.50f, -1.00f);
	glVertex2f(-4.30f, -1.00f);
	glVertex2f(-4.30f, -3.00f);
	glEnd();

	///light
	glBegin(GL_QUADS);
	glColor3ub(179, 179, 179);
	glVertex2f(-5.40f, -2.90f);
	glVertex2f(-5.40f, -1.10f);
	glVertex2f(-4.40f, -1.10f);
	glVertex2f(-4.40f, -2.90f);
	glEnd();

//lines
    glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(-5.20f, -2.90f);
	glVertex2f(-5.20f, -1.10f);
	glEnd();

	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(-4.60f, -2.90f);
	glVertex2f(-4.60f, -1.10f);
	glEnd();

//2nd
    glBegin(GL_QUADS);
	glColor3ub(0, 0, 0);
	glVertex2f(-8.20f, 0.00f);
	glVertex2f(-8.20f, 3.00f);
	glVertex2f(-8.0f, 3.00f);
	glVertex2f(-8.0f, 0.00f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(0, 0, 0);
	glVertex2f(-7.80f, 3.00f);
	glVertex2f(-7.80f, 4.00f);
	glVertex2f(-8.40f, 4.00f);
	glVertex2f(-8.40f, 3.00f);
	glEnd();

	///light
	glBegin(GL_QUADS);
	glColor3ub(179, 179, 179);
	glVertex2f(-7.85f, 3.05f);
	glVertex2f(-7.85f, 3.95f);
	glVertex2f(-8.35f, 3.95f);
	glVertex2f(-8.35f, 3.05f);
	glEnd();

//lines
    glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(-7.95f, 3.05f);
	glVertex2f(-7.95f, 4.0f);
	glEnd();

	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(-8.25f, 4.0f);
	glVertex2f(-8.25f, 3.05f);
	glEnd();

	///Rain start

    glPushMatrix();
    glTranslatef(position4,position4,0);
     glScalef(1.1,1.1,0);
    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-9.250f, 2.25f);
    glVertex2f(-9.5f, 2.0f);
    glEnd();


    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-8.250f, 2.25f);
    glVertex2f(-8.5f, 2.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-7.250f, 2.25f);
    glVertex2f(-7.5f, 2.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-6.250f, 2.25f);
    glVertex2f(-6.5f, 2.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-5.250f, 2.25f);
    glVertex2f(-5.5f, 2.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-4.250f, 2.25f);
    glVertex2f(-4.5f, 2.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-3.250f, 2.25f);
    glVertex2f(-3.5f, 2.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-2.250f, 2.25f);
    glVertex2f(-2.5f, 2.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-1.250f, 2.25f);
    glVertex2f(-1.5f, 2.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-0.250f, 2.25f);
    glVertex2f(-0.5f,2.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(0.750f, 2.25f);
    glVertex2f(0.5f,2.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(1.750f, 2.25f);
    glVertex2f(1.5f,2.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(2.750f, 2.25f);
    glVertex2f(2.5f,2.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(3.750f, 2.25f);
    glVertex2f(3.5f,2.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(4.750f, 2.25f);
    glVertex2f(4.5f,2.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(5.750f, 2.25f);
    glVertex2f(5.5f,2.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(6.750f, 2.25f);
    glVertex2f(6.5f,2.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(7.750f, 2.25f);
    glVertex2f(7.5f,2.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(8.750f, 2.25f);
    glVertex2f(8.5f,2.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(9.750f, 2.25f);
    glVertex2f(9.5f,2.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(10.750f, 2.25f);
    glVertex2f(10.5f,2.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(11.750f, 2.25f);
    glVertex2f(11.5f,2.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(12.750f, 2.25f);
    glVertex2f(12.5f,2.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(13.750f, 2.25f);
    glVertex2f(13.5f,2.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(14.750f, 2.25f);
    glVertex2f(14.5f,2.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(15.750f, 2.25f);
    glVertex2f(15.5f,2.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(16.750f, 2.25f);
    glVertex2f(16.5f,2.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(17.750f, 2.25f);
    glVertex2f(17.5f,2.0f);
    glEnd();

///2nd line
    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-8.250f, 1.25f);
    glVertex2f(-8.5f, 1.0f);
    glEnd();


    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-7.250f, 1.25f);
    glVertex2f(-7.5f, 1.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-6.250f, 1.25f);
    glVertex2f(-6.5f, 1.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-5.250f, 1.25f);
    glVertex2f(-5.5f, 1.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-4.250f, 1.25f);
    glVertex2f(-4.5f, 1.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-3.250f, 1.25f);
    glVertex2f(-3.5f, 1.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-2.250f, 1.25f);
    glVertex2f(-2.5f, 1.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-1.250f, 1.25f);
    glVertex2f(-1.5f, 1.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-0.250f, 1.25f);
    glVertex2f(-0.5f, 1.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(0.750f, 1.25f);
    glVertex2f(0.5f, 1.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(1.750f, 1.25f);
    glVertex2f(1.5f, 1.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(2.750f, 1.25f);
    glVertex2f(2.5f, 1.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(3.750f, 1.25f);
    glVertex2f(3.5f, 1.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(4.750f, 1.25f);
    glVertex2f(4.5f, 1.0f);
    glEnd();


    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(5.750f, 1.25f);
    glVertex2f(5.5f, 1.0f);
    glEnd();


    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(6.750f, 1.25f);
    glVertex2f(6.5f, 1.0f);
    glEnd();


    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(7.750f, 1.25f);
    glVertex2f(7.5f, 1.0f);
    glEnd();


    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(8.750f, 1.25f);
    glVertex2f(8.5f, 1.0f);
    glEnd();


    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(9.750f, 1.25f);
    glVertex2f(9.5f, 1.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(10.750f, 1.25f);
    glVertex2f(10.5f, 1.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(11.750f, 1.25f);
    glVertex2f(11.5f, 1.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(12.750f, 1.25f);
    glVertex2f(12.5f, 1.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(13.750f, 1.25f);
    glVertex2f(13.5f, 1.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(14.750f, 1.25f);
    glVertex2f(14.5f, 1.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(15.750f, 1.25f);
    glVertex2f(15.5f, 1.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(16.750f, 1.25f);
    glVertex2f(16.5f, 1.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(17.750f, 1.25f);
    glVertex2f(17.5f, 1.0f);
    glEnd();

///line 2 end

///line 3 start
glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(17.750f, 3.25f);
    glVertex2f(17.5f, 3.0f);
    glEnd();

glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(16.750f, 3.25f);
    glVertex2f(16.5f, 3.0f);
    glEnd();

glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(15.750f, 3.25f);
    glVertex2f(15.5f, 3.0f);
    glEnd();

glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(14.750f, 3.25f);
    glVertex2f(14.5f, 3.0f);
    glEnd();

glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(13.750f, 3.25f);
    glVertex2f(13.5f, 3.0f);
    glEnd();

glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(12.750f, 3.25f);
    glVertex2f(12.5f, 3.0f);
    glEnd();

glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(11.750f, 3.25f);
    glVertex2f(11.5f, 3.0f);
    glEnd();

glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(10.750f, 3.25f);
    glVertex2f(10.5f, 3.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(9.750f, 3.25f);
    glVertex2f(9.5f, 3.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(8.750f, 3.25f);
    glVertex2f(8.5f, 3.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(7.750f, 3.25f);
    glVertex2f(7.5f, 3.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(6.750f, 3.25f);
    glVertex2f(6.5f, 3.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(5.750f, 3.25f);
    glVertex2f(5.5f, 3.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(4.750f, 3.25f);
    glVertex2f(4.5f, 3.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(3.750f, 3.25f);
    glVertex2f(3.5f, 3.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(2.750f, 3.25f);
    glVertex2f(2.5f, 3.0f);
    glEnd();


    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(1.750f, 3.25f);
    glVertex2f(1.5f, 3.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(0.750f, 3.25f);
    glVertex2f(0.5f, 3.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-0.25f, 3.25f);
    glVertex2f(-0.5f, 3.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-1.25f, 3.25f);
    glVertex2f(-1.5f, 3.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-2.25f, 3.25f);
    glVertex2f(-2.5f, 3.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-3.25f, 3.25f);
    glVertex2f(-3.5f, 3.0f);
    glEnd();



    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-4.25f, 3.25f);
    glVertex2f(-4.5f, 3.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-5.25f, 3.25f);
    glVertex2f(-5.5f, 3.0f);
    glEnd();



    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-6.25f, 3.25f);
    glVertex2f(-6.5f, 3.0f);
    glEnd();


glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-7.25f, 3.25f);
    glVertex2f(-7.5f, 3.0f);
    glEnd();


glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-8.25f, 3.25f);
    glVertex2f(-8.5f, 3.0f);
    glEnd();


glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-9.25f, 3.25f);
    glVertex2f(-9.5f, 3.0f);
    glEnd();
///4th

glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-9.25f, 4.25f);
    glVertex2f(-9.5f, 4.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-9.25f, 4.25f);
    glVertex2f(-9.5f, 4.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-8.25f, 4.25f);
    glVertex2f(-8.5f, 4.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-7.25f, 4.25f);
    glVertex2f(-7.5f, 4.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-6.25f, 4.25f);
    glVertex2f(-6.5f, 4.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-5.25f, 4.25f);
    glVertex2f(-5.5f, 4.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-4.25f, 4.25f);
    glVertex2f(-4.5f, 4.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-3.25f, 4.25f);
    glVertex2f(-3.5f, 4.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-2.25f, 4.25f);
    glVertex2f(-2.5f, 4.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-1.25f, 4.25f);
    glVertex2f(-1.5f, 4.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-0.25f, 4.25f);
    glVertex2f(-0.5f, 4.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(0.75f, 4.25f);
    glVertex2f(0.5f, 4.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(1.75f, 4.25f);
    glVertex2f(1.5f, 4.0f);
    glEnd();
    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(2.75f, 4.25f);
    glVertex2f(2.5f, 4.0f);
    glEnd();
    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(3.75f, 4.25f);
    glVertex2f(3.5f, 4.0f);
    glEnd();
    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(4.75f, 4.25f);
    glVertex2f(4.5f, 4.0f);
    glEnd();
    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(5.75f, 4.25f);
    glVertex2f(5.5f, 4.0f);
    glEnd();
    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(6.75f, 4.25f);
    glVertex2f(6.5f, 4.0f);
    glEnd();
    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(7.75f, 4.25f);
    glVertex2f(7.5f, 4.0f);
    glEnd();
    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(8.75f, 4.25f);
    glVertex2f(8.5f, 4.0f);
    glEnd();
    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(9.75f, 4.25f);
    glVertex2f(9.5f, 4.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(10.75f, 4.25f);
    glVertex2f(10.5f, 4.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(11.75f, 4.25f);
    glVertex2f(11.5f, 4.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(12.75f, 4.25f);
    glVertex2f(12.5f, 4.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(13.75f, 4.25f);
    glVertex2f(13.5f, 4.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(14.75f, 4.25f);
    glVertex2f(14.5f, 4.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(15.75f, 4.25f);
    glVertex2f(15.5f, 4.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(16.75f, 4.25f);
    glVertex2f(16.5f, 4.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(17.75f, 4.25f);
    glVertex2f(17.5f, 4.0f);
    glEnd();

    ///555
    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(17.75f, 5.25f);
    glVertex2f(17.5f, 5.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(16.75f, 5.25f);
    glVertex2f(16.5f, 5.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(15.75f, 5.25f);
    glVertex2f(15.5f, 5.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(14.75f, 5.25f);
    glVertex2f(14.5f, 5.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(13.75f, 5.25f);
    glVertex2f(13.5f, 5.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(12.75f, 5.25f);
    glVertex2f(12.5f, 5.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(11.75f, 5.25f);
    glVertex2f(11.5f, 5.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(10.75f, 5.25f);
    glVertex2f(10.5f, 5.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(9.75f, 5.25f);
    glVertex2f(9.5f, 5.0f);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(8.75f, 5.25f);
    glVertex2f(8.5f, 5.0f);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(7.75f, 5.25f);
    glVertex2f(7.5f, 5.0f);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(6.75f, 5.25f);
    glVertex2f(6.5f, 5.0f);
    glEnd();
     glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(5.75f, 5.25f);
    glVertex2f(5.5f, 5.0f);
    glEnd();
     glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(4.75f, 5.25f);
    glVertex2f(4.5f, 5.0f);
    glEnd();
     glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(3.75f, 5.25f);
    glVertex2f(3.5f, 5.0f);
    glEnd();
     glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(2.75f, 5.25f);
    glVertex2f(2.5f, 5.0f);
    glEnd();
     glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(1.75f, 5.25f);
    glVertex2f(1.5f, 5.0f);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(0.75f, 5.25f);
    glVertex2f(0.5f, 5.0f);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-0.25f, 5.25f);
    glVertex2f(-0.5f, 5.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-1.25f, 5.25f);
    glVertex2f(-1.5f, 5.0f);
    glEnd();
glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-2.25f, 5.25f);
    glVertex2f(-2.5f, 5.0f);
    glEnd();
glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-3.25f, 5.25f);
    glVertex2f(-3.5f, 5.0f);
    glEnd();
glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-9.25f, 5.25f);
    glVertex2f(-9.5f, 5.0f);
    glEnd();
glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-4.25f, 5.25f);
    glVertex2f(-4.5f, 5.0f);
    glEnd();
glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-5.25f, 5.25f);
    glVertex2f(-5.5f, 5.0f);
    glEnd();
glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-6.25f, 5.25f);
    glVertex2f(-6.5f, 5.0f);
    glEnd();
glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-7.25f, 5.25f);
    glVertex2f(-7.5f, 5.0f);
    glEnd();
glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-8.25f, 5.25f);
    glVertex2f(-8.5f, 5.0f);
    glEnd();
///666

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-8.25f, 6.25f);
    glVertex2f(-8.5f, 6.0f);
    glEnd();


    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-7.25f, 6.25f);
    glVertex2f(-7.5f, 6.0f);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-6.25f, 6.25f);
    glVertex2f(-6.5f, 6.0f);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-5.25f, 6.25f);
    glVertex2f(-5.5f, 6.0f);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-4.25f, 6.25f);
    glVertex2f(-4.5f, 6.0f);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-3.25f, 6.25f);
    glVertex2f(-3.5f, 6.0f);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-2.25f, 6.25f);
    glVertex2f(-2.5f, 6.0f);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-1.25f, 6.25f);
    glVertex2f(-1.5f, 6.0f);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-0.25f, 6.25f);
    glVertex2f(-0.5f, 6.0f);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-9.25f, 6.25f);
    glVertex2f(-9.5f, 6.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(0.75f, 6.25f);
    glVertex2f(0.5f, 6.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(1.75f, 6.25f);
    glVertex2f(1.5f, 6.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(2.75f, 6.25f);
    glVertex2f(2.5f, 6.0f);
    glEnd();
    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(0.75f, 6.25f);
    glVertex2f(0.5f, 6.0f);
    glEnd();
    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(3.75f, 6.25f);
    glVertex2f(3.5f, 6.0f);
    glEnd();
    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(4.75f, 6.25f);
    glVertex2f(4.5f, 6.0f);
    glEnd();
    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(5.75f, 6.25f);
    glVertex2f(5.5f, 6.0f);
    glEnd();
    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(6.75f, 6.25f);
    glVertex2f(6.5f, 6.0f);
    glEnd();
    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(07.75f, 6.25f);
    glVertex2f(07.5f, 6.0f);
    glEnd();
    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(08.75f, 6.25f);
    glVertex2f(08.5f, 6.0f);
    glEnd();
glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(09.75f, 6.25f);
    glVertex2f(09.5f, 6.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(10.75f, 6.25f);
    glVertex2f(10.5f, 6.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(11.75f, 6.25f);
    glVertex2f(11.5f, 6.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(12.75f, 6.25f);
    glVertex2f(12.5f, 6.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(13.75f, 6.25f);
    glVertex2f(13.5f, 6.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(14.75f, 6.25f);
    glVertex2f(14.5f, 6.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(15.75f, 6.25f);
    glVertex2f(15.5f, 6.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(16.75f, 6.25f);
    glVertex2f(16.5f, 6.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(17.75f, 6.25f);
    glVertex2f(17.5f, 6.0f);
    glEnd();

    ///777

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-8.25f, 7.25f);
    glVertex2f(-8.5f, 7.0f);
    glEnd();


    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-7.25f, 7.25f);
    glVertex2f(-7.5f, 7.0f);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-6.25f, 7.25f);
    glVertex2f(-6.5f, 7.0f);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-5.25f, 7.25f);
    glVertex2f(-5.5f, 7.0f);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-4.25f, 7.25f);
    glVertex2f(-4.5f, 7.0f);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-3.25f, 7.25f);
    glVertex2f(-3.5f, 7.0f);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-2.25f, 7.25f);
    glVertex2f(-2.5f, 7.0f);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-1.25f, 7.25f);
    glVertex2f(-1.5f, 7.0f);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-0.25f, 7.25f);
    glVertex2f(-0.5f, 7.0f);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-9.25f, 7.25f);
    glVertex2f(-9.5f, 7.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(0.75f, 7.25f);
    glVertex2f(0.5f, 7.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(1.75f, 7.25f);
    glVertex2f(1.5f, 7.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(2.75f, 7.25f);
    glVertex2f(2.5f, 7.0f);
    glEnd();
    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(0.75f, 7.25f);
    glVertex2f(0.5f, 7.0f);
    glEnd();
    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(3.75f, 7.25f);
    glVertex2f(3.5f, 7.0f);
    glEnd();
    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(4.75f, 7.25f);
    glVertex2f(4.5f, 7.0f);
    glEnd();
    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(5.75f, 7.25f);
    glVertex2f(5.5f, 7.0f);
    glEnd();
    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(6.75f, 7.25f);
    glVertex2f(6.5f, 7.0f);
    glEnd();
    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(07.75f,7.25f);
    glVertex2f(07.5f, 7.0f);
    glEnd();
    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(08.75f, 7.25f);
    glVertex2f(08.5f, 7.0f);
    glEnd();
glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(09.75f, 7.25f);
    glVertex2f(09.5f, 7.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(10.75f, 7.25f);
    glVertex2f(10.5f, 7.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(11.75f, 7.25f);
    glVertex2f(11.5f, 7.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(12.75f, 7.25f);
    glVertex2f(12.5f, 7.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(13.75f, 7.25f);
    glVertex2f(13.5f, 7.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(14.75f, 7.25f);
    glVertex2f(14.5f, 7.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(15.75f, 7.25f);
    glVertex2f(15.5f, 7.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(16.75f, 7.25f);
    glVertex2f(16.5f, 7.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(17.75f, 7.25f);
    glVertex2f(17.5f, 7.0f);
    glEnd();

    ///888

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-8.25f, 8.25f);
    glVertex2f(-8.5f, 8.0f);
    glEnd();


    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-7.25f, 8.25f);
    glVertex2f(-7.5f, 8.0f);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-6.25f, 8.25f);
    glVertex2f(-6.5f, 8.0f);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-5.25f, 8.25f);
    glVertex2f(-5.5f, 8.0f);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-4.25f, 8.25f);
    glVertex2f(-4.5f, 8.0f);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-3.25f, 8.25f);
    glVertex2f(-3.5f, 8.0f);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-2.25f, 8.25f);
    glVertex2f(-2.5f, 8.0f);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-1.25f, 8.25f);
    glVertex2f(-1.5f, 8.0f);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-0.25f, 8.25f);
    glVertex2f(-0.5f, 8.0f);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-9.25f, 8.25f);
    glVertex2f(-9.5f, 8.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(0.75f, 8.25f);
    glVertex2f(0.5f, 8.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(1.75f, 8.25f);
    glVertex2f(1.5f, 8.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(2.75f, 8.25f);
    glVertex2f(2.5f, 8.0f);
    glEnd();
    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(0.75f, 8.25f);
    glVertex2f(0.5f, 8.0f);
    glEnd();
    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(3.75f, 8.25f);
    glVertex2f(3.5f, 8.0f);
    glEnd();
    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(4.75f, 8.25f);
    glVertex2f(4.5f, 8.0f);
    glEnd();
    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(5.75f, 8.25f);
    glVertex2f(5.5f, 8.0f);
    glEnd();
    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(6.75f, 8.25f);
    glVertex2f(6.5f, 8.0f);
    glEnd();
    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(07.75f, 8.25f);
    glVertex2f(07.5f, 8.0f);
    glEnd();
    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(08.75f, 8.25f);
    glVertex2f(08.5f, 8.0f);
    glEnd();
glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(09.75f, 8.25f);
    glVertex2f(09.5f, 8.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(10.75f, 8.25f);
    glVertex2f(10.5f, 8.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(11.75f, 8.25f);
    glVertex2f(11.5f, 8.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(12.75f, 8.25f);
    glVertex2f(12.5f, 8.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(13.75f, 8.25f);
    glVertex2f(13.5f, 8.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(14.75f, 8.25f);
    glVertex2f(14.5f, 8.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(15.75f, 8.25f);
    glVertex2f(15.5f, 8.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(16.75f, 8.25f);
    glVertex2f(16.5f, 8.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(17.75f, 8.25f);
    glVertex2f(17.5f, 8.0f);
    glEnd();


    ///999

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-8.25f, 9.25f);
    glVertex2f(-8.5f, 9.0f);
    glEnd();


    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-7.25f, 9.25f);
    glVertex2f(-7.5f, 9.0f);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-6.25f, 9.25f);
    glVertex2f(-6.5f, 9.0f);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-5.25f, 9.25f);
    glVertex2f(-5.5f, 9.0f);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-4.25f, 9.25f);
    glVertex2f(-4.5f, 9.0f);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-3.25f, 9.25f);
    glVertex2f(-3.5f, 9.0f);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-2.25f, 9.25f);
    glVertex2f(-2.5f, 9.0f);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-1.25f, 9.25f);
    glVertex2f(-1.5f, 9.0f);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-0.25f, 9.25f);
    glVertex2f(-0.5f, 9.0f);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-9.25f, 9.25f);
    glVertex2f(-9.5f, 9.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(0.75f, 9.25f);
    glVertex2f(0.5f, 9.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(1.75f, 9.25f);
    glVertex2f(1.5f, 9.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(2.75f, 9.25f);
    glVertex2f(2.5f, 9.0f);
    glEnd();
    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(0.75f, 9.25f);
    glVertex2f(0.5f, 9.0f);
    glEnd();
    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(3.75f, 9.25f);
    glVertex2f(3.5f, 9.0f);
    glEnd();
    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(4.75f, 9.25f);
    glVertex2f(4.5f, 9.0f);
    glEnd();
    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(5.75f, 9.25f);
    glVertex2f(5.5f, 9.0f);
    glEnd();
    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(6.75f, 9.25f);
    glVertex2f(6.5f, 9.0f);
    glEnd();
    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(07.75f, 9.25f);
    glVertex2f(07.5f, 9.0f);
    glEnd();
    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(08.75f, 9.25f);
    glVertex2f(08.5f, 9.0f);
    glEnd();
glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(09.75f, 9.25f);
    glVertex2f(09.5f, 9.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(10.75f, 9.25f);
    glVertex2f(10.5f, 9.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(11.75f, 9.25f);
    glVertex2f(11.5f, 9.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(12.75f, 9.25f);
    glVertex2f(12.5f, 9.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(13.75f, 9.25f);
    glVertex2f(13.5f, 9.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(14.75f, 9.25f);
    glVertex2f(14.5f, 9.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(15.75f, 9.25f);
    glVertex2f(15.5f, 9.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(16.75f, 9.25f);
    glVertex2f(16.5f, 9.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(17.75f, 9.25f);
    glVertex2f(17.5f, 9.0f);
    glEnd();

    ///10

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-8.25f, 10.25f);
    glVertex2f(-8.5f, 10.0f);
    glEnd();


    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-7.25f, 10.25f);
    glVertex2f(-7.5f, 10.0f);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-6.25f, 10.25f);
    glVertex2f(-6.5f, 10.0f);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-5.25f, 10.25f);
    glVertex2f(-5.5f, 10.0f);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-4.25f, 10.25f);
    glVertex2f(-4.5f, 10.0f);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-3.25f, 10.25f);
    glVertex2f(-3.5f, 10.0f);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-2.25f, 10.25f);
    glVertex2f(-2.5f, 10.0f);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-1.25f, 10.25f);
    glVertex2f(-1.5f, 10.0f);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-0.25f, 10.25f);
    glVertex2f(-0.5f, 10.0f);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-9.25f, 10.25f);
    glVertex2f(-9.5f, 10.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(0.75f, 10.25f);
    glVertex2f(0.5f, 10.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(1.75f, 10.25f);
    glVertex2f(1.5f, 10.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(2.75f, 10.25f);
    glVertex2f(2.5f, 10.0f);
    glEnd();
    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(0.75f, 10.25f);
    glVertex2f(0.5f, 10.0f);
    glEnd();
    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(3.75f, 10.25f);
    glVertex2f(3.5f, 10.0f);
    glEnd();
    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(4.75f, 10.25f);
    glVertex2f(4.5f, 10.0f);
    glEnd();
    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(5.75f, 10.25f);
    glVertex2f(5.5f, 10.0f);
    glEnd();
    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(6.75f, 10.25f);
    glVertex2f(6.5f, 10.0f);
    glEnd();
    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(07.75f, 10.25f);
    glVertex2f(07.5f, 10.0f);
    glEnd();
    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(08.75f, 10.25f);
    glVertex2f(08.5f, 10.0f);
    glEnd();
glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(09.75f, 10.25f);
    glVertex2f(09.5f, 10.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(10.75f, 10.25f);
    glVertex2f(10.5f, 10.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(11.75f, 10.25f);
    glVertex2f(11.5f, 10.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(12.75f, 10.25f);
    glVertex2f(12.5f, 10.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(13.75f, 10.25f);
    glVertex2f(13.5f, 10.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(14.75f, 10.25f);
    glVertex2f(14.5f, 10.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(15.75f, 10.25f);
    glVertex2f(15.5f, 10.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(16.75f, 10.25f);
    glVertex2f(16.5f, 10.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(17.75f, 10.25f);
    glVertex2f(17.5f, 10.0f);
    glEnd();

    ///11

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-8.25f, 11.25f);
    glVertex2f(-8.5f, 11.0f);
    glEnd();


    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-7.25f, 11.25f);
    glVertex2f(-7.5f, 11.0f);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-6.25f, 11.25f);
    glVertex2f(-6.5f, 11.0f);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-5.25f, 11.25f);
    glVertex2f(-5.5f, 11.0f);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-4.25f, 11.25f);
    glVertex2f(-4.5f, 11.0f);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-3.25f, 11.25f);
    glVertex2f(-3.5f, 11.0f);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-2.25f, 11.25f);
    glVertex2f(-2.5f, 11.0f);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-1.25f, 11.25f);
    glVertex2f(-1.5f, 11.0f);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-0.25f, 11.25f);
    glVertex2f(-0.5f, 11.0f);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-9.25f, 11.25f);
    glVertex2f(-9.5f, 11.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(0.75f, 11.25f);
    glVertex2f(0.5f, 11.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(1.75f, 11.25f);
    glVertex2f(1.5f, 11.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(2.75f, 11.25f);
    glVertex2f(2.5f, 11.0f);
    glEnd();
    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(0.75f, 11.25f);
    glVertex2f(0.5f,11.0f);
    glEnd();
    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(3.75f, 11.25f);
    glVertex2f(3.5f, 11.0f);
    glEnd();
    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(4.75f, 11.25f);
    glVertex2f(4.5f, 11.0f);
    glEnd();
    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(5.75f, 11.25f);
    glVertex2f(5.5f, 11.0f);
    glEnd();
    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(6.75f, 11.25f);
    glVertex2f(6.5f, 11.0f);
    glEnd();
    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(07.75f, 11.25f);
    glVertex2f(07.5f, 11.0f);
    glEnd();
    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(08.75f, 11.25f);
    glVertex2f(08.5f, 11.0f);
    glEnd();
glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(09.75f, 11.25f);
    glVertex2f(09.5f, 11.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(10.75f, 11.25f);
    glVertex2f(10.5f, 11.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(11.75f, 11.25f);
    glVertex2f(11.5f, 11.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(12.75f, 11.25f);
    glVertex2f(12.5f, 11.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(13.75f, 11.25f);
    glVertex2f(13.5f, 11.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(14.75f, 11.25f);
    glVertex2f(14.5f, 11.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(15.75f, 11.25f);
    glVertex2f(15.5f, 11.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(16.75f, 11.25f);
    glVertex2f(16.5f, 11.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(17.75f, 11.25f);
    glVertex2f(17.5f, 11.0f);
    glEnd();



    ///second rain row

    glTranslatef(0,-10.0,0);
        glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-9.250f, 2.25f);
    glVertex2f(-9.5f, 2.0f);
    glEnd();


    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-8.250f, 2.25f);
    glVertex2f(-8.5f, 2.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-7.250f, 2.25f);
    glVertex2f(-7.5f, 2.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-6.250f, 2.25f);
    glVertex2f(-6.5f, 2.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-5.250f, 2.25f);
    glVertex2f(-5.5f, 2.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-4.250f, 2.25f);
    glVertex2f(-4.5f, 2.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-3.250f, 2.25f);
    glVertex2f(-3.5f, 2.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-2.250f, 2.25f);
    glVertex2f(-2.5f, 2.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-1.250f, 2.25f);
    glVertex2f(-1.5f, 2.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-0.250f, 2.25f);
    glVertex2f(-0.5f,2.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(0.750f, 2.25f);
    glVertex2f(0.5f,2.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(1.750f, 2.25f);
    glVertex2f(1.5f,2.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(2.750f, 2.25f);
    glVertex2f(2.5f,2.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(3.750f, 2.25f);
    glVertex2f(3.5f,2.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(4.750f, 2.25f);
    glVertex2f(4.5f,2.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(5.750f, 2.25f);
    glVertex2f(5.5f,2.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(6.750f, 2.25f);
    glVertex2f(6.5f,2.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(7.750f, 2.25f);
    glVertex2f(7.5f,2.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(8.750f, 2.25f);
    glVertex2f(8.5f,2.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(9.750f, 2.25f);
    glVertex2f(9.5f,2.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(10.750f, 2.25f);
    glVertex2f(10.5f,2.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(11.750f, 2.25f);
    glVertex2f(11.5f,2.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(12.750f, 2.25f);
    glVertex2f(12.5f,2.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(13.750f, 2.25f);
    glVertex2f(13.5f,2.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(14.750f, 2.25f);
    glVertex2f(14.5f,2.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(15.750f, 2.25f);
    glVertex2f(15.5f,2.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(16.750f, 2.25f);
    glVertex2f(16.5f,2.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(17.750f, 2.25f);
    glVertex2f(17.5f,2.0f);
    glEnd();

///2nd line
    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-8.250f, 1.25f);
    glVertex2f(-8.5f, 1.0f);
    glEnd();


    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-7.250f, 1.25f);
    glVertex2f(-7.5f, 1.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-6.250f, 1.25f);
    glVertex2f(-6.5f, 1.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-5.250f, 1.25f);
    glVertex2f(-5.5f, 1.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-4.250f, 1.25f);
    glVertex2f(-4.5f, 1.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-3.250f, 1.25f);
    glVertex2f(-3.5f, 1.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-2.250f, 1.25f);
    glVertex2f(-2.5f, 1.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-1.250f, 1.25f);
    glVertex2f(-1.5f, 1.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-0.250f, 1.25f);
    glVertex2f(-0.5f, 1.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(0.750f, 1.25f);
    glVertex2f(0.5f, 1.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(1.750f, 1.25f);
    glVertex2f(1.5f, 1.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(2.750f, 1.25f);
    glVertex2f(2.5f, 1.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(3.750f, 1.25f);
    glVertex2f(3.5f, 1.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(4.750f, 1.25f);
    glVertex2f(4.5f, 1.0f);
    glEnd();


    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(5.750f, 1.25f);
    glVertex2f(5.5f, 1.0f);
    glEnd();


    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(6.750f, 1.25f);
    glVertex2f(6.5f, 1.0f);
    glEnd();


    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(7.750f, 1.25f);
    glVertex2f(7.5f, 1.0f);
    glEnd();


    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(8.750f, 1.25f);
    glVertex2f(8.5f, 1.0f);
    glEnd();


    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(9.750f, 1.25f);
    glVertex2f(9.5f, 1.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(10.750f, 1.25f);
    glVertex2f(10.5f, 1.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(11.750f, 1.25f);
    glVertex2f(11.5f, 1.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(12.750f, 1.25f);
    glVertex2f(12.5f, 1.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(13.750f, 1.25f);
    glVertex2f(13.5f, 1.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(14.750f, 1.25f);
    glVertex2f(14.5f, 1.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(15.750f, 1.25f);
    glVertex2f(15.5f, 1.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(16.750f, 1.25f);
    glVertex2f(16.5f, 1.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(17.750f, 1.25f);
    glVertex2f(17.5f, 1.0f);
    glEnd();

///line 2 end

///line 3 start
glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(17.750f, 3.25f);
    glVertex2f(17.5f, 3.0f);
    glEnd();

glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(16.750f, 3.25f);
    glVertex2f(16.5f, 3.0f);
    glEnd();

glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(15.750f, 3.25f);
    glVertex2f(15.5f, 3.0f);
    glEnd();

glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(14.750f, 3.25f);
    glVertex2f(14.5f, 3.0f);
    glEnd();

glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(13.750f, 3.25f);
    glVertex2f(13.5f, 3.0f);
    glEnd();

glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(12.750f, 3.25f);
    glVertex2f(12.5f, 3.0f);
    glEnd();

glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(11.750f, 3.25f);
    glVertex2f(11.5f, 3.0f);
    glEnd();

glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(10.750f, 3.25f);
    glVertex2f(10.5f, 3.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(9.750f, 3.25f);
    glVertex2f(9.5f, 3.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(8.750f, 3.25f);
    glVertex2f(8.5f, 3.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(7.750f, 3.25f);
    glVertex2f(7.5f, 3.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(6.750f, 3.25f);
    glVertex2f(6.5f, 3.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(5.750f, 3.25f);
    glVertex2f(5.5f, 3.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(4.750f, 3.25f);
    glVertex2f(4.5f, 3.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(3.750f, 3.25f);
    glVertex2f(3.5f, 3.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(2.750f, 3.25f);
    glVertex2f(2.5f, 3.0f);
    glEnd();


    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(1.750f, 3.25f);
    glVertex2f(1.5f, 3.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(0.750f, 3.25f);
    glVertex2f(0.5f, 3.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-0.25f, 3.25f);
    glVertex2f(-0.5f, 3.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-1.25f, 3.25f);
    glVertex2f(-1.5f, 3.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-2.25f, 3.25f);
    glVertex2f(-2.5f, 3.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-3.25f, 3.25f);
    glVertex2f(-3.5f, 3.0f);
    glEnd();



    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-4.25f, 3.25f);
    glVertex2f(-4.5f, 3.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-5.25f, 3.25f);
    glVertex2f(-5.5f, 3.0f);
    glEnd();



    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-6.25f, 3.25f);
    glVertex2f(-6.5f, 3.0f);
    glEnd();


glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-7.25f, 3.25f);
    glVertex2f(-7.5f, 3.0f);
    glEnd();


glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-8.25f, 3.25f);
    glVertex2f(-8.5f, 3.0f);
    glEnd();


glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-9.25f, 3.25f);
    glVertex2f(-9.5f, 3.0f);
    glEnd();
///4th

glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-9.25f, 4.25f);
    glVertex2f(-9.5f, 4.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-9.25f, 4.25f);
    glVertex2f(-9.5f, 4.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-8.25f, 4.25f);
    glVertex2f(-8.5f, 4.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-7.25f, 4.25f);
    glVertex2f(-7.5f, 4.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-6.25f, 4.25f);
    glVertex2f(-6.5f, 4.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-5.25f, 4.25f);
    glVertex2f(-5.5f, 4.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-4.25f, 4.25f);
    glVertex2f(-4.5f, 4.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-3.25f, 4.25f);
    glVertex2f(-3.5f, 4.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-2.25f, 4.25f);
    glVertex2f(-2.5f, 4.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-1.25f, 4.25f);
    glVertex2f(-1.5f, 4.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-0.25f, 4.25f);
    glVertex2f(-0.5f, 4.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(0.75f, 4.25f);
    glVertex2f(0.5f, 4.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(1.75f, 4.25f);
    glVertex2f(1.5f, 4.0f);
    glEnd();
    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(2.75f, 4.25f);
    glVertex2f(2.5f, 4.0f);
    glEnd();
    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(3.75f, 4.25f);
    glVertex2f(3.5f, 4.0f);
    glEnd();
    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(4.75f, 4.25f);
    glVertex2f(4.5f, 4.0f);
    glEnd();
    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(5.75f, 4.25f);
    glVertex2f(5.5f, 4.0f);
    glEnd();
    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(6.75f, 4.25f);
    glVertex2f(6.5f, 4.0f);
    glEnd();
    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(7.75f, 4.25f);
    glVertex2f(7.5f, 4.0f);
    glEnd();
    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(8.75f, 4.25f);
    glVertex2f(8.5f, 4.0f);
    glEnd();
    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(9.75f, 4.25f);
    glVertex2f(9.5f, 4.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(10.75f, 4.25f);
    glVertex2f(10.5f, 4.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(11.75f, 4.25f);
    glVertex2f(11.5f, 4.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(12.75f, 4.25f);
    glVertex2f(12.5f, 4.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(13.75f, 4.25f);
    glVertex2f(13.5f, 4.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(14.75f, 4.25f);
    glVertex2f(14.5f, 4.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(15.75f, 4.25f);
    glVertex2f(15.5f, 4.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(16.75f, 4.25f);
    glVertex2f(16.5f, 4.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(17.75f, 4.25f);
    glVertex2f(17.5f, 4.0f);
    glEnd();

    ///555
    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(17.75f, 5.25f);
    glVertex2f(17.5f, 5.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(16.75f, 5.25f);
    glVertex2f(16.5f, 5.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(15.75f, 5.25f);
    glVertex2f(15.5f, 5.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(14.75f, 5.25f);
    glVertex2f(14.5f, 5.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(13.75f, 5.25f);
    glVertex2f(13.5f, 5.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(12.75f, 5.25f);
    glVertex2f(12.5f, 5.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(11.75f, 5.25f);
    glVertex2f(11.5f, 5.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(10.75f, 5.25f);
    glVertex2f(10.5f, 5.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(9.75f, 5.25f);
    glVertex2f(9.5f, 5.0f);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(8.75f, 5.25f);
    glVertex2f(8.5f, 5.0f);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(7.75f, 5.25f);
    glVertex2f(7.5f, 5.0f);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(6.75f, 5.25f);
    glVertex2f(6.5f, 5.0f);
    glEnd();
     glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(5.75f, 5.25f);
    glVertex2f(5.5f, 5.0f);
    glEnd();
     glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(4.75f, 5.25f);
    glVertex2f(4.5f, 5.0f);
    glEnd();
     glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(3.75f, 5.25f);
    glVertex2f(3.5f, 5.0f);
    glEnd();
     glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(2.75f, 5.25f);
    glVertex2f(2.5f, 5.0f);
    glEnd();
     glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(1.75f, 5.25f);
    glVertex2f(1.5f, 5.0f);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(0.75f, 5.25f);
    glVertex2f(0.5f, 5.0f);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-0.25f, 5.25f);
    glVertex2f(-0.5f, 5.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-1.25f, 5.25f);
    glVertex2f(-1.5f, 5.0f);
    glEnd();
glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-2.25f, 5.25f);
    glVertex2f(-2.5f, 5.0f);
    glEnd();
glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-3.25f, 5.25f);
    glVertex2f(-3.5f, 5.0f);
    glEnd();
glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-9.25f, 5.25f);
    glVertex2f(-9.5f, 5.0f);
    glEnd();
glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-4.25f, 5.25f);
    glVertex2f(-4.5f, 5.0f);
    glEnd();
glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-5.25f, 5.25f);
    glVertex2f(-5.5f, 5.0f);
    glEnd();
glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-6.25f, 5.25f);
    glVertex2f(-6.5f, 5.0f);
    glEnd();
glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-7.25f, 5.25f);
    glVertex2f(-7.5f, 5.0f);
    glEnd();
glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-8.25f, 5.25f);
    glVertex2f(-8.5f, 5.0f);
    glEnd();
///666

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-8.25f, 6.25f);
    glVertex2f(-8.5f, 6.0f);
    glEnd();


    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-7.25f, 6.25f);
    glVertex2f(-7.5f, 6.0f);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-6.25f, 6.25f);
    glVertex2f(-6.5f, 6.0f);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-5.25f, 6.25f);
    glVertex2f(-5.5f, 6.0f);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-4.25f, 6.25f);
    glVertex2f(-4.5f, 6.0f);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-3.25f, 6.25f);
    glVertex2f(-3.5f, 6.0f);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-2.25f, 6.25f);
    glVertex2f(-2.5f, 6.0f);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-1.25f, 6.25f);
    glVertex2f(-1.5f, 6.0f);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-0.25f, 6.25f);
    glVertex2f(-0.5f, 6.0f);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-9.25f, 6.25f);
    glVertex2f(-9.5f, 6.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(0.75f, 6.25f);
    glVertex2f(0.5f, 6.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(1.75f, 6.25f);
    glVertex2f(1.5f, 6.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(2.75f, 6.25f);
    glVertex2f(2.5f, 6.0f);
    glEnd();
    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(0.75f, 6.25f);
    glVertex2f(0.5f, 6.0f);
    glEnd();
    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(3.75f, 6.25f);
    glVertex2f(3.5f, 6.0f);
    glEnd();
    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(4.75f, 6.25f);
    glVertex2f(4.5f, 6.0f);
    glEnd();
    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(5.75f, 6.25f);
    glVertex2f(5.5f, 6.0f);
    glEnd();
    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(6.75f, 6.25f);
    glVertex2f(6.5f, 6.0f);
    glEnd();
    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(07.75f, 6.25f);
    glVertex2f(07.5f, 6.0f);
    glEnd();
    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(08.75f, 6.25f);
    glVertex2f(08.5f, 6.0f);
    glEnd();
glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(09.75f, 6.25f);
    glVertex2f(09.5f, 6.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(10.75f, 6.25f);
    glVertex2f(10.5f, 6.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(11.75f, 6.25f);
    glVertex2f(11.5f, 6.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(12.75f, 6.25f);
    glVertex2f(12.5f, 6.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(13.75f, 6.25f);
    glVertex2f(13.5f, 6.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(14.75f, 6.25f);
    glVertex2f(14.5f, 6.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(15.75f, 6.25f);
    glVertex2f(15.5f, 6.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(16.75f, 6.25f);
    glVertex2f(16.5f, 6.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(17.75f, 6.25f);
    glVertex2f(17.5f, 6.0f);
    glEnd();

    ///777

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-8.25f, 7.25f);
    glVertex2f(-8.5f, 7.0f);
    glEnd();


    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-7.25f, 7.25f);
    glVertex2f(-7.5f, 7.0f);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-6.25f, 7.25f);
    glVertex2f(-6.5f, 7.0f);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-5.25f, 7.25f);
    glVertex2f(-5.5f, 7.0f);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-4.25f, 7.25f);
    glVertex2f(-4.5f, 7.0f);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-3.25f, 7.25f);
    glVertex2f(-3.5f, 7.0f);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-2.25f, 7.25f);
    glVertex2f(-2.5f, 7.0f);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-1.25f, 7.25f);
    glVertex2f(-1.5f, 7.0f);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-0.25f, 7.25f);
    glVertex2f(-0.5f, 7.0f);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-9.25f, 7.25f);
    glVertex2f(-9.5f, 7.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(0.75f, 7.25f);
    glVertex2f(0.5f, 7.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(1.75f, 7.25f);
    glVertex2f(1.5f, 7.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(2.75f, 7.25f);
    glVertex2f(2.5f, 7.0f);
    glEnd();
    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(0.75f, 7.25f);
    glVertex2f(0.5f, 7.0f);
    glEnd();
    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(3.75f, 7.25f);
    glVertex2f(3.5f, 7.0f);
    glEnd();
    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(4.75f, 7.25f);
    glVertex2f(4.5f, 7.0f);
    glEnd();
    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(5.75f, 7.25f);
    glVertex2f(5.5f, 7.0f);
    glEnd();
    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(6.75f, 7.25f);
    glVertex2f(6.5f, 7.0f);
    glEnd();
    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(07.75f,7.25f);
    glVertex2f(07.5f, 7.0f);
    glEnd();
    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(08.75f, 7.25f);
    glVertex2f(08.5f, 7.0f);
    glEnd();
glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(09.75f, 7.25f);
    glVertex2f(09.5f, 7.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(10.75f, 7.25f);
    glVertex2f(10.5f, 7.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(11.75f, 7.25f);
    glVertex2f(11.5f, 7.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(12.75f, 7.25f);
    glVertex2f(12.5f, 7.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(13.75f, 7.25f);
    glVertex2f(13.5f, 7.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(14.75f, 7.25f);
    glVertex2f(14.5f, 7.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(15.75f, 7.25f);
    glVertex2f(15.5f, 7.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(16.75f, 7.25f);
    glVertex2f(16.5f, 7.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(17.75f, 7.25f);
    glVertex2f(17.5f, 7.0f);
    glEnd();

    ///888

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-8.25f, 8.25f);
    glVertex2f(-8.5f, 8.0f);
    glEnd();


    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-7.25f, 8.25f);
    glVertex2f(-7.5f, 8.0f);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-6.25f, 8.25f);
    glVertex2f(-6.5f, 8.0f);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-5.25f, 8.25f);
    glVertex2f(-5.5f, 8.0f);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-4.25f, 8.25f);
    glVertex2f(-4.5f, 8.0f);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-3.25f, 8.25f);
    glVertex2f(-3.5f, 8.0f);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-2.25f, 8.25f);
    glVertex2f(-2.5f, 8.0f);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-1.25f, 8.25f);
    glVertex2f(-1.5f, 8.0f);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-0.25f, 8.25f);
    glVertex2f(-0.5f, 8.0f);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-9.25f, 8.25f);
    glVertex2f(-9.5f, 8.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(0.75f, 8.25f);
    glVertex2f(0.5f, 8.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(1.75f, 8.25f);
    glVertex2f(1.5f, 8.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(2.75f, 8.25f);
    glVertex2f(2.5f, 8.0f);
    glEnd();
    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(0.75f, 8.25f);
    glVertex2f(0.5f, 8.0f);
    glEnd();
    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(3.75f, 8.25f);
    glVertex2f(3.5f, 8.0f);
    glEnd();
    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(4.75f, 8.25f);
    glVertex2f(4.5f, 8.0f);
    glEnd();
    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(5.75f, 8.25f);
    glVertex2f(5.5f, 8.0f);
    glEnd();
    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(6.75f, 8.25f);
    glVertex2f(6.5f, 8.0f);
    glEnd();
    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(07.75f, 8.25f);
    glVertex2f(07.5f, 8.0f);
    glEnd();
    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(08.75f, 8.25f);
    glVertex2f(08.5f, 8.0f);
    glEnd();
glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(09.75f, 8.25f);
    glVertex2f(09.5f, 8.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(10.75f, 8.25f);
    glVertex2f(10.5f, 8.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(11.75f, 8.25f);
    glVertex2f(11.5f, 8.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(12.75f, 8.25f);
    glVertex2f(12.5f, 8.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(13.75f, 8.25f);
    glVertex2f(13.5f, 8.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(14.75f, 8.25f);
    glVertex2f(14.5f, 8.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(15.75f, 8.25f);
    glVertex2f(15.5f, 8.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(16.75f, 8.25f);
    glVertex2f(16.5f, 8.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(17.75f, 8.25f);
    glVertex2f(17.5f, 8.0f);
    glEnd();


    ///999

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-8.25f, 9.25f);
    glVertex2f(-8.5f, 9.0f);
    glEnd();


    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-7.25f, 9.25f);
    glVertex2f(-7.5f, 9.0f);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-6.25f, 9.25f);
    glVertex2f(-6.5f, 9.0f);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-5.25f, 9.25f);
    glVertex2f(-5.5f, 9.0f);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-4.25f, 9.25f);
    glVertex2f(-4.5f, 9.0f);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-3.25f, 9.25f);
    glVertex2f(-3.5f, 9.0f);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-2.25f, 9.25f);
    glVertex2f(-2.5f, 9.0f);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-1.25f, 9.25f);
    glVertex2f(-1.5f, 9.0f);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-0.25f, 9.25f);
    glVertex2f(-0.5f, 9.0f);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-9.25f, 9.25f);
    glVertex2f(-9.5f, 9.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(0.75f, 9.25f);
    glVertex2f(0.5f, 9.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(1.75f, 9.25f);
    glVertex2f(1.5f, 9.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(2.75f, 9.25f);
    glVertex2f(2.5f, 9.0f);
    glEnd();
    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(0.75f, 9.25f);
    glVertex2f(0.5f, 9.0f);
    glEnd();
    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(3.75f, 9.25f);
    glVertex2f(3.5f, 9.0f);
    glEnd();
    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(4.75f, 9.25f);
    glVertex2f(4.5f, 9.0f);
    glEnd();
    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(5.75f, 9.25f);
    glVertex2f(5.5f, 9.0f);
    glEnd();
    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(6.75f, 9.25f);
    glVertex2f(6.5f, 9.0f);
    glEnd();
    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(07.75f, 9.25f);
    glVertex2f(07.5f, 9.0f);
    glEnd();
    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(08.75f, 9.25f);
    glVertex2f(08.5f, 9.0f);
    glEnd();
glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(09.75f, 9.25f);
    glVertex2f(09.5f, 9.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(10.75f, 9.25f);
    glVertex2f(10.5f, 9.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(11.75f, 9.25f);
    glVertex2f(11.5f, 9.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(12.75f, 9.25f);
    glVertex2f(12.5f, 9.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(13.75f, 9.25f);
    glVertex2f(13.5f, 9.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(14.75f, 9.25f);
    glVertex2f(14.5f, 9.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(15.75f, 9.25f);
    glVertex2f(15.5f, 9.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(16.75f, 9.25f);
    glVertex2f(16.5f, 9.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(17.75f, 9.25f);
    glVertex2f(17.5f, 9.0f);
    glEnd();

    ///10

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-8.25f, 10.25f);
    glVertex2f(-8.5f, 10.0f);
    glEnd();


    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-7.25f, 10.25f);
    glVertex2f(-7.5f, 10.0f);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-6.25f, 10.25f);
    glVertex2f(-6.5f, 10.0f);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-5.25f, 10.25f);
    glVertex2f(-5.5f, 10.0f);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-4.25f, 10.25f);
    glVertex2f(-4.5f, 10.0f);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-3.25f, 10.25f);
    glVertex2f(-3.5f, 10.0f);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-2.25f, 10.25f);
    glVertex2f(-2.5f, 10.0f);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-1.25f, 10.25f);
    glVertex2f(-1.5f, 10.0f);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-0.25f, 10.25f);
    glVertex2f(-0.5f, 10.0f);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-9.25f, 10.25f);
    glVertex2f(-9.5f, 10.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(0.75f, 10.25f);
    glVertex2f(0.5f, 10.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(1.75f, 10.25f);
    glVertex2f(1.5f, 10.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(2.75f, 10.25f);
    glVertex2f(2.5f, 10.0f);
    glEnd();
    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(0.75f, 10.25f);
    glVertex2f(0.5f, 10.0f);
    glEnd();
    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(3.75f, 10.25f);
    glVertex2f(3.5f, 10.0f);
    glEnd();
    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(4.75f, 10.25f);
    glVertex2f(4.5f, 10.0f);
    glEnd();
    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(5.75f, 10.25f);
    glVertex2f(5.5f, 10.0f);
    glEnd();
    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(6.75f, 10.25f);
    glVertex2f(6.5f, 10.0f);
    glEnd();
    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(07.75f, 10.25f);
    glVertex2f(07.5f, 10.0f);
    glEnd();
    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(08.75f, 10.25f);
    glVertex2f(08.5f, 10.0f);
    glEnd();
glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(09.75f, 10.25f);
    glVertex2f(09.5f, 10.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(10.75f, 10.25f);
    glVertex2f(10.5f, 10.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(11.75f, 10.25f);
    glVertex2f(11.5f, 10.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(12.75f, 10.25f);
    glVertex2f(12.5f, 10.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(13.75f, 10.25f);
    glVertex2f(13.5f, 10.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(14.75f, 10.25f);
    glVertex2f(14.5f, 10.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(15.75f, 10.25f);
    glVertex2f(15.5f, 10.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(16.75f, 10.25f);
    glVertex2f(16.5f, 10.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(17.75f, 10.25f);
    glVertex2f(17.5f, 10.0f);
    glEnd();

    ///11

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-8.25f, 11.25f);
    glVertex2f(-8.5f, 11.0f);
    glEnd();


    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-7.25f, 11.25f);
    glVertex2f(-7.5f, 11.0f);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-6.25f, 11.25f);
    glVertex2f(-6.5f, 11.0f);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-5.25f, 11.25f);
    glVertex2f(-5.5f, 11.0f);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-4.25f, 11.25f);
    glVertex2f(-4.5f, 11.0f);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-3.25f, 11.25f);
    glVertex2f(-3.5f, 11.0f);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-2.25f, 11.25f);
    glVertex2f(-2.5f, 11.0f);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-1.25f, 11.25f);
    glVertex2f(-1.5f, 11.0f);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-0.25f, 11.25f);
    glVertex2f(-0.5f, 11.0f);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(-9.25f, 11.25f);
    glVertex2f(-9.5f, 11.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(0.75f, 11.25f);
    glVertex2f(0.5f, 11.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(1.75f, 11.25f);
    glVertex2f(1.5f, 11.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(2.75f, 11.25f);
    glVertex2f(2.5f, 11.0f);
    glEnd();
    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(0.75f, 11.25f);
    glVertex2f(0.5f,11.0f);
    glEnd();
    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(3.75f, 11.25f);
    glVertex2f(3.5f, 11.0f);
    glEnd();
    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(4.75f, 11.25f);
    glVertex2f(4.5f, 11.0f);
    glEnd();
    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(5.75f, 11.25f);
    glVertex2f(5.5f, 11.0f);
    glEnd();
    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(6.75f, 11.25f);
    glVertex2f(6.5f, 11.0f);
    glEnd();
    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(07.75f, 11.25f);
    glVertex2f(07.5f, 11.0f);
    glEnd();
    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(08.75f, 11.25f);
    glVertex2f(08.5f, 11.0f);
    glEnd();
glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(09.75f, 11.25f);
    glVertex2f(09.5f, 11.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(10.75f, 11.25f);
    glVertex2f(10.5f, 11.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(11.75f, 11.25f);
    glVertex2f(11.5f, 11.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(12.75f, 11.25f);
    glVertex2f(12.5f, 11.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(13.75f, 11.25f);
    glVertex2f(13.5f, 11.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(14.75f, 11.25f);
    glVertex2f(14.5f, 11.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(15.75f, 11.25f);
    glVertex2f(15.5f, 11.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(16.75f, 11.25f);
    glVertex2f(16.5f, 11.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 250,250);
    glVertex2f(17.75f, 11.25f);
    glVertex2f(17.5f, 11.0f);
    glEnd();





    glPopMatrix();
    ///rain End

	glFlush();


	glutTimerFunc(4000,night_demo,9);
}



void dayrain_demo(int a)
{
    glutDisplayFunc(dayrain);
}




void day() {
	glClear(GL_COLOR_BUFFER_BIT);
	glLineWidth(2.5);

//background start
	glBegin(GL_QUADS);
	//glColor3ub(220, 220, 220);
	glColor3ub(135, 206, 235);
	glVertex2f(-10.0f, 10.0f);
	glVertex2f(-10.0f, -10.0f);
	glVertex2f(10.0f, -10.0f);
	glVertex2f(10.0f, 10.0f);
	glEnd();
//background finish




///bird
glPushMatrix();
    glTranslatef(position5,0,0);

glScalef(0.69,0.69,0);
	glBegin(GL_POLYGON);
	glColor3ub(0, 0, 0);
	glVertex2f(-9.0f, 9.3f);
	glVertex2f(-9.5f, 9.5f);
	glVertex2f(-9.5f, 10.0f);
	glEnd();

	glTranslatef(5.0,3.0,0);
	glBegin(GL_POLYGON);
	glColor3ub(0, 0, 0);

	glVertex2f(-9.0f, 9.3f);
	glVertex2f(-9.5f, 9.5f);
	glVertex2f(-9.5f, 10.0f);
	glEnd();

		glTranslatef(2.0,1.0,0);
	glBegin(GL_POLYGON);
	glColor3ub(0, 0, 0);
	glVertex2f(-9.0f, 9.3f);
	glVertex2f(-9.5f, 9.5f);
	glVertex2f(-9.5f, 10.0f);
	glEnd();
glPopMatrix();
glLoadIdentity();


///sun start
glPushMatrix();
    glTranslatef(0,position3,0);
 GLfloat sunx=6.0f; GLfloat suny=6.10f; GLfloat sunradius =0.8f;

 GLfloat suntwicePi = 2.0f * PI;

 int i;
	int triangleAmount = 500;

 glBegin(GL_TRIANGLE_FAN);
glColor3ub(253, 184,19);
glVertex2f(sunx, suny);
for(i = 0; i <=triangleAmount;i++) {
glVertex2f(
sunx + (sunradius * cos(i * suntwicePi / triangleAmount)),
suny + (sunradius * sin(i * suntwicePi / triangleAmount))
);
}
glEnd();
glPopMatrix();
///sun end

///cloud Animation

     glLoadIdentity();

    glPushMatrix();
    glTranslatef(position1,0,0);
///cloud1
    GLfloat cxx=-8.0f; GLfloat cyy=7.10f; GLfloat cradiuss =1.0f;

	GLfloat ctwicePii = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(248, 248,255);
		glVertex2f(cxx, cyy);
		for(i = 0; i <=triangleAmount;i++) {
			glVertex2f(
		            cxx + (cradiuss * cos(i *  ctwicePii / triangleAmount)),
			    cyy + (cradiuss * sin(i * ctwicePii / triangleAmount))
			);
		}
	glEnd();

	///cloud2

	GLfloat cxx1=-9.0f; GLfloat cyy1=7.10f; GLfloat cradiuss1 =1.0f;

	GLfloat ctwicePii1 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(248, 248,255);
		glVertex2f(cxx1, cyy1);
		for(i = 0; i <=triangleAmount;i++) {
			glVertex2f(
		            cxx1 + (cradiuss1 * cos(i *  ctwicePii1 / triangleAmount)),
			    cyy1 + (cradiuss * sin(i * ctwicePii1 / triangleAmount))
			);
		}
	glEnd();

	///cloud3
	GLfloat cxx2=-8.0f; GLfloat cyy2=8.10f; GLfloat cradiuss2 =1.0f;

	GLfloat ctwicePii2 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(248, 248,255);
		glVertex2f(cxx2, cyy2);
		for(i = 0; i <=triangleAmount;i++) {
			glVertex2f(
		            cxx2 + (cradiuss2 * cos(i *  ctwicePii2 / triangleAmount)),
			    cyy2 + (cradiuss2 * sin(i * ctwicePii2 / triangleAmount))
			);
		}
	glEnd();

	///cloud4

	GLfloat cxx3=-1.0f; GLfloat cyy3=9.10f; GLfloat cradiuss3 =1.0f;

	GLfloat ctwicePii3 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(248, 248,255);
		glVertex2f(cxx3, cyy3);
		for(i = 0; i <=triangleAmount;i++) {
			glVertex2f(
		            cxx3 + (cradiuss3 * cos(i *  ctwicePii3 / triangleAmount)),
			    cyy3 + (cradiuss3 * sin(i * ctwicePii3 / triangleAmount))
			);
		}
	glEnd();



	///cloud5

	GLfloat cxx4=0.0f; GLfloat cyy4=9.10f; GLfloat cradiuss4 =1.0f;

	GLfloat ctwicePii4 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(248, 248,255);
		glVertex2f(cxx4, cyy4);
		for(i = 0; i <=triangleAmount;i++) {
			glVertex2f(
		            cxx4 + (cradiuss4 * cos(i *  ctwicePii4 / triangleAmount)),
			    cyy4 + (cradiuss4 * sin(i * ctwicePii4 / triangleAmount))
			);
		}
	glEnd();

	glPopMatrix();
	///cloud end

//grass
glBegin(GL_QUADS);
	glColor3ub(1, 110, 1);
	glVertex2f(-10.0f, 2.00f);
	glVertex2f(-10.0f, -10.0f);
	glVertex2f(10.0f, -10.0f);
	glVertex2f(10.0f, 2.00f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(37, 223, 51);
	glVertex2f(-10.0f, 1.00f);
	glVertex2f(-10.0f, -10.0f);
	glVertex2f(10.0f, -10.0f);
	glVertex2f(10.0f, 1.00f);
	glEnd();

//roads
    glBegin(GL_QUADS);
	glColor3ub(138, 135, 128);
	glVertex2f(-1.05f, 0.00f);
	glVertex2f(-5.0f, -10.0f);
	glVertex2f(5.0f, -10.0f);
	glVertex2f(1.05f, 0.00f);
	glEnd();



/// Sixty Dome Mosque start
	/// platform
	glBegin(GL_QUADS);
	glColor3ub(154, 122, 97);
	glVertex2f(-9.0f, 1.0f);
	glVertex2f(-10.0f, 0.0f);
	glVertex2f(10.0f, 0.0f);
	glVertex2f(9.0f, 1.0f);
	glEnd();

	// platform border
	glBegin(GL_QUADS);
	glColor3ub(115, 91, 72);
	glVertex2f(-10.0f, 0.0f);
	glVertex2f(10.0f, 0.0f);
	glVertex2f(9.90f, 0.10f);
	glVertex2f(-9.90f, 0.10f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(115, 91, 72);
	glVertex2f(-10.0f, 0.0f);
	glVertex2f(-9.90f, 0.0f);
	glVertex2f(-8.90f, 1.00f);
	glVertex2f(-9.0f, 1.0f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(115, 91, 72);
	glVertex2f(10.0f, 0.0f);
	glVertex2f(9.90f, 0.0f);
	glVertex2f(8.90f, 1.00f);
	glVertex2f(9.0f, 1.0f);
	glEnd();

	///building
	glBegin(GL_POLYGON);
	glColor3ub(225, 150, 82);
	glVertex2f(-9.0f, 1.0f);
	glVertex2f(9.0f, 1.0f);
	glVertex2f(9.0f, 5.0f);
	glVertex2f(0.0f, 5.50f);
	glVertex2f(-9.0f, 5.0f);
	glVertex2f(-9.0f, 1.0f);
	glEnd();
//middle circle
//border
	GLfloat x3=0.0f; GLfloat y3=5.60f; GLfloat radius3 =1.00f;
	GLfloat twicePi3 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(188, 118, 46);
		glVertex2f(x3, y3);
		for(i = 0; i <=triangleAmount;i++) {
			glVertex2f(
		            x3 + (radius3 * cos(i *  twicePi3 / triangleAmount)),
			    y3 + (radius3 * sin(i * twicePi3 / triangleAmount))
			);
		}
	glEnd();

	GLfloat xx3=0.0f; GLfloat yy3=5.50f; GLfloat radiuss3 =1.00f;
	GLfloat twicePii3 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(225, 150, 82);
		glVertex2f(xx3, yy3);
		for(i = 0; i <=triangleAmount;i++) {
			glVertex2f(
		            xx3 + (radiuss3 * cos(i *  twicePii3 / triangleAmount)),
			    yy3 + (radiuss3 * sin(i * twicePii3 / triangleAmount))
			);
		}
	glEnd();
//left circle
//1st
	GLfloat x4=-1.7f; GLfloat y4=5.55f; GLfloat radius4 =0.50f;
	GLfloat twicePi4 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(188, 118, 46);
		glVertex2f(x4, y4);
		for(i = 0; i <=triangleAmount;i++) {
			glVertex2f(
		            x4 + (radius4 * cos(i *  twicePi4 / triangleAmount)),
			    y4 + (radius4 * sin(i * twicePi4 / triangleAmount))
			);
		}
	glEnd();

	GLfloat xx4=-1.7f; GLfloat yy4=5.45f; GLfloat radiuss4 =0.50f;
	GLfloat twicePii4 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(225, 150, 82);
		glVertex2f(xx4, yy4);
		for(i = 0; i <=triangleAmount;i++) {
			glVertex2f(
		            xx4 + (radiuss4 * cos(i *  twicePii4 / triangleAmount)),
			    yy4 + (radiuss4 * sin(i * twicePii4 / triangleAmount))
			);
		}
	glEnd();
//2nd
	GLfloat x5=-2.9f; GLfloat y5=5.50f; GLfloat radius5 =0.50f;
	GLfloat twicePi5 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(188, 118, 46);
		glVertex2f(x5, y5);
		for(i = 0; i <=triangleAmount;i++) {
			glVertex2f(
		            x5 + (radius5 * cos(i *  twicePi5 / triangleAmount)),
			    y5 + (radius5 * sin(i * twicePi5 / triangleAmount))
			);
		}
	glEnd();

	GLfloat xx5=-2.9f; GLfloat yy5=5.40f; GLfloat radiuss5 =0.50f;
	GLfloat twicePii5 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(225, 150, 82);
		glVertex2f(xx5, yy5);
		for(i = 0; i <=triangleAmount;i++) {
			glVertex2f(
		            xx5 + (radiuss5 * cos(i *  twicePii5 / triangleAmount)),
			    yy5 + (radiuss5 * sin(i * twicePii5 / triangleAmount))
			);
		}
	glEnd();
//3rd
GLfloat x6=-4.1f; GLfloat y6=5.45f; GLfloat radius6 =0.50f;
	GLfloat twicePi6 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(188, 118, 46);
		glVertex2f(x6, y6);
		for(i = 0; i <=triangleAmount;i++) {
			glVertex2f(
		            x6 + (radius6 * cos(i *  twicePi6 / triangleAmount)),
			    y6 + (radius6 * sin(i * twicePi6 / triangleAmount))
			);
		}
	glEnd();

	GLfloat xx6=-4.1f; GLfloat yy6=5.35f; GLfloat radiuss6 =0.50f;
	GLfloat twicePii6 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(225, 150, 82);
		glVertex2f(xx6, yy6);
		for(i = 0; i <=triangleAmount;i++) {
			glVertex2f(
		            xx6 + (radiuss6 * cos(i *  twicePii6 / triangleAmount)),
			    yy6 + (radiuss6 * sin(i * twicePii6 / triangleAmount))
			);
		}
	glEnd();
//4th
GLfloat x7=-5.3f; GLfloat y7=5.40f; GLfloat radius7 =0.50f;
	GLfloat twicePi7 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(188, 118, 46);
		glVertex2f(x7, y7);
		for(i = 0; i <=triangleAmount;i++) {
			glVertex2f(
		            x7 + (radius7 * cos(i *  twicePi7 / triangleAmount)),
			    y7 + (radius7 * sin(i * twicePi7 / triangleAmount))
			);
		}
	glEnd();

	GLfloat xx7=-5.3f; GLfloat yy7=5.30f; GLfloat radiuss7 =0.50f;
	GLfloat twicePii7 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(225, 150, 82);
		glVertex2f(xx7, yy7);
		for(i = 0; i <=triangleAmount;i++) {
			glVertex2f(
		            xx7 + (radiuss7 * cos(i *  twicePii7 / triangleAmount)),
			    yy7 + (radiuss7 * sin(i * twicePii7 / triangleAmount))
			);
		}
	glEnd();
//5th
    GLfloat x8=-6.4f; GLfloat y8=5.35f; GLfloat radius8 =0.50f;
	GLfloat twicePi8 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(188, 118, 46);
		glVertex2f(x8, y8);
		for(i = 0; i <=triangleAmount;i++) {
			glVertex2f(
		            x8 + (radius8 * cos(i *  twicePi8 / triangleAmount)),
			    y8 + (radius8 * sin(i * twicePi8 / triangleAmount))
			);
		}
	glEnd();

	GLfloat xx8=-6.4f; GLfloat yy8=5.25f; GLfloat radiuss8 =0.50f;
	GLfloat twicePii8 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(225, 150, 82);
		glVertex2f(xx8, yy8);
		for(i = 0; i <=triangleAmount;i++) {
			glVertex2f(
		            xx8 + (radiuss8 * cos(i *  twicePii8 / triangleAmount)),
			    yy8 + (radiuss8 * sin(i * twicePii8 / triangleAmount))
			);
		}
	glEnd();
//right circle
//1st
	GLfloat x9=1.7f; GLfloat y9=5.55f; GLfloat radius9 =0.50f;
	GLfloat twicePi9 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(188, 118, 46);
		glVertex2f(x9, y9);
		for(i = 0; i <=triangleAmount;i++) {
			glVertex2f(
		            x9 + (radius9 * cos(i *  twicePi9 / triangleAmount)),
			    y9 + (radius9 * sin(i * twicePi9 / triangleAmount))
			);
		}
	glEnd();

	GLfloat xx9=1.7f; GLfloat yy9=5.45f; GLfloat radiuss9 =0.50f;
	GLfloat twicePii9 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(225, 150, 82);
		glVertex2f(xx9, yy9);
		for(i = 0; i <=triangleAmount;i++) {
			glVertex2f(
		            xx9 + (radiuss9 * cos(i *  twicePii9 / triangleAmount)),
			    yy9 + (radiuss9 * sin(i * twicePii9 / triangleAmount))
			);
		}
	glEnd();
//2nd
	GLfloat x10=2.9f; GLfloat y10=5.50f; GLfloat radius10 =0.50f;
	GLfloat twicePi10 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(188, 118, 46);
		glVertex2f(x10, y10);
		for(i = 0; i <=triangleAmount;i++) {
			glVertex2f(
		            x10 + (radius10 * cos(i *  twicePi10 / triangleAmount)),
			    y10 + (radius10 * sin(i * twicePi10 / triangleAmount))
			);
		}
	glEnd();

	GLfloat xx10=2.9f; GLfloat yy10=5.40f; GLfloat radiuss10 =0.50f;
	GLfloat twicePii10 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(225, 150, 82);
		glVertex2f(xx10, yy10);
		for(i = 0; i <=triangleAmount;i++) {
			glVertex2f(
		            xx10 + (radiuss10 * cos(i *  twicePii10 / triangleAmount)),
			    yy10 + (radiuss10 * sin(i * twicePii10 / triangleAmount))
			);
		}
	glEnd();
//3rd
GLfloat x11=4.1f; GLfloat y11=5.45f; GLfloat radius11 =0.50f;
	GLfloat twicePi11 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(188, 118, 46);
		glVertex2f(x11, y11);
		for(i = 0; i <=triangleAmount;i++) {
			glVertex2f(
		            x11 + (radius11 * cos(i *  twicePi11 / triangleAmount)),
			    y11 + (radius11 * sin(i * twicePi11 / triangleAmount))
			);
		}
	glEnd();

	GLfloat xx11=4.1f; GLfloat yy11=5.35f; GLfloat radiuss11 =0.50f;
	GLfloat twicePii11 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(225, 150, 82);
		glVertex2f(xx11, yy11);
		for(i = 0; i <=triangleAmount;i++) {
			glVertex2f(
		            xx11 + (radiuss11 * cos(i *  twicePii11 / triangleAmount)),
			    yy11 + (radiuss11 * sin(i * twicePii11 / triangleAmount))
			);
		}
	glEnd();
//4th
GLfloat x12=5.3f; GLfloat y12=5.40f; GLfloat radius12 =0.50f;
	GLfloat twicePi12 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(188, 118, 46);
		glVertex2f(x12, y12);
		for(i = 0; i <=triangleAmount;i++) {
			glVertex2f(
		            x12 + (radius12 * cos(i *  twicePi12 / triangleAmount)),
			    y12 + (radius12 * sin(i * twicePi12 / triangleAmount))
			);
		}
	glEnd();

	GLfloat xx12=5.3f; GLfloat yy12=5.30f; GLfloat radiuss12 =0.50f;
	GLfloat twicePii12 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(225, 150, 82);
		glVertex2f(xx12, yy12);
		for(i = 0; i <=triangleAmount;i++) {
			glVertex2f(
		            xx12 + (radiuss12 * cos(i *  twicePii12 / triangleAmount)),
			    yy12 + (radiuss12 * sin(i * twicePii12 / triangleAmount))
			);
		}
	glEnd();
//5th
GLfloat x13=6.4f; GLfloat y13=5.35f; GLfloat radius13 =0.50f;
	GLfloat twicePi13 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(188, 118, 46);
		glVertex2f(x13, y13);
		for(i = 0; i <=triangleAmount;i++) {
			glVertex2f(
		            x13 + (radius13 * cos(i *  twicePi13 / triangleAmount)),
			    y13 + (radius13 * sin(i * twicePi13 / triangleAmount))
			);
		}
	glEnd();

	GLfloat xx13=6.4f; GLfloat yy13=5.25f; GLfloat radiuss13 =0.50f;
	GLfloat twicePii13 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(225, 150, 82);
		glVertex2f(xx13, yy13);
		for(i = 0; i <=triangleAmount;i++) {
			glVertex2f(
		            xx13 + (radiuss13 * cos(i *  twicePii13 / triangleAmount)),
			    yy13 + (radiuss13 * sin(i * twicePii13 / triangleAmount))
			);
		}
	glEnd();
///border
	glBegin(GL_QUADS);
	glColor3ub(188, 118, 46);
	glVertex2f(-9.0f, 5.0f);
	glVertex2f(0.0f, 5.50f);
	glVertex2f(0.0f, 5.60f);
	glVertex2f(-9.0f, 5.10f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(188, 118, 46);
	glVertex2f(9.0f, 5.0f);
	glVertex2f(0.0f, 5.50f);
	glVertex2f(0.0f, 5.60f);
	glVertex2f(9.0f, 5.10f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(188, 118, 46);
	glVertex2f(-9.0f, 1.0f);
	glVertex2f(9.0f, 1.0f);
	glVertex2f(9.0f, 1.10f);
	glVertex2f(-9.0f, 1.10f);
	glEnd();

//main gate
	glBegin(GL_QUADS);
	glColor3ub(188, 113, 48);
	glVertex2f(-0.5f, 1.00f);
	glVertex2f(0.5f, 1.00f);
	glVertex2f(0.5f, 4.50f);
	glVertex2f(-0.5f, 4.50f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(162, 93, 34);
	glVertex2f(-0.5f, 1.00f);
	glVertex2f(0.5f, 1.00f);
	glVertex2f(0.5f, 3.20f);
	glVertex2f(-0.5f, 3.20f);
	glEnd();

	GLfloat x24=0.0f; GLfloat y24=3.20f; GLfloat radius24 =0.5f;
	GLfloat twicePi24 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(162, 93, 34);
		glVertex2f(x24, y24);
		for(i = 0; i <=triangleAmount;i++) {
			glVertex2f(
		            x24 + (radius24 * cos(i *  twicePi24 / triangleAmount)),
			    y24 + (radius24 * sin(i * twicePi24/ triangleAmount))
			);
		}
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(79, 43, 19);
	glVertex2f(-0.2f, 1.00f);
	glVertex2f(0.2f, 1.00f);
	glVertex2f(0.2f, 2.50f);
	glVertex2f(-0.2f, 2.50f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(173, 99, 38);
	glVertex2f(-0.5f, 4.30f);
	glVertex2f(0.5f, 4.30f);
	glVertex2f(0.5f, 4.50f);
	glVertex2f(-0.5f, 4.50f);
	glEnd();

//left gates
//1st
	glBegin(GL_QUADS);
	glColor3ub(188, 113, 48);
	glVertex2f(-1.75f, 1.00f);
	glVertex2f(-1.05f, 1.00f);
	glVertex2f(-1.05f, 3.20f);
	glVertex2f(-1.75f, 3.20f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(162, 93, 34);
	glVertex2f(-1.75f, 1.00f);
	glVertex2f(-1.05f, 1.00f);
	glVertex2f(-1.05f, 2.20f);
	glVertex2f(-1.75f, 2.20f);
	glEnd();

	GLfloat x14=-1.399f; GLfloat y14=2.20f; GLfloat radius14 =0.35f;
	GLfloat twicePi14 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(162, 93, 34);
		glVertex2f(x14, y14);
		for(i = 0; i <=triangleAmount;i++) {
			glVertex2f(
		            x14 + (radius14 * cos(i *  twicePi14 / triangleAmount)),
			    y14 + (radius14 * sin(i * twicePi14/ triangleAmount))
			);
		}
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(79, 43, 19);
	glVertex2f(-1.55f, 1.00f);
	glVertex2f(-1.25f, 1.00f);
	glVertex2f(-1.25f, 2.05f);
	glVertex2f(-1.55f, 2.05f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(173, 99, 38);
	glVertex2f(-1.75f, 3.00f);
	glVertex2f(-1.05f, 3.00f);
	glVertex2f(-1.05f, 3.20f);
	glVertex2f(-1.75f, 3.20f);
	glEnd();
//2nd
	glBegin(GL_QUADS);
	glColor3ub(188, 113, 48);
	glVertex2f(-2.75f, 1.00f);
	glVertex2f(-2.05f, 1.00f);
	glVertex2f(-2.05f, 3.20f);
	glVertex2f(-2.75f, 3.20f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(162, 93, 34);
	glVertex2f(-2.75f, 1.00f);
	glVertex2f(-2.05f, 1.00f);
	glVertex2f(-2.05f, 2.20f);
	glVertex2f(-2.75f, 2.20f);
	glEnd();

	GLfloat x15=-2.399f; GLfloat y15=2.20f; GLfloat radius15 =0.35f;
	GLfloat twicePi15 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(162, 93, 34);
		glVertex2f(x15, y15);
		for(i = 0; i <=triangleAmount;i++) {
			glVertex2f(
		            x15 + (radius15 * cos(i *  twicePi15 / triangleAmount)),
			    y15 + (radius15 * sin(i * twicePi15 / triangleAmount))
			);
		}
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(79, 43, 19);
	glVertex2f(-2.55f, 1.00f);
	glVertex2f(-2.25f, 1.00f);
	glVertex2f(-2.25f, 2.05f);
	glVertex2f(-2.55f, 2.05f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(173, 99, 38);
	glVertex2f(-2.75f, 3.00f);
	glVertex2f(-2.05f, 3.00f);
	glVertex2f(-2.05f, 3.20f);
	glVertex2f(-2.75f, 3.20f);
	glEnd();
//3rd
	glBegin(GL_QUADS);
	glColor3ub(188, 113, 48);
	glVertex2f(-3.75f, 1.00f);
	glVertex2f(-3.05f, 1.00f);
	glVertex2f(-3.05f, 3.20f);
	glVertex2f(-3.75f, 3.20f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(162, 93, 34);
	glVertex2f(-3.75f, 1.00f);
	glVertex2f(-3.05f, 1.00f);
	glVertex2f(-3.05f, 2.20f);
	glVertex2f(-3.75f, 2.20f);
	glEnd();

	GLfloat x16=-3.399f; GLfloat y16=2.20f; GLfloat radius16 =0.35f;
	GLfloat twicePi16 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(162, 93, 34);
		glVertex2f(x16, y16);
		for(i = 0; i <=triangleAmount;i++) {
			glVertex2f(
		            x16 + (radius16 * cos(i *  twicePi16 / triangleAmount)),
			    y16 + (radius16 * sin(i * twicePi16 / triangleAmount))
			);
		}
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(79, 43, 19);
	glVertex2f(-3.55f, 1.00f);
	glVertex2f(-3.25f, 1.00f);
	glVertex2f(-3.25f, 2.05f);
	glVertex2f(-3.55f, 2.05f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(173, 99, 38);
	glVertex2f(-3.75f, 3.00f);
	glVertex2f(-3.05f, 3.00f);
	glVertex2f(-3.05f, 3.20f);
	glVertex2f(-3.75f, 3.20f);
	glEnd();
//4th
	glBegin(GL_QUADS);
	glColor3ub(188, 113, 48);
	glVertex2f(-4.75f, 1.00f);
	glVertex2f(-4.05f, 1.00f);
	glVertex2f(-4.05f, 3.20f);
	glVertex2f(-4.75f, 3.20f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(162, 93, 34);
	glVertex2f(-4.75f, 1.00f);
	glVertex2f(-4.05f, 1.00f);
	glVertex2f(-4.05f, 2.20f);
	glVertex2f(-4.75f, 2.20f);
	glEnd();

	GLfloat x17=-4.399f; GLfloat y17=2.20f; GLfloat radius17 =0.35f;
	GLfloat twicePi17 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(162, 93, 34);
		glVertex2f(x17, y17);
		for(i = 0; i <=triangleAmount;i++) {
			glVertex2f(
		            x17 + (radius17 * cos(i *  twicePi17 / triangleAmount)),
			    y17 + (radius17 * sin(i * twicePi17 / triangleAmount))
			);
		}
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(79, 43, 19);
	glVertex2f(-4.55f, 1.00f);
	glVertex2f(-4.25f, 1.00f);
	glVertex2f(-4.25f, 2.05f);
	glVertex2f(-4.55f, 2.05f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(173, 99, 38);
	glVertex2f(-4.75f, 3.00f);
	glVertex2f(-4.05f, 3.00f);
	glVertex2f(-4.05f, 3.20f);
	glVertex2f(-4.75f, 3.20f);
	glEnd();

//5th
	glBegin(GL_QUADS);
	glColor3ub(188, 113, 48);
	glVertex2f(-5.75f, 1.00f);
	glVertex2f(-5.05f, 1.00f);
	glVertex2f(-5.05f, 3.20f);
	glVertex2f(-5.75f, 3.20f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(162, 93, 34);
	glVertex2f(-5.75f, 1.00f);
	glVertex2f(-5.05f, 1.00f);
	glVertex2f(-5.05f, 2.20f);
	glVertex2f(-5.75f, 2.20f);
	glEnd();

	GLfloat x18=-5.399f; GLfloat y18=2.20f; GLfloat radius18 =0.35f;
	GLfloat twicePi18 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(162, 93, 34);
		glVertex2f(x18, y18);
		for(i = 0; i <=triangleAmount;i++) {
			glVertex2f(
		            x18 + (radius18 * cos(i *  twicePi18 / triangleAmount)),
			    y18 + (radius18 * sin(i * twicePi18/ triangleAmount))
			);
		}
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(79, 43, 19);
	glVertex2f(-5.55f, 1.00f);
	glVertex2f(-5.25f, 1.00f);
	glVertex2f(-5.25f, 2.05f);
	glVertex2f(-5.55f, 2.05f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(173, 99, 38);
	glVertex2f(-5.75f, 3.00f);
	glVertex2f(-5.05f, 3.00f);
	glVertex2f(-5.05f, 3.20f);
	glVertex2f(-5.75f, 3.20f);
	glEnd();

	//right gates
//1st
	glBegin(GL_QUADS);
	glColor3ub(188, 113, 48);
	glVertex2f(1.75f, 1.00f);
	glVertex2f(1.05f, 1.00f);
	glVertex2f(1.05f, 3.20f);
	glVertex2f(1.75f, 3.20f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(162, 93, 34);
	glVertex2f(1.75f, 1.00f);
	glVertex2f(1.05f, 1.00f);
	glVertex2f(1.05f, 2.20f);
	glVertex2f(1.75f, 2.20f);
	glEnd();

	GLfloat x19=1.399f; GLfloat y19=2.20f; GLfloat radius19 =0.35f;
	GLfloat twicePi19 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(162, 93, 34);
		glVertex2f(x19, y19);
		for(i = 0; i <=triangleAmount;i++) {
			glVertex2f(
		            x19 + (radius19 * cos(i *  twicePi19 / triangleAmount)),
			    y19 + (radius19 * sin(i * twicePi19 / triangleAmount))
			);
		}
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(79, 43, 19);
	glVertex2f(1.55f, 1.00f);
	glVertex2f(1.25f, 1.00f);
	glVertex2f(1.25f, 2.05f);
	glVertex2f(1.55f, 2.05f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(173, 99, 38);
	glVertex2f(1.75f, 3.00f);
	glVertex2f(1.05f, 3.00f);
	glVertex2f(1.05f, 3.20f);
	glVertex2f(1.75f, 3.20f);
	glEnd();
//2nd
	glBegin(GL_QUADS);
	glColor3ub(188, 113, 48);
	glVertex2f(2.75f, 1.00f);
	glVertex2f(2.05f, 1.00f);
	glVertex2f(2.05f, 3.20f);
	glVertex2f(2.75f, 3.20f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(162, 93, 34);
	glVertex2f(2.75f, 1.00f);
	glVertex2f(2.05f, 1.00f);
	glVertex2f(2.05f, 2.20f);
	glVertex2f(2.75f, 2.20f);
	glEnd();

	GLfloat x20=2.399f; GLfloat y20=2.20f; GLfloat radius20 =0.35f;
	GLfloat twicePi20 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(162, 93, 34);
		glVertex2f(x20, y20);
		for(i = 0; i <=triangleAmount;i++) {
			glVertex2f(
		            x20 + (radius20 * cos(i *  twicePi20 / triangleAmount)),
			    y20 + (radius20 * sin(i * twicePi20 / triangleAmount))
			);
		}
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(79, 43, 19);
	glVertex2f(2.55f, 1.00f);
	glVertex2f(2.25f, 1.00f);
	glVertex2f(2.25f, 2.05f);
	glVertex2f(2.55f, 2.05f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(173, 99, 38);
	glVertex2f(2.75f, 3.00f);
	glVertex2f(2.05f, 3.00f);
	glVertex2f(2.05f, 3.20f);
	glVertex2f(2.75f, 3.20f);
	glEnd();
//3rd
	glBegin(GL_QUADS);
	glColor3ub(188, 113, 48);
	glVertex2f(3.75f, 1.00f);
	glVertex2f(3.05f, 1.00f);
	glVertex2f(3.05f, 3.20f);
	glVertex2f(3.75f, 3.20f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(162, 93, 34);
	glVertex2f(3.75f, 1.00f);
	glVertex2f(3.05f, 1.00f);
	glVertex2f(3.05f, 2.20f);
	glVertex2f(3.75f, 2.20f);
	glEnd();

	GLfloat x21=3.399f; GLfloat y21=2.20f; GLfloat radius21 =0.35f;
	GLfloat twicePi21 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(162, 93, 34);
		glVertex2f(x21, y21);
		for(i = 0; i <=triangleAmount;i++) {
			glVertex2f(
		            x21 + (radius21 * cos(i *  twicePi21 / triangleAmount)),
			    y21 + (radius21 * sin(i * twicePi21 / triangleAmount))
			);
		}
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(79, 43, 19);
	glVertex2f(3.55f, 1.00f);
	glVertex2f(3.25f, 1.00f);
	glVertex2f(3.25f, 2.05f);
	glVertex2f(3.55f, 2.05f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(173, 99, 38);
	glVertex2f(3.75f, 3.00f);
	glVertex2f(3.05f, 3.00f);
	glVertex2f(3.05f, 3.20f);
	glVertex2f(3.75f, 3.20f);
	glEnd();
//4th
	glBegin(GL_QUADS);
	glColor3ub(188, 113, 48);
	glVertex2f(4.75f, 1.00f);
	glVertex2f(4.05f, 1.00f);
	glVertex2f(4.05f, 3.20f);
	glVertex2f(4.75f, 3.20f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(162, 93, 34);
	glVertex2f(4.75f, 1.00f);
	glVertex2f(4.05f, 1.00f);
	glVertex2f(4.05f, 2.20f);
	glVertex2f(4.75f, 2.20f);
	glEnd();

	GLfloat x22=4.399f; GLfloat y22=2.20f; GLfloat radius22 =0.35f;
	GLfloat twicePi22 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(162, 93, 34);
		glVertex2f(x22, y22);
		for(i = 0; i <=triangleAmount;i++) {
			glVertex2f(
		            x22 + (radius22 * cos(i *  twicePi22 / triangleAmount)),
			    y22 + (radius22 * sin(i * twicePi22 / triangleAmount))
			);
		}
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(79, 43, 19);
	glVertex2f(4.55f, 1.00f);
	glVertex2f(4.25f, 1.00f);
	glVertex2f(4.25f, 2.05f);
	glVertex2f(4.55f, 2.05f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(173, 99, 38);
	glVertex2f(4.75f, 3.00f);
	glVertex2f(4.05f, 3.00f);
	glVertex2f(4.05f, 3.20f);
	glVertex2f(4.75f, 3.20f);
	glEnd();
//5th
	glBegin(GL_QUADS);
	glColor3ub(188, 113, 48);
	glVertex2f(5.75f, 1.00f);
	glVertex2f(5.05f, 1.00f);
	glVertex2f(5.05f, 3.20f);
	glVertex2f(5.75f, 3.20f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(162, 93, 34);
	glVertex2f(5.75f, 1.00f);
	glVertex2f(5.05f, 1.00f);
	glVertex2f(5.05f, 2.20f);
	glVertex2f(5.75f, 2.20f);
	glEnd();

	GLfloat x23=5.399f; GLfloat y23=2.20f; GLfloat radius23 =0.35f;
	GLfloat twicePi23 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(162, 93, 34);
		glVertex2f(x23, y23);
		for(i = 0; i <=triangleAmount;i++) {
			glVertex2f(
		            x23 + (radius23 * cos(i *  twicePi23 / triangleAmount)),
			    y23 + (radius23 * sin(i * twicePi23 / triangleAmount))
			);
		}
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(79, 43, 19);
	glVertex2f(5.55f, 1.00f);
	glVertex2f(5.25f, 1.00f);
	glVertex2f(5.25f, 2.05f);
	glVertex2f(5.55f, 2.05f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(173, 99, 38);
	glVertex2f(5.75f, 3.00f);
	glVertex2f(5.05f, 3.00f);
	glVertex2f(5.05f, 3.20f);
	glVertex2f(5.75f, 3.20f);
	glEnd();


	///2 pillars
	//1st pillar
	GLfloat x1=-8.0f; GLfloat y1=7.10f; GLfloat radius1 =1.0f;

	GLfloat twicePi1 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(188, 118, 46);
		glVertex2f(x1, y1);
		for(i = 0; i <=triangleAmount;i++) {
			glVertex2f(
		            x1 + (radius1 * cos(i *  twicePi1 / triangleAmount)),
			    y1 + (radius1 * sin(i * twicePi1 / triangleAmount))
			);
		}
	glEnd();

	GLfloat xx1=-8.0f; GLfloat yy1=6.90f; GLfloat radiuss1 =1.0f;

	GLfloat twicePii1 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(225, 150, 82);
		glVertex2f(xx1, yy1);
		for(i = 0; i <=triangleAmount;i++) {
			glVertex2f(
		            xx1 + (radiuss1 * cos(i *  twicePii1 / triangleAmount)),
			    yy1 + (radiuss1 * sin(i * twicePii1 / triangleAmount))
			);
		}
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(225, 150, 82);
	glVertex2f(-9.0f, 1.0f);
	glVertex2f(-7.0f, 1.0f);
	glVertex2f(-7.0f, 5.50f);
	glVertex2f(-9.0f, 5.50f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(164, 93, 29);
	glVertex2f(-9.05f, 5.50f);
	glVertex2f(-6.95f, 5.50f);
	glVertex2f(-6.95f, 5.60f);
	glVertex2f(-9.05f, 5.60f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(225, 150, 82);
	glVertex2f(-7.0f, 5.60f);
	glVertex2f(-9.0f, 5.60f);
	glVertex2f(-9.0f, 7.00f);
	glVertex2f(-7.0f, 7.00f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(164, 93, 29);
	glVertex2f(-9.05f, 7.00f);
	glVertex2f(-6.95f, 7.00f);
	glVertex2f(-6.95f, 7.10f);
	glVertex2f(-9.05f, 7.10f);
	glEnd();
    //pillar border
	glBegin(GL_QUADS);
	glColor3ub(188, 118, 46);
	glVertex2f(-9.0f, 1.0f);
	glVertex2f(-7.0f, 1.0f);
	glVertex2f(-7.0f, 1.10f);
	glVertex2f(-9.0f, 1.10f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(188, 118, 46);
	glVertex2f(-9.0f, 1.0f);
	glVertex2f(-8.90f, 1.0f);
	glVertex2f(-8.90f, 5.50f);
	glVertex2f(-9.0f, 5.50f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(188, 118, 46);
	glVertex2f(-9.0f, 5.60f);
	glVertex2f(-8.90f, 5.60f);
	glVertex2f(-8.90f, 7.00f);
	glVertex2f(-9.0f, 7.00f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(188, 118, 46);
	glVertex2f(-7.0f, 1.0f);
	glVertex2f(-7.10f, 1.0f);
	glVertex2f(-7.10f, 5.50f);
	glVertex2f(-7.0f, 5.50f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(188, 118, 46);
	glVertex2f(-7.0f, 5.60f);
	glVertex2f(-7.10f, 5.60f);
	glVertex2f(-7.10f, 7.00f);
	glVertex2f(-7.0f, 7.00f);
	glEnd();

	//windows
	//1st
	GLfloat x27=-7.3f; GLfloat y27=6.40f; GLfloat radius27 =0.09f;
	GLfloat twicePi27 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(102, 75, 30);
		glVertex2f(x27, y27);
		for(i = 0; i <=triangleAmount;i++) {
			glVertex2f(
		            x27 + (radius27 * cos(i *  twicePi27 / triangleAmount)),
			    y27 + (radius27 * sin(i * twicePi27 / triangleAmount))
			);
		}
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(102, 75, 30);
	glVertex2f(-7.40f, 5.700f);
	glVertex2f(-7.2f, 5.700f);
	glVertex2f(-7.2f, 6.40f);
	glVertex2f(-7.40f, 6.40f);
	glEnd();

	//2nd
	GLfloat x28=-8.7f; GLfloat y28=6.40f; GLfloat radius28 =0.09f;
	GLfloat twicePi28 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(102, 75, 30);
		glVertex2f(x28, y28);
		for(i = 0; i <=triangleAmount;i++) {
			glVertex2f(
		            x28 + (radius28 * cos(i *  twicePi28 / triangleAmount)),
			    y28 + (radius28 * sin(i * twicePi28 / triangleAmount))
			);
		}
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(102, 75, 30);
	glVertex2f(-8.80f, 5.700f);
	glVertex2f(-8.6f, 5.700f);
	glVertex2f(-8.6f, 6.40f);
	glVertex2f(-8.80f, 6.40f);
	glEnd();

    //2nd pillar
    GLfloat x2=8.0f; GLfloat y2=7.10f; GLfloat radius2 =1.0f;

	GLfloat twicePi2 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(188, 118, 46);
		glVertex2f(x2, y2);
		for(i = 0; i <=triangleAmount;i++) {
			glVertex2f(
		            x2 + (radius2 * cos(i *  twicePi2 / triangleAmount)),
			    y2 + (radius2 * sin(i * twicePi2 / triangleAmount))
			);
		}
	glEnd();

	GLfloat xx2=8.0f; GLfloat yy2=6.90f; GLfloat radiuss2 =1.0f;

	GLfloat twicePii2 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(225, 150, 82);
		glVertex2f(xx2, yy2);
		for(i = 0; i <=triangleAmount;i++) {
			glVertex2f(
		            xx2 + (radiuss2 * cos(i *  twicePii2 / triangleAmount)),
			    yy2 + (radiuss2 * sin(i * twicePii2 / triangleAmount))
			);
		}
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(225, 150, 82);
	glVertex2f(9.0f, 1.0f);
	glVertex2f(7.0f, 1.0f);
	glVertex2f(7.0f, 5.50f);
	glVertex2f(9.0f, 5.50f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(164, 93, 29);
	glVertex2f(9.05f, 5.50f);
	glVertex2f(6.95f, 5.50f);
	glVertex2f(6.95f, 5.60f);
	glVertex2f(9.05f, 5.60f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(225, 150, 82);
	glVertex2f(7.0f, 5.60f);
	glVertex2f(9.0f, 5.60f);
	glVertex2f(9.0f, 7.00f);
	glVertex2f(7.0f, 7.00f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(164, 93, 29);
	glVertex2f(9.05f, 7.00f);
	glVertex2f(6.95f, 7.00f);
	glVertex2f(6.95f, 7.10f);
	glVertex2f(9.05f, 7.10f);
	glEnd();

	//windows
	//1st
	GLfloat x26=7.3f; GLfloat y26=6.40f; GLfloat radius26 =0.09f;
	GLfloat twicePi26 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(102, 75, 30);
		glVertex2f(x26, y26);
		for(i = 0; i <=triangleAmount;i++) {
			glVertex2f(
		            x26 + (radius26 * cos(i *  twicePi26 / triangleAmount)),
			    y26 + (radius26 * sin(i * twicePi26 / triangleAmount))
			);
		}
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(102, 75, 30);
	glVertex2f(7.40f, 5.700f);
	glVertex2f(7.2f, 5.700f);
	glVertex2f(7.2f, 6.40f);
	glVertex2f(7.40f, 6.40f);
	glEnd();

	//2nd
	GLfloat x25=8.7f; GLfloat y25=6.40f; GLfloat radius25 =0.09f;
	GLfloat twicePi25 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(102, 75, 30);
		glVertex2f(x25, y25);
		for(i = 0; i <=triangleAmount;i++) {
			glVertex2f(
		            x25 + (radius25 * cos(i *  twicePi25 / triangleAmount)),
			    y25 + (radius25 * sin(i * twicePi25 / triangleAmount))
			);
		}
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(102, 75, 30);
	glVertex2f(8.80f, 5.700f);
	glVertex2f(8.6f, 5.700f);
	glVertex2f(8.6f, 6.40f);
	glVertex2f(8.80f, 6.40f);
	glEnd();


	//pillar border
	glBegin(GL_QUADS);
	glColor3ub(188, 118, 46);
	glVertex2f(9.0f, 1.0f);
	glVertex2f(7.0f, 1.0f);
	glVertex2f(7.0f, 1.10f);
	glVertex2f(9.0f, 1.10f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(188, 118, 46);
	glVertex2f(9.0f, 1.0f);
	glVertex2f(8.90f, 1.0f);
	glVertex2f(8.90f, 5.50f);
	glVertex2f(9.0f, 5.50f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(188, 118, 46);
	glVertex2f(9.0f, 5.60f);
	glVertex2f(8.90f, 5.60f);
	glVertex2f(8.90f, 7.00f);
	glVertex2f(9.0f, 7.00f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(188, 118, 46);
	glVertex2f(7.0f, 1.0f);
	glVertex2f(7.10f, 1.0f);
	glVertex2f(7.10f, 5.50f);
	glVertex2f(7.0f, 5.50f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(188, 118, 46);
	glVertex2f(7.0f, 5.60f);
	glVertex2f(7.10f, 5.60f);
	glVertex2f(7.10f, 7.00f);
	glVertex2f(7.0f, 7.00f);
	glEnd();

/// Sixty Dome Mosque end

//bush
    glBegin(GL_QUADS);
	glColor3ub(51, 153, 51);
	glVertex2f(1.05f, 0.00f);
	glVertex2f(5.0f, -10.0f);
	glVertex2f(5.70f, -10.0f);
	glVertex2f(1.750f, 0.00f);
	glEnd();

    glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(1.05f, 0.00f);
	glVertex2f(5.0f, -10.00f);
	glEnd();

	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(1.75f, 0.00f);
	glVertex2f(5.70f, -10.00f);
	glEnd();


    glBegin(GL_QUADS);
	glColor3ub(51, 153, 51);
	glVertex2f(-1.05f, 0.00f);
	glVertex2f(-5.0f, -10.0f);
	glVertex2f(-5.70f, -10.0f);
	glVertex2f(-1.750f, 0.00f);
	glEnd();

	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(-1.05f, 0.00f);
	glVertex2f(-5.0f, -10.00f);
	glEnd();

	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(-1.75f, 0.00f);
	glVertex2f(-5.70f, -10.00f);
	glEnd();

	//trees
	//left
//1st
glBegin(GL_QUADS);
	glColor3ub(118, 92, 72);
	glVertex2f(-6.05f, -5.00f);
	glVertex2f(-6.70f, -5.00f);
	glVertex2f(-6.70f, -8.50f);
	glVertex2f(-6.05f, -8.50f);
	glEnd();

GLfloat treex1=-6.1f; GLfloat treey1=-4.45f; GLfloat treeradius1 =1.00f;
	GLfloat treetwicePi1 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(1, 110, 1);
		glVertex2f(treex1, treey1);
		for(i = 0; i <=triangleAmount;i++) {
			glVertex2f(
		            treex1 + (treeradius1 * cos(i *  treetwicePi1 / triangleAmount)),
			    treey1 + (treeradius1 * sin(i * treetwicePi1 / triangleAmount))
			);
		}
	glEnd();

	GLfloat treex2=-5.3f; GLfloat treey2=-5.85f; GLfloat treeradius2 =1.00f;
	GLfloat treetwicePi2 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(1, 110, 1);
		glVertex2f(treex2, treey2);
		for(i = 0; i <=triangleAmount;i++) {
			glVertex2f(
		            treex2 + (treeradius2 * cos(i *  treetwicePi2 / triangleAmount)),
			    treey2 + (treeradius2 * sin(i * treetwicePi2 / triangleAmount))
			);
		}
	glEnd();

	GLfloat treex3=-7.1f; GLfloat treey3=-5.85f; GLfloat treeradius3 =1.00f;
	GLfloat treetwicePi3 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(1, 110, 1);
		glVertex2f(treex3, treey3);
		for(i = 0; i <=triangleAmount;i++) {
			glVertex2f(
		            treex3 + (treeradius3 * cos(i *  treetwicePi3 / triangleAmount)),
			    treey3 + (treeradius3 * sin(i * treetwicePi3 / triangleAmount))
			);
		}
	glEnd();

//2nd

glBegin(GL_QUADS);
	glColor3ub(118, 92, 72);
	glVertex2f(-4.35f, -1.00f);
	glVertex2f(-5.00f, -1.00f);
	glVertex2f(-5.00f, -4.50f);
	glVertex2f(-4.35f, -4.50f);
	glEnd();

GLfloat treex7=-4.4f; GLfloat treey7=-0.45f; GLfloat treeradius7 =1.00f;
	GLfloat treetwicePi7 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(1, 110, 1);
		glVertex2f(treex7, treey7);
		for(i = 0; i <=triangleAmount;i++) {
			glVertex2f(
		            treex7 + (treeradius7 * cos(i *  treetwicePi7 / triangleAmount)),
			    treey7 + (treeradius7 * sin(i * treetwicePi7 / triangleAmount))
			);
		}
	glEnd();

	GLfloat treex8=-3.6f; GLfloat treey8=-1.85f; GLfloat treeradius8 =1.00f;
	GLfloat treetwicePi8 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(1, 110, 1);
		glVertex2f(treex8, treey8);
		for(i = 0; i <=triangleAmount;i++) {
			glVertex2f(
		            treex8 + (treeradius8 * cos(i *  treetwicePi8 / triangleAmount)),
			    treey8 + (treeradius8 * sin(i * treetwicePi8 / triangleAmount))
			);
		}
	glEnd();

	GLfloat treex9=-5.4f; GLfloat treey9=-1.85f; GLfloat treeradius9 =1.00f;
	GLfloat treetwicePi9 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(1, 110, 1);
		glVertex2f(treex9, treey9);
		for(i = 0; i <=triangleAmount;i++) {
			glVertex2f(
		            treex9 + (treeradius9 * cos(i *  treetwicePi9 / triangleAmount)),
			    treey9 + (treeradius9 * sin(i * treetwicePi9 / triangleAmount))
			);
		}
	glEnd();

//right
//1st

glBegin(GL_QUADS);
	glColor3ub(118, 92, 72);
	glVertex2f(6.05f, -5.00f);
	glVertex2f(6.70f, -5.00f);
	glVertex2f(6.70f, -8.50f);
	glVertex2f(6.05f, -8.50f);
	glEnd();

GLfloat treex4=6.1f; GLfloat treey4=-4.45f; GLfloat treeradius4 =1.00f;
	GLfloat treetwicePi4 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(1, 110, 1);
		glVertex2f(treex4, treey4);
		for(i = 0; i <=triangleAmount;i++) {
			glVertex2f(
		            treex4 + (treeradius4 * cos(i *  treetwicePi4 / triangleAmount)),
			    treey4 + (treeradius4 * sin(i * treetwicePi4 / triangleAmount))
			);
		}
	glEnd();

	GLfloat treex5=5.3f; GLfloat treey5=-5.85f; GLfloat treeradius5 =1.00f;
	GLfloat treetwicePi5 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(1, 110, 1);
		glVertex2f(treex5, treey5);
		for(i = 0; i <=triangleAmount;i++) {
			glVertex2f(
		            treex5 + (treeradius5 * cos(i *  treetwicePi5 / triangleAmount)),
			    treey5 + (treeradius5 * sin(i * treetwicePi5 / triangleAmount))
			);
		}
	glEnd();

	GLfloat treex6=7.1f; GLfloat treey6=-5.85f; GLfloat treeradius6 =1.00f;
	GLfloat treetwicePi6 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(1, 110, 1);
		glVertex2f(treex6, treey6);
		for(i = 0; i <=triangleAmount;i++) {
			glVertex2f(
		            treex6 + (treeradius6 * cos(i *  treetwicePi6 / triangleAmount)),
			    treey6 + (treeradius6 * sin(i * treetwicePi6 / triangleAmount))
			);
		}
	glEnd();

	//2nd

	glBegin(GL_QUADS);
	glColor3ub(118, 92, 72);
	glVertex2f(4.35f, -1.00f);
	glVertex2f(5.00f, -1.00f);
	glVertex2f(5.00f, -4.50f);
	glVertex2f(4.35f, -4.50f);
	glEnd();

GLfloat treex10=4.4f; GLfloat treey10=-0.45f; GLfloat treeradius10 =1.00f;
	GLfloat treetwicePi10 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(1, 110, 1);
		glVertex2f(treex10, treey10);
		for(i = 0; i <=triangleAmount;i++) {
			glVertex2f(
		            treex10 + (treeradius10 * cos(i *  treetwicePi10 / triangleAmount)),
			    treey10 + (treeradius10 * sin(i * treetwicePi10 / triangleAmount))
			);
		}
	glEnd();

	GLfloat treex11=3.6f; GLfloat treey11=-1.85f; GLfloat treeradius11 =1.00f;
	GLfloat treetwicePi11 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(1, 110, 1);
		glVertex2f(treex11, treey11);
		for(i = 0; i <=triangleAmount;i++) {
			glVertex2f(
		            treex11 + (treeradius11 * cos(i *  treetwicePi11 / triangleAmount)),
			    treey11 + (treeradius11 * sin(i * treetwicePi11 / triangleAmount))
			);
		}
	glEnd();

	GLfloat treex12=5.4f; GLfloat treey12=-1.85f; GLfloat treeradius12 =1.00f;
	GLfloat treetwicePi12 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(1, 110, 1);
		glVertex2f(treex12, treey12);
		for(i = 0; i <=triangleAmount;i++) {
			glVertex2f(
		            treex12 + (treeradius12 * cos(i *  treetwicePi12 / triangleAmount)),
			    treey12 + (treeradius12 * sin(i * treetwicePi12 / triangleAmount))
			);
		}
	glEnd();

///lamp post
//right
//1st
glBegin(GL_QUADS);
	glColor3ub(0, 0, 0);
	glVertex2f(5.00f, -10.00f);
	glVertex2f(5.00f, -3.00f);
	glVertex2f(4.80f, -3.00f);
	glVertex2f(4.80f, -10.00f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(0, 0, 0);
	glVertex2f(5.50f, -3.00f);
	glVertex2f(5.50f, -1.00f);
	glVertex2f(4.30f, -1.00f);
	glVertex2f(4.30f, -3.00f);
	glEnd();

	///light
	glBegin(GL_QUADS);
	glColor3ub(179, 179, 179);
	glVertex2f(5.40f, -2.90f);
	glVertex2f(5.40f, -1.10f);
	glVertex2f(4.40f, -1.10f);
	glVertex2f(4.40f, -2.90f);
	glEnd();

	//lines
    glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(5.20f, -2.90f);
	glVertex2f(5.20f, -1.10f);
	glEnd();

	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(4.60f, -2.90f);
	glVertex2f(4.60f, -1.10f);
	glEnd();

	//2nd
    glBegin(GL_QUADS);
	glColor3ub(0, 0, 0);
	glVertex2f(8.20f, 0.00f);
	glVertex2f(8.20f, 3.00f);
	glVertex2f(8.0f, 3.00f);
	glVertex2f(8.0f, 0.00f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(0, 0, 0);
	glVertex2f(7.80f, 3.00f);
	glVertex2f(7.80f, 4.00f);
	glVertex2f(8.40f, 4.00f);
	glVertex2f(8.40f, 3.00f);
	glEnd();

	///light
	glBegin(GL_QUADS);
	glColor3ub(179, 179, 179);
	glVertex2f(7.85f, 3.05f);
	glVertex2f(7.85f, 3.95f);
	glVertex2f(8.35f, 3.95f);
	glVertex2f(8.35f, 3.05f);
	glEnd();

//lines
    glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(7.95f, 3.05f);
	glVertex2f(7.95f, 4.0f);
	glEnd();

	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(8.25f, 4.0f);
	glVertex2f(8.25f, 3.05f);
	glEnd();


	//left
//1st
glBegin(GL_QUADS);
	glColor3ub(0, 0, 0);
	glVertex2f(-5.00f, -10.00f);
	glVertex2f(-5.00f, -3.00f);
	glVertex2f(-4.80f, -3.00f);
	glVertex2f(-4.80f, -10.00f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(0, 0, 0);
	glVertex2f(-5.50f, -3.00f);
	glVertex2f(-5.50f, -1.00f);
	glVertex2f(-4.30f, -1.00f);
	glVertex2f(-4.30f, -3.00f);
	glEnd();

	///light
	glBegin(GL_QUADS);
	glColor3ub(179, 179, 179);
	glVertex2f(-5.40f, -2.90f);
	glVertex2f(-5.40f, -1.10f);
	glVertex2f(-4.40f, -1.10f);
	glVertex2f(-4.40f, -2.90f);
	glEnd();

//lines
    glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(-5.20f, -2.90f);
	glVertex2f(-5.20f, -1.10f);
	glEnd();

	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(-4.60f, -2.90f);
	glVertex2f(-4.60f, -1.10f);
	glEnd();

//2nd
    glBegin(GL_QUADS);
	glColor3ub(0, 0, 0);
	glVertex2f(-8.20f, 0.00f);
	glVertex2f(-8.20f, 3.00f);
	glVertex2f(-8.0f, 3.00f);
	glVertex2f(-8.0f, 0.00f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(0, 0, 0);
	glVertex2f(-7.80f, 3.00f);
	glVertex2f(-7.80f, 4.00f);
	glVertex2f(-8.40f, 4.00f);
	glVertex2f(-8.40f, 3.00f);
	glEnd();

	///light
	glBegin(GL_QUADS);
	glColor3ub(179, 179, 179);
	glVertex2f(-7.85f, 3.05f);
	glVertex2f(-7.85f, 3.95f);
	glVertex2f(-8.35f, 3.95f);
	glVertex2f(-8.35f, 3.05f);
	glEnd();

//lines
    glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(-7.95f, 3.05f);
	glVertex2f(-7.95f, 4.0f);
	glEnd();

	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(-8.25f, 4.0f);
	glVertex2f(-8.25f, 3.05f);
	glEnd();

	glFlush();


	glutTimerFunc(4000,dayrain_demo,9);
}






int main(int argc, char** argv) {
	glutInit(&argc, argv);
	glutCreateWindow("OpenGL");
	glutInitWindowSize(320, 320);

	glutDisplayFunc(day);

	//glutDisplayFunc(dayrain);

	//glutDisplayFunc(nightrain);

	//glutDisplayFunc(night);

	glutIdleFunc(Idle);
	init();

    glutTimerFunc(100, update1, 0);

    glutTimerFunc(100, update2, 0);

    glutTimerFunc(100, update3, 0);

    glutTimerFunc(100, update4, 0);

    glutTimerFunc(100, update5, 0);

	glutMainLoop();
	return 0;
}
