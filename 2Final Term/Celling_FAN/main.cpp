#include <windows.h>  // for MS Windows
#include <GL/glut.h>  // GLUT, include glu.h and gl.h
#include<math.h>>
# define PI           3.14159265358979323846
/* Handler for window-repaint event. Call back when the window first appears and
whenever the window needs to be re-painted. */
GLfloat r1 = 0.0f;
GLfloat speed = 0.0f;
void Idle()
{
    glutPostRedisplay();//// marks the current window as needing to be redisplayed
}

void display() {

    GLfloat twicePi = 2.0f * PI;
    int triangleAmount = 50; //# of triangles used to draw circle

    glClearColor(0.0f, 0.0f, 0.0f, 0.0f); // Set background color to black and opaque
	glClear(GL_COLOR_BUFFER_BIT);         // Clear the color buffer (background)



	glPushMatrix();
glRotatef(r1,0.0,0.0,-1.0);
	 glBegin(GL_POLYGON); //1st hand
	glColor3ub(227, 225, 216);
	glVertex2f(0.1f,0.3f);
	glVertex2f(0.3f,0.1f);
	glVertex2f(0.75f,0.6f);
	glVertex2f(0.6f,0.8f);
    glEnd();
    glBegin(GL_POLYGON);
	glColor3ub(227, 22, 216);
	glVertex2f(0.1f,0.1f);
	glVertex2f(0.2f,0.1f);
	glVertex2f(0.3f,0.2f);
	glVertex2f(0.2f,0.3f);
	glVertex2f(0.1f,0.2f);
    glEnd();



    glScalef(1.0f,-1.0f,0.0f); //2nd hand
    glBegin(GL_POLYGON);
	glColor3ub(227, 225, 216);
	glVertex2f(0.1f,0.3f);
	glVertex2f(0.3f,0.1f);
	glVertex2f(0.75f,0.6f);
	glVertex2f(0.6f,0.8f);
    glEnd();
    glBegin(GL_POLYGON);
	glColor3ub(227, 22, 216);
	glVertex2f(0.1f,0.1f);
	glVertex2f(0.2f,0.1f);
	glVertex2f(0.3f,0.2f);
	glVertex2f(0.2f,0.3f);
	glVertex2f(0.1f,0.2f);
    glEnd();
//    glLoadIdentity();





    glScalef(-1.0f,1.0f,0.0f); //4th hand
    glBegin(GL_POLYGON);
	glColor3ub(227, 225, 216);
	glVertex2f(0.1f,0.3f);
	glVertex2f(0.3f,0.1f);
	glVertex2f(0.75f,0.6f);
	glVertex2f(0.6f,0.8f);
    glEnd();
    glBegin(GL_POLYGON);
	glColor3ub(227, 22, 216);
	glVertex2f(0.1f,0.1f);
	glVertex2f(0.2f,0.1f);
	glVertex2f(0.3f,0.2f);
	glVertex2f(0.2f,0.3f);
	glVertex2f(0.1f,0.2f);
    glEnd();
//    glLoadIdentity();


    glScalef(1.0f,-1.0f,0.0f); //2nd hand
    glBegin(GL_POLYGON);
	glColor3ub(227, 225, 216);
	glVertex2f(0.1f,0.3f);
	glVertex2f(0.3f,0.1f);
	glVertex2f(0.75f,0.6f);
	glVertex2f(0.6f,0.8f);
    glEnd();
    glBegin(GL_POLYGON);
	glColor3ub(227, 22, 216);
	glVertex2f(0.1f,0.1f);
	glVertex2f(0.2f,0.1f);
	glVertex2f(0.3f,0.2f);
	glVertex2f(0.2f,0.3f);
	glVertex2f(0.1f,0.2f);
    glEnd();
//    glLoadIdentity();



 glScalef(-1.0f,-1.0f,0.0f); //3rd hand
    glBegin(GL_POLYGON);
	glColor3ub(227, 225, 216);
	glVertex2f(0.1f,0.3f);
	glVertex2f(0.3f,0.1f);
	glVertex2f(0.75f,0.6f);
	glVertex2f(0.6f,0.8f);
    glEnd();
    glBegin(GL_POLYGON);
	glColor3ub(227, 22, 216);
	glVertex2f(0.1f,0.1f);
	glVertex2f(0.2f,0.1f);
	glVertex2f(0.3f,0.2f);
	glVertex2f(0.2f,0.3f);
	glVertex2f(0.1f,0.2f);
    glEnd();
//   glLoadIdentity();





    GLfloat x1=.0f; GLfloat y1=.0f;
	GLfloat radius = 0.2f; //radius
    glColor3ub(173,125,88);
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x1, y1); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x1 + (radius * cos(i *  twicePi / triangleAmount)),
			    y1 + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
	GLfloat x2=.0f; GLfloat y2=.0f;
	GLfloat radius2 = 0.02f; //radius
    glColor3ub(0, 0, 0);
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x2, y2); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x2 + (radius2 * cos(i *  twicePi / triangleAmount)),
			    y2 + (radius2 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
    GLfloat x3=.0f; GLfloat y3=.0f;
	GLfloat radius3 = 0.15f; //radius
    glColor3ub(255, 255, 255);
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x3, y3); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x3 + (radius3 * cos(i *  twicePi / triangleAmount)),
			    y3 + (radius3 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


glPopMatrix();
    r1+=speed;



glFlush();

}

void handleKeypress(unsigned char key, int x, int y) {
	switch (key) {
case 'o':
    speed = 0.05f;
    break;
case 'f':
    speed = 0.0f;
    break;
    case 'i':
    speed += 0.05f;
    break;
case 'd':
    if (speed>0.05){
    speed -= 0.05f;
    }
    break;
glutPostRedisplay();
	}
}

/* Main function: GLUT runs as a console application starting at main()  */
int main(int argc, char** argv) {
	glutInit(&argc, argv);                 // Initialize GLUT
	glutCreateWindow("SeaPort view"); // Create a window with the given title
	glutInitWindowSize(320, 320);   // Set the window's initial width & height
	glutDisplayFunc(display);// Register display callback handler for window re-paint
	 glutIdleFunc(Idle);//glutIdleFunc sets the global idle callback to be func so a GLUT program can perform background processing tasks or continuous animation when window system events are not being received.
	glutKeyboardFunc(handleKeypress);
	glutMainLoop();           // Enter the event-processing loop
	return 0;
}
