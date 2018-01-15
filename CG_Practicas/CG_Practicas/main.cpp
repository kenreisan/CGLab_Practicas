/*
	Practicas del laboratorio de Computaci�n Grafica
	Semestre 2018 - 1 
	Autor: Romero Hurtado Eduardo David
*/


#include "Main.h"
#include "practica02.h"		//Cambiar el header dependiendo de la practica

int main(int argc, char** argv) {
	glutInit(&argc, argv);							// Inicializamos OpenGL
	glutInitDisplayMode(GLUT_RGBA | GLUT_SINGLE);	// Display Mode (Clores RGB y alpha | Buffer Sencillo )
	glutInitWindowSize(500, 500);					// Tama�o de la Ventana
	glutCreateWindow("Practicas CG");				// Nombre de la Ventana
	glutInitWindowPosition(300, 0);					// Posicion de la Ventana
	InitGL();										// Parametros iniciales de la aplicacion
	glutDisplayFunc( display);						// Indicamos a Glut funci�n de dibujo
	glutReshapeFunc( reshape);						// Indicamos a Glut funci�n en caso de cambio de tamano
	glutKeyboardFunc(keyboard);						// Indicamos a Glut funci�n de manejo de teclado
	glutSpecialFunc( arrow_keys);
	glutIdleFunc( animacion);
	glutMainLoop(); 
	return 0;
}

