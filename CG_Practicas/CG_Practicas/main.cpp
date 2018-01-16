/*
	##################################################
	Practicas del laboratorio de Computación Grafica
	Semestre 2018 - 1 
	Autor: Romero Hurtado Eduardo David
	##################################################
*/

#include "Main.h"
#include "practica02.h"		//Cambiar el header dependiendo de la practica
#include "practica03.h"


int main(int argc, char** argv) {
	glutInit(&argc, argv);			// Inicializamos OpenGL

	/*Elegimos la funcion a usar*/
	//inicio02();
	inicio03();

	glutMainLoop(); 
	return 0;
}