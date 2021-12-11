#include <windows.h>  // for MS Windows
#include <GL/glut.h>  // GLUT, include glu.h and gl.h
#include<math.h>>
#include<cstdio>
#include <GL/gl.h>
# define PI           3.14159265358979323846
/* Handler for window-repaint event. Call back when the window first appears and
whenever the window needs to be re-painted. */
GLfloat r = 0.0f;
GLfloat r1 = 0.0f;
GLfloat r2 = 0.0f;
GLfloat r3 = 0.0f;


GLfloat position = 0.0f;
GLfloat speed = 0.07f;

void update(int value) {

    if(position >1.5)
        position = -1.2f;

    position += speed; //position=position-speed;1-.1=.9

	glutPostRedisplay();


	glutTimerFunc(100, update, 0);
}



GLfloat position2 = 0.0f;
GLfloat speed2 = 0.02f;
void update2(int value) {

    if(position2 <-1.4)
        position2 = 1.0f;

    position2 -= speed2; //position=position-speed;1-.1=.9

	glutPostRedisplay();


	glutTimerFunc(100, update2, 0);
}



GLfloat position3 = 0.0f;
GLfloat speed3 = 0.05f;
void update3(int value) {

    if(position3 >1.2)
        position3 = -1.0f;

    position3 += speed3; //position=position-speed;1-.1=.9

	glutPostRedisplay();


	glutTimerFunc(100, update3, 0);
}

//void SpecialInput(int key, int x, int y)
//{
//switch(key)
//{case GLUT_KEY_UP:
//speed3=.5;
//break;
//case GLUT_KEY_DOWN:
//speed3=.01;
//break;
//case GLUT_KEY_LEFT:
//
//break;
//case GLUT_KEY_RIGHT:
//break;}
//glutPostRedisplay();}

GLfloat position4 = 0.0f;
GLfloat speed4 = 0.1f;

void update4(int value) {

    if(position4 <-1.0)
        position4 = 1.6f;

    position4 -= speed4; //position=position-speed;1-.1=.9

	glutPostRedisplay();


	glutTimerFunc(100, update4, 0);
}
//void handleMouse(int button, int state, int x, int y) {
//	if (button == GLUT_LEFT_BUTTON){
//			speed9 += 0.1f;
//			}
//			if (button == GLUT_RIGHT_BUTTON)
//	{speed9 -= 0.1f;
//			}
//	glutPostRedisplay();}

void Idle()
{
    glutPostRedisplay();//// marks the current window as needing to be redisplayed
}

void Day() {

    GLfloat twicePi = 2.0f * PI;
    int triangleAmount = 50; //# of triangles used to draw circle

    glClearColor(1.0f, 1.0f, 1.0f, 1.0f); // Set background color to black and opaque
	glClear(GL_COLOR_BUFFER_BIT);         // Clear the color buffer (background)

glLoadIdentity();
    glBegin(GL_QUADS);
	glColor3ub(150, 248, 255);
	glVertex2f(-1.0f, 1.0f);    // x, y
    glVertex2f(-1.0f, 0.0f);
	glVertex2f(1.0f, 0.0f);
	glVertex2f(1.0f, 1.0f);
    glEnd();
glLoadIdentity();
    glBegin(GL_QUADS);
	glColor3ub(5, 151, 255);;
	glVertex2f(-1.0f, 0.0f);    // x, y
	glVertex2f(-1.0f, -1.0f);
	glVertex2f(1.0f, -1.0f);
	glVertex2f(1.0f, 0.0f);
    glEnd();
    glLoadIdentity();
glLoadIdentity();
    glBegin(GL_QUADS);
	glColor3ub(82, 112, 70);
	glVertex2f(-1.0f, 0.1f);
	glVertex2f(-1.0f, -0.1f);
    glVertex2f(1.0f, -0.1f);
	glVertex2f(1.0f,0.1f);
    glEnd();
    glLoadIdentity();
// ....Ship
glPushMatrix();
glTranslatef(position2,0,0);
    glBegin(GL_POLYGON);
	glColor3ub(79, 27, 24);
	glVertex2f(0.2f,-0.1f);
	glVertex2f(0.2f,-0.05f);
	glVertex2f(0.05f,-0.05f);
	glVertex2f(0.1f,-0.1f);
    glVertex2f(0.2f, -0.3f);
	glVertex2f(0.8f, -0.3f);
    glVertex2f(0.9f, -0.1f);
    glEnd();
    glBegin(GL_QUADS);
	glColor3ub(230, 164, 0);
	glVertex2f(0.3f,-0.0f);
	glVertex2f(0.3f,-0.1f);
	glVertex2f(0.4f,-0.1f);
	glVertex2f(0.4f,-0.0f);
    glEnd();
    glBegin(GL_QUADS);
	glColor3ub(224, 170, 70);
	glVertex2f(0.5f,-0.0f);
	glVertex2f(0.5f,-0.1f);
	glVertex2f(0.6f,-0.1f);
	glVertex2f(0.6f,-0.0f);
    glEnd();
    glBegin(GL_QUADS);
	glColor3ub(230, 164, 0);
	glVertex2f(0.7f,-0.0f);
	glVertex2f(0.7f,-0.1f);
	glVertex2f(0.8f,-0.1f);
	glVertex2f(0.8f,-0.0f);
    glEnd();
//glLoadIdentity();
//    int triangleAmount = 20; //# of triangles used to draw circle
//    int i;
    GLfloat x2=.25f; GLfloat y2=-.2f;
	GLfloat radius2 = 0.025f; //radius
    glColor3ub(255, 247, 3);
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x2, y2); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x2 + (radius2 * cos(i *  twicePi / triangleAmount)),
			    y2 + (radius2 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	glPopMatrix();
	glLoadIdentity();


// Excavator
    glBegin(GL_QUADS);
	glColor3ub(66, 20, 145);
	glVertex2f(0.6f,-0.0f);
	glVertex2f(0.65f,-0.0f);
	glVertex2f(0.65f,0.5f);
	glVertex2f(0.6f,0.5f);
    glEnd();
    glBegin(GL_QUADS);
	glColor3ub(66, 20, 145);
	glVertex2f(0.7f,-0.0f);
	glVertex2f(0.7f,0.1f);
	glVertex2f(0.5f,0.1f);
	glVertex2f(0.5f,0.0f);
    glEnd();
    glBegin(GL_QUADS);
	glColor3ub(166, 20, 145);
	glVertex2f(0.4f,0.4f);
	glVertex2f(0.7f,0.4f);
	glVertex2f(0.7f,0.45f);
	glVertex2f(0.4f,0.45f);
    glEnd();

    glBegin(GL_QUADS);
	glColor3ub(230, 142, 0);
	glVertex2f(0.4f,0.2f);
	glVertex2f(0.575f,0.2f);
	glVertex2f(0.575f,0.3f);
	glVertex2f(0.4f,0.3f);
    glEnd();
    glBegin(GL_LINES);
	glColor3ub(66,15,255);
	glVertex2f(.5f, 0.3f);    // x, y
    glVertex2f(.5f, 0.4f);
	glEnd();
	glLoadIdentity();
// building 1
    glBegin(GL_QUADS);
	glColor3ub(66, 23, 245);
	glVertex2f(-.575f, 0.0f);    // x, y
    glVertex2f(-0.9f, 0.0f);
	glVertex2f(-0.9f, 0.7f);
	glVertex2f(-.575f, 0.7f);
    glEnd();
// window building 1
    glBegin(GL_QUADS);
	glColor3ub(66, 90, 245);
	glVertex2f(-.75f, 0.1f);    // x, y
    glVertex2f(-0.85f, 0.1f);
	glVertex2f(-0.85f, 0.2f);
	glVertex2f(-.75f, 0.2f);
    glEnd();
    glBegin(GL_QUADS);
	glColor3ub(66, 90, 245);
	glVertex2f(-.75f, 0.3f);    // x, y
    glVertex2f(-0.85f, 0.3f);
	glVertex2f(-0.85f, 0.4f);
	glVertex2f(-.75f, 0.4f);
    glEnd();
    glBegin(GL_QUADS);
	glColor3ub(66, 90, 245);
	glVertex2f(-.75f, 0.5f);    // x, y
    glVertex2f(-0.85f, 0.5f);
	glVertex2f(-0.85f, 0.6f);
	glVertex2f(-.75f, 0.6f);
    glEnd();

    glBegin(GL_QUADS);
	glColor3ub(66, 200, 245);
	glVertex2f(-.625f, 0.1f);    // x, y
    glVertex2f(-0.725f, 0.1f);
	glVertex2f(-0.725f, 0.2f);
	glVertex2f(-.625f, 0.2f);
    glEnd();
    glBegin(GL_QUADS);
	glColor3ub(66, 200, 245);
	glVertex2f(-.625f, 0.3f);
    glVertex2f(-0.725f, 0.3f);
	glVertex2f(-0.725f, 0.4f);
	glVertex2f(-.625f, 0.4f);
    glEnd();
    glBegin(GL_QUADS);
	glColor3ub(66, 200, 245);
	glVertex2f(-.625f, 0.5f);    // window
    glVertex2f(-0.725f, 0.5f);
	glVertex2f(-0.725f, 0.6f);
	glVertex2f(-.625f, 0.6f);
    glEnd();
    glLoadIdentity();
// building 2
    glBegin(GL_QUADS);
	glColor3ub(166, 23, 245);
	glVertex2f(-.35f, 0.0f);    // x, y
    glVertex2f(-0.575f, 0.0f);
	glVertex2f(-0.575f, 0.5f);
	glVertex2f(-.35f, 0.5f);
    glEnd();
// Window building 2
    glBegin(GL_QUADS);
	glColor3ub(16, 23, 245);
	glVertex2f(-.4f, 0.1f);    // x, y
    glVertex2f(-0.525f, 0.1f);
	glVertex2f(-0.525f, 0.2f);
	glVertex2f(-.4f, 0.2f);
    glEnd();
    glBegin(GL_QUADS);
	glColor3ub(16, 23, 245);
	glVertex2f(-.4f, 0.3f);    // x, y
    glVertex2f(-0.525f, 0.3f);
	glVertex2f(-0.525f, 0.4f);
	glVertex2f(-.4f, 0.4f);
    glEnd();

    glBegin(GL_QUADS);
	glColor3ub(230, 142, 0);
	glVertex2f(0.4f,0.2f);
	glVertex2f(0.575f,0.2f);
	glVertex2f(0.575f,0.3f);
	glVertex2f(0.4f,0.3f);
    glEnd();
    glBegin(GL_LINES);
	glColor3ub(66,15,255);
	glVertex2f(.5f, 0.3f);    // x, y
    glVertex2f(.5f, 0.4f);
	glEnd();

glLoadIdentity();
// building 1 copy
glTranslatef(1.6,0,0);
  glScalef(.99,1.1,0);
    glBegin(GL_QUADS);
	glColor3ub(66, 23, 245);
	glVertex2f(-.575f, 0.0f);    // x, y
    glVertex2f(-0.9f, 0.0f);
	glVertex2f(-0.9f, 0.7f);
	glVertex2f(-.575f, 0.7f);
    glEnd();
// window building 1 copy
    glBegin(GL_QUADS);
	glColor3ub(66, 90, 245);
	glVertex2f(-.75f, 0.1f);    // x, y
    glVertex2f(-0.85f, 0.1f);
	glVertex2f(-0.85f, 0.2f);
	glVertex2f(-.75f, 0.2f);
    glEnd();
    glBegin(GL_QUADS);
	glColor3ub(66, 90, 245);
	glVertex2f(-.75f, 0.3f);    // x, y
    glVertex2f(-0.85f, 0.3f);
	glVertex2f(-0.85f, 0.4f);
	glVertex2f(-.75f, 0.4f);
    glEnd();
    glBegin(GL_QUADS);
	glColor3ub(66, 90, 245);
	glVertex2f(-.75f, 0.5f);    // x, y
    glVertex2f(-0.85f, 0.5f);
	glVertex2f(-0.85f, 0.6f);
	glVertex2f(-.75f, 0.6f);
    glEnd();
    glBegin(GL_QUADS);
	glColor3ub(66, 200, 245);
	glVertex2f(-.625f, 0.1f);    // x, y
    glVertex2f(-0.725f, 0.1f);
	glVertex2f(-0.725f, 0.2f);
	glVertex2f(-.625f, 0.2f);
    glEnd();
    glBegin(GL_QUADS);
	glColor3ub(66, 200, 245);
	glVertex2f(-.625f, 0.3f);
    glVertex2f(-0.725f, 0.3f);
	glVertex2f(-0.725f, 0.4f);
	glVertex2f(-.625f, 0.4f);
    glEnd();
    glBegin(GL_QUADS);
	glColor3ub(66, 200, 245);
	glVertex2f(-.625f, 0.5f);    // window
    glVertex2f(-0.725f, 0.5f);
	glVertex2f(-0.725f, 0.6f);
	glVertex2f(-.625f, 0.6f);
    glEnd();
    glLoadIdentity();


// ....ship  2...........

glPushMatrix();
glTranslatef(position3,0,0);
  glTranslatef(-0.2,-0.5,0);
    glScalef(-.8,1.1,0);
    glBegin(GL_POLYGON);
	glColor3ub(56, 48, 42);
	glVertex2f(0.2f,-0.1f);
	glVertex2f(0.2f,-0.05f);
	glVertex2f(0.05f,-0.05f);
	glVertex2f(0.1f,-0.1f);
    glVertex2f(0.2f, -0.3f);
	glVertex2f(0.8f, -0.3f);
    glVertex2f(0.9f, -0.1f);
    glEnd();
    glBegin(GL_QUADS);
	glColor3ub(189, 86, 26);
	glVertex2f(0.3f,-0.0f);
	glVertex2f(0.3f,-0.1f);
	glVertex2f(0.4f,-0.1f);
	glVertex2f(0.4f,-0.0f);
    glEnd();
    glBegin(GL_QUADS);
	glColor3ub(189, 86, 26);
	glVertex2f(0.5f,-0.0f);
	glVertex2f(0.5f,-0.1f);
	glVertex2f(0.6f,-0.1f);
	glVertex2f(0.6f,-0.0f);
    glEnd();
    glBegin(GL_QUADS);
	glColor3ub(189, 86, 26);
	glVertex2f(0.7f,-0.0f);
	glVertex2f(0.7f,-0.1f);
	glVertex2f(0.8f,-0.1f);
	glVertex2f(0.8f,-0.0f);
    glEnd();
   glPopMatrix();

	glLoadIdentity();

    GLfloat x1=.6f; GLfloat y1=.88f;
	GLfloat radius = 0.1f; //radius
//	GLfloat twicePi = 2.0f * PI;
    glColor3ub(255, 247, 3);
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x1, y1); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x1 + (radius * cos(i *  twicePi / triangleAmount)),
			    y1 + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
