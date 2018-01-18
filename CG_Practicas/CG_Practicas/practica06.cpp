//Semestre 2018 - 1
//************************************************************//
//************************************************************//
//************** Alumno (s): *********************************//
//*************	Eduardo David Romero Hurtado			******//
//*************	Visual Studio Community 2017			******//
//************************************************************//
#include "Main.h"
#include "practica06.h"

// Variables used to calculate frames per second: (Windows)
DWORD dwFrames_p6 = 0;
DWORD dwCurrentTime_p6 = 0;
DWORD dwLastUpdateTime_p6 = 0;
DWORD dwElapsedTime_p6 = 0;


//Variables used to create movement

int sol_p6 = 0;
int mercurio_p6 = 0;
int venus_p6 = 0;
int tierra_p6 = 0;
int luna_p6 = 0;
int lunat_p6 = 0;
int marte_p6 = 0;
int jupiter_p6 = 0;
int saturno_p6 = 0;
int urano_p6 = 0;
int neptuno_p6 = 0;
int anillo_p6 = 0;

int translacion16 = 0;
int translacion26 = 0;
int translacion36 = 0;
int translacion46 = 0;
int translacion56 = 0;
int translacion66 = 0;
int translacion76 = 0;
int translacion86 = 0;

float camaraZ6 = 0.0;
float camaraX6 = 0.0;
float camaraY6 = 0.0;

GLfloat SunDiffuse6[] = { 1.0f, 1.0f, 1.0f, 1.0f };			// Diffuse Light Values
GLfloat SunSpecular6[] = { 1.0, 1.0, 1.0, 1.0 };				// Specular Light Values
GLfloat SunPosition6[] = { 0.0f, 0.0f, 0.0f, 1.0f };			// Light Position

GLfloat EarthDiffuse6[] = { 0.2f, 0.2f, 1.0f, 1.0f };			// Tierra
GLfloat EarthSpecular6[] = { 0.8, 0.8, 0.8, 1.0 };
GLfloat EarthShininess6[] = { 50.0 };

GLfloat MoonDiffuse6[] = { 0.8f, 0.8f, 0.8f, 1.0f };			// Luna
GLfloat MoonSpecular6[] = { 1.0, 1.0, 1.0, 1.0 };
GLfloat MoonShininess6[] = { 50.0 };

GLfloat MarsDiffuse6[] = { 0.8f, 0.4f, 0.1f, 1.0f };			// Marte
GLfloat MarsSpecular6[] = { 1.0, 0.5, 0.0, 1.0 };
GLfloat MarsShininess6[] = { 50.0 };

void InitGL6(GLvoid)     // Inicializamos parametros
{
	glClearColor(0.0f, 0.0f, 0.0f, 0.0f);				// Negro de fondo

	glClearDepth(1.0f);									// Configuramos Depth Buffer
	glEnable(GL_DEPTH_TEST);							// Habilitamos Depth Testing
	glDepthFunc(GL_LEQUAL);								// Tipo de Depth Testing a realizar
	glHint(GL_PERSPECTIVE_CORRECTION_HINT, GL_NICEST);


}

