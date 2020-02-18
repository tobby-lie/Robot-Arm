/*
 Tobby Lie
 Intro to Graphics HW 2
 2/18/20
*/

#define GL_SILENCE_DEPRECATION // silence deprecation warnings

#include <GLUT/GLUT.h>
#include <stdlib.h>
#include <tuple>

/* GlOBAL VARIABLES */

static int shoulder = 0, elbow = 0, hand = 0;
static int finger_1 = 0, finger_2 = 0, finger_3 = 0, thumb = 0;
 
/* GLOBABL VARIBLES */

/*
    Function: frame_buffer_coordinates
 
    Description: From the viewport, gets the frame buffer
    width and height.
 
    Parameters: None
 
    Pre-Conditions: None
 
    Post-Conditions: None
 
    Returns: Tuple of GLint, GLint. The first value being
    frame buffer width, second being frame buffer height.
 */
std::tuple<GLint, GLint> frame_buffer_coordinates()
{
    GLint dims[4] = {0};
    glGetIntegerv(GL_VIEWPORT, dims);
    GLint fbWidth = dims[2];
    GLint fbHeight = dims[3];
    
    return std::make_tuple(fbWidth, fbHeight);
} // end frame_buffer_coordinates

/*
    Function: init
 
    Description: Initializes all settings.
 
    Parameters: None
 
    Pre-Conditions: None
 
    Post-Conditions: Window settings should be initialized.
 
    Returns: Nothing
*/
void init(void)
{
   glClearColor (0.0, 0.0, 0.0, 0.0);
   glShadeModel (GL_FLAT);
} // end init