glLoadIdentity();
// Wind Mill
    glBegin(GL_QUADS);
	glColor3ub(66, 20, 145);
	glVertex2f(0.175f,-0.0f);
	glVertex2f(0.225f,-0.0f);
	glVertex2f(0.225f,0.5f);
	glVertex2f(0.175f,0.5f);
    glEnd();
    glBegin(GL_QUADS);
	glColor3ub(66, 20, 145);
	glVertex2f(0.1f,-0.0f);
	glVertex2f(0.1f,0.085f);
	glVertex2f(0.3f,0.085f);
	glVertex2f(0.3f,0.0f);
    glEnd();
glLoadIdentity();
// Triangles rotating
    glPushMatrix(); //glPushMatrix copies the top matrix and pushes it onto the stack, while glPopMatrix pops the top matrix off the stack

  glTranslatef(0.2,0.5,0);
    glRotatef(r,0.0,0.0,1.0);

    glBegin(GL_TRIANGLES);
	glColor3f(1.0f, 0.0f, 0.0f);
	glVertex2f(0.0f, 0.0f);    // x, y
    glVertex2f(0.225f, 0.1f);
	glVertex2f(0.1f, 0.2f);
    glEnd();
    glBegin(GL_TRIANGLES);
    glColor3f(1.0f, 0.0f, 0.0f);
	glVertex2f(0.0f, 0.0f);    // x, y// x, y
    glVertex2f(0.2f, -0.1f);
	glVertex2f(0.1f, -0.2f);
    glEnd();
    glBegin(GL_TRIANGLES);
	glColor3f(1.0f, 0.0f, 0.0f);
	glVertex2f(0.0f, 0.0f);    // x, y
    glVertex2f(-0.2f, -0.1f);
	glVertex2f(-.1f, -0.2f);
    glEnd();
    glBegin(GL_TRIANGLES);
	glColor3f(1.0f, 0.0f, 0.0f);
	glVertex2f(0.0f, 0.0f);    // x, y
    glVertex2f(-0.2f, 0.1f);
	glVertex2f(-.1f, 0.2f);
    glEnd();
    glPopMatrix();//while glPopMatrix pops the top matrix off the stack
    r+=0.01f;
glLoadIdentity();

    //WATCH

    glBegin(GL_QUADS);
	glColor3ub(49, 65, 92);
	glVertex2f(-.1f, 0.0f);    // x, y
    glVertex2f(-0.25f, 0.0f);
	glVertex2f(-0.25f, 0.3f);
	glVertex2f(-.1f, 0.3f);
    glEnd();
