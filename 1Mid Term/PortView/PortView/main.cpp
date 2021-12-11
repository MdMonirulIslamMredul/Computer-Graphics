#include <windows.h>  // for MS Windows
#include <GL/glut.h>  // GLUT, include glu.h and gl.h
#include<math.h>>
# define PI           3.14159265358979323846
/* Handler for window-repaint event. Call back when the window first appears and
whenever the window needs to be re-painted. */
void display() {

    glClearColor(1.0f, 1.0f, 1.0f, 1.0f); // Set background color to black and opaque
	glClear(GL_COLOR_BUFFER_BIT);         // Clear the color buffer (background)


    glBegin(GL_QUADS);
	glColor3ub(150, 248, 255);
	glVertex2f(-1.0f, 1.0f);    // x, y
    glVertex2f(-1.0f, 0.0f);
	glVertex2f(1.0f, 0.0f);
	glVertex2f(1.0f, 1.0f);
    glEnd();

    glBegin(GL_QUADS);
	glColor3ub(5, 151, 255);;
	glVertex2f(-1.0f, 0.0f);    // x, y
	glVertex2f(-1.0f, -1.0f);
	glVertex2f(1.0f, -1.0f);
	glVertex2f(1.0f, 0.0f);
    glEnd();

    glBegin(GL_QUADS);
	glColor3ub(82, 112, 70);
	glVertex2f(-1.0f, 0.1f);
	glVertex2f(-1.0f, -0.1f);
    glVertex2f(1.0f, -0.1f);
	glVertex2f(1.0f,0.1f);
    glEnd();
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
// ....ship  2
    glBegin(GL_POLYGON);
	glColor3ub(227, 225, 216);
	glVertex2f(-0.2f,-0.5f);
	glVertex2f(-0.2f,-0.45f);
	glVertex2f(-0.1f,-0.45f);
    glVertex2f(-0.2f, -0.7f);
	glVertex2f(-0.8f, -0.7f);
    glVertex2f(-0.9f, -0.5f);
    glEnd();
    glBegin(GL_QUADS);
	glColor3ub(16, 23, 245);
	glVertex2f(-.3f, -0.4f);    // x, y
    glVertex2f(-0.4f, -0.4f);
	glVertex2f(-0.4f, -0.5f);
	glVertex2f(-.3f, -0.5f);
    glEnd();
    glBegin(GL_QUADS);
	glColor3ub(16, 23, 245);
	glVertex2f(-.5f, -0.4f);    // x, y
    glVertex2f(-0.6f, -0.4f);
	glVertex2f(-0.6f, -0.5f);
	glVertex2f(-.5f, -0.5f);
    glEnd();
    glBegin(GL_QUADS);
	glColor3ub(16, 23, 245);
	glVertex2f(-.7f, -0.4f);    // x, y
    glVertex2f(-0.8f, -0.4f);
	glVertex2f(-0.8f, -0.5f);
	glVertex2f(-.7f, -0.5f);
    glEnd();
    glBegin(GL_QUADS);
	glColor3ub(168, 138, 0);
	glVertex2f(-.4f, -0.3f);    // x, y
    glVertex2f(-0.7f, -0.3f);
	glVertex2f(-0.7f, -0.4f);
	glVertex2f(-.4f, -0.4f);
    glEnd();

    GLfloat x1=.75f; GLfloat y1=.8f;
	int triangleAmount = 20; //# of triangles used to draw circle
    int i;
	GLfloat radius = 0.1f; //radius
	GLfloat twicePi = 2.0f * PI;
    glColor3ub(255, 247, 3);
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x1, y1); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x1 + (radius * cos(i *  twicePi / triangleAmount)),
			    y1 + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	GLfloat x2=.25f; GLfloat y2=-.2f;
	GLfloat radius2 = 0.025f; //radius
    glColor3ub(255, 247, 3);
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x2, y2); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x2 + (radius2 * cos(i *  twicePi / triangleAmount)),
			    y2 + (radius2 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();



	glFlush();  // Render now
}


/* Main function: GLUT runs as a console application starting at main()  */
int main(int argc, char** argv) {
	glutInit(&argc, argv);                 // Initialize GLUT
	glutCreateWindow("SeaPort view"); // Create a window with the given title
	glutInitWindowSize(320, 320);   // Set the window's initial width & height
	glutDisplayFunc(display);// Register display callback handler for window re-paint
	glutMainLoop();           // Enter the event-processing loop
	return 0;
}