void display6(void)   // Creamos la funcion donde se dibuja
{
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	glLoadIdentity();

	glTranslatef(camaraX6, camaraY6, -15.0 + camaraZ6);			//camara

	glRotatef(15.0, 1.0, 0.0, 0.0); //Mueve la perspectiva 15° hacia arriba para que se vea mejor.
	glPushMatrix();
		glColor3f(1.0, 0.0, 0.2);	//Color rojo
		glPushMatrix();
			glRotatef(sol_p6, 0.0, 1.0, 0.0);	//El Sol gira sobre su eje
			glutWireSphere(2.5, 30, 30);  //Dibuja una esfera de alambres (radio,H,V);
		glPopMatrix();
		
		glPushMatrix();
			glColor3f(1.0, 1.0, 0.2);	//Sol nucleo amarillo
			glutSolidSphere(2.4, 20, 20); //Dibuja una esfera solida
		glPopMatrix();

		// mercurio
		glPushMatrix();
			glRotated(translacion16, 0.0, 1.0, 0.0); //le dice que va a girar (esto hara la translacion)
			glTranslatef(3.5, 0.0, 0.0);			//le dice que lo mueva a la derecha
			
			glColor3f(1.0, 0.5, 0.0);				//le damos color 
			glRotated(mercurio_p6, 0.0, 1.0, 0.0);		//le dice que va a girar (esto hara la rotacion)
			glutWireSphere(0.2, 20, 20);			//creamos una esfera de alambre
		glPopMatrix();
	
		// venus
		glPushMatrix();
			glRotated(translacion26, 0.0, 1.0, 0.0);
			glTranslatef(4.5, 0.0, 0.0);

			glColor3f(1.0, 1.0, 0.5);
			glRotated(venus_p6, 0.0, 1.0, 0.0);
			glutWireSphere(0.3, 20, 20);
		glPopMatrix();
		
		// tierra
		glPushMatrix();
			glRotated(translacion36, 0.0, 1.0, 0.0);	
			glTranslatef(5.8, 0.0, 0.0);
			
			glColor3f(0.1, 0.2, 0.6);
			glPushMatrix();
				glRotated(tierra_p6, 0.0, 1.0, 0.0);
				glutWireSphere(0.4, 20, 20);
			glPopMatrix();
	// luna ##########################################
			glPushMatrix();
				glColor3f(1.0, 1.0, 1.0);
				glRotated(luna_p6, 0.0, 0.1, 0.0);
				glTranslatef(0.6, 0.0, 0.0);
				glPushMatrix();
					glRotated(lunat_p6, 1.0, 1.0, 0.0);
					glutWireSphere(0.1, 20, 20);
				glPopMatrix();
			glPopMatrix();
	// ###############################################
		glPopMatrix();
	
		// marte
		glPushMatrix();
			glRotated(translacion46, 0.0, 1.0, 0.0);
			glTranslatef(7.1, 0.0, 0.0);
			
			glColor3f(1.0, 0.0, 0.0);
			glRotated(marte_p6, 0.0, 1.0, 0.0);
			glutWireSphere(0.3, 20, 20);
		glPopMatrix();

		// jupiter
		glPushMatrix();
			glRotated(translacion56, 0.0, 1.0, 0.0);
			glTranslatef(9.1, 0.0, 0.0);
			glColor3f(1.0, 0.5, 0.0);

			glPushMatrix();
				glRotated(tierra_p6, 0.0, 1.0, 0.0);
				glutWireSphere(1.0, 20, 20);
			glPopMatrix();

			// luna j1 #######################################
			glPushMatrix();
				glColor3f(0.6, 0.2, 0.0);
				glRotated(translacion56, 0.0, 0.1, 0.0);
				glTranslatef(1.3, 0.0, 0.0);
				glPushMatrix();
					glRotated(lunat_p6, 1.0, 1.0, 0.0);
					glutWireSphere(0.1, 20, 20);
				glPopMatrix();
			glPopMatrix();
			// ###############################################

			// luna j2 #######################################
			glPushMatrix();
			glColor3f(0.9, 0.6, 0.0);
			glRotated(translacion66, 0.0, 0.1, 0.0);
			glTranslatef(1.6, 0.2, 0.0);
			glPushMatrix();
			glRotated(lunat_p6, 1.0, 1.0, 0.0);
			glutWireSphere(0.1, 20, 20);
			glPopMatrix();
			glPopMatrix();
			// ###############################################

			// luna j3 #######################################
			glPushMatrix();
			glColor3f(0.0, 0.2, 0.6);
			glRotated(translacion76, 0.0, 0.1, 0.0);
			glTranslatef(0.0, -0.2, 1.9);
			glPushMatrix();
			glRotated(lunat_p6, 1.0, 1.0, 0.0);
			glutWireSphere(0.1, 20, 20);
			glPopMatrix();
			glPopMatrix();
			// ###############################################
		glPopMatrix();

		// saturno
		glPushMatrix();
			glRotated(translacion66, 0.0, 1.0, 0.0);
			glTranslatef(12.6, 0.0, 0.0);

			glColor3f(0.5, 0.8, 0.0);
			glRotated(saturno_p6, 0.0, 1.0, 0.0);
			glutWireSphere(0.9, 20, 20);
		glPopMatrix();
	
		//anillo1 saturno
		glPushMatrix();
			glRotated(translacion66, 0.0, 1.0, 0.0);
			glTranslatef(12.6, 0.0, 0.0);

			glColor3f(1.0, 1.0, 0.0);
			glRotatef(90.0, 1.0, 0.0, 0.0);
			glScalef(1.0, 1.0, 0.2);
			glRotated(anillo_p6, 0.0, 0.0, -0.9);
			glutWireTorus(0.1, 1.25, 20, 40);
		glPopMatrix();

		//anillo2 saturno
		glPushMatrix();
			glRotated(translacion66, 0.0, 1.0, 0.0);
			glTranslatef(12.6, 0.0, 0.0);
		
			glColor3f(0.7, 0.3, 0.5);
			glRotatef(90.0, 1.0, 0.0, 0.0);
			glScalef(1.0, 1.0, 0.2);
			glRotated(anillo_p6, 0.0, 0.0, -1.0);
			glutWireTorus(0.2, 1.7, 20, 40);
		glPopMatrix();

		//urano
		glPushMatrix();
			glRotated(translacion76, 0.0, 1.0, 0.0);
			glTranslatef(15.5, 0.0, 0.0);

			glColor3f(0.2, 0.6, 0.4);
			glPushMatrix();
			glRotated(tierra_p6, 0.0, 1.0, 0.0);
			glutWireSphere(0.55, 20, 20);
			glPopMatrix();
			// luna urano##########################################
			glPushMatrix();
			glColor3f(0.3,0.3,0.3);
			glRotated(luna_p6, 0.0, 0.1, 0.0);
			glTranslatef(0.6, 0.0, 0.0);
			glPushMatrix();
			glRotated(lunat_p6, 1.0, 1.0, 0.0);
			glutWireSphere(0.1, 20, 20);
			glPopMatrix();
			glPopMatrix();
			// ###############################################
			glPopMatrix();

		//neptuno
		glPushMatrix();
			glRotated(translacion86, 0.0, 1.0, 0.0);
			glTranslatef(17.5, 0.0, 0.0);

			glColor3f(0.0, 0.6, 0.7);
			glRotated(neptuno_p6, 0.0, 1.0, 0.0);
			glutWireSphere(0.5, 20, 20);
		glPopMatrix();
	glPopMatrix();
	glutSwapBuffers();
}