glLoadIdentity();


    GLfloat x4=-.17f; GLfloat y4=.3f;
	GLfloat radius4 = 0.16f; //radius
    glColor3ub(173,125,88);
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x4, y4); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x4 + (radius4 * cos(i *  twicePi / triangleAmount)),
			    y4 + (radius4 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
	glLoadIdentity();
	GLfloat x5=-.17f; GLfloat y5=.3f;
	GLfloat radius5 = 0.02f; //radius
    glColor3ub(0, 0, 0);
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x5, y5); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x5 + (radius5 * cos(i *  twicePi / triangleAmount)),
			    y5 + (radius5 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
	glLoadIdentity();
    GLfloat x6=-.17f; GLfloat y6=.3f;
	GLfloat radius6 = 0.15f; //radius
    glColor3ub(255, 255, 255);
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x6, y6); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x6 + (radius6 * cos(i *  twicePi / triangleAmount)),
			    y6 + (radius6 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
glLoadIdentity();

glTranslatef(-0.17,0.3,0);
glScalef(.32,.32,0);

    glBegin(GL_LINES);
    glColor3ub(255, 25, 25);
    glVertex2f(0.45f,0.0f);
    glVertex2f(0.5f,0.0f);
    glEnd();
    glBegin(GL_LINES);
    glColor3ub(255, 25, 25);
    glVertex2f(-0.45f,0.0f);
    glVertex2f(-0.5f,0.0f);
    glEnd();
    glBegin(GL_LINES);
    glColor3ub(255, 25, 25);
    glVertex2f(0.0f,0.45f);
    glVertex2f(0.0f,0.5f);
    glEnd();
    glBegin(GL_LINES);
    glColor3ub(255, 25, 25);
    glVertex2f(0.0f,-0.45f);
    glVertex2f(0.0f,-0.5f);
    glEnd();
glPushMatrix();
glRotatef(r1,0.0,0.0,-1.0);
    glBegin(GL_LINES); // Second Hand
    glColor3ub(255, 25, 25);
    glVertex2f(0.0f,0.0f);
    glVertex2f(0.0f,0.45f);
    glEnd();
glPopMatrix();
    r1+=0.01f;
glPushMatrix();
glRotatef(r2,0.0,0.0,-1.0);
    glBegin(GL_LINES); //Minutes Hand
    glColor3ub(44, 151, 222);
    glVertex2f(0.0f,0.0f);
    glVertex2f(0.35f,0.0f);
    glEnd();
glPopMatrix();
    r2+=0.005f;
glPushMatrix();
glRotatef(r3,0.0,0.0,-1.0);
    glBegin(GL_LINES);//Hour Hand
    glColor3ub(25, 25, 25);
    glVertex2f(0.0f,0.0f);
    glVertex2f(0.0f,-0.3f);
    glEnd();
glPopMatrix();
    r3+=0.001f;

glLoadIdentity();



    //Cloud.....................

glPushMatrix();
glTranslatef(position,0,0);

    GLfloat x7=-.8f; GLfloat y7=.85f;
	GLfloat radius7 = 0.1f; //radius
    glColor3ub(242, 242, 237);
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x7, y7); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x7 + (radius7 * cos(i *  twicePi / triangleAmount)),
			    y7 + (radius7 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
	GLfloat x8=-.93f; GLfloat y8=.82f;
	GLfloat radius8 = 0.1f; //radius
    glColor3ub(242, 242, 237);
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x8, y8); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x8 + (radius8 * cos(i *  twicePi / triangleAmount)),
			    y8 + (radius8 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
	GLfloat x9=-.66f; GLfloat y9=.84f;
	GLfloat radius9 = 0.1f; //radius
    glColor3ub(242, 242, 237);
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x9, y9); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x9 + (radius9 * cos(i *  twicePi / triangleAmount)),
			    y9 + (radius9 * sin(i * twicePi / triangleAmount))
			);
		}
		glEnd();


    GLfloat x10=.16f; GLfloat y10=.88f;
	GLfloat radius10 = 0.1f; //radius
    glColor3ub(242, 242, 237);
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x10, y1); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x10 + (radius10 * cos(i *  twicePi / triangleAmount)),
			    y10 + (radius10 * sin(i * twicePi / triangleAmount))
			);
		}
		glEnd();
		GLfloat x11=.26f; GLfloat y11=.88f;
	GLfloat radius11 = 0.1f; //radius
    glColor3ub(242, 242, 237);
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x11, y11); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x11 + (radius11 * cos(i *  twicePi / triangleAmount)),
			    y11 + (radius11 * sin(i * twicePi / triangleAmount))
			);
		}
		glEnd();

	glPopMatrix();
	glLoadIdentity();
	glFlush();  // Render now



}

