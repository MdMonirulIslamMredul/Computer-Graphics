#include <windows.h>  // for MS Windows
#include <GL/glut.h>  // GLUT, include glu.h and gl.h
#include<math.h>>
# define PI           3.14159265358979323846
/* Handler for window-repaint event. Call back when the window first appears and
whenever the window needs to be re-painted. */
GLfloat r = 0.0f;
GLfloat r1 = 0.0f;
GLfloat r2 = 0.0f;
GLfloat r3 = 0.0f;
void Idle()
{
    glutPostRedisplay();//// marks the current window as needing to be redisplayed
}

void display() {

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
glLoadIdentity();
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


// ....ship  2
  glTranslatef(-0.2,-0.5,0);
    glScalef(-.8,1.1,0);
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







	glFlush();  // Render now



}


/* Main function: GLUT runs as a console application starting at main()  */
int main(int argc, char** argv) {
	glutInit(&argc, argv);                 // Initialize GLUT
	glutCreateWindow("SeaPort view"); // Create a window with the given title
	glutInitWindowSize(320, 320);   // Set the window's initial width & height
	glutDisplayFunc(display);// Register display callback handler for window re-paint
	 glutIdleFunc(Idle);//glutIdleFunc sets the global idle callback to be func so a GLUT program can perform background processing tasks or continuous animation when window system events are not being received.
	glutMainLoop();           // Enter the event-processing loop
	return 0;
}
