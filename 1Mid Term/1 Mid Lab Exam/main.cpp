#include <windows.h>  // for MS Windows
#include <GL/glut.h>  // GLUT, include glu.h and gl.h
#include<math.h>>
# define PI           3.14159265358979323846
/* Handler for window-repaint event. Call back when the window first appears and
whenever the window needs to be re-painted. */
void display() {

    glClearColor(1.0f, 1.0f, 1.0f, 1.0f); // Set background color to black and opaque
	glClear(GL_COLOR_BUFFER_BIT);         // Clear the color buffer (background)

    glScalef(-.7,.7,0);
    glBegin(GL_QUADS);
	glColor3ub(250, 230, 10);
	glVertex2f(-0.5f, 0.0f);    // x, y
    glVertex2f(-0.5f, 0.2f);
	glVertex2f(0.5f, 0.2f);
	glVertex2f(0.5f, 0.0f);
    glEnd();

    glBegin(GL_QUADS);
	glColor3ub(49, 65, 92);
	glVertex2f(-0.3f, 0.0f);    // x, y
    glVertex2f(-0.3f, -0.3f);
	glVertex2f(0.3f, -0.3f);
	glVertex2f(0.3f, 0.0f);
    glEnd();

       glBegin(GL_QUADS);
	glColor3ub(49, 65, 12);
	glVertex2f(-0.5f, 0.0f);    // x, y
    glVertex2f(-0.5f, -0.2f);
	glVertex2f(-0.3f, -0.2f);
	glVertex2f(-0.3f, 0.0f);
    glEnd();

          glBegin(GL_QUADS);
	glColor3ub(49, 65, 12);
	glVertex2f(0.5f, 0.0f);    // x, y
    glVertex2f(0.5f, -0.2f);
	glVertex2f(0.3f, -0.2f);
	glVertex2f(0.3f, 0.0f);
    glEnd();

      glBegin(GL_QUADS);
	glColor3ub(49, 15, 12);
	glVertex2f(0.5f, -0.2f);    // x, y
    glVertex2f(0.5f, -0.6f);
	glVertex2f(0.3f, -0.6f);
	glVertex2f(0.3f, -0.2f);
    glEnd();

    glBegin(GL_QUADS);
	glColor3ub(49, 15, 12);
	glVertex2f(-0.5f, -0.2f);    // x, y
    glVertex2f(-0.5f, -0.6f);
	glVertex2f(-0.3f, -0.6f);
	glVertex2f(-0.3f, -0.2f);
    glEnd();

    glBegin(GL_QUADS);
	glColor3ub(79, 125, 12);
	glVertex2f(-0.5f, -0.6f);    // x, y
    glVertex2f(-0.5f, -0.8f);
	glVertex2f(-0.3f, -0.8f);
	glVertex2f(-0.3f, -0.6f);
    glEnd();
    glBegin(GL_QUADS);
	glColor3ub(79, 125, 12);
	glVertex2f(0.5f, -0.6f);    // x, y
    glVertex2f(0.5f, -0.8f);
	glVertex2f(0.3f, -0.8f);
	glVertex2f(0.3f, -0.6f);
    glEnd();

     glBegin(GL_QUADS);
	glColor3ub(49, 115, 12);
	glVertex2f(-0.3f, -0.3f);    // x, y
    glVertex2f(-0.1f, -0.3f);
	glVertex2f(-0.1f, -0.6f);
	glVertex2f(-0.3f, -0.6f);
    glEnd();

     glBegin(GL_QUADS);
	glColor3ub(49, 115, 12);
	glVertex2f(0.3f, -0.3f);    // x, y
    glVertex2f(0.1f, -0.3f);
	glVertex2f(0.1f, -0.6f);
	glVertex2f(0.3f, -0.6f);
    glEnd();

     glBegin(GL_QUADS);
	glColor3ub(99, 115, 12);
	glVertex2f(0.3f, -0.6f);    // x, y
    glVertex2f(0.1f, -0.6f);
	glVertex2f(0.1f, -0.8f);
	glVertex2f(0.3f, -0.8f);
    glEnd();
     glBegin(GL_QUADS);
	glColor3ub(99, 115, 12);
	glVertex2f(-0.3f, -0.6f);    // x, y
    glVertex2f(-0.1f, -0.6f);
	glVertex2f(-0.1f, -0.8f);
	glVertex2f(-0.3f, -0.8f);
    glEnd();


    //body up

    glBegin(GL_QUADS);
	glColor3ub(84, 83, 78);
	glVertex2f(-0.5f, 0.2f);    // x, y
    glVertex2f(-0.5f, 0.8f);
	glVertex2f(0.5f, 0.8f);
	glVertex2f(0.5f, 0.2f);
    glEnd();

    glBegin(GL_QUADS);
	glColor3ub(41, 40, 38);
	glVertex2f(-0.3f, 0.4f);    // x, y
    glVertex2f(-0.3f, 0.6f);
	glVertex2f(0.3f, 0.6f);
	glVertex2f(0.3f, 0.4f);
    glEnd();
    //Hand
     glBegin(GL_QUADS);
	glColor3ub(84, 83, 78);
	glVertex2f(0.5f, 0.4f);    // x, y
    glVertex2f(0.5f, 0.6f);
	glVertex2f(0.7f, 0.6f);
	glVertex2f(0.7f, 0.4f);
    glEnd();

    glBegin(GL_QUADS);
	glColor3ub(84, 83, 78);
	glVertex2f(-0.5f, 0.4f);    // x, y
    glVertex2f(-0.5f, 0.6f);
	glVertex2f(-0.7f, 0.6f);
	glVertex2f(-0.7f, 0.4f);
    glEnd();

     glBegin(GL_QUADS);
	glColor3ub(191, 139, 34);
	glVertex2f(0.5f, 0.2f);    // x, y
    glVertex2f(0.5f, 0.4f);
	glVertex2f(0.7f, 0.4f);
	glVertex2f(0.7f, 0.2f);
    glEnd();
    glBegin(GL_QUADS);
	glColor3ub(10, 59, 240);
	glVertex2f(0.5f, 0.0f);    // x, y
    glVertex2f(0.5f, 0.2f);
	glVertex2f(0.7f, 0.2f);
	glVertex2f(0.7f, 0.0f);
    glEnd();
    glBegin(GL_QUADS);
	glColor3ub(13, 12, 13);
	glVertex2f(0.5f, 0.0f);    // x, y
    glVertex2f(0.7f, 0.0f);
	glVertex2f(0.7f, -0.5f);
	glVertex2f(0.5f, -0.5f);
    glEnd();

     glBegin(GL_QUADS);
	glColor3ub(191, 139, 34);
	glVertex2f(-0.5f, 0.2f);    // x, y
    glVertex2f(-0.5f, 0.4f);
	glVertex2f(-0.7f, 0.4f);
	glVertex2f(-0.7f, 0.2f);
    glEnd();
    glBegin(GL_QUADS);
	glColor3ub(10, 59, 240);
	glVertex2f(-0.5f, 0.0f);    // x, y
    glVertex2f(-0.5f, 0.2f);
	glVertex2f(-0.7f, 0.2f);
	glVertex2f(-0.7f, 0.0f);
    glEnd();
    glBegin(GL_QUADS);
	glColor3ub(31, 19, 2);
	glVertex2f(-0.5f, 0.0f);    // x, y
    glVertex2f(-0.7f, 0.0f);
	glVertex2f(-0.7f, -0.5f);
	glVertex2f(-0.5f, -0.5f);
    glEnd();
    glBegin(GL_QUADS);
	glColor3ub(207, 141, 19);
	glVertex2f(-0.3f, 0.8f);    // x, y
    glVertex2f(-0.3f, 1.0f);
	glVertex2f(0.3f, 1.0f);
	glVertex2f(0.3f, 0.8f);
    glEnd();

    glBegin(GL_QUADS);
	glColor3ub(31, 19, 207);
	glVertex2f(-0.3f, 1.0f);    // x, y
    glVertex2f(-0.3f, 1.2f);
	glVertex2f(0.3f, 1.2f);
	glVertex2f(0.3f, 1.0f);
    glEnd();


    glBegin(GL_QUADS);
	glColor3ub(31, 19, 207);
	glVertex2f(-0.3f, 1.2f);    // x, y
    glVertex2f(-0.3f, 1.4f);
	glVertex2f(-0.1f, 1.4f);
	glVertex2f(-0.1f, 1.2f);
    glEnd();

    glBegin(GL_QUADS);
	glColor3ub(13, 12, 13 );
	glVertex2f(0.3f, 1.2f);    // x, y
    glVertex2f(0.3f, 1.4f);
	glVertex2f(0.1f, 1.4f);
	glVertex2f(0.1f, 1.2f);
    glEnd();

     glBegin(GL_QUADS);
	glColor3ub(13, 12, 13 );
	glVertex2f(-0.1f, -0.3f);    // x, y
    glVertex2f(-0.1f, -0.5f);
	glVertex2f(0.1f, -0.5f);
	glVertex2f(0.1f, -0.3f);
    glEnd();








	glFlush();  // Render now
}


/* Main function: GLUT runs as a console application starting at main()  */
int main(int argc, char** argv) {
	glutInit(&argc, argv);                 // Initialize GLUT
	glutCreateWindow("Lab Exam"); // Create a window with the given title
	glutInitWindowSize(320, 320);   // Set the window's initial width & height
	glutDisplayFunc(display);// Register display callback handler for window re-paint
	glutMainLoop();           // Enter the event-processing loop
	return 0;
}