void Night() {

    GLfloat twicePi = 2.0f * PI;
    int triangleAmount = 50; //# of triangles used to draw circle

    glClearColor(1.0f, 1.0f, 1.0f, 1.0f); // Set background color to black and opaque
	glClear(GL_COLOR_BUFFER_BIT);         // Clear the color buffer (background)

glLoadIdentity();
    glBegin(GL_QUADS);
	glColor3ub(12, 31, 59);
	glVertex2f(-1.0f, 1.0f);    // x, y
    glVertex2f(-1.0f, 0.0f);
	glVertex2f(1.0f, 0.0f);
	glVertex2f(1.0f, 1.0f);
    glEnd();
glLoadIdentity();
    glBegin(GL_QUADS);
	glColor3ub(25, 66, 117);;
	glVertex2f(-1.0f, 0.0f);    // x, y
	glVertex2f(-1.0f, -1.0f);
	glVertex2f(1.0f, -1.0f);
	glVertex2f(1.0f, 0.0f);
    glEnd();
    glLoadIdentity();
glLoadIdentity();
    glBegin(GL_QUADS);
	glColor3ub(57, 69, 52);
	glVertex2f(-1.0f, 0.1f);
	glVertex2f(-1.0f, -0.1f);
    glVertex2f(1.0f, -0.1f);
	glVertex2f(1.0f,0.1f);
    glEnd();
    glLoadIdentity();
// ....Ship
glPushMatrix();
//glTranslatef(position2,0,0);
    glBegin(GL_POLYGON);
	glColor3ub(79, 27, 24);
	glVertex2f(0.2f,-0.1f);
	glVertex2f(0.2f,-0.05f);
	glVertex2f(0.05f,-0.05f);
	glVertex2f(0.1f,-0.1f);
    glVertex2f(0.2f, -0.3f);
	glVertex2f(0.8f, -0.3f);
    glVertex2f(0.9f, -0.1f);
    glEnd();
    glBegin(GL_QUADS);
	glColor3ub(31, 143, 78);
	glVertex2f(0.3f,-0.0f);
	glVertex2f(0.3f,-0.1f);
	glVertex2f(0.4f,-0.1f);
	glVertex2f(0.4f,-0.0f);
    glEnd();
    glBegin(GL_QUADS);
	glColor3ub(31, 143, 78);
	glVertex2f(0.5f,-0.0f);
	glVertex2f(0.5f,-0.1f);
	glVertex2f(0.6f,-0.1f);
	glVertex2f(0.6f,-0.0f);
    glEnd();
    glBegin(GL_QUADS);
	glColor3ub(31, 143, 78);
	glVertex2f(0.7f,-0.0f);
	glVertex2f(0.7f,-0.1f);
	glVertex2f(0.8f,-0.1f);
	glVertex2f(0.8f,-0.0f);
    glEnd();

    GLfloat x2=.25f; GLfloat y2=-.2f;
	GLfloat radius2 = 0.025f; //radius
    glColor3ub(255, 247, 3);
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x2, y2); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x2 + (radius2 * cos(i *  twicePi / triangleAmount)),
			    y2 + (radius2 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	glPopMatrix();
	glLoadIdentity();


// Excavator
    glBegin(GL_QUADS);
	glColor3ub(66, 20, 145);
	glVertex2f(0.6f,-0.0f);
	glVertex2f(0.65f,-0.0f);
	glVertex2f(0.65f,0.5f);
	glVertex2f(0.6f,0.5f);
    glEnd();
    glBegin(GL_QUADS);
	glColor3ub(66, 20, 145);
	glVertex2f(0.7f,-0.0f);
	glVertex2f(0.7f,0.1f);
	glVertex2f(0.5f,0.1f);
	glVertex2f(0.5f,0.0f);
    glEnd();
    glBegin(GL_QUADS);
	glColor3ub(166, 20, 145);
	glVertex2f(0.4f,0.4f);
	glVertex2f(0.7f,0.4f);
	glVertex2f(0.7f,0.45f);
	glVertex2f(0.4f,0.45f);
    glEnd();

    glBegin(GL_QUADS);
	glColor3ub(13, 66, 35);
	glVertex2f(0.4f,0.2f);
	glVertex2f(0.575f,0.2f);
	glVertex2f(0.575f,0.3f);
	glVertex2f(0.4f,0.3f);
    glEnd();
    glBegin(GL_LINES);
	glColor3ub(66,15,255);
	glVertex2f(.5f, 0.3f);    // x, y
    glVertex2f(.5f, 0.4f);
	glEnd();
	glLoadIdentity();
// building 1
    glBegin(GL_QUADS);
	glColor3ub(66, 23, 245);
	glVertex2f(-.575f, 0.0f);    // x, y
    glVertex2f(-0.9f, 0.0f);
	glVertex2f(-0.9f, 0.7f);
	glVertex2f(-.575f, 0.7f);
    glEnd();
// window building 1
    glBegin(GL_QUADS);
	glColor3ub(227, 185, 48);
	glVertex2f(-.75f, 0.1f);    // x, y
    glVertex2f(-0.85f, 0.1f);
	glVertex2f(-0.85f, 0.2f);
	glVertex2f(-.75f, 0.2f);
    glEnd();
    glBegin(GL_QUADS);
	glColor3ub(227, 185, 48);
	glVertex2f(-.75f, 0.3f);    // x, y
    glVertex2f(-0.85f, 0.3f);
	glVertex2f(-0.85f, 0.4f);
	glVertex2f(-.75f, 0.4f);
    glEnd();
    glBegin(GL_QUADS);
	glColor3ub(227, 185, 48);
	glVertex2f(-.75f, 0.5f);    // x, y
    glVertex2f(-0.85f, 0.5f);
	glVertex2f(-0.85f, 0.6f);
	glVertex2f(-.75f, 0.6f);
    glEnd();

    glBegin(GL_QUADS);
	glColor3ub(227, 185, 48);
	glVertex2f(-.625f, 0.1f);    // x, y
    glVertex2f(-0.725f, 0.1f);
	glVertex2f(-0.725f, 0.2f);
	glVertex2f(-.625f, 0.2f);
    glEnd();
    glBegin(GL_QUADS);
	glColor3ub(227, 185, 48);
	glVertex2f(-.625f, 0.3f);
    glVertex2f(-0.725f, 0.3f);
	glVertex2f(-0.725f, 0.4f);
	glVertex2f(-.625f, 0.4f);
    glEnd();
    glBegin(GL_QUADS);
	glColor3ub(227, 185, 48);
	glVertex2f(-.625f, 0.5f);    // window
    glVertex2f(-0.725f, 0.5f);
	glVertex2f(-0.725f, 0.6f);
	glVertex2f(-.625f, 0.6f);
    glEnd();
    glLoadIdentity();
// building 2
    glBegin(GL_QUADS);
	glColor3ub(166, 23, 245);
	glVertex2f(-.35f, 0.0f);    // x, y
    glVertex2f(-0.575f, 0.0f);
	glVertex2f(-0.575f, 0.5f);
	glVertex2f(-.35f, 0.5f);
    glEnd();
// Window building 2
    glBegin(GL_QUADS);
	glColor3ub(227, 210, 54);
	glVertex2f(-.4f, 0.1f);    // x, y
    glVertex2f(-0.525f, 0.1f);
	glVertex2f(-0.525f, 0.2f);
	glVertex2f(-.4f, 0.2f);
    glEnd();
    glBegin(GL_QUADS);
	glColor3ub(227, 210, 54);
	glVertex2f(-.4f, 0.3f);    // x, y
    glVertex2f(-0.525f, 0.3f);
	glVertex2f(-0.525f, 0.4f);
	glVertex2f(-.4f, 0.4f);
    glEnd();

    glBegin(GL_QUADS);
	glColor3ub(230, 142, 0);
	glVertex2f(0.4f,0.2f);
	glVertex2f(0.575f,0.2f);
	glVertex2f(0.575f,0.3f);
	glVertex2f(0.4f,0.3f);
    glEnd();
    glBegin(GL_LINES);
	glColor3ub(66,15,255);
	glVertex2f(.5f, 0.3f);    // x, y
    glVertex2f(.5f, 0.4f);
	glEnd();

glLoadIdentity();
// building 1 copy
glTranslatef(1.6,0,0);
  glScalef(.99,1.1,0);
    glBegin(GL_QUADS);
	glColor3ub(66, 23, 245);
	glVertex2f(-.575f, 0.0f);    // x, y
    glVertex2f(-0.9f, 0.0f);
	glVertex2f(-0.9f, 0.7f);
	glVertex2f(-.575f, 0.7f);
    glEnd();
// window building 1 copy
    glBegin(GL_QUADS);
	glColor3ub(217, 217, 59);
	glVertex2f(-.75f, 0.1f);    // x, y
    glVertex2f(-0.85f, 0.1f);
	glVertex2f(-0.85f, 0.2f);
	glVertex2f(-.75f, 0.2f);
    glEnd();
    glBegin(GL_QUADS);
	glColor3ub(217, 217, 59);
	glVertex2f(-.75f, 0.3f);    // x, y
    glVertex2f(-0.85f, 0.3f);
	glVertex2f(-0.85f, 0.4f);
	glVertex2f(-.75f, 0.4f);
    glEnd();
    glBegin(GL_QUADS);
	glColor3ub(217, 217, 59);
	glVertex2f(-.75f, 0.5f);    // x, y
    glVertex2f(-0.85f, 0.5f);
	glVertex2f(-0.85f, 0.6f);
	glVertex2f(-.75f, 0.6f);
    glEnd();
    glBegin(GL_QUADS);
	glColor3ub(217, 217, 59);
	glVertex2f(-.625f, 0.1f);    // x, y
    glVertex2f(-0.725f, 0.1f);
	glVertex2f(-0.725f, 0.2f);
	glVertex2f(-.625f, 0.2f);
    glEnd();
    glBegin(GL_QUADS);
	glColor3ub(217, 217, 59);
	glVertex2f(-.625f, 0.3f);
    glVertex2f(-0.725f, 0.3f);
	glVertex2f(-0.725f, 0.4f);
	glVertex2f(-.625f, 0.4f);
    glEnd();
    glBegin(GL_QUADS);
	glColor3ub(217, 217, 59);
	glVertex2f(-.625f, 0.5f);    // window
    glVertex2f(-0.725f, 0.5f);
	glVertex2f(-0.725f, 0.6f);
	glVertex2f(-.625f, 0.6f);
    glEnd();
    glLoadIdentity();


// ....ship  2...........

glPushMatrix();
glTranslatef(position3,0,0);
  glTranslatef(-0.2,-0.5,0);
    glScalef(-.8,1.1,0);
    glBegin(GL_POLYGON);
	glColor3ub(56, 48, 42);
	glVertex2f(0.2f,-0.1f);
	glVertex2f(0.2f,-0.05f);
	glVertex2f(0.05f,-0.05f);
	glVertex2f(0.1f,-0.1f);
    glVertex2f(0.2f, -0.3f);
	glVertex2f(0.8f, -0.3f);
    glVertex2f(0.9f, -0.1f);
    glEnd();
    glBegin(GL_QUADS);
	glColor3ub(227, 99, 48);
	glVertex2f(0.3f,-0.0f);
	glVertex2f(0.3f,-0.1f);
	glVertex2f(0.4f,-0.1f);
	glVertex2f(0.4f,-0.0f);
    glEnd();
    glBegin(GL_QUADS);
	glColor3ub(227, 99, 48);
	glVertex2f(0.5f,-0.0f);
	glVertex2f(0.5f,-0.1f);
	glVertex2f(0.6f,-0.1f);
	glVertex2f(0.6f,-0.0f);
    glEnd();
    glBegin(GL_QUADS);
	glColor3ub(227, 99, 48);
	glVertex2f(0.7f,-0.0f);
	glVertex2f(0.7f,-0.1f);
	glVertex2f(0.8f,-0.1f);
	glVertex2f(0.8f,-0.0f);
    glEnd();
   glPopMatrix();

	glLoadIdentity();

    GLfloat x1=.6f; GLfloat y1=.88f;
	GLfloat radius = 0.1f; //radius
//	GLfloat twicePi = 2.0f * PI;
    glColor3ub(12, 31, 59);
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x1, y1); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x1 + (radius * cos(i *  twicePi / triangleAmount)),
			    y1 + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
glLoadIdentity();
// Wind Mill
    glBegin(GL_QUADS);
	glColor3ub(66, 20, 145);
	glVertex2f(0.175f,-0.0f);
	glVertex2f(0.225f,-0.0f);
	glVertex2f(0.225f,0.5f);
	glVertex2f(0.175f,0.5f);
    glEnd();
    glBegin(GL_QUADS);
	glColor3ub(66, 20, 145);
	glVertex2f(0.1f,-0.0f);
	glVertex2f(0.1f,0.085f);
	glVertex2f(0.3f,0.085f);
	glVertex2f(0.3f,0.0f);
    glEnd();
glLoadIdentity();
// Triangles rotating
    glPushMatrix(); //glPushMatrix copies the top matrix and pushes it onto the stack, while glPopMatrix pops the top matrix off the stack

  glTranslatef(0.2,0.5,0);
    glRotatef(r,0.0,0.0,1.0);

    glBegin(GL_TRIANGLES);
	glColor3f(1.0f, 0.0f, 0.0f);
	glVertex2f(0.0f, 0.0f);    // x, y
    glVertex2f(0.225f, 0.1f);
	glVertex2f(0.1f, 0.2f);
    glEnd();
    glBegin(GL_TRIANGLES);
    glColor3f(1.0f, 0.0f, 0.0f);
	glVertex2f(0.0f, 0.0f);    // x, y// x, y
    glVertex2f(0.2f, -0.1f);
	glVertex2f(0.1f, -0.2f);
    glEnd();
    glBegin(GL_TRIANGLES);
	glColor3f(1.0f, 0.0f, 0.0f);
	glVertex2f(0.0f, 0.0f);    // x, y
    glVertex2f(-0.2f, -0.1f);
	glVertex2f(-.1f, -0.2f);
    glEnd();
    glBegin(GL_TRIANGLES);
	glColor3f(1.0f, 0.0f, 0.0f);
	glVertex2f(0.0f, 0.0f);    // x, y
    glVertex2f(-0.2f, 0.1f);
	glVertex2f(-.1f, 0.2f);
    glEnd();
    glPopMatrix();//while glPopMatrix pops the top matrix off the stack
    r+=0.01f;
