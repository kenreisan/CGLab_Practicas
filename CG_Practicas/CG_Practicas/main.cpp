/*
	##################################################
	Practicas del laboratorio de Computación Grafica
	Semestre 2018 - 1 
	Autor: Romero Hurtado Eduardo David
	##################################################
*/

#include "Main.h"
#include "practica02.h"		//Cambiar el header dependiendo de la practica

void InitGL(GLvoid)     // Inicializamos parametros
{
	//glShadeModel(GL_FLAT);							// Habilitamos Smooth Shading
	glClearColor(0.0f, 0.0f, 0.0f, 0.0f);				// Negro de fondo
														//glClearDepth(1.0f);									// Configuramos Depth Buffer
														//glEnable(GL_DEPTH_TEST);							// Habilitamos Depth Testing
														//glDepthFunc(GL_LEQUAL);								// Tipo de Depth Testing a realizar
}

void reshape(int width, int height)
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

// Termina la ejecucion del programa cuando se presiona ESC
void keyboard(unsigned char key, int x, int y)
{
	switch (key)
	{
	case 27: exit(0);
		break;
	}
	glutPostRedisplay();
}

void animacion() {

}

void arrow_keys(int a_keys, int x, int y) {

}


int main(int argc, char** argv) {
	glutInit(&argc, argv);							// Inicializamos OpenGL
	glutInitDisplayMode(GLUT_RGBA | GLUT_SINGLE);	// Display Mode (Clores RGB y alpha | Buffer Sencillo )
	glutInitWindowSize(500, 500);					// Tamaño de la Ventana
	glutCreateWindow("Practicas CG");				// Nombre de la Ventana
	glutInitWindowPosition(300, 0);					// Posicion de la Ventana
	InitGL();										// Parametros iniciales de la aplicacion
	glutDisplayFunc( practica02);					// Indicamos a Glut función de dibujo
	glutReshapeFunc( reshape);						// Indicamos a Glut función en caso de cambio de tamano
	glutKeyboardFunc(keyboard);						// Indicamos a Glut función de manejo de teclado
	glutSpecialFunc( arrow_keys);
	glutIdleFunc( animacion);
	glutMainLoop(); 
	return 0;
}

