/*
	##################################################
	Practicas del laboratorio de Computación Grafica
	Semestre 2018 - 1 
	Autor: Romero Hurtado Eduardo David
	##################################################
*/

#include "Main.h"
#include "practica02.h"		
#include "practica03.h"
#include "splatoon2.h"

int opcion;

void menu() {
	printf("\n  Practicas de laboratorio de computacion grafica\n");
	printf("\n  0: Practica 02");
	printf("\n  1: Practica 03");
	printf("\n  2: Dibujo Splatoon 2");
	printf("\n 99: Salir");
	printf("\n\n  Elija la practica que desea abrir: ");
	
	scanf_s("%d", &opcion);

	switch (opcion) {
	
		case 99:
			exit(0);
		break;

		case 0:
			inicio02();
		break;

		case 1:
			inicio03();
		break;

		case 2:
			splatoon();
			break;

		default:
			printf("\nEsa opcion no existe...\n");
			menu();
		break;
	}
}

int main(int argc, char** argv) {
	glutInit(&argc, argv);			// Inicializamos OpenGL
	menu();
	glutMainLoop(); 
	return 0;
}