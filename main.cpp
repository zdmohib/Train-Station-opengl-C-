#include <windows.h>  // for MS Windows
#include <GL/glut.h>  // GLUT, include glu.h and gl.h
#include<math.h>>

# define PI           3.14159265358979323846

GLfloat z = 0.0f;


void Idle()
{
    glutPostRedisplay();//// marks the current window as needing to be redisplayed
}

/* Handler for window-repaint event. Call back when the window first appears and
whenever the window needs to be re-painted. */
void display() {
	glClearColor(1.0f, 1.0f, 1.0f, 1.0f); // Set background color to black and opaque
	glClear(GL_COLOR_BUFFER_BIT);         // Clear the color buffer (background)
	//glLineWidth(7.5);

//start

//----screen body ground------------------------------------------

	glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
	glColor3ub(191, 64, 64);
	glVertex2f(-1.0f, 0.0);
	glVertex2f(-1.0f, -1.0f);
	glVertex2f(1.0f, -1.0f);
	glVertex2f(1.0f, 0.0f);

	glEnd();

//----screen body sky7------------------------------------------

	glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
	glColor3ub(0, 204, 255);
	glVertex2f(-1.0f, 1.0);
	glVertex2f(-1.0f, 0.0f);
	glVertex2f(1.0f, 0.0f);
	glVertex2f(1.0f, 1.0f);

	glEnd();

//-----Tree leaves--------------------------------------------------
		int i;
		GLfloat x=0.8f; GLfloat y=0.8f; GLfloat radius =0.4f;
	int triangleAmount = 20; //# of triangles used to draw circle


	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi = 2.0f * PI;


	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(0, 102, 0);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


//----tree body----------------------------------

	glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
	glColor3ub(102, 51, 0);
	glVertex2f(0.8f, 0.5);
	glVertex2f(0.8f, 0.0f);
	glVertex2f(0.9f, 0.0f);
	glVertex2f(0.9f, 0.5f);
  glEnd();


//----building------------------------------------------

	glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
	glColor3ub(255, 255, 102);
	glVertex2f(-0.5f, 0.8);
	glVertex2f(-0.5f, 0.0f);
	glVertex2f(0.6f, 0.0f);
	glVertex2f(0.6f, 0.8f);

	glEnd();

//.....building head------------------------------------------

	glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
	glColor3ub(255, 255, 102);
	glVertex2f(-0.6f, 0.9);
	glVertex2f(-0.6f, 0.8f);
	glVertex2f(0.7f, 0.8f);
	glVertex2f(0.7f, 0.9f);

	glEnd();

//----building window1------------------------------------

	glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
	glColor3ub(0, 0, 0);
	glVertex2f(-0.4f, 0.7);
	glVertex2f(-0.4f, 0.6f);
	glVertex2f(-0.3f, 0.6f);
	glVertex2f(-0.3f, 0.7f);

    glEnd();
//----building window3----------------------------------

	glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
	glColor3ub(0, 0, 0);
	glVertex2f(0.0f, 0.7);
	glVertex2f(0.0f, 0.6f);
	glVertex2f(0.1f, 0.6f);
	glVertex2f(0.1f, 0.7f);

    glEnd();

//----building window3----------------------------------

	glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
	glColor3ub(0, 0, 0);
	glVertex2f(0.4f, 0.7);
	glVertex2f(0.4f, 0.6f);
	glVertex2f(0.5f, 0.6f);
	glVertex2f(0.5f, 0.7f);

    glEnd();

//-------- Rail Line2--------------------------------------
	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(-1.0f, -0.2f);    // x, y
	glVertex2f(1.0f, -0.2f);    // x, y

    glEnd();

//-------- Rail Line2--------------------------------------
	glBegin(GL_LINES);
	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(-1.0f, -0.5f);    // x, y
	glVertex2f(1.0f, -0.5f);    // x, y
	glEnd();



//----engine body front------------------------------------------

	glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
	glColor3ub(102, 102, 102);
	glVertex2f(0.5f, -0.1f);
	glVertex2f(0.7f, -0.1f);
	glVertex2f(0.7f, 0.2f);
	glVertex2f(0.5f, 0.2f);

	glEnd();


//----engine body------------------------------------------

	glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
	glColor3ub(102, 102, 102);
	glVertex2f(-0.8f, 0.5f);
	glVertex2f(-0.8f, -0.1f);
	glVertex2f(0.5f, -0.1f);
	glVertex2f(0.5f, 0.5f);

	glEnd();

//----engine window------------------------------------------

	glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
	glColor3ub(255, 255, 255);
	glVertex2f(0.2f, 0.4f);
	glVertex2f(0.2f, 0.2f);
	glVertex2f(0.4f, 0.2f);
	glVertex2f(0.4f, 0.4f);

	glEnd();


//----engine head------------------------------------------

	glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
	glColor3ub(102, 102, 102);
	glVertex2f(0.3f, 0.6f);
	glVertex2f(0.3f, 0.5f);
	glVertex2f(0.4f, 0.5f);
	glVertex2f(0.4f, 0.6f);

	glEnd();

//-----wheel1--------------------------------------------------

	x=-0.5f; y=-0.2f; radius =0.2f;
	triangleAmount = 20; //# of triangles used to draw circle


	//GLfloat radius = 0.8f; //radius
	twicePi = 2.0f * PI;


	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(26, 26, 0);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


//-----wheel2--------------------------------------------------

		 x=0.3f;  y=-0.2f; radius =0.2f;
	//GLfloat radius = 0.8f; //radius
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(26, 26, 0);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();





//------ Rail Line1-----------------------------------
	glLineWidth(7.5);
	glBegin(GL_LINES);
	glColor3f(1.0f, 0.0f, 0.0f);
	glVertex2f(0.7f, -0.1f);    // x, y
	glVertex2f(0.7f, -0.1f);    // x, y
	glEnd();


//---------bird-----------------
    glLineWidth(2.0);
	glBegin(GL_LINES);
	glColor3f(1.0f, 0.0f, 0.0f);
	glVertex2f(-0.9f, 0.9f);    // x, y
	glVertex2f(-0.8f, 0.8f);    // x, y
	glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 0.0f, 0.0f);
	glVertex2f(-0.8f, 0.8f);    // x, y
	glVertex2f(-0.7f, 0.9f);    // x, y
	glEnd();