glLoadIdentity();

    //WATCH

    glBegin(GL_QUADS);
	glColor3ub(49, 65, 92);
	glVertex2f(-.1f, 0.0f);    // x, y
    glVertex2f(-0.25f, 0.0f);
	glVertex2f(-0.25f, 0.3f);
	glVertex2f(-.1f, 0.3f);
    glEnd();
glLoadIdentity();


    GLfloat x4=-.17f; GLfloat y4=.3f;
	GLfloat radius4 = 0.16f; //radius
    glColor3ub(173,125,88);
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x4, y4); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x4 + (radius4 * cos(i *  twicePi / triangleAmount)),
			    y4 + (radius4 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
	glLoadIdentity();
	GLfloat x5=-.17f; GLfloat y5=.3f;
	GLfloat radius5 = 0.02f; //radius
    glColor3ub(0, 0, 0);
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x5, y5); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x5 + (radius5 * cos(i *  twicePi / triangleAmount)),
			    y5 + (radius5 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
	glLoadIdentity();
    GLfloat x6=-.17f; GLfloat y6=.3f;
	GLfloat radius6 = 0.15f; //radius
    glColor3ub(255, 255, 255);
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x6, y6); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x6 + (radius6 * cos(i *  twicePi / triangleAmount)),
			    y6 + (radius6 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
glLoadIdentity();

glTranslatef(-0.17,0.3,0);
glScalef(.32,.32,0);

    glBegin(GL_LINES);
    glColor3ub(255, 25, 25);
    glVertex2f(0.45f,0.0f);
    glVertex2f(0.5f,0.0f);
    glEnd();
    glBegin(GL_LINES);
    glColor3ub(255, 25, 25);
    glVertex2f(-0.45f,0.0f);
    glVertex2f(-0.5f,0.0f);
    glEnd();
    glBegin(GL_LINES);
    glColor3ub(255, 25, 25);
    glVertex2f(0.0f,0.45f);
    glVertex2f(0.0f,0.5f);
    glEnd();
    glBegin(GL_LINES);
    glColor3ub(255, 25, 25);
    glVertex2f(0.0f,-0.45f);
    glVertex2f(0.0f,-0.5f);
    glEnd();
glPushMatrix();
glRotatef(r1,0.0,0.0,-1.0);
    glBegin(GL_LINES); // Second Hand
    glColor3ub(255, 25, 25);
    glVertex2f(0.0f,0.0f);
    glVertex2f(0.0f,0.45f);
    glEnd();
glPopMatrix();
    r1+=0.01f;
glPushMatrix();
glRotatef(r2,0.0,0.0,-1.0);
    glBegin(GL_LINES); //Minutes Hand
    glColor3ub(44, 151, 222);
    glVertex2f(0.0f,0.0f);
    glVertex2f(0.35f,0.0f);
    glEnd();
glPopMatrix();
    r2+=0.005f;
glPushMatrix();
glRotatef(r3,0.0,0.0,-1.0);
    glBegin(GL_LINES);//Hour Hand
    glColor3ub(25, 25, 25);
    glVertex2f(0.0f,0.0f);
    glVertex2f(0.0f,-0.3f);
    glEnd();
glPopMatrix();
    r3+=0.001f;

glLoadIdentity();



    //Cloud.....................

glPushMatrix();
glTranslatef(position,0,0);

    GLfloat x7=-.8f; GLfloat y7=.85f;
	GLfloat radius7 = 0.1f; //radius
    glColor3ub(48, 48, 48);
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x7, y7); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x7 + (radius7 * cos(i *  twicePi / triangleAmount)),
			    y7 + (radius7 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
	GLfloat x8=-.93f; GLfloat y8=.82f;
	GLfloat radius8 = 0.1f; //radius
    glColor3ub(48, 48, 48);
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x8, y8); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x8 + (radius8 * cos(i *  twicePi / triangleAmount)),
			    y8 + (radius8 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
	GLfloat x9=-.66f; GLfloat y9=.84f;
	GLfloat radius9 = 0.1f; //radius
    glColor3ub(48, 48, 48);
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x9, y9); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x9 + (radius9 * cos(i *  twicePi / triangleAmount)),
			    y9 + (radius9 * sin(i * twicePi / triangleAmount))
			);
		}
		glEnd();


    GLfloat x10=.16f; GLfloat y10=.88f;
	GLfloat radius10 = 0.1f; //radius
    glColor3ub(48, 48, 48);
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x10, y1); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x10 + (radius10 * cos(i *  twicePi / triangleAmount)),
			    y10 + (radius10 * sin(i * twicePi / triangleAmount))
			);
		}
		glEnd();
		GLfloat x11=.26f; GLfloat y11=.88f;
	GLfloat radius11 = 0.1f; //radius
    glColor3ub(48, 48, 48);
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x11, y11); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x11 + (radius11 * cos(i *  twicePi / triangleAmount)),
			    y11 + (radius11 * sin(i * twicePi / triangleAmount))
			);
		}
		glEnd();

	glPopMatrix();
	glLoadIdentity();






	glFlush();  // Render now



}