void animacion6()
{
	// Calculate the number of frames per one second:
	//dwFrames++;
	dwCurrentTime_p6 = GetTickCount(); // Even better to use timeGetTime()
	dwElapsedTime_p6 = dwCurrentTime_p6 - dwLastUpdateTime_p6;

	if (dwElapsedTime_p6 >= 30)
	{
		sol_p6 = (sol_p6 - 1) % 360;				//Esto hace el movimiento más lento (numero grande) o rapido (numero chico)
		dwLastUpdateTime_p6 = dwCurrentTime_p6;
		
		mercurio_p6 = (mercurio_p6 - 2) % 360;
		dwLastUpdateTime_p6 = dwCurrentTime_p6;

		venus_p6 = (venus_p6 - 1) % 360;
		dwLastUpdateTime_p6 = dwCurrentTime_p6;

		tierra_p6 = (tierra_p6 - 16) % 360;
		dwLastUpdateTime_p6 = dwCurrentTime_p6;

		luna_p6 = (luna_p6 - 5) % 360;
		dwLastUpdateTime_p6 = dwCurrentTime_p6;
		
		lunat_p6 = (lunat_p6 - 3) % 360;
		dwLastUpdateTime_p6 = dwCurrentTime_p6;

		marte_p6 = (marte_p6 - 8) % 360;
		dwLastUpdateTime_p6 = dwCurrentTime_p6;

		jupiter_p6 = (jupiter_p6 - 7) % 360;
		dwLastUpdateTime_p6 = dwCurrentTime_p6;

		saturno_p6 = (saturno_p6 - 6) % 360;
		dwLastUpdateTime_p6 = dwCurrentTime_p6;

		urano_p6 = (urano_p6 - 2) % 360;
		dwLastUpdateTime_p6 = dwCurrentTime_p6;

		neptuno_p6 = (neptuno_p6 - 2) % 360;
		dwLastUpdateTime_p6 = dwCurrentTime_p6;

		anillo_p6 = (anillo_p6 - 1) % 360;
		dwLastUpdateTime_p6 = dwCurrentTime_p6;
	
		translacion16 = (translacion16 - 8) % 360;
		dwLastUpdateTime_p6 = dwCurrentTime_p6;

		translacion26 = (translacion26 - 7) % 360;
		dwLastUpdateTime_p6 = dwCurrentTime_p6;

		translacion36 = (translacion36 - 6) % 360;
		dwLastUpdateTime_p6 = dwCurrentTime_p6;

		translacion46 = (translacion46 - 5) % 360;
		dwLastUpdateTime_p6 = dwCurrentTime_p6;

		translacion56 = (translacion56 - 4) % 360;
		dwLastUpdateTime_p6 = dwCurrentTime_p6;

		translacion66 = (translacion66 - 3) % 360;
		dwLastUpdateTime_p6 = dwCurrentTime_p6;

		translacion76 = (translacion76 - 2) % 360;
		dwLastUpdateTime_p6 = dwCurrentTime_p6;
		
		translacion86 = (translacion86 - 1) % 360;
		dwLastUpdateTime_p6 = dwCurrentTime_p6;
	}

	glutPostRedisplay();
}