/*
    Function: display
 
    Description: Based on global values, display certain
    information to the window.
 
    Parameters: None
 
    Pre-Conditions: Different value should carry information as
        to how much objects need to be rotated.
 
    Post-Conditions: Display on window is updated.
 
    Returns: Nothing
*/
void display(void)
{
    glClear (GL_COLOR_BUFFER_BIT); // clear window

    glPushMatrix(); //  push matrix to save state
    
    /* SHOULDER */
    
    glColor3f(0.439216, 0.858824, 0.576471); // aquamarine
    
    glTranslatef (-3.0, 0.0, 0.0);
    glRotatef ((GLfloat) shoulder, 0.0, 0.0, 1.0);
    glTranslatef (1.0, 0.0, 0.0);
    glPushMatrix();
    glScalef (2.0, 0.4, 1.0);
    glutWireCube (1.0);
    glPopMatrix();
    
    /* BALL JOINT */
    
    glColor3f(0.6, 0.196078, 0.8); // dark orchid
    
    glPushMatrix();
    glTranslatef (1.1, 0.0, 0.0);
    glutWireSphere(0.24, 100, 10);
    glPopMatrix();
    
    /* ELBOW */
    
    glColor3f(0.439216, 0.858824, 0.576471); // aquamarine
    
    glTranslatef (1.1, 0.0, 0.0);
    glRotatef ((GLfloat) elbow, 0.0, 0.0, 1.0);
    glTranslatef (1.0, 0.0, 0.0);
    glPushMatrix();
    glScalef (2.0, 0.4, 1.0);
    glutWireCube (1.0);
    glPopMatrix();
    
    /* BALL JOINT */
    
    glColor3f(0.6, 0.196078, 0.8); // dark orchid
    
    glPushMatrix();
    glTranslatef (1.1, 0.0, 0.0);
    glutWireSphere(0.24, 100, 10);
    glPopMatrix();
    
    /* HAND */
    
    glColor3f(0.439216, 0.858824, 0.576471); // aquamarine
    
    glTranslatef (1.0, 0.0, 0.0);
    glRotatef ((GLfloat) hand, 0.0, 0.0, 1.0);
    glTranslatef (0.5, 0.0, 0.0);
    glPushMatrix();
    glScalef (1.0, 0.4, 1.0);
    glutWireCube (1.0);
    glPopMatrix();
    
    /* FINGER 1 */
    
    // ball joint
    
    glColor3f(0.6, 0.196078, 0.8); // dark orchid
    
    glPushMatrix();
    
    glPushMatrix();
    glTranslatef (0.5, 0.2, -0.2);
    glutWireSphere(0.07, 20, 10);
    glPopMatrix();
    
    // finger 1-1
    
    glColor3f(0.439216, 0.858824, 0.576471); // aquamarine
    
    glTranslatef (0.5, 0.2, -0.2);
    glRotatef ((GLfloat) finger_1, 0.0, 0.0, 1.0);
    glTranslatef (0.3, 0.0, 0.0);
    glPushMatrix();
    glScalef (0.6, 0.1, 0.1);
    glutWireCube (1.0);
    glPopMatrix();
    
    // ball joint
    
    glColor3f(0.6, 0.196078, 0.8); // dark orchid
    
    glPushMatrix();
    glTranslatef (0.3, 0.0, 0.0);
    glutWireSphere(0.07, 20, 10);
    glPopMatrix();
    
    // finger 1-2
    
    glColor3f(0.439216, 0.858824, 0.576471); // aquamarine
    
    glTranslatef (0.3, 0.0, 0.0);
    glRotatef ((GLfloat) finger_1, 0.0, 0.0, 1.0);
    glTranslatef (0.3, 0.0, 0.0);
    glPushMatrix();
    glScalef (0.6, 0.1, 0.1);
    glutWireCube (1.0);
    glPopMatrix();
    
    glPopMatrix();
    
    /* END FINGER 1 */
    
    /* FINGER 2 */
    
    // ball joint
    
    glColor3f(0.6, 0.196078, 0.8); // dark orchid
    
    glPushMatrix();
    
    glPushMatrix();
    glTranslatef (0.5, 0.2, 0.2);
    glutWireSphere(0.07, 20, 10);
    glPopMatrix();
    
    // finger 2-1
    
    glColor3f(0.439216, 0.858824, 0.576471); // aquamarine
    
    glTranslatef (0.5, 0.2, 0.2);
    glRotatef ((GLfloat) finger_2, 0.0, 0.0, 1.0);
    glTranslatef (0.3, 0.0, 0.0);
    glPushMatrix();
    glScalef (0.6, 0.1, 0.1);
    glutWireCube (1.0);
    glPopMatrix();
    
    // ball joint
    
    glColor3f(0.6, 0.196078, 0.8); // dark orchid
    
    glPushMatrix();
    glTranslatef (0.3, 0.0, 0.0);
    glutWireSphere(0.07, 20, 10);
    glPopMatrix();
    
    // finger 2-2
    
    glColor3f(0.439216, 0.858824, 0.576471); // aquamarine
    
    glTranslatef (0.3, 0.0, 0.0);
    glRotatef ((GLfloat) finger_2, 0.0, 0.0, 1.0);
    glTranslatef (0.3, 0.0, 0.0);
    glPushMatrix();
    glScalef (0.6, 0.1, 0.1);
    glutWireCube (1.0);
    glPopMatrix();
    
    glPopMatrix();
    
    /* END FINGER 2 */

    /* FINGER 3 */

    // ball joint

    glColor3f(0.6, 0.196078, 0.8); // dark orchid

    glPushMatrix();

    glPushMatrix();
    glTranslatef (0.5, 0.2, 0.4);
    glutWireSphere(0.07, 20, 10);
    glPopMatrix();

    // finger 3-1

    glColor3f(0.439216, 0.858824, 0.576471); // aquamarine

    glTranslatef (0.5, 0.2, 0.4);
    glRotatef ((GLfloat) finger_3, 0.0, 0.0, 1.0);
    glTranslatef (0.3, 0.0, 0.0);
    glPushMatrix();
    glScalef (0.6, 0.1, 0.1);
    glutWireCube (1.0);
    glPopMatrix();

    // ball joint

    glColor3f(0.6, 0.196078, 0.8); // dark orchid

    glPushMatrix();
    glTranslatef (0.3, 0.0, 0.0);
    glutWireSphere(0.07, 20, 10);
    glPopMatrix();

    // finger 3-2

    glColor3f(0.439216, 0.858824, 0.576471); // aquamarine

    glTranslatef (0.3, 0.0, 0.0);
    glRotatef ((GLfloat) finger_3, 0.0, 0.0, 1.0);
    glTranslatef (0.3, 0.0, 0.0);
    glPushMatrix();
    glScalef (0.6, 0.1, 0.1);
    glutWireCube (1.0);
    glPopMatrix();

    glPopMatrix();

    /* END FINGER 3 */

    /* THUMB */
    
    // ball joint

    glColor3f(0.6, 0.196078, 0.8); // dark orchid

    glPushMatrix();

    glPushMatrix();
    glTranslatef (0.5, -0.2, 0.4);
    glutWireSphere(0.07, 20, 10);
    glPopMatrix();

    // thumb-1

    glColor3f(0.439216, 0.858824, 0.576471); // aquamarine

    glTranslatef (0.5, -0.2, 0.4);
    glRotatef ((GLfloat) thumb, 0.0, 0.0, 1.0);
    glTranslatef (0.15, 0.0, 0.0);
    glPushMatrix();
    glScalef (0.3, 0.1, 0.1);
    glutWireCube (1.0);
    glPopMatrix();

    // ball joint

    glColor3f(0.6, 0.196078, 0.8); // dark orchid

    glPushMatrix();
    glTranslatef (0.17, 0.0, 0.0);
    glutWireSphere(0.07, 20, 10);
    glPopMatrix();

    // thumb-2

    glColor3f(0.439216, 0.858824, 0.576471); // aquamarine

    glTranslatef (0.15, 0.0, 0.0);
    glRotatef ((GLfloat) thumb, 0.0, 0.0, 1.0);
    glTranslatef (0.15, 0.0, 0.0);
    glPushMatrix();
    glScalef (0.3, 0.1, 0.1);
    glutWireCube (1.0);
    glPopMatrix();

    glPopMatrix();
    
    /* END THUMB*/

    glPopMatrix(); // pop matrix state
    glutSwapBuffers();
} // end display