void Rain() {







    GLfloat twicePi = 2.0f * PI;
    int triangleAmount = 50; //# of triangles used to draw circle

    glClearColor(1.0f, 1.0f, 1.0f, 1.0f); // Set background color to black and opaque
	glClear(GL_COLOR_BUFFER_BIT);         // Clear the color buffer (background)

glLoadIdentity();
    glBegin(GL_QUADS);
	glColor3ub(150, 248, 255);
	glVertex2f(-1.0f, 1.0f);    // x, y
    glVertex2f(-1.0f, 0.0f);
	glVertex2f(1.0f, 0.0f);
	glVertex2f(1.0f, 1.0f);
    glEnd();
glLoadIdentity();
    glBegin(GL_QUADS);
	glColor3ub(5, 151, 255);;
	glVertex2f(-1.0f, 0.0f);    // x, y
	glVertex2f(-1.0f, -1.0f);
	glVertex2f(1.0f, -1.0f);
	glVertex2f(1.0f, 0.0f);
    glEnd();
    glLoadIdentity();
glLoadIdentity();
    glBegin(GL_QUADS);
	glColor3ub(82, 112, 70);
	glVertex2f(-1.0f, 0.1f);
	glVertex2f(-1.0f, -0.1f);
    glVertex2f(1.0f, -0.1f);
	glVertex2f(1.0f,0.1f);
    glEnd();
    glLoadIdentity();
// ....Ship
glPushMatrix();
glTranslatef(position2,0,0);
    glBegin(GL_POLYGON);
	glColor3ub(79, 27, 24);
	glVertex2f(0.2f,-0.1f);
	glVertex2f(0.2f,-0.05f);
	glVertex2f(0.05f,-0.05f);
	glVertex2f(0.1f,-0.1f);
    glVertex2f(0.2f, -0.3f);
	glVertex2f(0.8f, -0.3f);
    glVertex2f(0.9f, -0.1f);
    glEnd();
    glBegin(GL_QUADS);
	glColor3ub(230, 164, 0);
	glVertex2f(0.3f,-0.0f);
	glVertex2f(0.3f,-0.1f);
	glVertex2f(0.4f,-0.1f);
	glVertex2f(0.4f,-0.0f);
    glEnd();
    glBegin(GL_QUADS);
	glColor3ub(224, 170, 70);
	glVertex2f(0.5f,-0.0f);
	glVertex2f(0.5f,-0.1f);
	glVertex2f(0.6f,-0.1f);
	glVertex2f(0.6f,-0.0f);
    glEnd();
    glBegin(GL_QUADS);
	glColor3ub(230, 164, 0);
	glVertex2f(0.7f,-0.0f);
	glVertex2f(0.7f,-0.1f);
	glVertex2f(0.8f,-0.1f);
	glVertex2f(0.8f,-0.0f);
    glEnd();
//glLoadIdentity();
//    int triangleAmount = 20; //# of triangles used to draw circle
//    int i;
    GLfloat x2=.25f; GLfloat y2=-.2f;
	GLfloat radius2 = 0.025f; //radius
    glColor3ub(255, 247, 3);
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x2, y2); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x2 + (radius2 * cos(i *  twicePi / triangleAmount)),
			    y2 + (radius2 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	glPopMatrix();
	glLoadIdentity();


// Excavator
    glBegin(GL_QUADS);
	glColor3ub(66, 20, 145);
	glVertex2f(0.6f,-0.0f);
	glVertex2f(0.65f,-0.0f);
	glVertex2f(0.65f,0.5f);
	glVertex2f(0.6f,0.5f);
    glEnd();
    glBegin(GL_QUADS);
	glColor3ub(66, 20, 145);
	glVertex2f(0.7f,-0.0f);
	glVertex2f(0.7f,0.1f);
	glVertex2f(0.5f,0.1f);
	glVertex2f(0.5f,0.0f);
    glEnd();
    glBegin(GL_QUADS);
	glColor3ub(166, 20, 145);
	glVertex2f(0.4f,0.4f);
	glVertex2f(0.7f,0.4f);
	glVertex2f(0.7f,0.45f);
	glVertex2f(0.4f,0.45f);
    glEnd();

    glBegin(GL_QUADS);
	glColor3ub(230, 142, 0);
	glVertex2f(0.4f,0.2f);
	glVertex2f(0.575f,0.2f);
	glVertex2f(0.575f,0.3f);
	glVertex2f(0.4f,0.3f);
    glEnd();
    glBegin(GL_LINES);
	glColor3ub(66,15,255);
	glVertex2f(.5f, 0.3f);    // x, y
    glVertex2f(.5f, 0.4f);
	glEnd();
	glLoadIdentity();
// building 1
    glBegin(GL_QUADS);
	glColor3ub(66, 23, 245);
	glVertex2f(-.575f, 0.0f);    // x, y
    glVertex2f(-0.9f, 0.0f);
	glVertex2f(-0.9f, 0.7f);
	glVertex2f(-.575f, 0.7f);
    glEnd();
// window building 1
    glBegin(GL_QUADS);
	glColor3ub(66, 90, 245);
	glVertex2f(-.75f, 0.1f);    // x, y
    glVertex2f(-0.85f, 0.1f);
	glVertex2f(-0.85f, 0.2f);
	glVertex2f(-.75f, 0.2f);
    glEnd();
    glBegin(GL_QUADS);
	glColor3ub(66, 90, 245);
	glVertex2f(-.75f, 0.3f);    // x, y
    glVertex2f(-0.85f, 0.3f);
	glVertex2f(-0.85f, 0.4f);
	glVertex2f(-.75f, 0.4f);
    glEnd();
    glBegin(GL_QUADS);
	glColor3ub(66, 90, 245);
	glVertex2f(-.75f, 0.5f);    // x, y
    glVertex2f(-0.85f, 0.5f);
	glVertex2f(-0.85f, 0.6f);
	glVertex2f(-.75f, 0.6f);
    glEnd();

    glBegin(GL_QUADS);
	glColor3ub(66, 200, 245);
	glVertex2f(-.625f, 0.1f);    // x, y
    glVertex2f(-0.725f, 0.1f);
	glVertex2f(-0.725f, 0.2f);
	glVertex2f(-.625f, 0.2f);
    glEnd();
    glBegin(GL_QUADS);
	glColor3ub(66, 200, 245);
	glVertex2f(-.625f, 0.3f);
    glVertex2f(-0.725f, 0.3f);
	glVertex2f(-0.725f, 0.4f);
	glVertex2f(-.625f, 0.4f);
    glEnd();
    glBegin(GL_QUADS);
	glColor3ub(66, 200, 245);
	glVertex2f(-.625f, 0.5f);    // window
    glVertex2f(-0.725f, 0.5f);
	glVertex2f(-0.725f, 0.6f);
	glVertex2f(-.625f, 0.6f);
    glEnd();
    glLoadIdentity();
// building 2
    glBegin(GL_QUADS);
	glColor3ub(166, 23, 245);
	glVertex2f(-.35f, 0.0f);    // x, y
    glVertex2f(-0.575f, 0.0f);
	glVertex2f(-0.575f, 0.5f);
	glVertex2f(-.35f, 0.5f);
    glEnd();
// Window building 2
    glBegin(GL_QUADS);
	glColor3ub(16, 23, 245);
	glVertex2f(-.4f, 0.1f);    // x, y
    glVertex2f(-0.525f, 0.1f);
	glVertex2f(-0.525f, 0.2f);
	glVertex2f(-.4f, 0.2f);
    glEnd();
    glBegin(GL_QUADS);
	glColor3ub(16, 23, 245);
	glVertex2f(-.4f, 0.3f);    // x, y
    glVertex2f(-0.525f, 0.3f);
	glVertex2f(-0.525f, 0.4f);
	glVertex2f(-.4f, 0.4f);
    glEnd();

    glBegin(GL_QUADS);
	glColor3ub(230, 142, 0);
	glVertex2f(0.4f,0.2f);
	glVertex2f(0.575f,0.2f);
	glVertex2f(0.575f,0.3f);
	glVertex2f(0.4f,0.3f);
    glEnd();
    glBegin(GL_LINES);
	glColor3ub(66,15,255);
	glVertex2f(.5f, 0.3f);    // x, y
    glVertex2f(.5f, 0.4f);
	glEnd();

glLoadIdentity();
// building 1 copy
glTranslatef(1.6,0,0);
  glScalef(.99,1.1,0);
    glBegin(GL_QUADS);
	glColor3ub(66, 23, 245);
	glVertex2f(-.575f, 0.0f);    // x, y
    glVertex2f(-0.9f, 0.0f);
	glVertex2f(-0.9f, 0.7f);
	glVertex2f(-.575f, 0.7f);
    glEnd();
// window building 1 copy
    glBegin(GL_QUADS);
	glColor3ub(66, 90, 245);
	glVertex2f(-.75f, 0.1f);    // x, y
    glVertex2f(-0.85f, 0.1f);
	glVertex2f(-0.85f, 0.2f);
	glVertex2f(-.75f, 0.2f);
    glEnd();
    glBegin(GL_QUADS);
	glColor3ub(66, 90, 245);
	glVertex2f(-.75f, 0.3f);    // x, y
    glVertex2f(-0.85f, 0.3f);
	glVertex2f(-0.85f, 0.4f);
	glVertex2f(-.75f, 0.4f);
    glEnd();
    glBegin(GL_QUADS);
	glColor3ub(66, 90, 245);
	glVertex2f(-.75f, 0.5f);    // x, y
    glVertex2f(-0.85f, 0.5f);
	glVertex2f(-0.85f, 0.6f);
	glVertex2f(-.75f, 0.6f);
    glEnd();
    glBegin(GL_QUADS);
	glColor3ub(66, 200, 245);
	glVertex2f(-.625f, 0.1f);    // x, y
    glVertex2f(-0.725f, 0.1f);
	glVertex2f(-0.725f, 0.2f);
	glVertex2f(-.625f, 0.2f);
    glEnd();
    glBegin(GL_QUADS);
	glColor3ub(66, 200, 245);
	glVertex2f(-.625f, 0.3f);
    glVertex2f(-0.725f, 0.3f);
	glVertex2f(-0.725f, 0.4f);
	glVertex2f(-.625f, 0.4f);
    glEnd();
    glBegin(GL_QUADS);
	glColor3ub(66, 200, 245);
	glVertex2f(-.625f, 0.5f);    // window
    glVertex2f(-0.725f, 0.5f);
	glVertex2f(-0.725f, 0.6f);
	glVertex2f(-.625f, 0.6f);
    glEnd();
    glLoadIdentity();


// ....ship  2...........

glPushMatrix();
glTranslatef(position3,0,0);
  glTranslatef(-0.2,-0.5,0);
    glScalef(-.8,1.1,0);
    glBegin(GL_POLYGON);
	glColor3ub(56, 48, 42);
	glVertex2f(0.2f,-0.1f);
	glVertex2f(0.2f,-0.05f);
	glVertex2f(0.05f,-0.05f);
	glVertex2f(0.1f,-0.1f);
    glVertex2f(0.2f, -0.3f);
	glVertex2f(0.8f, -0.3f);
    glVertex2f(0.9f, -0.1f);
    glEnd();
    glBegin(GL_QUADS);
	glColor3ub(189, 86, 26);
	glVertex2f(0.3f,-0.0f);
	glVertex2f(0.3f,-0.1f);
	glVertex2f(0.4f,-0.1f);
	glVertex2f(0.4f,-0.0f);
    glEnd();
    glBegin(GL_QUADS);
	glColor3ub(189, 86, 26);
	glVertex2f(0.5f,-0.0f);
	glVertex2f(0.5f,-0.1f);
	glVertex2f(0.6f,-0.1f);
	glVertex2f(0.6f,-0.0f);
    glEnd();
    glBegin(GL_QUADS);
	glColor3ub(189, 86, 26);
	glVertex2f(0.7f,-0.0f);
	glVertex2f(0.7f,-0.1f);
	glVertex2f(0.8f,-0.1f);
	glVertex2f(0.8f,-0.0f);
    glEnd();
   glPopMatrix();

	glLoadIdentity();
//
//    GLfloat x1=.6f; GLfloat y1=.88f;
//	GLfloat radius = 0.1f; //radius
////	GLfloat twicePi = 2.0f * PI;
//    glColor3ub(255, 247, 3);
//	glBegin(GL_TRIANGLE_FAN);
//		glVertex2f(x1, y1); // center of circle
//		for(int i = 0; i <= triangleAmount;i++) {
//			glVertex2f(
//		            x1 + (radius * cos(i *  twicePi / triangleAmount)),
//			    y1 + (radius * sin(i * twicePi / triangleAmount))
//			);
//		}
//	glEnd();
//glLoadIdentity();
// Wind Mill
    glBegin(GL_QUADS);
	glColor3ub(66, 20, 145);
	glVertex2f(0.175f,-0.0f);
	glVertex2f(0.225f,-0.0f);
	glVertex2f(0.225f,0.5f);
	glVertex2f(0.175f,0.5f);
    glEnd();
    glBegin(GL_QUADS);
	glColor3ub(66, 20, 145);
	glVertex2f(0.1f,-0.0f);
	glVertex2f(0.1f,0.085f);
	glVertex2f(0.3f,0.085f);
	glVertex2f(0.3f,0.0f);
    glEnd();
glLoadIdentity();
// Triangles rotating
    glPushMatrix(); //glPushMatrix copies the top matrix and pushes it onto the stack, while glPopMatrix pops the top matrix off the stack

  glTranslatef(0.2,0.5,0);
    glRotatef(r,0.0,0.0,1.0);

    glBegin(GL_TRIANGLES);
	glColor3f(1.0f, 0.0f, 0.0f);
	glVertex2f(0.0f, 0.0f);    // x, y
    glVertex2f(0.225f, 0.1f);
	glVertex2f(0.1f, 0.2f);
    glEnd();
    glBegin(GL_TRIANGLES);
    glColor3f(1.0f, 0.0f, 0.0f);
	glVertex2f(0.0f, 0.0f);    // x, y// x, y
    glVertex2f(0.2f, -0.1f);
	glVertex2f(0.1f, -0.2f);
    glEnd();
    glBegin(GL_TRIANGLES);
	glColor3f(1.0f, 0.0f, 0.0f);
	glVertex2f(0.0f, 0.0f);    // x, y
    glVertex2f(-0.2f, -0.1f);
	glVertex2f(-.1f, -0.2f);
    glEnd();
    glBegin(GL_TRIANGLES);
	glColor3f(1.0f, 0.0f, 0.0f);
	glVertex2f(0.0f, 0.0f);    // x, y
    glVertex2f(-0.2f, 0.1f);
	glVertex2f(-.1f, 0.2f);
    glEnd();
    glPopMatrix();//while glPopMatrix pops the top matrix off the stack
    r+=0.01f;
glLoadIdentity();

    //WATCH

    glBegin(GL_QUADS);
	glColor3ub(49, 65, 92);
	glVertex2f(-.1f, 0.0f);    // x, y
    glVertex2f(-0.25f, 0.0f);
	glVertex2f(-0.25f, 0.3f);
	glVertex2f(-.1f, 0.3f);
    glEnd();
glLoadIdentity();


    GLfloat x4=-.17f; GLfloat y4=.3f;
	GLfloat radius4 = 0.16f; //radius
    glColor3ub(173,125,88);
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x4, y4); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x4 + (radius4 * cos(i *  twicePi / triangleAmount)),
			    y4 + (radius4 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
	glLoadIdentity();
	GLfloat x5=-.17f; GLfloat y5=.3f;
	GLfloat radius5 = 0.02f; //radius
    glColor3ub(0, 0, 0);
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x5, y5); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x5 + (radius5 * cos(i *  twicePi / triangleAmount)),
			    y5 + (radius5 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
	glLoadIdentity();
    GLfloat x6=-.17f; GLfloat y6=.3f;
	GLfloat radius6 = 0.15f; //radius
    glColor3ub(255, 255, 255);
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x6, y6); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x6 + (radius6 * cos(i *  twicePi / triangleAmount)),
			    y6 + (radius6 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
glLoadIdentity();

glTranslatef(-0.17,0.3,0);
glScalef(.32,.32,0);

    glBegin(GL_LINES);
    glColor3ub(255, 25, 25);
    glVertex2f(0.45f,0.0f);
    glVertex2f(0.5f,0.0f);
    glEnd();
    glBegin(GL_LINES);
    glColor3ub(255, 25, 25);
    glVertex2f(-0.45f,0.0f);
    glVertex2f(-0.5f,0.0f);
    glEnd();
    glBegin(GL_LINES);
    glColor3ub(255, 25, 25);
    glVertex2f(0.0f,0.45f);
    glVertex2f(0.0f,0.5f);
    glEnd();
    glBegin(GL_LINES);
    glColor3ub(255, 25, 25);
    glVertex2f(0.0f,-0.45f);
    glVertex2f(0.0f,-0.5f);
    glEnd();
glPushMatrix();
glRotatef(r1,0.0,0.0,-1.0);
    glBegin(GL_LINES); // Second Hand
    glColor3ub(255, 25, 25);
    glVertex2f(0.0f,0.0f);
    glVertex2f(0.0f,0.45f);
    glEnd();
glPopMatrix();
    r1+=0.01f;
glPushMatrix();
glRotatef(r2,0.0,0.0,-1.0);
    glBegin(GL_LINES); //Minutes Hand
    glColor3ub(44, 151, 222);
    glVertex2f(0.0f,0.0f);
    glVertex2f(0.35f,0.0f);
    glEnd();
glPopMatrix();
    r2+=0.005f;
glPushMatrix();
glRotatef(r3,0.0,0.0,-1.0);
    glBegin(GL_LINES);//Hour Hand
    glColor3ub(25, 25, 25);
    glVertex2f(0.0f,0.0f);
    glVertex2f(0.0f,-0.3f);
    glEnd();
glPopMatrix();
    r3+=0.001f;

glLoadIdentity();



    //Cloud.....................

glPushMatrix();
glTranslatef(position,0,0);

    GLfloat x7=-.8f; GLfloat y7=.85f;
	GLfloat radius7 = 0.1f; //radius
    glColor3ub(242, 242, 237);
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x7, y7); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x7 + (radius7 * cos(i *  twicePi / triangleAmount)),
			    y7 + (radius7 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
	GLfloat x8=-.93f; GLfloat y8=.82f;
	GLfloat radius8 = 0.1f; //radius
    glColor3ub(242, 242, 237);
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x8, y8); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x8 + (radius8 * cos(i *  twicePi / triangleAmount)),
			    y8 + (radius8 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
	GLfloat x9=-.66f; GLfloat y9=.84f;
	GLfloat radius9 = 0.1f; //radius
    glColor3ub(242, 242, 237);
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x9, y9); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x9 + (radius9 * cos(i *  twicePi / triangleAmount)),
			    y9 + (radius9 * sin(i * twicePi / triangleAmount))
			);
		}
		glEnd();


    GLfloat x10=.16f; GLfloat y10=.88f;
	GLfloat radius10 = 0.1f; //radius
    glColor3ub(242, 242, 237);
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x10, y10); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x10 + (radius10 * cos(i *  twicePi / triangleAmount)),
			    y10 + (radius10 * sin(i * twicePi / triangleAmount))
			);
		}
		glEnd();
		GLfloat x11=.26f; GLfloat y11=.88f;
	GLfloat radius11 = 0.1f; //radius
    glColor3ub(242, 242, 237);
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x11, y11); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x11 + (radius11 * cos(i *  twicePi / triangleAmount)),
			    y11 + (radius11 * sin(i * twicePi / triangleAmount))
			);
		}
		glEnd();

	glPopMatrix();
	glLoadIdentity();