//end

//------wind mill------------
    //body
 	glLineWidth(7.5);
	glBegin(GL_LINES);
	glColor3f(1.0f, 0.0f, 0.0f);
	glVertex2f(-0.9f, 0.0f);    // x, y
	glVertex2f(-0.9f, 0.6f);    // x, y
	glEnd();




      glTranslatef(-0.9,0.6,0);
    glPushMatrix();
    glRotatef(-z,0,0.0,0.1);

    //head1
    glBegin(GL_TRIANGLES);
    glColor3b(0,0,0);
	glVertex2f(0.0f, 0.0f);    // x, y
    glVertex2f(0.2f, -0.1f);    // x, y
	glVertex2f(0.2f, 0.1f);    // x, y

    glEnd();

        //head2
    glBegin(GL_TRIANGLES);
    glColor3b(0,0,0);
	glVertex2f(0.0f, 0.0f);    // x, y
	glVertex2f(0.1f, 0.2f);    // x, y
	glVertex2f(-0.1f, 0.2f);    // x, y
    glEnd();

    //head3
    glBegin(GL_TRIANGLES);
    glColor3b(0,0,0);
	glVertex2f(0.0f, 0.0f);    // x, y
	glVertex2f(-0.2f, 0.1f);    // x, y
	glVertex2f(-0.2f, -0.1f);    // x, y
    glEnd();

    //head3
    glBegin(GL_TRIANGLES);
    glColor3b(0,0,0);
	glVertex2f(0.0f, 0.0f);    // x, y
	glVertex2f(-0.1f, -0.2f);    // x, y
	glVertex2f(0.1f, -0.2f);    // x, y
    glEnd();

    glPopMatrix();
    z+=0.1f;

    glLoadIdentity();




	glFlush();  // Render now
}

/* Main function: GLUT runs as a console application starting at main()  */
int main(int argc, char** argv) {
	glutInit(&argc, argv);                 // Initialize GLUT
	glutCreateWindow("OpenGL Setup"); // Create a window with the given title
	glutInitWindowSize(320, 320);   // Set the window's initial width & height
	glutDisplayFunc(display); // Register display callback handler for window re-paint

	 glutIdleFunc(Idle);
	glutMainLoop();           // Enter the event-processing loop
	return 0;
}
