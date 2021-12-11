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
	glColor3ub(96, 31, 31);
	glVertex2f(0.1f,0.3f);
	glVertex2f(0.3f,0.1f);
	glVertex2f(0.75f,0.6f);
	glVertex2f(0.6f,0.8f);
    glEnd();
    glBegin(GL_POLYGON);
	glColor3ub(230, 195, 55);
	glVertex2f(0.11f,0.11f);
	glVertex2f(0.2f,0.11f);
	glVertex2f(0.29f,0.2f);
	glVertex2f(0.29f,0.29f);
	glVertex2f(0.2f,0.29f);
	glVertex2f(0.11f,0.2f);
    glEnd();

 //2nd hand
    glBegin(GL_POLYGON);
	glColor3ub(96, 31, 31);
	glVertex2f(0.1f,-0.3f);
	glVertex2f(0.3f,-0.1f);
	glVertex2f(0.8f,-0.6f);
	glVertex2f(0.6f,-0.75f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(230, 195, 55);
	glVertex2f(0.11f,-0.11f);
	glVertex2f(0.2f,-0.11f);
	glVertex2f(0.29f,-0.2f);
	glVertex2f(0.29f,-0.29f);
	glVertex2f(0.2f,-0.29f);
	glVertex2f(0.11f,-0.2f);
    glEnd();


     //3rd hand
    glBegin(GL_POLYGON);
	glColor3ub(96, 31, 31);
	glVertex2f(-0.1f,-0.3f);
	glVertex2f(-0.3f,-0.1f);
	glVertex2f(-0.75f,-0.6f);
	glVertex2f(-0.6f,-0.8f);
    glEnd();
    glBegin(GL_POLYGON);
	glColor3ub(230, 195, 55);
	glVertex2f(-0.11f,-0.11f);
	glVertex2f(-0.2f,-0.11f);
	glVertex2f(-0.29f,-0.2f);
	glVertex2f(-0.29f,-0.29f);
	glVertex2f(-0.2f,-0.29f);
	glVertex2f(-0.11f,-0.2f);
    glEnd();


//4th hand
    glBegin(GL_POLYGON);
	glColor3ub(96, 31, 31);
	glVertex2f(-0.1f,0.3f);
	glVertex2f(-0.3f,0.1f);
	glVertex2f(-0.8f,0.6f);
	glVertex2f(-0.6f,0.75f);
    glEnd();
    glBegin(GL_POLYGON);
	glColor3ub(230, 195, 55);
	glVertex2f(-0.11f,0.11f);
	glVertex2f(-0.2f,0.11f);
	glVertex2f(-0.29f,0.2f);
	glVertex2f(-0.29f,0.29f);
	glVertex2f(-0.2f,0.29f);
	glVertex2f(-0.11f,0.2f);
    glEnd();








    GLfloat x1=.0f; GLfloat y1=.0f;
	GLfloat radius = 0.23f; //radius
    glColor3ub(168, 74, 50);
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
	GLfloat radius2 = 0.18f; //radius
    glColor3ub(116, 37, 37);
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
    r1+=speed;

glFlush();

}

void handleKeypress(unsigned char key, int x, int y) {
	switch (key) {
case 'o': // Fan ON
    speed = 0.05f;
    break;
case 'f': // Fan OFF
    speed = 0.0f;
    break;
    case 'i': // SPEED INCREASE
    speed += 0.05f;
    break;
case 'd':    // SPEED DECREASE
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
	glutCreateWindow("Celling_FAN"); // Create a window with the given title
	glutInitWindowSize(320, 320);   // Set the window's initial width & height
	glutDisplayFunc(display);// Register display callback handler for window re-paint

	glutKeyboardFunc(handleKeypress);

	 glutIdleFunc(Idle);//glutIdleFunc sets the global idle callback to be func so a GLUT program can perform background processing tasks or continuous animation when window system events are not being received.
	glutMainLoop();           // Enter the event-processing loop
	return 0;
}