// RAIN...............
glTranslatef(0,position4,0);
    glBegin(GL_LINES);
    glColor3ub(255, 255, 255);
    glVertex2f(0.0f,1.0f);
    glVertex2f(0.1f,0.8f);
    glEnd();
	glBegin(GL_LINES);
    glColor3ub(255, 255, 255);
    glVertex2f(0.2f,1.0f);
    glVertex2f(0.3f,0.8f);
    glEnd();glBegin(GL_LINES);
    glColor3ub(255, 255, 255);
    glVertex2f(0.4f,1.0f);
    glVertex2f(0.5f,0.8f);
    glEnd();glBegin(GL_LINES);
    glColor3ub(255, 255, 255);
    glVertex2f(0.6f,1.0f);
    glVertex2f(0.7f,0.8f);
    glEnd();
    glEnd();glBegin(GL_LINES);
    glColor3ub(255, 255, 255);
    glVertex2f(0.85f,1.0f);
    glVertex2f(0.95f,0.8f);
    glEnd();
    glBegin(GL_LINES);
    glColor3ub(255, 255, 255);
    glVertex2f(-1.0f,1.0f);
    glVertex2f(-.9f,0.8f);
    glEnd();
    glBegin(GL_LINES);
    glColor3ub(255, 255, 255);
    glVertex2f(-0.8f,1.0f);
    glVertex2f(-.7f,0.8f);
    glEnd();
    glBegin(GL_LINES);
    glColor3ub(255, 255, 255);
    glVertex2f(-0.6f,1.0f);
    glVertex2f(-.5f,0.8f);
    glEnd();
    glBegin(GL_LINES);
    glColor3ub(255, 255, 255);
    glVertex2f(-.4f,1.0f);
    glVertex2f(-.3f,0.8f);
    glEnd();
    glBegin(GL_LINES);
    glColor3ub(255, 255, 255);
    glVertex2f(-.2f,1.0f);
    glVertex2f(-.1f,0.8f);
    glEnd();
