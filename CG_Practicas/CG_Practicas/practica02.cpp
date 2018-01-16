//PARA EL REPORTE HACER LAS LETRAS "EDRH" Y UNA ESTRELLA DE 5 PICOS
//ALTERNANDO UNA SOLO CONTORNO Y LA OTRA RELLENA

#include "Main.h"
#include "practica02.h"


void InitGL02(GLvoid)     // Inicializamos parametros
{
	glClearColor(0.0f, 0.0f, 0.0f, 0.0f);				// Negro de fondo
}

void practica02(void)   // Creamos la funcion donde se dibuja
{
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);	// Limiamos pantalla y Depth Buffer	
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();									// Reinicializamos la actual matriz Modelview

	glBegin(GL_LINE_LOOP);
	glColor3f(9.0, 9.0, 0.0);
	glVertex3f(-2.0, 2.0, -1.2);
	glVertex3f(-2.0, 4.0, -1.2);
	glVertex3f(-6.0, 4.0, -1.2);
	glVertex3f(-6.0, 6.0, -1.2);
	glVertex3f(-4.0, 6.0, -1.2);
	glVertex3f(-4.0, 8.0, -1.2);
	glVertex3f(-6.0, 8.0, -1.2);
	glVertex3f(-6.0, 10.0, -1.2);
	glVertex3f(-2.0, 10.0, -1.2);
	glVertex3f(-2.0, 12.0, -1.2);
	glVertex3f(-8.0, 12.0, -1.2);
	glVertex3f(-8.0, 2.0, -1.2);
	glEnd();

	//Trazo de la "D"
	//Linea de la "D"
	glBegin(GL_POLYGON);
	glColor3f(-5.0, 4.0, 9.0);
	glVertex3f(0.0, 2.0, -1.2);
	glVertex3f(2.0, 2.0, -1.2);
	glVertex3f(2.0, 12.0, -1.2);
	glVertex3f(0.0, 12.0, -1.2);
	glEnd();

	//Pequeños cuadros "D"
	glBegin(GL_POLYGON);
	glColor3f(7.0, 2.0, 7.0);
	glVertex3f(2.0, 2.0, -1.2);
	glVertex3f(4.0, 2.0, -1.2);
	glVertex3f(4.0, 4.0, -1.2);
	glVertex3f(2.0, 4.0, -1.2);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(8.0, -13.0, -26.0);
	glVertex3f(2.0, 10.0, -1.2);
	glVertex3f(4.0, 10.0, -1.2);
	glVertex3f(4.0, 12.0, -1.2);
	glVertex3f(2.0, 12.0, -1.2);
	glEnd();

	//Curva de la "D"
	glBegin(GL_POLYGON);
	glColor3f(3.0, 2.0, -6.0);
	glVertex3f(4.0, 2.0, -1.2);
	glVertex3f(6.0, 6.0, -1.2);
	glVertex3f(6.0, 8.0, -1.2);
	glVertex3f(4.0, 12.0, -1.2);
	glEnd();


	//Trazo de la "R"
	glBegin(GL_LINE_LOOP);
	glColor3f(-9.0, -4.0, 15.0);
	glVertex3f(-8.0, -10.0, -1.2);
	glVertex3f(-6.0, -10.0, -1.2);
	glVertex3f(-6.0, -6.0, -1.2);
	glVertex3f(-4.0, -6.0, -1.2);
	glVertex3f(-4.0, -10.0, -1.2);
	glVertex3f(-2.0, -10.0, -1.2);
	glVertex3f(-2.0, -6.0, -1.2);
	glVertex3f(-3.0, -5.0, -1.2);
	glVertex3f(-2.0, -4.0, -1.2);
	glVertex3f(-2.0, -2.0, -1.2);
	glVertex3f(-4.0, -0.0, -1.2);
	glVertex3f(-8.0, -0.0, -1.2);
	glEnd();

	//Hueco "R"
	glBegin(GL_LINE_LOOP);
	glColor3f(12.0, -8.0, 5.0);
	glVertex3f(-6.0, -4.0, -1.2);
	glVertex3f(-4.0, -4.0, -1.2);
	glVertex3f(-4.0, -2.0, -1.2);
	glVertex3f(-6.0, -2.0, -1.2);
	glEnd();

	//Trazo de la "H"
	//Primera linea larga de "H"
	glBegin(GL_POLYGON);
	glColor3f(-9.0, 22.0, -15.0);
	glVertex3f(0.0, 0.0, -1.2);
	glVertex3f(0.0, -10.0, -1.2);
	glVertex3f(2.0, -10.0, -1.2);
	glVertex3f(2.0, 0.0, -1.2);
	glEnd();

	//Linea central "H"
	glBegin(GL_POLYGON);
	glColor3f(9.0, -22.0, 15.0);
	glVertex3f(2.0, -4.0, -1.2);
	glVertex3f(4.0, -4.0, -1.2);
	glVertex3f(4.0, -6.0, -1.2);
	glVertex3f(2.0, -6.0, -1.2);
	glEnd();

	//Linea final "H"
	glBegin(GL_POLYGON);
	glColor3f(15.0, -2.0, -8.0);
	glVertex3f(4.0, 0.0, -1.2);
	glVertex3f(6.0, 0.0, -1.2);
	glVertex3f(6.0, -10.0, -1.2);
	glVertex3f(4.0, -10.0, -1.2);
	glEnd();

	//Estrella 5 picos
	glBegin(GL_TRIANGLES);
	//Pico Azul
	glColor3f(0.0, 0.0, 2.0);
	glVertex3f(7.3, 0.2, -1.2);
	glVertex3f(8.0, 0.7, -1.2);
	glVertex3f(7.5, 1.0, -1.2);

	//Pico Verde
	glColor3f(0.0, 2.0, 0.0);
	glVertex3f(8.7, 0.2, -1.2);
	glVertex3f(8.0, 0.7, -1.2);
	glVertex3f(8.5, 1.0, -1.2);

	//Pico Rojo
	glColor3f(2.0, 0.0, 0.0);
	glVertex3f(7.0, 1.7, -1.2);
	glVertex3f(7.7, 1.7, -1.2);
	glVertex3f(7.5, 1.0, -1.2);

	//Pico Morado
	glColor3f(2.0, 0.0, 2.0);
	glVertex3f(9.0, 1.7, -1.2);
	glVertex3f(8.3, 1.7, -1.2);
	glVertex3f(8.5, 1.0, -1.2);

	//Pico Amarillo
	glColor3f(2.0, 2.0, 0.0);
	glVertex3f(7.7, 1.7, -1.2);
	glVertex3f(8.3, 1.7, -1.2);
	glVertex3f(8.0, 2.4, -1.2);

	glEnd();

	glFlush();
}