/*
    Function: reshape
 
    Description: Handles logic for reshaping window and objects in scene
 
    Parameters: int w, int h
 
    Pre-Conditions: None
 
    Post-Conditions: objects in window are rescaled
 
    Returns: Nothing
*/
void reshape (int w, int h)
{
    GLint fbWidth;
    GLint fbHeight;
    std::tie(fbWidth, fbHeight) = frame_buffer_coordinates();

    glViewport (0, 0, (GLsizei) fbWidth, (GLsizei) fbHeight);
    glMatrixMode (GL_PROJECTION);
    glLoadIdentity ();
    gluPerspective(65.0, (GLfloat) fbWidth/(GLfloat) fbHeight, 1.0, 20.0);
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    glTranslatef (0.0, 0.0, -5.0);
} // end reshape

/*
    Function: keyboard
 
    Description: Handles logic for keyboard input
 
    Parameters: unsigned char key, int x, int y
 
    Pre-Conditions: None
 
    Post-Conditions: state variables updated
 
    Returns: Nothing
*/
void keyboard (unsigned char key, int x, int y)
{
    switch (key) {
        case 's':
            shoulder = (shoulder + 5) % 360;
            glutPostRedisplay();
            break;
        case 'S':
            shoulder = (shoulder - 5) % 360;
            glutPostRedisplay();
            break;
        case 'e':
            elbow = (elbow + 5) % 360;
            glutPostRedisplay();
            break;
        case 'E':
            elbow = (elbow - 5) % 360;
            glutPostRedisplay();
            break;
        case 'h':
            hand = (hand + 5) % 360;
            glutPostRedisplay();
            break;
        case 'H':
            hand = (hand - 5) % 360;
            glutPostRedisplay();
            break;
        case '1':
            finger_1 = (finger_1 - 5) % 360;
            glutPostRedisplay();
            break;
        case '!':
            finger_1 = (finger_1 + 5) % 360;
            glutPostRedisplay();
            break;
        case '2':
            finger_2 = (finger_2 - 5) % 360;
            glutPostRedisplay();
            break;
        case '@':
            finger_2 = (finger_2 + 5) % 360;
            glutPostRedisplay();
            break;
        case '3':
            finger_3 = (finger_3 - 5) % 360;
            glutPostRedisplay();
            break;
        case '#':
            finger_3 = (finger_3 + 5) % 360;
            glutPostRedisplay();
            break;
        case '4':
            thumb = (thumb + 5) % 360;
            glutPostRedisplay();
            break;
        case '$':
            thumb = (thumb - 5) % 360;
            glutPostRedisplay();
            break;
        case 27:
            exit(0);
            break;
        default:
            break;
       }
} // end keyboard

int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode (GLUT_DOUBLE | GLUT_RGB);
    glutInitWindowSize (1000, 650);
    glutInitWindowPosition (100, 100);
    glutCreateWindow (argv[0]);
    
    init ();
    
    glutDisplayFunc(display);
    glutReshapeFunc(reshape);
    glutKeyboardFunc(keyboard);
    
    glutMainLoop();
    return 0;
}