glTranslatef(0,-.4,0);
    glBegin(GL_LINES);
    glColor3ub(255, 255, 255);
    glVertex2f(0.0f,1.0f);
    glVertex2f(0.1f,0.8f);
    glEnd();
	glBegin(GL_LINES);
    glColor3ub(255, 255, 255);
    glVertex2f(0.2f,1.0f);
    glVertex2f(0.3f,0.8f);
    glEnd();glBegin(GL_LINES);
    glColor3ub(255, 255, 255);
    glVertex2f(0.4f,1.0f);
    glVertex2f(0.5f,0.8f);
    glEnd();glBegin(GL_LINES);
    glColor3ub(255, 255, 255);
    glVertex2f(0.6f,1.0f);
    glVertex2f(0.7f,0.8f);
    glEnd();
    glEnd();glBegin(GL_LINES);
    glColor3ub(255, 255, 255);
    glVertex2f(0.8f,1.0f);
    glVertex2f(0.9f,0.8f);
    glEnd();
    glBegin(GL_LINES);
    glColor3ub(255, 255, 255);
    glVertex2f(-1.0f,1.0f);
    glVertex2f(-.9f,0.8f);
    glEnd();
    glBegin(GL_LINES);
    glColor3ub(255, 255, 255);
    glVertex2f(-0.8f,1.0f);
    glVertex2f(-.7f,0.8f);
    glEnd();
    glBegin(GL_LINES);
    glColor3ub(255, 255, 255);
    glVertex2f(-0.6f,1.0f);
    glVertex2f(-.5f,0.8f);
    glEnd();
    glBegin(GL_LINES);
    glColor3ub(255, 255, 255);
    glVertex2f(-.4f,1.0f);
    glVertex2f(-.3f,0.8f);
    glEnd();
    glBegin(GL_LINES);
    glColor3ub(255, 255, 255);
    glVertex2f(-.2f,1.0f);
    glVertex2f(-.1f,0.8f);
    glEnd();

glTranslatef(0,-.5,0);
    glBegin(GL_LINES);
    glColor3ub(255, 255, 255);
    glVertex2f(0.0f,1.0f);
    glVertex2f(0.1f,0.8f);
    glEnd();
	glBegin(GL_LINES);
    glColor3ub(255, 255, 255);
    glVertex2f(0.2f,1.0f);
    glVertex2f(0.3f,0.8f);
    glEnd();glBegin(GL_LINES);
    glColor3ub(255, 255, 255);
    glVertex2f(0.4f,1.0f);
    glVertex2f(0.5f,0.8f);
    glEnd();glBegin(GL_LINES);
    glColor3ub(255, 255, 255);
    glVertex2f(0.6f,1.0f);
    glVertex2f(0.7f,0.8f);
    glEnd();
    glEnd();glBegin(GL_LINES);
    glColor3ub(255, 255, 255);
    glVertex2f(0.8f,1.0f);
    glVertex2f(0.9f,0.8f);
    glEnd();
    glBegin(GL_LINES);
    glColor3ub(255, 255, 255);
    glVertex2f(-1.0f,1.0f);
    glVertex2f(-.9f,0.8f);
    glEnd();
    glBegin(GL_LINES);
    glColor3ub(255, 255, 255);
    glVertex2f(-0.8f,1.0f);
    glVertex2f(-.7f,0.8f);
    glEnd();
    glBegin(GL_LINES);
    glColor3ub(255, 255, 255);
    glVertex2f(-0.6f,1.0f);
    glVertex2f(-.5f,0.8f);
    glEnd();
    glBegin(GL_LINES);
    glColor3ub(255, 255, 255);
    glVertex2f(-.4f,1.0f);
    glVertex2f(-.3f,0.8f);
    glEnd();
    glBegin(GL_LINES);
    glColor3ub(255, 255, 255);
    glVertex2f(-.2f,1.0f);
    glVertex2f(-.1f,0.8f);
    glEnd();

glTranslatef(0,-.6,0);
    glBegin(GL_LINES);
    glColor3ub(255, 255, 255);
    glVertex2f(0.0f,1.0f);
    glVertex2f(0.1f,0.8f);
    glEnd();
	glBegin(GL_LINES);
    glColor3ub(255, 255, 255);
    glVertex2f(0.2f,1.0f);
    glVertex2f(0.3f,0.8f);
    glEnd();glBegin(GL_LINES);
    glColor3ub(255, 255, 255);
    glVertex2f(0.4f,1.0f);
    glVertex2f(0.5f,0.8f);
    glEnd();glBegin(GL_LINES);
    glColor3ub(255, 255, 255);
    glVertex2f(0.6f,1.0f);
    glVertex2f(0.7f,0.8f);
    glEnd();
    glEnd();glBegin(GL_LINES);
    glColor3ub(255, 255, 255);
    glVertex2f(0.8f,1.0f);
    glVertex2f(0.9f,0.8f);
    glEnd();
    glBegin(GL_LINES);
    glColor3ub(255, 255, 255);
    glVertex2f(-1.0f,1.0f);
    glVertex2f(-.9f,0.8f);
    glEnd();
    glBegin(GL_LINES);
    glColor3ub(255, 255, 255);
    glVertex2f(-0.8f,1.0f);
    glVertex2f(-.7f,0.8f);
    glEnd();
    glBegin(GL_LINES);
    glColor3ub(255, 255, 255);
    glVertex2f(-0.6f,1.0f);
    glVertex2f(-.5f,0.8f);
    glEnd();
    glBegin(GL_LINES);
    glColor3ub(255, 255, 255);
    glVertex2f(-.4f,1.0f);
    glVertex2f(-.3f,0.8f);
    glEnd();
    glBegin(GL_LINES);
    glColor3ub(255, 255, 255);
    glVertex2f(-.2f,1.0f);
    glVertex2f(-.1f,0.8f);
    glEnd();
glTranslatef(0,-.7,0);
    glBegin(GL_LINES);
    glColor3ub(255, 255, 255);
    glVertex2f(0.0f,1.0f);
    glVertex2f(0.1f,0.8f);
    glEnd();
	glBegin(GL_LINES);
    glColor3ub(255, 255, 255);
    glVertex2f(0.2f,1.0f);
    glVertex2f(0.3f,0.8f);
    glEnd();glBegin(GL_LINES);
    glColor3ub(255, 255, 255);
    glVertex2f(0.4f,1.0f);
    glVertex2f(0.5f,0.8f);
    glEnd();glBegin(GL_LINES);
    glColor3ub(255, 255, 255);
    glVertex2f(0.6f,1.0f);
    glVertex2f(0.7f,0.8f);
    glEnd();
    glEnd();glBegin(GL_LINES);
    glColor3ub(255, 255, 255);
    glVertex2f(0.8f,1.0f);
    glVertex2f(0.9f,0.8f);
    glEnd();
    glBegin(GL_LINES);
    glColor3ub(255, 255, 255);
    glVertex2f(-1.0f,1.0f);
    glVertex2f(-.9f,0.8f);
    glEnd();
    glBegin(GL_LINES);
    glColor3ub(255, 255, 255);
    glVertex2f(-0.8f,1.0f);
    glVertex2f(-.7f,0.8f);
    glEnd();
    glBegin(GL_LINES);
    glColor3ub(255, 255, 255);
    glVertex2f(-0.6f,1.0f);
    glVertex2f(-.5f,0.8f);
    glEnd();
    glBegin(GL_LINES);
    glColor3ub(255, 255, 255);
    glVertex2f(-.4f,1.0f);
    glVertex2f(-.3f,0.8f);
    glEnd();
    glBegin(GL_LINES);
    glColor3ub(255, 255, 255);
    glVertex2f(-.2f,1.0f);
    glVertex2f(-.1f,0.8f);
    glEnd();

	glFlush();  // Render now



}
void handleKeypress(unsigned char key, int x, int y) {
	switch (key) {
case 'n':
    glutDisplayFunc(Night);
    break;
case 'd':
    glutDisplayFunc(Day);
    break;
case 'r':
    glutDisplayFunc(Rain);
    break;
glutPostRedisplay();
	}
}


/* Main function: GLUT runs as a console application starting at main()  */
int main(int argc, char** argv) {
	glutInit(&argc, argv);                 // Initialize GLUT
	glutCreateWindow("SeaPort view"); // Create a window with the given title
	glutInitWindowSize(320, 320);   // Set the window's initial width & height
	glutDisplayFunc(Day);// Register display callback handler for window re-paint
	 glutIdleFunc(Idle);//glutIdleFunc sets the global idle callback to be func so a GLUT program can perform background processing tasks or continuous animation when window system events are not being received.
//
//	 glutMouseFunc(handleMouse);
	 glutTimerFunc(100, update, 0);

	 glutKeyboardFunc(handleKeypress);
	 glutTimerFunc(100, update2, 0);

//    glutSpecialFunc(SpecialInput);
	 glutTimerFunc(100, update3, 0);

	 glutTimerFunc(100, update4, 0);

	glutMainLoop();           // Enter the event-processing loop
	return 0;
}