void reshape6(int width, int height)   // Creamos funcion Reshape
{
	if (height == 0)										// Prevenir division entre cero
	{
		height = 1;
	}

	glViewport(0, 0, width, height);

	glMatrixMode(GL_PROJECTION);						// Seleccionamos Projection Matrix
	glLoadIdentity();

	// Tipo de Vista

	glFrustum(-0.1, 0.1, -0.1, 0.1, 0.1, 50.0);

	glMatrixMode(GL_MODELVIEW);							// Seleccionamos Modelview Matrix
														//glLoadIdentity();
}

void keyboard6(unsigned char key, int x, int y)  // Create Keyboard Function
{
	switch (key) {
	case 'w':   //Movimientos de camara
	case 'W':
		camaraZ6 += 0.2f;
		break;
	case 's':
	case 'S':
		camaraZ6 -= 0.2f;
		break;
	case 'a':
	case 'A':
		camaraX6 += 0.2f;
		break;
	case 'd':
	case 'D':
		camaraX6 -= 0.2f;
		break;


	case 'i':		//Movimientos de Luz
	case 'I':

		break;
	case 'k':
	case 'K':

		break;

	case 'l':   //Activamos/desactivamos luz
	case 'L':
		break;
	case 27:        // Cuando Esc es presionado...
		exit(0);   // Salimos del programa
		break;
	default:        // Cualquier otra
		break;
	}
	glutPostRedisplay();
}

void arrow_keys6(int a_keys, int x, int y)  // Funcion para manejo de teclas especiales (arrow keys)
{
	switch (a_keys) {
	case GLUT_KEY_UP:     // Presionamos tecla ARRIBA...
		camaraY6 -= 0.1f;
		break;
	case GLUT_KEY_DOWN:               // Presionamos tecla ABAJO...
		camaraY6 += 0.1f;
		break;
	case GLUT_KEY_LEFT:

		break;
	case GLUT_KEY_RIGHT:

		break;
	default:
		break;
	}
	glutPostRedisplay();
}


void practica6()
{
	glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH); // Display Mode (Clores RGB y alpha | Buffer Doble )
	glutInitWindowSize(500, 500);	// Tamaño de la Ventana
	glutInitWindowPosition(20, 60);	//Posicion de la Ventana
	glutCreateWindow("Practica 6"); // Nombre de la Ventana
	InitGL6();						// Parametros iniciales de la aplicacion
	glutDisplayFunc(display6);  //Indicamos a Glut función de dibujo
	glutReshapeFunc(reshape6);	//Indicamos a Glut función en caso de cambio de tamano
	glutKeyboardFunc(keyboard6);	//Indicamos a Glut función de manejo de teclado
	glutSpecialFunc(arrow_keys6);	//Otras
	glutIdleFunc(animacion6);
	glutMainLoop();          // 
}