#include <windows.h>  // for MS Windows
#include <GL/glut.h>  // GLUT, include glu.h and gl.h
GLfloat xangle = 10.0f;     // Rotational angle
GLfloat yangle = 0.0f;     // Rotational angle
GLfloat zangle = 0.0f;     // Rotational angle
void initGL()
{
   glClearColor(0.9,0.9,0.9,1);                                         // Set background color to black and opaque
   glClearDepth(1.0f);                                           // Set background depth to farthest
   glEnable(GL_DEPTH_TEST);                       // Enable depth testing for z-culling
   glDepthFunc(GL_LEQUAL);                          // Set the type of depth-test
   glShadeModel(GL_SMOOTH);                        // Enable smooth shading
   glHint(GL_PERSPECTIVE_CORRECTION_HINT, GL_NICEST);  // Nice perspective corrections
}

void display()
{
   glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
   glMatrixMode(GL_MODELVIEW);     // To operate on model-view matrix
   glLoadIdentity();                 // Reset the model-view matrix
   glTranslatef(0.0f, 0.0f, -11.0f);  // Move right and into the screen
   glRotatef(xangle,1.0,0.0,0.0);
   glRotatef(yangle,0.0,1.0,0.0);
   glRotatef(zangle,0.0,0.0,1.0);

   glLineWidth(8);

   glBegin(GL_LINES);
      glColor3f(0.0f, 0.0f, 0.0f);
      glVertex3f(-2.0f, -0.53f, 1.12f);
      glVertex3f(2.0f, -0.53f, 1.12f);
   glEnd();



   glBegin(GL_LINE_STRIP);
      glColor3f(1.0f, 1.0f, 1.0f);
      glVertex3f(-1.6f, 0.0f, 1.11f);
      glVertex3f(-1.3f, 0.9f, 1.11f);
      glVertex3f(-1.1f, 0.9f, 1.11f);
      glVertex3f(-0.8f, 0.0f, 1.11f);
   glEnd();

    glBegin(GL_LINE_STRIP);
   glColor3f(1.0f, 1.0f, 1.0f);
      glVertex3f(0.0f, 0.9f, 1.11f);
      glVertex3f(-0.4f, 0.9f, 1.11f);
      glVertex3f(-0.4f, 0.0f, 1.11f);
      glVertex3f(0.0f, 0.0f, 1.11f);
   glEnd();

   glBegin(GL_LINE_STRIP);
   glColor3f(1.0f, 1.0f, 1.0f);
      glVertex3f(0.8f, 0.9f, 1.11f);
      glVertex3f(0.4f, 0.9f, 1.11f);
      glVertex3f(0.4f, 0.0f, 1.11f);
      glVertex3f(0.8f, 0.0f, 1.11f);

   glEnd();

   glBegin(GL_LINE_STRIP);
   glColor3f(1.0f, 1.0f, 1.0f);
      glVertex3f(1.6f, 0.9f, 1.11f);
      glVertex3f(1.2f, 0.9f, 1.11f);
      glVertex3f(1.2f, 0.45f, 1.11f);
      glVertex3f(1.6f, 0.45f, 1.11f);
      glVertex3f(1.6f, 0.0f, 1.11f);
      glVertex3f(1.2f, 0.0f, 1.11f);
   glEnd();

glLineWidth(8);
   glBegin(GL_LINE_LOOP);
      glColor3f(0.0f, 0.0f, 0.0f);
      glVertex3f(-2.0f, 1.5f, 1.1f);
      glVertex3f(-2.0f, -0.5f, 1.1f);
      glVertex3f(-2.0f, -0.5f, 1.1f);
      glVertex3f(-2.0f,  -0.5f, 3.1f);
      glVertex3f(2.0f,  -0.5f, 3.1f);
      glVertex3f(2.0f, -0.5f, 1.1f);
      glVertex3f(2.0f,  -0.5f, 1.1f);
      glVertex3f(2.0f,  1.5f, 1.1f);
glEnd();

glBegin(GL_QUADS);

      // Top 1 Face Outer
      glColor3f(1.0f, 0.0f, 0.0f);     // Red
      glVertex3f(0.0f, 3.0f, -1.0f);     //C
      glVertex3f(0.0f,  3.0f, 1.0f);    //C'
      glVertex3f(-4.0f,  1.0f, 1.0f);   //B'
      glVertex3f(-4.0f, 1.0f, -1.0f);     //B


      // Top 2 Face Outer
      glColor3f(1.0f, 1.0f, 0.0f);     // Yellow
      glVertex3f(4.0f, 1.0f, -1.0f);     //D
      glVertex3f(0.0f, 3.0f, -1.0f);     //C
      glVertex3f(0.0f,  3.0f, 1.0f);   //C'
      glVertex3f(4.0f, 1.0f, 1.0f);    //D

      //Bottom 1 Face Outer
      glColor3f(0.0f, 0.0f, 1.0f);     // Blue
      glVertex3f(-4.0f, -1.0f, -1.0f);     //A
      glVertex3f( -4.0f,  -1.0f, 1.0f);   //A'
      glVertex3f(0.0f,  -3.0f, 1.0f);    //F'
      glVertex3f(0.0f, -3.0f, -1.0f);     //F

      // Bottom 2 Face Outer
      glColor3f(1.0f, 0.0f, 1.0f);     // Magenta
      glVertex3f(4.0f, -1.0f, -1.0f);     //E
      glVertex3f(0.0f, -3.0f, -1.0f);     //F
      glVertex3f(0.0f, -3.0f, 1.0f);   //F'
      glVertex3f(4.0f, -1.0f, 1.0f);    //F'

      // Left Face Outer
      glColor3f(1.0f, 1.0f, 1.0f);     // Magenta
      glVertex3f(-4.0f, -1.0f, -1.0f);     //A
      glVertex3f(-4.0f, 1.0f, -1.0f);     //B
      glVertex3f(-4.0f,  1.0f, 1.0f);   //B'
      glVertex3f(-4.0f,  -1.0f, 1.0f);    //A'

      // Right Face Outer
      glColor3f(1.0f, 1.0f, 1.0f);     // Magenta
      glVertex3f(4.0f, 1.0f, -1.0f);     //D
      glVertex3f(4.0f, -1.0f, -1.0f);     //E
      glVertex3f(4.0f, -1.0f, 1.0f);   //E'
      glVertex3f(4.0f, 1.0f, 1.0f);    //D'

      //Top 1 Face Inner
      glColor3f(0.0f, 1.0f, 0.0f);
      glVertex3f(-2.5f, 0.5f, 1.0f);     //H'
      glVertex3f(0.0f, 1.5f, 1.0f);     //I'
      glVertex3f(0.0f,  1.5f, -1.0f);    //H
      glVertex3f(-2.5f,  0.5f, -1.0f);    //I

      //Top 2 Face Inner
      glColor3f(1.0f, 1.0f, 0.0f);
      glVertex3f(0.0f, 1.5f, 1.0f);     //I'
      glVertex3f(2.5f, 0.5f, 1.0f);     //J'
      glVertex3f(2.5f,  0.5f, -1.0f);    //J
      glVertex3f(0.0f,  1.5f, -1.0f);    //I

      //Bottom 1 Face Inner
      glColor3f(0.0f, 1.0f, 1.0f);     // Blue
      glVertex3f(-2.5f, -0.5f, 1.0f);     //G'
      glVertex3f(0.0f,  -1.5f, 1.0f);   //L'
      glVertex3f(0.0f,  -1.5f, -1.0f);    //L
      glVertex3f(-2.5f,-0.5f, -1.0f);     //G

      //Bottom 2 Face Inner
      glColor3f(1.0f, 1.0f, 0.0f);     // Blue
      glVertex3f(0.0f, -1.5f, 1.0f);     //G'
      glVertex3f(2.5f,  -0.5f, 1.0f);   //L'
      glVertex3f(2.5f,  -0.5f, -1.0f);    //L
      glVertex3f(0.0f, -1.5f, -1.0f);     //G

      //Left Face Inner
      glColor3f(0.0f, 0.0f, 1.0f);
      glVertex3f(-2.5f, -0.5f, 1.0f);     //G'
      glVertex3f(-2.5f, 0.5f, 1.0f);     //H'
      glVertex3f(-2.5f, 0.5f, -1.0f);   //H
      glVertex3f(-2.5f, -0.5f, -1.0f);    //G

      //Right Face Inner
      glColor3f(1.0f, 0.0f, 0.0f);
      glVertex3f(2.5f, -0.5f, 1.0f);     //K'
      glVertex3f(2.5f, 0.5f, 1.0f);     //J'
      glVertex3f(2.5f,  0.5f, -1.0f);   //J
      glVertex3f(2.5f,  -0.5f, -1.0f);    //K

      //Laptop Screen
      glColor3f(1.0f, 0.0f, 1.0f);
      glVertex3f(-2.0f, 1.5f, 1.1f);
      glVertex3f(-2.0f, -0.5f, 1.1f);
      glVertex3f(2.0f,  -0.5f, 1.1f);
      glVertex3f(2.0f,  1.5f, 1.1f);

      //Laptop Keyboard
      glColor3f(1.0f, 1.0f, 1.0f);
      glVertex3f(-2.0f, -0.5f, 1.1f);
      glVertex3f(-2.0f,  -0.5f, 3.1f);
      glVertex3f(2.0f,  -0.5f, 3.1f);
      glVertex3f(2.0f, -0.5f, 1.1f);

   glEnd();  // End of drawing Side Faces

   glBegin(GL_QUADS);    //Front Faces

      glColor3f(0.6f, 0.2f, 0.8f);
       glVertex3f(-4.0f, -1.0f, 1.0f);
      glVertex3f(-4.0f, 1.0f, 1.0f);
      glVertex3f(-2.5f, 0.5f, 1.0f);
      glVertex3f(-2.5f, -0.5f, 1.0f);

     glColor3f(0.6f, 0.2f, 0.8f);
      glVertex3f(-2.5f, 0.5f, 1.0f);
      glVertex3f(-4.0f, 1.0f, 1.0f);
      glVertex3f(0.0f, 3.0f, 1.0f);
      glVertex3f(0.0f, 1.5f, 1.0f);

      glColor3f(0.6f, 0.9f, 0.8f);
      glVertex3f(0.0f, 3.0f, 1.0f);
      glVertex3f(0.0f, 1.5f, 1.0f);
      glVertex3f(2.5f, 0.5f, 1.0f);
       glVertex3f(4.0f, 1.0f, 1.0f);

      glColor3f(0.6f, 0.2f, 0.8f);
      glVertex3f(2.5f, 0.5f, 1.0f);
      glVertex3f(2.5f,-0.5f, 1.0f);
      glVertex3f(4.0f, -1.0f, 1.0f);
      glVertex3f(4.0f, 1.0f, 1.0f);

      glColor3f(0.6f, 0.4f, 0.8f);
      glVertex3f(2.5f, -0.5f, 1.0f);
      glVertex3f(0.0f, -1.5f, 1.0f);
      glVertex3f(0.0f, -3.0f, 1.0f);
      glVertex3f(4.0f, -1.0f, 1.0f);

      glColor3f(0.6f, 0.2f, 0.8f);
      glVertex3f(0.0f, -1.5f, 1.0f);
      glVertex3f(-2.5f, -0.5f, 1.0f);
      glVertex3f(-4.0f, -1.0f, 1.0f);
      glVertex3f(0.0f, -3.0f, 1.0f);

    glEnd();

     glBegin(GL_QUADS);    //Back Faces

        glColor3f(0.6f, 0.2f, 0.8f);
       glVertex3f(-4.0f, -1.0f, -1.0f);
      glVertex3f(-4.0f, 1.0f, -1.0f);
      glVertex3f(-2.5f, 0.5f, -1.0f);
      glVertex3f(-2.5f, -0.5f, -1.0f);

     glColor3f(0.6f, 0.2f, 0.8f);
      glVertex3f(-2.5f, 0.5f, -1.0f);
      glVertex3f(-4.0f, 1.0f, -1.0f);
      glVertex3f(0.0f, 3.0f, -1.0f);
      glVertex3f(0.0f, 1.5f, -1.0f);

      glColor3f(0.6f, 0.2f, 0.8f);
       glVertex3f(0.0f, 3.0f, -1.0f);
      glVertex3f(0.0f, 1.5f, -1.0f);
      glVertex3f(2.5f, 0.5f, -1.0f);
       glVertex3f(4.0f, 1.0f, -1.0f);

      glColor3f(0.6f, 0.2f, 0.8f);
      glVertex3f(2.5f, 0.5f, -1.0f);
      glVertex3f(2.5f,-0.5f, -1.0f);
      glVertex3f(4.0f, -1.0f, -1.0f);
      glVertex3f(4.0f, 1.0f, -1.0f);

      glColor3f(0.6f, 0.4f, 0.8f);
      glVertex3f(2.5f, -0.5f, -1.0f);
      glVertex3f(0.0f, -1.5f, -1.0f);
      glVertex3f(0.0f, -3.0f, -1.0f);
      glVertex3f(4.0f, -1.0f, -1.0f);

      glColor3f(0.6f, 0.2f, 0.8f);
      glVertex3f(0.0f, -1.5f, -1.0f);
      glVertex3f(-2.5f, -0.5f, -1.0f);
      glVertex3f(-4.0f, -1.0f, -1.0f);
      glVertex3f(0.0f, -3.0f, -1.0f);

    glEnd();
   glutSwapBuffers();  // Swap the front and back frame buffers (double buffering)
}

void reshape(GLsizei width, GLsizei height)
{
   if (height == 0) height = 1;                // To prevent divide by 0
   GLfloat aspect = (GLfloat)width / (GLfloat)height;
   glViewport(0,0, width, height);
   glMatrixMode(GL_PROJECTION);
   glLoadIdentity();
   gluPerspective(45.0f, aspect, 0.1f, 100.0f);
}

void NormalKey(GLubyte key, GLint x, GLint y)
{
    switch ( key )
    {
      case 'x': xangle -= 1.7f;
                      glutPostRedisplay();
                      break;

      case 'X': xangle +=1.7f;
                      glutPostRedisplay();
                      break;

     case 'y': yangle -= 1.7f;
                      glutPostRedisplay();
                      break;

      case 'Y': yangle += 1.7f;
                      glutPostRedisplay();
                      break;

      case 'z': zangle -= 1.7f;
                      glutPostRedisplay();
                      break;

      case 'Z': zangle += 1.7f;
                      glutPostRedisplay();
                      break;
     default:
            break;
    }

}
