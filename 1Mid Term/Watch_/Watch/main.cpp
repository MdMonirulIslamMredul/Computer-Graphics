#include <windows.h>  // for MS Windows
#include <GL/glut.h>  // GLUT, include glu.h and gl.h
#include<math.h>>
# define PI           3.14159265358979323846
/* Handler for window-repaint event. Call back when the window first appears and
whenever the window needs to be re-painted. */
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

    glClearColor(0.0f, 0.0f, 0.0f, 0.0f); // Set background color to black and opaque
	glClear(GL_COLOR_BUFFER_BIT);         // Clear the color buffer (background)

    GLfloat x1=.0f; GLfloat y1=.0f;
	GLfloat radius = 0.55f; //radius
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
	GLfloat radius3 = 0.5f; //radius
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

glLoadIdentity();

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


glFlush();

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