void reshape02(int width, int height)
{
	if (height == 0)										// Prevenir division entre cero
	{
		height = 1;
	}

	glViewport(0, 0, height, height);		//<---	Esta funcion hace que la imagen se deforme,
											//		como le mando la altura 2 veces evita que eso pase.

	glMatrixMode(GL_PROJECTION);						// Seleccionamos Projection Matrix
	glLoadIdentity();

	// Ortogonal
	glOrtho(-10, 10, -14, 14, 0.1, 2);

	glMatrixMode(GL_MODELVIEW);							// Seleccionamos Modelview Matrix
	glLoadIdentity();
}

void keyboard02(unsigned char key, int x, int y)
{
	switch (key)
	{
	case 27: exit(0);
		break;
	}
	glutPostRedisplay();
}

void animacion02() {
}

void arrow_keys02(int a_keys, int x, int y) {
}

void inicio02() {

	glutInitDisplayMode(GLUT_RGBA | GLUT_SINGLE);	// Display Mode (Clores RGB y alpha | Buffer Sencillo )
	
	glutInitWindowSize(500, 500);					// Tamaño de la Ventana
	glutCreateWindow("Practica 02");				// Nombre de la Ventana
	glutInitWindowPosition(300, 0);					// Posicion de la Ventana
	
	InitGL02();										// Parametros iniciales de la aplicacion
	glutDisplayFunc(practica02);					// Indicamos a Glut función de dibujo
	glutReshapeFunc(reshape02);						// Indicamos a Glut función en caso de cambio de tamano
	glutKeyboardFunc(keyboard02);						// Indicamos a Glut función de manejo de teclado
	glutSpecialFunc(arrow_keys02);
	glutIdleFunc(animacion02);
}