/*###################################################*/
/*#													#*/
/*#		TAREA #2:	DIBUJO EN OPENGL				#*/
/*#		ALUMNO:		ROMERO HURTADO EDUARDO DAVID	#*/
/*#													#*/
/*###################################################*/

#include "Main.h"
#include "splatoon2.h"

int valor = 0;


void InitGLS() {     // Inicializamos parametros
	glClearColor(1.0f, 1.0f, 1.0, 0.0f);				// Blanco de fondo
	glClearDepth(1.0f);									// Configuramos Depth Buffer
	glEnable(GL_DEPTH_TEST);							// Habilitamos Depth Testing
	glDepthFunc(GL_LEQUAL);								// Tipo de Depth Testing a realizar
}

void displayS(void) {  									// Creamos la funcion donde se dibuja
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);	// Limiamos pantalla y Depth Buffer
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
	glPushMatrix();
	glLineWidth(1.0);

	glTranslatef(0.0, -85.0, 0.0);	//La traslade porque el dibujo quedo un poco abajo.

	// C1
	glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);
	glBegin(GL_POLYGON);
	glColor3d(0.9725, 0.6588, 0.6941);
	glVertex3f(180.0, 100.0, -1.2);
	glVertex3f(171.0, 103.0, -1.2);
	glVertex3f(163.0, 107.0, -1.2);
	glVertex3f(154.0, 112.0, -1.2);
	glVertex3f(147.0, 116.0, -1.2);
	glVertex3f(141.0, 123.0, -1.2);
	glVertex3f(137.0, 130.0, -1.2);
	glVertex3f(136.0, 136.0, -1.2);
	glVertex3f(137.0, 139.0, -1.2);
	glVertex3f(141.0, 140.0, -1.2);
	glVertex3f(154.0, 140.0, -1.2);
	glVertex3f(168.0, 136.0, -1.2);
	glVertex3f(180.0, 131.0, -1.2);
	glVertex3f(194.0, 126.0, -1.2);
	glVertex3f(212.0, 124.0, -1.2);
	glVertex3f(220.0, 122.0, -1.2);
	glVertex3f(225.0, 120.0, -1.2);
	glVertex3f(229.0, 115.0, -1.2);
	glVertex3f(231.0, 111.0, -1.2);
	glVertex3f(229.0, 107.0, -1.2);
	glVertex3f(225.0, 104.0, -1.2);
	glVertex3f(213.0, 100.0, -1.2);
	glVertex3f(198.0, 98.0, -1.2);
	glEnd();

	//TEST LINEA CONTORNO
	glPolygonMode(GL_FRONT_AND_BACK, GL_LINE);
	glBegin(GL_POLYGON);
	glColor3d(0.8784, 0.4235, 0.4666);
	glVertex3f(180.0, 100.0, -1.2);
	glVertex3f(171.0, 103.0, -1.2);
	glVertex3f(163.0, 107.0, -1.2);
	glVertex3f(154.0, 112.0, -1.2);
	glVertex3f(147.0, 116.0, -1.2);
	glVertex3f(141.0, 123.0, -1.2);
	glVertex3f(137.0, 130.0, -1.2);
	glVertex3f(136.0, 136.0, -1.2);
	glVertex3f(137.0, 139.0, -1.2);
	glVertex3f(141.0, 140.0, -1.2);
	glVertex3f(154.0, 140.0, -1.2);
	glVertex3f(168.0, 136.0, -1.2);
	glVertex3f(180.0, 131.0, -1.2);
	glVertex3f(194.0, 126.0, -1.2);
	glVertex3f(212.0, 124.0, -1.2);
	glVertex3f(220.0, 122.0, -1.2);
	glVertex3f(225.0, 120.0, -1.2);
	glVertex3f(229.0, 115.0, -1.2);
	glVertex3f(231.0, 111.0, -1.2);
	glVertex3f(229.0, 107.0, -1.2);
	glVertex3f(225.0, 104.0, -1.2);
	glVertex3f(213.0, 100.0, -1.2);
	glVertex3f(198.0, 98.0, -1.2);
	glEnd();
	

	//C5
	glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);
	glBegin(GL_POLYGON);
	glColor3d(0.9725, 0.6588, 0.6941);	//ROSA
	glVertex3f(122.0, 204.0, -1.2);
	glVertex3f(122.0, 182.0, -1.2);
	glVertex3f(128.0, 168.0, -1.2);
	glVertex3f(137.0, 159.0, -1.2);
	glVertex3f(149.0, 150.0, -1.2);
	glVertex3f(149.0, 158.0, -1.2);
	glVertex3f(143.0, 200.0, -1.2);
	glVertex3f(143.0, 235.0, -1.2);
	glVertex3f(148.0, 252.0, -1.2);
	glVertex3f(151.0, 264.0, -1.2);
	glVertex3f(155.0, 274.0, -1.2);
	glVertex3f(156.0, 285.0, -1.2);
	glVertex3f(153.0, 288.0, -1.2);
	glVertex3f(145.0, 288.0, -1.2);
	glVertex3f(136.0, 281.0, -1.2);
	glVertex3f(130.0, 272.0, -1.2);
	glVertex3f(125.0, 261.0, -1.2);
	glVertex3f(122.0, 248.0, -1.2);
	glVertex3f(122.0, 234.0, -1.2);
	glVertex3f(123.0, 215.0, -1.2);
	glVertex3f(125.0, 204.0, -1.2);
	glEnd();

	//CX (CABELLO ATRAS)
	glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);
	glBegin(GL_POLYGON);
	glColor3d(0.9725, 0.6588, 0.6941);	//ROSA
	glVertex3f(183.0, 258.0, -1.2);
	glVertex3f(186.0, 263.0, -1.2);
	glVertex3f(193.0, 263.0, -1.2);
	glVertex3f(197.0, 265.0, -1.2);
	glVertex3f(200.0, 268.0, -1.2);
	glVertex3f(205.0, 265.0, -1.2);
	glVertex3f(208.0, 261.0, -1.2);
	glVertex3f(194.0, 259.0, -1.2);
	glEnd();

	//CX (CABELLO ATRAS) 2
	glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);
	glBegin(GL_POLYGON);
	glColor3d(0.9725, 0.6588, 0.6941);	//ROSA
	glVertex3f(158.0, 246.0, -1.2);
	glVertex3f(161.0, 253.0, -1.2);
	glVertex3f(164.0, 263.0, -1.2);
	glVertex3f(165.0, 247.0, -1.2);
	glEnd();

	//C4
	glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);
	glBegin(GL_POLYGON);
	glColor3d(0.9725, 0.6588, 0.6941);
	glVertex3f(149.0, 150.0, -1.2);
	glVertex3f(163.0, 142.0, -1.2);
	glVertex3f(182.0, 134.0, -1.2);
	glVertex3f(188.0, 145.0, -1.2);
	glVertex3f(180.0, 161.0, -1.2);
	glVertex3f(170.0, 163.0, -1.2);
	glVertex3f(164.0, 166.0, -1.2);
	glVertex3f(152.0, 172.0, -1.2);
	glVertex3f(149.0, 158.0, -1.2);
	glVertex3f(149.0, 150.0, -1.2);
	glEnd();
	
	//C3
	glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);
	glBegin(GL_POLYGON);
	glColor3d(0.9725, 0.6588, 0.6941);
	glVertex3f(182.0, 134.0, -1.2);
	glVertex3f(216.0, 127.0, -1.2);
	glVertex3f(238.0, 127.0, -1.2);
	glVertex3f(252.0, 150.0, -1.2);
	glVertex3f(252.0, 159.0, -1.2);
	glVertex3f(236.0, 146.0, -1.2);
	glVertex3f(236.0, 152.0, -1.2);
	glVertex3f(219.0, 152.0, -1.2);
	glVertex3f(211.0, 154.0, -1.2);
	glVertex3f(201.0, 157.0, -1.2);
	glVertex3f(196.0, 155.0, -1.2);
	glVertex3f(192.0, 151.0, -1.2);
	glVertex3f(188.0, 145.0, -1.2);
	glEnd();

	//C2
	glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);
	glBegin(GL_POLYGON);
	glColor3d(0.9725, 0.6588, 0.6941);
	glVertex3f(248.0, 128.0, -1.2);
	glVertex3f(255.0, 130.0, -1.2);
	glVertex3f(264.0, 135.0, -1.2);
	glVertex3f(269.0, 140.0, -1.2);
	glVertex3f(274.0, 147.0, -1.2);
	glVertex3f(278.0, 160.0, -1.2);
	glVertex3f(283.0, 176.0, -1.2);
	glVertex3f(288.0, 190.0, -1.2);
	glVertex3f(292.0, 208.0, -1.2);
	glVertex3f(287.0, 205.0, -1.2);
	glVertex3f(278.0, 211.0, -1.2);
	glVertex3f(273.0, 219.0, -1.2);
	glVertex3f(262.0, 222.0, -1.2);
	glVertex3f(263.0, 212.0, -1.2);
	glVertex3f(263.0, 194.0, -1.2);
	glVertex3f(261.0, 180.0, -1.2);
	glVertex3f(257.0, 164.0, -1.2);
	glVertex3f(251.0, 150.0, -1.2);
	glVertex3f(238.0, 127.0, -1.2);
	glEnd();
	

	//O1
	glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);
	glBegin(GL_POLYGON);
	glColor3d(0.9529, 0.8313, 0.6705); 
	glVertex3f(113.0, 247.0, -1.2);
	glVertex3f(117.0, 248.0, -1.2);
	glVertex3f(117.0, 237.0, -1.2);
	glEnd();

	//O1 PARTE DE ADENTRO
	glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);
	glBegin(GL_POLYGON);
	glColor3d(0.9529, 0.8313, 0.6705);
	glVertex3f(148.0, 220.0, -1.2);
	glVertex3f(154.0, 230.0, -1.2);
	glVertex3f(164.0, 244.0, -1.2);
	glVertex3f(151.0, 242.0, -1.2);
	glVertex3f(148.0, 230.0, -1.2);
	glEnd();
	//O2
	glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);
	glBegin(GL_POLYGON);
	glColor3d(0.9529, 0.8313, 0.6705);
	glVertex3f(286.0, 179.0, -1.2);
	glVertex3f(307.0, 189.0, -1.2);
	glVertex3f(310.0, 191.0, -1.2);
	glVertex3f(310.0, 193.0, -1.2);
	glVertex3f(294.0, 206.0, -1.2);
	glVertex3f(290.0, 191.0, -1.2);
	glEnd();

	
	//F1
	glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);
	glBegin(GL_POLYGON);
	glColor3d(0.9529, 0.8313, 0.6705);
	glVertex3f(147.0, 181.0, -1.2);
	glVertex3f(147.0, 172.0, -1.2);
	glVertex3f(149.0, 158.0, -1.2);
	glVertex3f(151.0, 178.0, -1.2);
	glEnd();

	//F2
	glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);
	glBegin(GL_POLYGON);
	glColor3d(0.9529, 0.8313, 0.6705);
	glVertex3f(183.0, 164.0, -1.2);
	glVertex3f(188.0, 145.0, -1.2);
	glVertex3f(190.0, 155.0, -1.2);
	glVertex3f(197.0, 163.0, -1.2);
	glEnd();

	//F3
	glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);
	glBegin(GL_POLYGON);
	glColor3d(0.9529, 0.8313, 0.6705);
	glVertex3f(238.0, 158.0, -1.2);
	glVertex3f(238.0, 152.0, -1.2);
	glVertex3f(246.0, 161.0, -1.2);
	glEnd();

	//FP
	glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);
	glBegin(GL_POLYGON);
	glColor3d(0.9529, 0.8313, 0.6705);
	glVertex3f(147.0, 212.0, -1.2);
	glVertex3f(161.0, 234.0, -1.2);
	glVertex3f(174.0, 248.0, -1.2);
	glVertex3f(185.0, 254.0, -1.2);
	glVertex3f(205.0, 258.0, -1.2);
	glVertex3f(224.0, 258.0, -1.2);
	glVertex3f(228.0, 248.0, -1.2);
	glVertex3f(237.0, 238.0, -1.2);
	glVertex3f(246.0, 230.0, -1.2);
	glVertex3f(253.0, 226.0, -1.2);
	glVertex3f(257.0, 216.0, -1.2);
	glVertex3f(258.0, 207.0, -1.2);
	glVertex3f(258.0, 192.0, -1.2);
	glVertex3f(256.0, 177.0, -1.2);
	glVertex3f(254.0, 166.0, -1.2);
	glVertex3f(246.0, 161.0, -1.2);
	glVertex3f(238.0, 158.0, -1.2);
	glVertex3f(219.0, 157.0, -1.2);
	glVertex3f(197.0, 163.0, -1.2);
	glVertex3f(183.0, 164.0, -1.2);
	glVertex3f(166.0, 170.0, -1.2);
	glVertex3f(151.0, 178.0, -1.2);
	glVertex3f(147.0, 181.0, -1.2);
	glEnd();

	//CEJA DERECHA
	glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);
	glBegin(GL_POLYGON);
	glColor3d(0.9725, 0.6588, 0.6941);	//ROSA
	glVertex3f(161.0, 180.0, -1.2);
	glVertex3f(166.0, 178.0, -1.2);
	glVertex3f(177.0, 177.0, -1.2);
	glVertex3f(181.0, 177.0, -1.2);
	glVertex3f(182.0, 178.0, -1.2);
	glVertex3f(184.0, 178.0, -1.2);
	glVertex3f(185.0, 177.0, -1.2);
	glVertex3f(185.0, 174.0, -1.2);
	glVertex3f(177.0, 173.0, -1.2);
	glVertex3f(170.0, 174.0, -1.2);
	glVertex3f(165.0, 176.0, -1.2);
	glEnd();

	//CEJA DERECHA CONTORNO
	glPolygonMode(GL_FRONT_AND_BACK, GL_LINE);
	glBegin(GL_LINE_STRIP);
	glColor3d(0.1, 0.1, 0.1);	//NEGRO
	glVertex3f(161.0, 180.0, -1.2);
	glVertex3f(182.0, 178.0, -1.2);
	glVertex3f(184.0, 178.0, -1.2);
	glVertex3f(185.0, 177.0, -1.2);
	glVertex3f(185.0, 174.0, -1.2);
	glVertex3f(177.0, 173.0, -1.2);
	glVertex3f(170.0, 174.0, -1.2);
	glVertex3f(165.0, 176.0, -1.2);
	glVertex3f(161.0, 180.0, -1.2);
	glEnd();

	//CEJA IZQUIERDA
	glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);
	glBegin(GL_POLYGON);
	glColor3d(0.9725, 0.6588, 0.6941);	//ROSA
	glVertex3f(217.0, 172.0, -1.2);
	glVertex3f(220.0, 172.0, -1.2);
	glVertex3f(233.0, 163.0, -1.2);
	glVertex3f(235.0, 162.0, -1.2);
	glVertex3f(224.0, 163.0, -1.2);
	glVertex3f(219.0, 165.0, -1.2);
	glVertex3f(216.0, 168.0, -1.2);
	glEnd();

	//CEJA IZQUIERDA
	glPolygonMode(GL_FRONT_AND_BACK, GL_LINE);
	glBegin(GL_LINE_STRIP);
	glColor3d(0.1, 0.1, 0.1);	//NEGRO
	glVertex3f(233.0, 163.0, -1.2);
	glVertex3f(224.0, 163.0, -1.2);
	glVertex3f(219.0, 165.0, -1.2);
	glVertex3f(216.0, 168.0, -1.2);
	glVertex3f(217.0, 172.0, -1.2);
	glVertex3f(220.0, 172.0, -1.2);
	glVertex3f(235.0, 162.0, -1.2);
	//glVertex3f(233.0, 163.0, -1.2);
	glEnd();

	//M1
	glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);
	glBegin(GL_POLYGON);
	glColor3d(0.9843, 0.8392, 0.7647);		//MEJILLA CLARA
	glVertex3f(165.0, 233.0, -1.2);
	glVertex3f(167.0, 229.0, -1.2);
	glVertex3f(176.0, 224.0, -1.2);
	glVertex3f(180.0, 223.0, -1.2);
	glVertex3f(187.0, 223.0, -1.2);
	glVertex3f(191.0, 227.0, -1.2);
	glVertex3f(191.0, 234.0, -1.2);
	glVertex3f(189.0, 237.0, -1.2);
	glVertex3f(186.0, 240.0, -1.2);
	glVertex3f(179.0, 243.0, -1.2);
	glVertex3f(170.0, 243.0, -1.2);
	glVertex3f(165.0, 239.0, -1.2);
	glEnd();

	//M1 CENTRO
	glPolygonMode(GL_FRONT_AND_BACK, GL_LINE);
	glBegin(GL_POLYGON);
	glColor3d(0.8941, 0.6901, 0.5764);
	glVertex3f(165.0, 233.0, -1.2);
	glVertex3f(167.0, 229.0, -1.2);
	glVertex3f(176.0, 224.0, -1.2);
	glVertex3f(180.0, 223.0, -1.2);
	glVertex3f(187.0, 223.0, -1.2);
	glVertex3f(191.0, 227.0, -1.2);
	glVertex3f(191.0, 234.0, -1.2);
	glVertex3f(189.0, 237.0, -1.2);
	glVertex3f(186.0, 240.0, -1.2);
	glVertex3f(179.0, 243.0, -1.2);
	glVertex3f(170.0, 243.0, -1.2);
	glVertex3f(165.0, 239.0, -1.2);
	glEnd();

	//M2
	glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);
	glBegin(GL_POLYGON);
	glColor3d(0.9843, 0.8392, 0.7647);		//MEJILLA CLARA
	glVertex3f(235.0, 213.0, -1.2);
	glVertex3f(235.0, 207.0, -1.2);
	glVertex3f(241.0, 202.0, -1.2);
	glVertex3f(251.0, 201.0, -1.2);
	glVertex3f(257.0, 202.0, -1.2);
	glVertex3f(258.0, 207.0, -1.2);
	glVertex3f(256.0, 215.0, -1.2);
	glVertex3f(252.0, 217.0, -1.2);
	glVertex3f(246.0, 218.0, -1.2);
	glVertex3f(239.0, 218.0, -1.2);
	glEnd();
	
	//TEST DE LINEAS
	//M2
	glPolygonMode(GL_FRONT_AND_BACK, GL_LINE);
	glBegin(GL_POLYGON);
	glColor3d(0.8941, 0.6901, 0.5764);	//MEJILLA OSCURA
	glVertex3f(235.0, 213.0, -1.2);
	glVertex3f(235.0, 207.0, -1.2);
	glVertex3f(241.0, 202.0, -1.2);
	glVertex3f(251.0, 201.0, -1.2);
	glVertex3f(257.0, 202.0, -1.2);
	glVertex3f(258.0, 207.0, -1.2);
	glVertex3f(256.0, 215.0, -1.2);
	glVertex3f(252.0, 217.0, -1.2);
	glVertex3f(246.0, 218.0, -1.2);
	glVertex3f(239.0, 218.0, -1.2);
	glEnd();

	//M3
	glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);
	glBegin(GL_POLYGON);
	glColor3d(0.8941, 0.6901, 0.5764);	//MEJILLA OSCURA
	glVertex3f(212.0, 213.0, -1.2);
	glVertex3f(213.0, 208.0, -1.2);
	glVertex3f(215.0, 207.0, -1.2);
	glVertex3f(217.0, 208.0, -1.2);
	glVertex3f(218.0, 211.0, -1.2);
	glVertex3f(216.0, 214.0, -1.2);
	glEnd();

	glPolygonMode(GL_FRONT_AND_BACK, GL_LINE);
	glBegin(GL_LINE_STRIP);
	glColor3d(0.3764, 0.2509, 0.1254);	//CAFE
	glVertex3f(212.0, 213.0, -1.2);
	glVertex3f(213.0, 208.0, -1.2);
	glVertex3f(215.0, 207.0, -1.2);
	glVertex3f(217.0, 208.0, -1.2);
	glVertex3f(218.0, 211.0, -1.2);
	glEnd();

	//B1
	glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);
	glBegin(GL_POLYGON);
	glColor3d(0.996, 0.7568, 0.7843);	//LENGUA
	glVertex3f(200.0, 234.0, -1.2);
	glVertex3f(206.0, 235.0, -1.2);
	glVertex3f(207.0, 230.0, -1.2);
	glVertex3f(215.0, 225.0, -1.2);
	glVertex3f(222.0, 223.0, -1.2);
	glVertex3f(230.0, 226.0, -1.2);
	glVertex3f(232.0, 226.0, -1.2);
	glVertex3f(235.0, 221.0, -1.2);
	glVertex3f(236.0, 222.0, -1.2);
	glVertex3f(236.0, 229.0, -1.2);
	glVertex3f(233.0, 237.0, -1.2);
	glVertex3f(229.0, 242.0, -1.2);
	glVertex3f(224.0, 239.0, -1.2);
	glVertex3f(220.0, 246.0, -1.2);
	glVertex3f(211.0, 245.0, -1.2);
	glVertex3f(204.0, 241.0, -1.2);
	glVertex3f(199.0, 237.0, -1.2);
	glEnd();

	//D1
	glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);
	glBegin(GL_POLYGON);
	glColor3d(1.0, 1.0, 1.0);	//DIENTE
	glVertex3f(221.0, 245.0, -1.2);
	glVertex3f(226.0, 245.0, -1.2);
	glVertex3f(228.0, 243.0, -1.2);
	glVertex3f(224.0, 239.0, -1.2);
	glEnd();
	//D2
	glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);
	glBegin(GL_POLYGON);
	glColor3d(1.0, 1.0, 1.0);	//DIENTE
	glVertex3f(201.0, 233.0, -1.2);
	glVertex3f(206.0, 235.0, -1.2);
	glVertex3f(207.0, 228.0, -1.2);
	glEnd();
	//D3
	glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);
	glBegin(GL_POLYGON);
	glColor3d(1.0, 1.0, 1.0);	//DIENTE
	glVertex3f(226.0, 221.0, -1.2);
	glVertex3f(232.0, 226.0, -1.2);
	glVertex3f(235.0, 221.0, -1.2);
	glEnd();
	//D4
	glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);
	glBegin(GL_POLYGON);
	glColor3d(1.0, 1.0, 1.0);	//DIENTE
	glVertex3f(207.0, 230.0, -1.2);
	glVertex3f(213.0, 226.0, -1.2);
	glVertex3f(221.0, 223.0, -1.2);
	glVertex3f(230.0, 223.0, -1.2);
	glVertex3f(226.0, 221.0, -1.2);
	glVertex3f(217.0, 222.0, -1.2);
	glVertex3f(209.0, 226.0, -1.2);
	glVertex3f(206.0, 228.0, -1.2);
	glEnd();

	//OJO IZQ
	glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);
	glBegin(GL_POLYGON);
	glColor3d(1.0, 1.0, 1.0);	//BLANCO
	glVertex3f(228.0, 199.0, -1.2);
	glVertex3f(238.0, 194.0, -1.2);
	glVertex3f(253.0, 194.0, -1.2);
	glVertex3f(254.0, 195.0, -1.2);
	glVertex3f(255.0, 195.0, -1.2);
	glVertex3f(256.0, 194.0, -1.2);
	glVertex3f(256.0, 193.0, -1.2);
	glVertex3f(252.0, 190.0, -1.2);
	glVertex3f(241.0, 190.0, -1.2);
	glVertex3f(235.0, 193.0, -1.2);
	glVertex3f(228.0, 198.0, -1.2);
	glEnd();

	//OJO DER
	glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);
	glBegin(GL_POLYGON);
	glColor3d(1.0, 1.0, 1.0);	//BLANCO
	glVertex3f(157.0, 208.0, -1.2);
	glVertex3f(160.0, 202.0, -1.2);
	glVertex3f(167.0, 196.0, -1.2);
	glVertex3f(170.0, 195.0, -1.2);
	glVertex3f(180.0, 195.0, -1.2);
	glVertex3f(185.0, 196.0, -1.2);
	glVertex3f(193.0, 202.0, -1.2);
	glVertex3f(195.0, 205.0, -1.2);
	glVertex3f(195.0, 210.0, -1.2);
	glVertex3f(189.0, 215.0, -1.2);
	glVertex3f(179.0, 221.0, -1.2);
	glVertex3f(173.0, 224.0, -1.2);
	glVertex3f(163.0, 224.0, -1.2);
	glVertex3f(159.0, 219.0, -1.2);
	glVertex3f(157.0, 213.0, -1.2);
	glEnd();

	//Cuello Color
	glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);
	glBegin(GL_POLYGON);
	glColor3d(0.9529, 0.8313, 0.6705);	//PIEL
	glVertex3f(211.0, 260.0, -1.2);
	glVertex3f(203.0, 268.0, -1.2);
	glVertex3f(217.0, 279.0, -1.2);
	glVertex3f(225.0, 279.0, -1.2);
	glVertex3f(223.0, 270.0, -1.2);
	glVertex3f(223.0, 258.0, -1.2);
	glVertex3f(218.0, 260.0, -1.2);
	glEnd();

	//Axila color
	glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);
	glBegin(GL_POLYGON);
	glColor3d(0.9529, 0.8313, 0.6705);	//PIEL
	glVertex3f(182.0, 304.0, -1.2);
	glVertex3f(191.0, 304.0, -1.2);
	glVertex3f(194.0, 306.0, -1.2);
	glVertex3f(190.0, 324.0, -1.2);
	glVertex3f(186.0, 318.0, -1.2);
	glVertex3f(186.0, 311.0, -1.2);	
	glEnd();

	//Hombro color
	glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);
	glBegin(GL_POLYGON);
	glColor3d(0.9529, 0.8313, 0.6705);	//PIEL
	glVertex3f(182.0, 304.0, -1.2);
	glVertex3f(190.0, 304.0, -1.2);
	glVertex3f(190.0, 300.0, -1.2);
	glVertex3f(193.0, 300.0, -1.2);
	glVertex3f(211.0, 311.0, -1.2);
	glVertex3f(225.0, 321.0, -1.2);
	glVertex3f(229.0, 315.0, -1.2);
	glVertex3f(232.0, 314.0, -1.2);
	glVertex3f(237.0, 307.0, -1.2);
	glVertex3f(221.0, 295.0, -1.2);
	glVertex3f(206.0, 277.0, -1.2);
	glVertex3f(201.0, 273.0, -1.2);
	glVertex3f(195.0, 270.0, -1.2);
	glVertex3f(187.0, 270.0, -1.2);
	glVertex3f(181.0, 276.0, -1.2);
	glVertex3f(180.0, 289.0, -1.2);
	glEnd();

	//ANTEBRAZO
	glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);
	glBegin(GL_POLYGON);
	glColor3d(0.9529, 0.8313, 0.6705);	//PIEL
	glVertex3f(273.0, 335.0, -1.2);
	glVertex3f(309.0, 335.0, -1.2);
	glVertex3f(314.0, 325.0, -1.2);
	glVertex3f(303.0, 322.0, -1.2);
	glVertex3f(289.0, 322.0, -1.2);
	glVertex3f(275.0, 328.0, -1.2);
	glEnd();

	//MANO
	glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);
	glBegin(GL_POLYGON);
	glColor3d(0.9529, 0.8313, 0.6705);	//PIEL
	glVertex3f(309.0, 335.0, -1.2);
	glVertex3f(309.0, 340.0, -1.2);
	glVertex3f(317.0, 349.0, -1.2);
	glVertex3f(324.0, 353.0, -1.2);
	glVertex3f(329.0, 352.0, -1.2);
	glVertex3f(333.0, 344.0, -1.2);
	glVertex3f(335.0, 339.0, -1.2);
	glVertex3f(338.0, 334.0, -1.2);
	glVertex3f(328.0, 326.0, -1.2);
	glVertex3f(314.0, 325.0, -1.2);
	glEnd();

	//MEÑIQUE 1
	glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);
	glBegin(GL_POLYGON);
	glColor3d(0.9529, 0.8313, 0.6705);	//PIEL
	glVertex3f(317.0, 349.0, -1.2);
	glVertex3f(318.0, 357.0, -1.2);
	glVertex3f(322.0, 358.0, -1.2);
	glVertex3f(324.0, 353.0, -1.2);
	glEnd();

	//MEÑIQUE 2
	glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);
	glBegin(GL_POLYGON);
	glColor3d(0.9529, 0.8313, 0.6705);	//PIEL
	glVertex3f(318.0, 357.0, -1.2);
	glVertex3f(313.0, 361.0, -1.2);
	glVertex3f(314.0, 363.0, -1.2);
	glVertex3f(322.0, 358.0, -1.2);
	glEnd();

	//CODO 1
	glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);
	glBegin(GL_POLYGON);
	glColor3d(0.9529, 0.8313, 0.6705);	//PIEL
	glVertex3f(229.0, 324.0, -1.2);
	glVertex3f(243.0, 332.0, -1.2);
	glVertex3f(261.0, 334.0, -1.2);
	glVertex3f(259.0, 329.0, -1.2);
	glVertex3f(257.0, 326.0, -1.2);
	glVertex3f(258.0, 321.0, -1.2);
	glVertex3f(245.0, 318.0, -1.2);
	glVertex3f(245.0, 322.0, -1.2);
	glVertex3f(243.0, 324.0, -1.2);
	glEnd();

	//CODO 2
	glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);
	glBegin(GL_POLYGON);
	glColor3d(0.9529, 0.8313, 0.6705);	//PIEL
	glVertex3f(243.0, 316.0, -1.2);
	glVertex3f(245.0, 318.0, -1.2);
	glVertex3f(258.0, 321.0, -1.2);
	glVertex3f(264.0, 321.0, -1.2);
	glVertex3f(266.0, 322.0, -1.2);
	glVertex3f(275.0, 316.0, -1.2);
	glVertex3f(263.0, 313.0, -1.2);
	glVertex3f(248.0, 311.0, -1.2);
	glEnd();

	//DEDO INDICE MANO 2
	glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);
	glBegin(GL_POLYGON);
	glColor3d(0.9529, 0.8313, 0.6705);	//PIEL
	glVertex3f(281.0, 340.0, -1.2);
	glVertex3f(281.0, 348.0, -1.2);
	glVertex3f(294.0, 337.0, -1.2);
	glVertex3f(284.0, 337.0, -1.2);
	glEnd();

	//Trasero gato
	glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);
	glBegin(GL_POLYGON);
	glColor3d(0.6549, 0.5921, 0.596);	//gris oscuro (pantalon)
	glVertex3f(259.0, 370.0, -1.2);
	glVertex3f(265.0, 374.0, -1.2);
	glVertex3f(270.0, 373.0, -1.2);
	glVertex3f(282.0, 377.0, -1.2);
	glVertex3f(291.0, 377.0, -1.2);
	glVertex3f(307.0, 363.0, -1.2);
	glVertex3f(284.0, 356.0, -1.2);
	glVertex3f(276.0, 347.0, -1.2);
	glVertex3f(267.0, 350.0, -1.2);
	glVertex3f(267.0, 359.0, -1.2);
	glEnd();

	//DEDOS MANO 2
	glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);
	glBegin(GL_POLYGON);
	glColor3d(0.9529, 0.8313, 0.6705);	//PIEL
	glVertex3f(294.0, 337.0, -1.2);
	glVertex3f(294.0, 342.0, -1.2);
	glVertex3f(287.0, 353.0, -1.2);
	glVertex3f(287.0, 360.0, -1.2);
	glVertex3f(289.0, 361.0, -1.2);
	glVertex3f(292.0, 361.0, -1.2);
	glVertex3f(297.0, 364.0, -1.2);
	glVertex3f(301.0, 361.0, -1.2);
	glVertex3f(303.0, 361.0, -1.2);
	glVertex3f(306.0, 363.0, -1.2);
	glVertex3f(311.0, 358.0, -1.2);
	glVertex3f(313.0, 350.0, -1.2);
	glVertex3f(304.0, 337.0, -1.2);
	glEnd();

	//PANTORRILLA COLOR
	glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);
	glBegin(GL_POLYGON);
	glColor3d(0.9529, 0.8313, 0.6705);	//PIEL
	glVertex3f(93.0, 456.0, -1.2);
	glVertex3f(97.0, 454.0, -1.2);
	glVertex3f(103.0, 454.0, -1.2);
	glVertex3f(114.0, 461.0, -1.2);
	glVertex3f(121.0, 464.0, -1.2);
	glVertex3f(129.0, 471.0, -1.2);
	glVertex3f(133.0, 477.0, -1.2);
	glVertex3f(134.0, 482.0, -1.2);
	glVertex3f(133.0, 487.0, -1.2);
	glVertex3f(125.0, 500.0, -1.2);
	glVertex3f(115.0, 507.0, -1.2);
	glVertex3f(99.0, 470.0, -1.2);
	glVertex3f(92.0, 462.0, -1.2);
	glEnd();

	//MUSLO COLOR
	glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);
	glBegin(GL_POLYGON);
	glColor3d(0.9529, 0.8313, 0.6705);	//PIEL
	glVertex3f(115.0, 507.0, -1.2);
	glVertex3f(124.0, 530.0, -1.2);
	glVertex3f(129.0, 535.0, -1.2);
	glVertex3f(133.0, 535.0, -1.2);
	glVertex3f(139.0, 532.0, -1.2);
	glVertex3f(157.0, 515.0, -1.2);
	glVertex3f(185.0, 485.0, -1.2);
	glVertex3f(170.0, 485.0, -1.2);
	glVertex3f(157.0, 479.0, -1.2);
	glVertex3f(149.0, 471.0, -1.2);
	glVertex3f(138.0, 490.0, -1.2);
	glVertex3f(130.0, 498.0, -1.2);
	glVertex3f(125.0, 500.0, -1.2);
	glEnd();

	//PIERNA COMPLETA 1
	glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);
	glBegin(GL_POLYGON);
	glColor3d(0.9529, 0.8313, 0.6705);	//PIEL
	glVertex3f(234.0, 499.0, -1.2);
	glVertex3f(231.0, 520.0, -1.2);
	glVertex3f(234.0, 544.0, -1.2);
	glVertex3f(230.0, 552.0, -1.2);
	glVertex3f(224.0, 562.0, -1.2);
	glVertex3f(222.0, 586.0, -1.2);
	glVertex3f(224.0, 640.0, -1.2);
	glVertex3f(226.0, 642.0, -1.2);
	glVertex3f(238.0, 642.0, -1.2);
	glVertex3f(240.0, 644.0, -1.2);
	glVertex3f(246.0, 613.0, -1.2);
	glVertex3f(259.0, 533.0, -1.2);
	glVertex3f(265.0, 497.0, -1.2);
	glVertex3f(253.0, 498.0, -1.2);
	glEnd();

	//TENIS IZQUIERDO COLOR
	glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);
	glBegin(GL_POLYGON);
	glColor3d(0.5411, 0.8823, 0.9333);	//AZUL AGUAMARINA (TENIS)
	glVertex3f(213.0, 707.0, -1.2);
	glVertex3f(228.0, 712.0, -1.2);
	glVertex3f(239.0, 714.0, -1.2);
	glVertex3f(251.0, 720.0, -1.2);
	glVertex3f(264.0, 723.0, -1.2);
	glVertex3f(280.0, 723.0, -1.2);
	glVertex3f(288.0, 716.0, -1.2);
	glVertex3f(291.0, 711.0, -1.2);
	glVertex3f(291.0, 707.0, -1.2);
	glVertex3f(286.0, 702.0, -1.2);
	glVertex3f(277.0, 699.0, -1.2);
	glVertex3f(269.0, 693.0, -1.2);
	glVertex3f(256.0, 695.0, -1.2);
	glVertex3f(245.0, 698.0, -1.2);
	glVertex3f(244.0, 697.0, -1.2);
	glVertex3f(242.0, 688.0, -1.2);
	glVertex3f(238.0, 678.0, -1.2);
	glVertex3f(236.0, 671.0, -1.2);
	glVertex3f(238.0, 667.0, -1.2);
	glVertex3f(240.0, 650.0, -1.2);
	glVertex3f(241.0, 647.0, -1.2);
	glVertex3f(238.0, 646.0, -1.2);
	glVertex3f(231.0, 651.0, -1.2);
	glVertex3f(230.0, 651.0, -1.2);
	glVertex3f(226.0, 648.0, -1.2);
	glVertex3f(221.0, 648.0, -1.2);
	glVertex3f(216.0, 653.0, -1.2);
	glVertex3f(211.0, 667.0, -1.2);
	glVertex3f(212.0, 687.0, -1.2);
	glVertex3f(214.0, 697.0, -1.2);
	glVertex3f(212.0, 703.0, -1.2);
	glEnd();

	//TENIS IZQUIERDO DETALLE 1 COLOR
	glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);
	glBegin(GL_POLYGON);
	glColor3d(0.5411, 0.8823, 0.9333);	//AZUL AGUAMARINA (TENIS)
	glVertex3f(271.0, 699.0, -1.2);
	glVertex3f(279.0, 696.0, -1.2);
	glVertex3f(288.0, 696.0, -1.2);
	glVertex3f(282.0, 694.0, -1.2);
	glVertex3f(269.0, 693.0, -1.2);
	glEnd();

	//TENIS IZQUIERDO DETALLE 2 COLOR
	glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);
	glBegin(GL_POLYGON);
	glColor3d(0.5411, 0.8823, 0.9333);	//AZUL AGUAMARINA (TENIS)
	glVertex3f(244.0, 697.0, -1.2);
	glVertex3f(255.0, 690.0, -1.2);
	glVertex3f(266.0, 688.0, -1.2);
	glVertex3f(248.0, 687.0, -1.2);
	glVertex3f(242.0, 688.0, -1.2);
	glEnd();

	//TENIS IZQUIERDO DETALLE 3 COLOR
	glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);
	glBegin(GL_POLYGON);
	glColor3d(0.5411, 0.8823, 0.9333);	//AZUL AGUAMARINA (TENIS)
	glVertex3f(240.0, 687.0, -1.2);
	glVertex3f(248.0, 683.0, -1.2);
	glVertex3f(257.0, 682.0, -1.2);
	glVertex3f(246.0, 678.0, -1.2);
	glVertex3f(238.0, 678.0, -1.2);
	glEnd();

	//TENIS IZQUIERDO DETALLE 4 COLOR
	glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);
	glBegin(GL_POLYGON);
	glColor3d(0.5411, 0.8823, 0.9333);	//AZUL AGUAMARINA (TENIS)
	glVertex3f(238.0, 678.0, -1.2);
	glVertex3f(249.0, 674.0, -1.2);
	glVertex3f(242.0, 671.0, -1.2);
	glVertex3f(235.0, 670.0, -1.2);
	glEnd();

	//TENIS IZQUIERDO DETALLE 5 COLOR
	glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);
	glBegin(GL_POLYGON);
	glColor3d(0.5411, 0.8823, 0.9333);	//AZUL AGUAMARINA (TENIS)
	glVertex3f(238.0, 667.0, -1.2);
	glVertex3f(245.0, 667.0, -1.2);
	glVertex3f(251.0, 663.0, -1.2);
	glVertex3f(251.0, 654.0, -1.2);
	glVertex3f(249.0, 650.0, -1.2);
	glVertex3f(246.0, 650.0, -1.2);
	glVertex3f(243.0, 654.0, -1.2);
	glVertex3f(241.0, 662.0, -1.2);
	glVertex3f(238.0, 664.0, -1.2);
	glEnd();


	//TENIS DERECHO COLOR
	glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);
	glBegin(GL_POLYGON);
	glColor3d(0.5411, 0.8823, 0.9333);	//AZUL AGUAMARINA (TENIS)
	glVertex3f(67.0, 525.0, -1.2);
	glVertex3f(78.0, 518.0, -1.2);
	glVertex3f(85.0, 508.0, -1.2);
	glVertex3f(90.0, 486.0, -1.2);
	glVertex3f(99.0, 477.0, -1.2);
	glVertex3f(99.0, 475.0, -1.2);
	glVertex3f(96.0, 469.0, -1.2);
	glVertex3f(90.0, 463.0, -1.2);
	glVertex3f(90.0, 462.0, -1.2);
	glVertex3f(93.0, 452.0, -1.2);
	glVertex3f(97.0, 437.0, -1.2);
	glVertex3f(97.0, 435.0, -1.2);
	glVertex3f(99.0, 433.0, -1.2);
	glVertex3f(100.0, 430.0, -1.2);
	glVertex3f(95.0, 424.0, -1.2);
	glVertex3f(89.0, 424.0, -1.2);
	glVertex3f(81.0, 430.0, -1.2);
	glVertex3f(75.0, 439.0, -1.2);
	glVertex3f(70.0, 452.0, -1.2);
	glVertex3f(65.0, 458.0, -1.2);
	glVertex3f(59.0, 465.0, -1.2);
	glVertex3f(57.0, 475.0, -1.2);
	glVertex3f(60.0, 497.0, -1.2);
	glVertex3f(59.0, 510.0, -1.2);
	glEnd();

	//TENIS DERECHO detalle1 COLOR
	glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);
	glBegin(GL_POLYGON);
	glColor3d(0.5411, 0.8823, 0.9333);	//AZUL AGUAMARINA (TENIS)
	glVertex3f(93.0, 452.0, -1.2);
	glVertex3f(107.0, 442.0, -1.2);
	glVertex3f(101.0, 441.0, -1.2);
	glVertex3f(97.0, 437.0, -1.2);
	glEnd();

	//TENIS DERECHO detalle2 COLOR
	glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);
	glBegin(GL_POLYGON);
	glColor3d(0.5411, 0.8823, 0.9333);	//AZUL AGUAMARINA (TENIS)
	glVertex3f(50.0, 508.0, -1.2);
	glVertex3f(55.0, 517.0, -1.2);
	glVertex3f(67.0, 525.0, -1.2);
	glVertex3f(60.0, 511.0, -1.2);
	glVertex3f(57.0, 512.0, -1.2);
	glVertex3f(54.0, 511.0, -1.2);
	glEnd();

	//TENIS DERECHO detalle3 COLOR
	glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);
	glBegin(GL_POLYGON);
	glColor3d(0.5411, 0.8823, 0.9333);	//AZUL AGUAMARINA (TENIS)
	glVertex3f(107.0, 442.0, -1.2);
	glVertex3f(113.0, 451.0, -1.2);
	glVertex3f(118.0, 456.0, -1.2);
	glVertex3f(118.0, 447.0, -1.2);
	glEnd();

	//TENIS DERECHO detalle4 COLOR
	glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);
	glBegin(GL_POLYGON);
	glColor3d(0.5411, 0.8823, 0.9333);	//AZUL AGUAMARINA (TENIS)
	glVertex3f(97.0, 435.0, -1.2);
	glVertex3f(107.0, 432.0, -1.2);
	glVertex3f(100.0, 430.0, -1.2);
	glVertex3f(95.0, 424.0, -1.2);
	glEnd();

	//TENIS DERECHO detalle5 COLOR
	glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);
	glBegin(GL_POLYGON);
	glColor3d(0.5411, 0.8823, 0.9333);	//AZUL AGUAMARINA (TENIS)
	glVertex3f(107.0, 432.0, -1.2);
	glVertex3f(114.0, 437.0, -1.2);
	glVertex3f(114.0, 434.0, -1.2);
	glVertex3f(110.0, 432.0, -1.2);
	glEnd();

	//TENIS DERECHO detalle6 COLOR
	glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);
	glBegin(GL_POLYGON);
	glColor3d(1.0, 1.0, 1.0);	//blanco (TENIS)
	glVertex3f(58.0, 507.0, -1.2);
	glVertex3f(65.0, 510.0, -1.2);
	glVertex3f(72.0, 509.0, -1.2);
	glVertex3f(64.0, 506.0, -1.2);
	glVertex3f(56.0, 495.0, -1.2);
	glEnd();

	//TENIS DERECHO detalle7 COLOR
	glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);
	glBegin(GL_POLYGON);
	glColor3d(1.0, 1.0, 1.0);	//blanco (TENIS)
	glVertex3f(61.0, 491.0, -1.2);
	glVertex3f(65.0, 498.0, -1.2);
	glVertex3f(72.0, 502.0, -1.2);
	glVertex3f(66.0, 490.0, -1.2);
	glVertex3f(64.0, 482.0, -1.2);
	glEnd();

	//TENIS DERECHO detalle6 COLOR
	glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);
	glBegin(GL_POLYGON);
	glColor3d(1.0, 1.0, 1.0);	//blanco (TENIS)
	glVertex3f(65.0, 479.0, -1.2);
	glVertex3f(75.0, 489.0, -1.2);
	glVertex3f(71.0, 481.0, -1.2);
	glVertex3f(70.0, 469.0, -1.2);
	glEnd();

	//Plallera pliegue 1 COLOR
	glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);
	glBegin(GL_POLYGON);
	glColor3d(0.8392, 0.8117, 0.8431);	//gris (playera)
	glVertex3f(182.0, 369.0, -1.2);
	glVertex3f(181.0, 388.0, -1.2);
	glVertex3f(178.0, 394.0, -1.2);
	glVertex3f(178.0, 406.0, -1.2);
	glVertex3f(182.0, 409.0, -1.2);
	glVertex3f(189.0, 404.0, -1.2);
	glVertex3f(189.0, 399.0, -1.2);
	glVertex3f(184.0, 388.0, -1.2);
	glEnd();

	//Plallera pliegue 2 COLOR
	glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);
	glBegin(GL_POLYGON);
	glColor3d(0.8392, 0.8117, 0.8431);	//gris (playera)
	glVertex3f(192.0, 321.0, -1.2);
	glVertex3f(204.0, 336.0, -1.2);
	glVertex3f(210.0, 335.0, -1.2);
	glVertex3f(212.0, 332.0, -1.2);
	glVertex3f(215.0, 332.0, -1.2);
	glVertex3f(222.0, 337.0, -1.2);
	glVertex3f(224.0, 328.0, -1.2);
	glVertex3f(196.0, 306.0, -1.2);
	glEnd();

	//Plallera pliegue 3 COLOR
	glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);
	glBegin(GL_POLYGON);
	glColor3d(0.8392, 0.8117, 0.8431);	//gris (playera)
	glVertex3f(215.0, 332.0, -1.2);
	glVertex3f(218.0, 336.0, -1.2);
	glVertex3f(219.0, 342.0, -1.2);
	glVertex3f(221.0, 342.0, -1.2);
	glVertex3f(222.0, 337.0, -1.2);
	glEnd();

	//Plallera pliegue 4 COLOR
	glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);
	glBegin(GL_POLYGON);
	glColor3d(0.8392, 0.8117, 0.8431);	//gris (playera)
	glVertex3f(211.0, 425.0, -1.2);
	glVertex3f(247.0, 421.0, -1.2);
	glVertex3f(255.0, 406.0, -1.2);
	glVertex3f(251.0, 405.0, -1.2);
	glVertex3f(247.0, 409.0, -1.2);
	glVertex3f(230.0, 405.0, -1.2);
	glVertex3f(218.0, 410.0, -1.2);
	glEnd();

	//Plallera pliegue 5 COLOR
	glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);
	glBegin(GL_POLYGON);
	glColor3d(0.8392, 0.8117, 0.8431);	//gris (playera)
	glVertex3f(247.0, 421.0, -1.2);
	glVertex3f(255.0, 406.0, -1.2);
	glVertex3f(264.0, 377.0, -1.2);
	glVertex3f(256.0, 382.0, -1.2);
	glVertex3f(247.0, 384.0, -1.2);
	glVertex3f(251.0, 405.0, -1.2);
	glEnd();

	//Plallera pliegue 6 COLOR
	glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);
	glBegin(GL_POLYGON);
	glColor3d(0.8392, 0.8117, 0.8431);	//gris (playera)
	glVertex3f(264.0, 440.0, -1.2);
	glVertex3f(284.0, 432.0, -1.2);
	glVertex3f(286.0, 423.0, -1.2);
	glVertex3f(274.0, 379.0, -1.2);
	glVertex3f(265.0, 374.0, -1.2);
	glVertex3f(264.0, 396.0, -1.2);
	glVertex3f(269.0, 423.0, -1.2);
	glEnd();

	glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);
	glBegin(GL_POLYGON);
	glColor3d(0.8392, 0.8117, 0.8431);	//gris (playera)
	glVertex3f(203.0, 269.0, -1.2);
	glVertex3f(211.0, 279.0, -1.2);
	glVertex3f(213.0, 277.0, -1.2);
	glEnd();

	glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);
	glBegin(GL_POLYGON);
	glColor3d(0.8392, 0.8117, 0.8431);	//gris (playera)
	glVertex3f(218.0, 289.0, -1.2);
	glVertex3f(221.0, 294.0, -1.2);
	glVertex3f(238.0, 306.0, -1.2);
	glVertex3f(245.0, 302.0, -1.2);
	glVertex3f(234.0, 293.0, -1.2);
	glVertex3f(228.0, 293.0, -1.2);
	glVertex3f(223.0, 288.0, -1.2);
	glEnd();

	glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);
	glBegin(GL_POLYGON);
	glColor3d(0.8392, 0.8117, 0.8431);	//gris (playera)
	glVertex3f(230.0, 279.0, -1.2);
	glVertex3f(232.0, 285.0, -1.2);
	glVertex3f(237.0, 292.0, -1.2);
	glVertex3f(238.0, 288.0, -1.2);
	glVertex3f(233.0, 283.0, -1.2);
	glEnd();

	glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);
	glBegin(GL_POLYGON);
	glColor3d(0.8392, 0.8117, 0.8431);	//gris (playera)
	glVertex3f(248.0, 302.0, -1.2);
	glVertex3f(263.0, 311.0, -1.2);
	glVertex3f(276.0, 316.0, -1.2);
	glVertex3f(279.0, 306.0, -1.2);
	glVertex3f(257.0, 298.0, -1.2);
	glEnd();

	glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);
	glBegin(GL_POLYGON);
	glColor3d(0.8392, 0.8117, 0.8431);	//gris (playera)
	glVertex3f(237.0, 292.0, -1.2);
	glVertex3f(248.0, 302.0, -1.2);
	glVertex3f(257.0, 298.0, -1.2);
	glVertex3f(238.0, 288.0, -1.2);
	glEnd();

	glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);
	glBegin(GL_POLYGON);
	glColor3d(0.8392, 0.8117, 0.8431);	//gris (playera)
	glVertex3f(276.0, 316.0, -1.2);
	glVertex3f(286.0, 315.0, -1.2);
	glVertex3f(292.0, 308.0, -1.2);
	glVertex3f(279.0, 306.0, -1.2);
	glEnd();

	glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);
	glBegin(GL_POLYGON);
	glColor3d(0.8392, 0.8117, 0.8431);	//gris (playera)
	glVertex3f(286.0, 315.0, -1.2);
	glVertex3f(292.0, 320.0, -1.2);
	glVertex3f(300.0, 320.0, -1.2);
	glVertex3f(316.0, 311.0, -1.2);
	glVertex3f(292.0, 308.0, -1.2);
	glEnd();

	glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);
	glBegin(GL_POLYGON);
	glColor3d(0.8392, 0.8117, 0.8431);	//gris (playera)
	glVertex3f(300.0, 320.0, -1.2);
	glVertex3f(316.0, 324.0, -1.2);
	glVertex3f(330.0, 324.0, -1.2);
	glVertex3f(333.0, 309.0, -1.2);
	glVertex3f(316.0, 311.0, -1.2);
	glEnd();

	glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);
	glBegin(GL_POLYGON);
	glColor3d(0.8392, 0.8117, 0.8431);	//gris (playera)
	glVertex3f(330.0, 324.0, -1.2);
	glVertex3f(346.0, 311.0, -1.2);
	glVertex3f(351.0, 305.0, -1.2);
	glVertex3f(355.0, 295.0, -1.2);
	glVertex3f(347.0, 305.0, -1.2);
	glVertex3f(333.0, 309.0, -1.2);
	glEnd();

	//Plallera pliegue 7 COLOR
	glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);
	glBegin(GL_POLYGON);
	glColor3d(0.8392, 0.8117, 0.8431);	//gris (playera)
	glVertex3f(255.0, 406.0, -1.2);
	glVertex3f(264.0, 396.0, -1.2);
	glVertex3f(265.0, 374.0, -1.2);
	glVertex3f(261.0, 387.0, -1.2);
	glEnd();

	//Pantaloncito der COLOR
	glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);
	glBegin(GL_POLYGON);
	glColor3d(0.6549, 0.5921, 0.596);	//gris oscuro (pantalon)
	glVertex3f(156.0, 442.0, -1.2);
	glVertex3f(158.0, 449.0, -1.2);
	glVertex3f(154.0, 468.0, -1.2);
	glVertex3f(156.0, 472.0, -1.2);
	glVertex3f(164.0, 480.0, -1.2);
	glVertex3f(173.0, 484.0, -1.2);
	glVertex3f(184.0, 484.0, -1.2);
	glVertex3f(191.0, 480.0, -1.2);
	glVertex3f(207.0, 460.0, -1.2);
	glVertex3f(198.0, 456.0, -1.2);
	glVertex3f(175.0, 451.0, -1.2);
	glEnd();

	//Pantaloncito der COLOR
	glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);
	glBegin(GL_POLYGON);
	glColor3d(0.6549, 0.5921, 0.596);	//gris oscuro (pantalon)
	glVertex3f(226.0, 463.0, -1.2);
	glVertex3f(229.0, 470.0, -1.2);
	glVertex3f(232.0, 493.0, -1.2);
	glVertex3f(235.0, 497.0, -1.2);
	glVertex3f(256.0, 497.0, -1.2);
	glVertex3f(266.0, 494.0, -1.2);
	glVertex3f(273.0, 461.0, -1.2);
	glVertex3f(257.0, 463.0, -1.2);
	glEnd();

	//playera interior COLOR
	glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);
	glBegin(GL_POLYGON);
	glColor3d(0.6588, 0.3294, 0.3294);	//gris (playera)
	glVertex3f(158.0, 422.0, -1.2);
	glVertex3f(153.0, 438.0, -1.2);
	glVertex3f(166.0, 430.0, -1.2);
	glVertex3f(169.0, 426.0, -1.2);
	glEnd();

	//Pantaloncito der COLOR
	glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);
	glBegin(GL_POLYGON);
	glColor3d(0.6588, 0.3294, 0.3294);	//gris (playera)
	glVertex3f(166.0, 430.0, -1.2);
	glVertex3f(166.0, 436.0, -1.2);
	glVertex3f(170.0, 442.0, -1.2);
	glVertex3f(181.0, 449.0, -1.2);
	glVertex3f(196.0, 452.0, -1.2);
	glVertex3f(213.0, 461.0, -1.2);
	glVertex3f(226.0, 463.0, -1.2);
	glVertex3f(229.0, 446.0, -1.2);
	glVertex3f(195.0, 439.0, -1.2);
	glVertex3f(183.0, 434.0, -1.2);
	glVertex3f(169.0, 426.0, -1.2);
	glEnd();

	//Pantaloncito der COLOR
	glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);
	glBegin(GL_POLYGON);
	glColor3d(0.6588, 0.3294, 0.3294);	//rojo (playera)
	glVertex3f(226.0, 463.0, -1.2);
	glVertex3f(257.0, 463.0, -1.2);
	glVertex3f(276.0, 455.0, -1.2);
	glVertex3f(272.0, 445.0, -1.2);
	glVertex3f(229.0, 446.0, -1.2);
	glEnd();

	//Pantaloncito der COLOR
	glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);
	glBegin(GL_POLYGON);
	glColor3d(0.6588, 0.3294, 0.3294);	//gris (playera)
	glVertex3f(272.0, 445.0, -1.2);
	glVertex3f(276.0, 455.0, -1.2);
	glVertex3f(280.0, 447.0, -1.2);
	glVertex3f(281.0, 443.0, -1.2);
	glVertex3f(281.0, 437.0, -1.2);
	glVertex3f(272.0, 445.0, -1.2);
	glEnd();

	//Gato mancha labio
	glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);
	glBegin(GL_POLYGON);
	glColor3d(0.6549, 0.5921, 0.596);	//gris oscuro (pantalon)
	glVertex3f(284.0, 268.0, -1.2);
	glVertex3f(284.0, 272.0, -1.2);
	glVertex3f(291.0, 277.0, -1.2);
	glVertex3f(297.0, 277.0, -1.2);
	glVertex3f(300.0, 274.0, -1.2);
	glVertex3f(300.0, 269.0, -1.2);
	glVertex3f(296.0, 265.0, -1.2);
	glVertex3f(288.0, 265.0, -1.2);
	glEnd();

	//Gato mancha cabeza
	glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);
	glBegin(GL_POLYGON);
	glColor3d(0.6549, 0.5921, 0.596);	//gris oscuro (pantalon)
	glVertex3f(303.0, 227.0, -1.2);
	glVertex3f(299.0, 223.0, -1.2);
	glVertex3f(299.0, 242.0, -1.2);
	glVertex3f(303.0, 253.0, -1.2);
	glVertex3f(313.0, 267.0, -1.2);
	glVertex3f(331.0, 277.0, -1.2);
	glVertex3f(345.0, 279.0, -1.2);
	glVertex3f(353.0, 277.0, -1.2);
	glVertex3f(356.0, 269.0, -1.2);
	glVertex3f(352.0, 258.0, -1.2);
	glVertex3f(345.0, 247.0, -1.2);
	glVertex3f(337.0, 240.0, -1.2);
	glVertex3f(320.0, 231.0, -1.2);
	glEnd();

	//Gato mancha oreja
	glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);
	glBegin(GL_POLYGON);
	glColor3d(0.6549, 0.5921, 0.596);	//gris oscuro (pantalon)
	glVertex3f(337.0, 240.0, -1.2);
	glVertex3f(347.0, 238.0, -1.2);
	glVertex3f(358.0, 237.0, -1.2);
	glVertex3f(357.0, 251.0, -1.2);
	glVertex3f(352.0, 258.0, -1.2);
	glVertex3f(345.0, 247.0, -1.2);
	glEnd();

	//Gato oreja izq
	glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);
	glBegin(GL_POLYGON);
	glColor3d(0.9725, 0.6588, 0.6941);	//Rosa
	glVertex3f(342.0, 243.0, -1.2);
	glVertex3f(349.0, 250.0, -1.2);
	glVertex3f(352.0, 247.0, -1.2);
	glVertex3f(353.0, 241.0, -1.2);
	glVertex3f(346.0, 241.0, -1.2);
	glEnd();

	//Gato oreja izq
	glPolygonMode(GL_FRONT_AND_BACK, GL_LINE);
	glBegin(GL_POLYGON);
	glColor3d(0.1, 0.1, 0.1);	
	glVertex3f(342.0, 243.0, -1.2);
	glVertex3f(349.0, 250.0, -1.2);
	glVertex3f(352.0, 247.0, -1.2);
	glVertex3f(353.0, 241.0, -1.2);
	glVertex3f(346.0, 241.0, -1.2);
	glEnd();

	//Gato oreja der
	glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);
	glBegin(GL_POLYGON);
	glColor3d(0.9725, 0.6588, 0.6941);	//Rosa
	glVertex3f(278.0, 220.0, -1.2);
	glVertex3f(287.0, 221.0, -1.2);
	glVertex3f(287.0, 216.0, -1.2);
	glVertex3f(284.0, 212.0, -1.2);
	glEnd();

	glPolygonMode(GL_FRONT_AND_BACK, GL_LINE);
	glBegin(GL_POLYGON);
	glColor3d(0.1, 0.1, 0.1);
	glVertex3f(278.0, 220.0, -1.2);
	glVertex3f(287.0, 221.0, -1.2);
	glVertex3f(287.0, 216.0, -1.2);
	glVertex3f(284.0, 212.0, -1.2);
	glEnd();

	//Gato nariz
	glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);
	glBegin(GL_POLYGON);
	glColor3d(0.9725, 0.6588, 0.6941);	//Rosa
	glVertex3f(281.0, 260.0, -1.2);
	glVertex3f(282.0, 261.0, -1.2);
	glVertex3f(285.0, 261.0, -1.2);
	glVertex3f(285.0, 259.0, -1.2);
	glVertex3f(284.0, 258.0, -1.2);
	glVertex3f(281.0, 258.0, -1.2);
	glEnd();

	glPolygonMode(GL_FRONT_AND_BACK, GL_LINE);
	glBegin(GL_POLYGON);
	glColor3d(0.1, 0.1, 0.1);
	glVertex3f(281.0, 260.0, -1.2);
	glVertex3f(282.0, 261.0, -1.2);
	glVertex3f(285.0, 261.0, -1.2);
	glVertex3f(285.0, 259.0, -1.2);
	glVertex3f(284.0, 258.0, -1.2);
	glVertex3f(281.0, 258.0, -1.2);
	glEnd();

	//mancha pecho gato COLOR
	glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);
	glBegin(GL_POLYGON);
	glColor3d(0.6549, 0.5921, 0.596);	//gris oscuro (pantalon)
	glVertex3f(248.0, 311.0, -1.2);
	glVertex3f(263.0, 313.0, -1.2);
	glVertex3f(260.0, 308.0, -1.2);
	glVertex3f(252.0, 307.0, -1.2);
	glEnd();

	//pata y dedo gato der COLOR
	glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);
	glBegin(GL_POLYGON);
	glColor3d(0.6549, 0.5921, 0.596);	//gris oscuro (pantalon)
	glVertex3f(225.0, 321.0, -1.2);
	glVertex3f(230.0, 325.0, -1.2);
	glVertex3f(243.0, 316.0, -1.2);
	glVertex3f(246.0, 312.0, -1.2);
	glVertex3f(241.0, 308.0, -1.2);
	glVertex3f(236.0, 310.0, -1.2);
	glVertex3f(230.0, 316.0, -1.2);
	glEnd();

	//dedos gato pata der COLOR
	glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);
	glBegin(GL_POLYGON);
	glColor3d(0.6549, 0.5921, 0.596);	//gris oscuro (pantalon)
	glVertex3f(233.0, 322.0, -1.2);
	glVertex3f(235.0, 326.0, -1.2);
	glVertex3f(238.0, 325.0, -1.2);
	glVertex3f(243.0, 324.0, -1.2);
	glVertex3f(245.0, 322.0, -1.2);
	glVertex3f(245.0, 318.0, -1.2);
	glVertex3f(240.0, 314.0, -1.2);
	glEnd();

	//pata izq gato
	glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);
	glBegin(GL_POLYGON);
	glColor3d(0.6549, 0.5921, 0.596);	//gris oscuro (pantalon)
	glVertex3f(257.0, 326.0, -1.2);
	glVertex3f(259.0, 329.0, -1.2);
	glVertex3f(261.0, 334.0, -1.2);
	glVertex3f(273.0, 335.0, -1.2);
	glVertex3f(273.0, 328.0, -1.2);
	glVertex3f(266.0, 322.0, -1.2);
	glVertex3f(264.0, 321.0, -1.2);
	glVertex3f(258.0, 321.0, -1.2);
	glEnd();

	//brazo gato 
	glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);
	glBegin(GL_POLYGON);
	glColor3d(0.6549, 0.5921, 0.596);	//gris oscuro (pantalon)
	glVertex3f(266.0, 322.0, -1.2);
	glVertex3f(273.0, 328.0, -1.2);
	glVertex3f(281.0, 323.0, -1.2);
	glVertex3f(274.0, 318.0, -1.2);
	glEnd();

	//colita gato
	glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);
	glBegin(GL_POLYGON);
	glColor3d(0.6549, 0.5921, 0.596);	//gris oscuro (pantalon)
	glVertex3f(254.0, 375.0, -1.2);
	glVertex3f(258.0, 381.0, -1.2);
	glVertex3f(263.0, 377.0, -1.2);
	glVertex3f(266.0, 374.0, -1.2);
	glVertex3f(259.0, 370.0, -1.2);
	glEnd();

	//panza gato
	glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);
	glBegin(GL_POLYGON);
	glColor3d(0.6549, 0.5921, 0.596);	//gris oscuro (pantalon)
	glVertex3f(221.0, 342.0, -1.2);
	glVertex3f(225.0, 351.0, -1.2);
	glVertex3f(234.0, 360.0, -1.2);
	glVertex3f(247.0, 367.0, -1.2);
	glVertex3f(259.0, 370.0, -1.2);
	glVertex3f(263.0, 365.0, -1.2);
	glVertex3f(251.0, 356.0, -1.2);
	glVertex3f(250.0, 351.0, -1.2);
	glVertex3f(247.0, 348.0, -1.2);
	glVertex3f(247.0, 344.0, -1.2);
	glVertex3f(237.0, 339.0, -1.2);
	glVertex3f(231.0, 336.0, -1.2);
	glVertex3f(222.0, 337.0, -1.2);
	glEnd();

	//pata izq y panza gato COLOR
	glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);
	glBegin(GL_POLYGON);
	glColor3d(0.6549, 0.5921, 0.596);	//gris oscuro (pantalon)
	glVertex3f(259.0, 363.0, -1.2);
	glVertex3f(263.0, 365.0, -1.2);
	glVertex3f(267.0, 359.0, -1.2);
	glVertex3f(267.0, 350.0, -1.2);
	glVertex3f(264.0, 357.0, -1.2);
	glEnd();

	//tirante der gato COLOR
	glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);
	glBegin(GL_POLYGON);
	glColor3d(0.6549, 0.5921, 0.596);	//gris oscuro (pantalon)
	glVertex3f(231.0, 336.0, -1.2);
	glVertex3f(237.0, 339.0, -1.2);
	glVertex3f(237.0, 334.0, -1.2);
	glVertex3f(232.0, 332.0, -1.2);
	glEnd();

	//patita der gato COLOR
	glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);
	glBegin(GL_POLYGON);
	glColor3d(0.6549, 0.5921, 0.596);	//gris oscuro (pantalon)
	glVertex3f(221.0, 342.0, -1.2);
	glVertex3f(225.0, 351.0, -1.2);
	glVertex3f(221.0, 349.0, -1.2);
	glVertex3f(219.0, 342.0, -1.2);
	glEnd();

	//Gato patita colchonsitos der
	glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);
	glBegin(GL_POLYGON);
	glColor3d(0.9725, 0.6588, 0.6941);	//Rosa
	glVertex3f(211.0, 341.0, -1.2);
	glVertex3f(211.0, 346.0, -1.2);
	glVertex3f(213.0, 348.0, -1.2);
	glVertex3f(215.0, 348.0, -1.2);
	glVertex3f(216.0, 345.0, -1.2);
	glVertex3f(214.0, 341.0, -1.2);
	glEnd();

	glPolygonMode(GL_FRONT_AND_BACK, GL_LINE);
	glBegin(GL_POLYGON);
	glColor3d(0.1, 0.1, 0.1);
	glVertex3f(211.0, 341.0, -1.2);
	glVertex3f(211.0, 346.0, -1.2);
	glVertex3f(213.0, 348.0, -1.2);
	glVertex3f(215.0, 348.0, -1.2);
	glVertex3f(216.0, 345.0, -1.2);
	glVertex3f(214.0, 341.0, -1.2);
	glEnd();

	//Gato patita colchonsitos izq
	glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);
	glBegin(GL_POLYGON);
	glColor3d(0.9725, 0.6588, 0.6941);	//Rosa
	glVertex3f(254.0, 350.0, -1.2);
	glVertex3f(254.0, 354.0, -1.2);
	glVertex3f(257.0, 357.0, -1.2);
	glVertex3f(260.0, 355.0, -1.2);
	glVertex3f(260.0, 352.0, -1.2);
	glVertex3f(257.0, 350.0, -1.2);
	glEnd();

	glPolygonMode(GL_FRONT_AND_BACK, GL_LINE);
	glBegin(GL_POLYGON);
	glColor3d(0.1, 0.1, 0.1);	
	glVertex3f(254.0, 350.0, -1.2);
	glVertex3f(254.0, 354.0, -1.2);
	glVertex3f(257.0, 357.0, -1.2);
	glVertex3f(260.0, 355.0, -1.2);
	glVertex3f(260.0, 352.0, -1.2);
	glVertex3f(257.0, 350.0, -1.2);
	glEnd();

	//MANCHAS PELO 1
	glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);
	glBegin(GL_POLYGON);
	glColor3d(0.9764, 0.8588, 0.8352);	//Rosa CLARO
	glVertex3f(130.0, 231.0, -1.2);
	glVertex3f(127.0, 237.0, -1.2);
	glVertex3f(128.0, 245.0, -1.2);
	glVertex3f(131.0, 248.0, -1.2);
	glVertex3f(135.0, 248.0, -1.2);
	glVertex3f(137.0, 244.0, -1.2);
	glVertex3f(137.0, 237.0, -1.2);
	glVertex3f(133.0, 231.0, -1.2);
	glEnd();

	//MANCHAS PELO 2
	glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);
	glBegin(GL_POLYGON);
	glColor3d(0.9764, 0.8588, 0.8352);	//Rosa CLARO
	glVertex3f(128.0, 255.0, -1.2);
	glVertex3f(127.0, 264.0, -1.2);
	glVertex3f(130.0, 268.0, -1.2);
	glVertex3f(135.0, 268.0, -1.2);
	glVertex3f(137.0, 265.0, -1.2);
	glVertex3f(136.0, 260.0, -1.2);
	glVertex3f(131.0, 255.0, -1.2);
	glEnd();

	//MANCHAS PELO 3
	glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);
	glBegin(GL_POLYGON);
	glColor3d(0.9764, 0.8588, 0.8352);	//Rosa CLARO
	glVertex3f(140.0, 270.0, -1.2);
	glVertex3f(138.0, 275.0, -1.2);
	glVertex3f(139.0, 281.0, -1.2);
	glVertex3f(143.0, 283.0, -1.2);
	glVertex3f(147.0, 283.0, -1.2);
	glVertex3f(149.0, 280.0, -1.2);
	glVertex3f(149.0, 274.0, -1.2);
	glVertex3f(144.0, 270.0, -1.2);
	glEnd();

	//MANCHAS PELO 4
	glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);
	glBegin(GL_POLYGON);
	glColor3d(0.9764, 0.8588, 0.8352);	//Rosa CLARO
	glVertex3f(140.0, 248.0, -1.2);
	glVertex3f(139.0, 252.0, -1.2);
	glVertex3f(139.0, 258.0, -1.2);
	glVertex3f(142.0, 262.0, -1.2);
	glVertex3f(146.0, 262.0, -1.2);
	glVertex3f(148.0, 260.0, -1.2);
	glVertex3f(148.0, 255.0, -1.2);
	glVertex3f(144.0, 248.0, -1.2);
	glEnd();

	//MANCHAS PELO 5
	glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);
	glBegin(GL_POLYGON);
	glColor3d(0.9764, 0.8588, 0.8352);	//Rosa CLARO
	glVertex3f(269.0, 208.0, -1.2);
	glVertex3f(267.0, 211.0, -1.2);
	glVertex3f(267.0, 218.0, -1.2);
	glVertex3f(270.0, 220.0, -1.2);
	glVertex3f(274.0, 216.0, -1.2);
	glVertex3f(274.0, 211.0, -1.2);
	glVertex3f(272.0, 208.0, -1.2);
	glEnd();

	//MANCHAS PELO 6
	glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);
	glBegin(GL_POLYGON);
	glColor3d(0.9764, 0.8588, 0.8352);	//Rosa CLARO
	glVertex3f(278.0, 195.0, -1.2);
	glVertex3f(275.0, 198.0, -1.2);
	glVertex3f(275.0, 204.0, -1.2);
	glVertex3f(278.0, 206.0, -1.2);
	glVertex3f(281.0, 206.0, -1.2);
	glVertex3f(283.0, 203.0, -1.2);
	glVertex3f(283.0, 198.0, -1.2);
	glVertex3f(280.0, 195.0, -1.2);
	glEnd();

	//Iris ojo
	glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);
	glBegin(GL_POLYGON);
	glColor3d(0.9411, 0.6235, 0.3725);	//gris oscuro (pantalon)
	glVertex3f(166.0, 218.0, -1.2);
	glVertex3f(170.0, 221.0, -1.2);
	glVertex3f(174.0, 221.0, -1.2);
	glVertex3f(176.0, 218.0, -1.2);
	glVertex3f(186.0, 210.0, -1.2);
	glVertex3f(190.0, 210.0, -1.2);
	glVertex3f(192.0, 206.0, -1.2);
	glVertex3f(189.0, 202.0, -1.2);
	glVertex3f(181.0, 198.0, -1.2);
	glVertex3f(172.0, 199.0, -1.2);
	glVertex3f(167.0, 204.0, -1.2);
	glVertex3f(165.0, 211.0, -1.2);
	glEnd();

	glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);
	glBegin(GL_POLYGON);
	glColor3d(0.949, 0.8, 0.5176);	// NUEVO COLOR VERFE
	glVertex3f(165.0, 211.0, -1.2);
	glVertex3f(173.0, 210.0, -1.2);
	glVertex3f(174.0, 215.0, -1.2);
	glVertex3f(176.0, 218.0, -1.2);
	glVertex3f(174.0, 221.0, -1.2);
	glVertex3f(170.0, 221.0, -1.2);
	glVertex3f(166.0, 218.0, -1.2);
	glEnd();

	glPolygonMode(GL_FRONT_AND_BACK, GL_LINE);
	glBegin(GL_POLYGON);
	glColor3d(0.1, 0.1, 0.1);	//gris oscuro (pantalon)
	glVertex3f(176.0, 223.0, -1.2);
	glVertex3f(192.0, 213.0, -1.2);
	glVertex3f(192.0, 206.0, -1.2);
	glVertex3f(189.0, 202.0, -1.2);
	glVertex3f(181.0, 198.0, -1.2);
	glVertex3f(172.0, 199.0, -1.2);
	glVertex3f(167.0, 204.0, -1.2);
	glVertex3f(165.0, 211.0, -1.2);
	glVertex3f(166.0, 218.0, -1.2);
	glVertex3f(168.0, 222.0, -1.2);
	glVertex3f(168.0, 222.0, -1.2);
	glEnd();
	
	//Retina ojo
	glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);
	glBegin(GL_POLYGON);
	glColor3d(0.2196, 0.0078, 0.0);	//gris oscuro (pantalon)
	glVertex3f(174.0, 208.0, -1.2);
	glVertex3f(174.0, 215.0, -1.2);
	glVertex3f(177.0, 218.0, -1.2);
	glVertex3f(181.0, 218.0, -1.2);
	glVertex3f(186.0, 214.0, -1.2);
	glVertex3f(186.0, 210.0, -1.2);
	glVertex3f(183.0, 206.0, -1.2);
	glVertex3f(178.0, 205.0, -1.2);
	glEnd();

	glPolygonMode(GL_FRONT_AND_BACK, GL_LINE);
	glBegin(GL_POLYGON);
	glColor3d(0.1, 0.1, 0.1);	//gris oscuro (pantalon)
	glVertex3f(174.0, 208.0, -1.2);
	glVertex3f(174.0, 215.0, -1.2);
	glVertex3f(177.0, 218.0, -1.2);
	glVertex3f(181.0, 218.0, -1.2);
	glVertex3f(186.0, 214.0, -1.2);
	glVertex3f(186.0, 210.0, -1.2);
	glVertex3f(183.0, 206.0, -1.2);
	glVertex3f(178.0, 205.0, -1.2);
	glEnd();

	//ojo gato der
	glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);
	glBegin(GL_POLYGON);
	glColor3d(0.1, 0.1, 0.1);	//negro
	glVertex3f(273.0, 253.0, -1.2);
	glVertex3f(275.0, 256.0, -1.2);
	glVertex3f(278.0, 255.0, -1.2);
	glVertex3f(279.0, 252.0, -1.2);
	glVertex3f(277.0, 250.0, -1.2);
	glVertex3f(274.0, 250.0, -1.2);
	glEnd();

	//ojo gato izq
	glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);
	glBegin(GL_POLYGON);
	glColor3d(0.1, 0.1, 0.1);	//negro
	glVertex3f(294.0, 258.0, -1.2);
	glVertex3f(293.0, 261.0, -1.2);
	glVertex3f(297.0, 263.0, -1.2);
	glVertex3f(299.0, 260.0, -1.2);
	glVertex3f(297.0, 257.0, -1.2);
	glEnd();

	//mascara negra
	glPolygonMode(GL_FRONT_AND_BACK, GL_LINE);
	glBegin(GL_POLYGON);
	glColor3d(0.1, 0.1, 0.1);	//NEGRO
	glVertex3f(157.0, 208.0, -1.2);
	glVertex3f(160.0, 202.0, -1.2);
	glVertex3f(167.0, 196.0, -1.2);
	glVertex3f(170.0, 195.0, -1.2);
	glVertex3f(180.0, 195.0, -1.2);
	glVertex3f(185.0, 196.0, -1.2);
	glVertex3f(193.0, 202.0, -1.2);
	glVertex3f(195.0, 205.0, -1.2);
	glVertex3f(195.0, 210.0, -1.2);
	glVertex3f(189.0, 215.0, -1.2);
	glVertex3f(179.0, 221.0, -1.2);
	glVertex3f(173.0, 224.0, -1.2);
	glVertex3f(163.0, 224.0, -1.2);
	glVertex3f(159.0, 219.0, -1.2);
	glVertex3f(157.0, 213.0, -1.2);
	glEnd();
	
	glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);
	glBegin(GL_POLYGON);
	glColor3d(0.1, 0.1, 0.1);	//negro
	glVertex3f(.0, .0, -1.2);
	glVertex3f(.0, .0, -1.2);
	glVertex3f(.0, .0, -1.2);
	glVertex3f(.0, .0, -1.2);
	glVertex3f(.0, .0, -1.2);
	glEnd();

	//ojo gato izq
	glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);
	glBegin(GL_POLYGON);
	glColor3d(0.1, 0.1, 0.1);	//negro
	glVertex3f(.0, .0, -1.2);
	glVertex3f(.0, .0, -1.2);
	glVertex3f(.0, .0, -1.2);
	glVertex3f(.0, .0, -1.2);
	glVertex3f(.0, .0, -1.2);
	glEnd();

	/* ###################################################### */
	/* DESDE AQUI YA EMPIEZA EL CONTORNO DE ALGUNOS ELEMENTOS */
	/* ###################################################### */
	
	//CONTORNO BOCA
	glPolygonMode(GL_FRONT_AND_BACK, GL_LINE);
	glBegin(GL_LINE_STRIP);
	glColor3d(0.1, 0.1, 0.1);	//LENGUA
	glVertex3f(207.0, 227.0, -1.2);
	glVertex3f(198.0, 235.0, -1.2);
	glVertex3f(198.0, 237.0, -1.2);
	glVertex3f(201.0, 240.0, -1.2);
	glEnd();

	glPolygonMode(GL_FRONT_AND_BACK, GL_LINE);
	glBegin(GL_LINE_STRIP);
	glColor3d(0.1, 0.1, 0.1);	//LENGUA
	glVertex3f(223.0, 220.0, -1.2);
	glVertex3f(237.0, 220.0, -1.2);
	glVertex3f(237.0, 227.0, -1.2);
	glEnd();

	glPolygonMode(GL_FRONT_AND_BACK, GL_LINE);
	glBegin(GL_LINE_STRIP);
	glColor3d(0.3764, 0.2509, 0.1254);	//CAFE
	glVertex3f(207.0, 227.0, -1.2);
	glVertex3f(215.0, 222.0, -1.2);
	glVertex3f(223.0, 220.0, -1.2);
	glEnd();

	glPolygonMode(GL_FRONT_AND_BACK, GL_LINE);
	glBegin(GL_LINE_STRIP);
	glColor3d(0.3764, 0.2509, 0.1254);	//CAFE
	glVertex3f(201.0, 240.0, -1.2);
	glVertex3f(213.0, 246.0, -1.2);
	glEnd();

	glPolygonMode(GL_FRONT_AND_BACK, GL_LINE);
	glBegin(GL_LINE_STRIP);
	glColor3d(0.3764, 0.2509, 0.1254);	//CAFE
	glVertex3f(237.0, 227.0, -1.2);
	glVertex3f(234.0, 237.0, -1.2);
	glEnd();

	glPolygonMode(GL_FRONT_AND_BACK, GL_LINE);
	glBegin(GL_LINE_STRIP);
	glColor3d(0.6745, 0.345, 0.3294);	//ROJO LABIO
	glVertex3f(213.0, 246.0, -1.2);
	glVertex3f(220.0, 246.0, -1.2);
	glVertex3f(225.0, 245.0, -1.2);
	glVertex3f(229.0, 242.0, -1.2);
	glVertex3f(234.0, 237.0, -1.2);
	glEnd();

	glPolygonMode(GL_FRONT_AND_BACK, GL_LINE);
	glBegin(GL_LINE_STRIP);	//LINEA ROSA DIENTES
	glColor3d(0.8784, 0.4235, 0.4666);
	glVertex3f(199.0, 235.0, -1.2);
	glVertex3f(207.0, 235.0, -1.2);
	glVertex3f(207.0, 231.0, -1.2);
	glVertex3f(228.0, 224.0, -1.2);
	glVertex3f(232.0, 226.0, -1.2);
	glVertex3f(235.0, 221.0, -1.2);
	glEnd();

	glPolygonMode(GL_FRONT_AND_BACK, GL_LINE);
	glBegin(GL_LINE_STRIP);	//LINEA ROSA DIENTES
	glColor3d(0.8784, 0.4235, 0.4666);
	glVertex3f(220.0, 246.0, -1.2);
	glVertex3f(224.0, 238.0, -1.2);
	glVertex3f(229.0, 243.0, -1.2);
	glEnd();

	glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);
	glBegin(GL_POLYGON);
	glColor3d(0.1, 0.1, 0.1);
	glVertex3f(173.0, 224.0, -1.2);
	glVertex3f(190.0, 218.0, -1.2);
	glVertex3f(200.0, 211.0, -1.2);
	glVertex3f(195.0, 210.0, -1.2);
	glEnd();

	glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);
	glBegin(GL_POLYGON);
	glColor3d(0.1, 0.1, 0.1);
	glVertex3f(195.0, 203.0, -1.2);
	glVertex3f(195.0, 210.0, -1.2);
	glVertex3f(200.0, 211.0, -1.2);
	glVertex3f(205.0, 207.0, -1.2);
	glVertex3f(204.0, 203.0, -1.2);
	glEnd();

	glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);
	glBegin(GL_POLYGON);
	glVertex3f(205.0, 207.0, -1.2);
	glVertex3f(213.0, 203.0, -1.2);
	glVertex3f(212.0, 199.0, -1.2);
	glVertex3f(204.0, 203.0, -1.2);
	glEnd();

	glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);
	glBegin(GL_POLYGON);
	glVertex3f(213.0, 203.0, -1.2);
	glVertex3f(232.0, 203.0, -1.2);
	glVertex3f(224.0, 195.0, -1.2);
	glEnd();

	glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);
	glBegin(GL_POLYGON);
	glVertex3f(213.0, 203.0, -1.2);
	glVertex3f(220.0, 203.0, -1.2);
	glVertex3f(220.0, 198.0, -1.2);
	glVertex3f(212.0, 199.0, -1.2);
	glEnd();

	glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);
	glBegin(GL_POLYGON);
	glVertex3f(232.0, 203.0, -1.2);
	glVertex3f(246.0, 199.0, -1.2);
	glVertex3f(259.0, 199.0, -1.2);
	glVertex3f(259.0, 195.0, -1.2);
	glVertex3f(238.0, 195.0, -1.2);
	glVertex3f(228.0, 199.0, -1.2);
	glEnd();

	glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);
	glBegin(GL_POLYGON);
	glVertex3f(259.0, 199.0, -1.2);
	glVertex3f(257.0, 184.0, -1.2);
	glVertex3f(256.0, 184.0, -1.2);
	glVertex3f(256.0, 199.0, -1.2);
	glEnd();

	glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);
	glBegin(GL_POLYGON);
	glVertex3f(256.0, 193.0, -1.2);
	glVertex3f(256.0, 184.0, -1.2);
	glVertex3f(250.0, 181.0, -1.2);
	glVertex3f(250.0, 187.0, -1.2);
	glEnd();

	glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);
	glBegin(GL_POLYGON);
	glVertex3f(250.0, 181.0, -1.2);
	glVertex3f(240.0, 181.0, -1.2);
	glVertex3f(240.0, 190.0, -1.2);
	glVertex3f(253.0, 190.0, -1.2);
	glEnd();

	glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);
	glBegin(GL_POLYGON);
	glVertex3f(240.0, 190.0, -1.2);
	glVertex3f(226.0, 199.0, -1.2);
	glVertex3f(222.0, 196.0, -1.2);
	glVertex3f(233.0, 185.0, -1.2);
	glVertex3f(240.0, 181.0, -1.2);
	glEnd();

	glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);
	glBegin(GL_POLYGON);
	glVertex3f(181.0, 192.0, -1.2);
	glVertex3f(195.0, 205.0, -1.2);
	glVertex3f(199.0, 203.0, -1.2);
	glVertex3f(191.0, 196.0, -1.2);
	glEnd();

	glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);
	glBegin(GL_POLYGON);
	glVertex3f(185.0, 196.0, -1.2);
	glVertex3f(181.0, 192.0, -1.2);
	glVertex3f(175.0, 191.0, -1.2);
	glVertex3f(168.0, 191.0, -1.2);
	glVertex3f(170.0, 195.0, -1.2);
	glEnd();

	glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);
	glBegin(GL_POLYGON);
	glVertex3f(170.0, 195.0, -1.2);
	glVertex3f(168.0, 191.0, -1.2);
	glVertex3f(160.0, 195.0, -1.2);
	glVertex3f(152.0, 202.0, -1.2);
	glVertex3f(158.0, 205.0, -1.2);
	glVertex3f(164.0, 198.0, -1.2);
	glEnd();

	glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);
	glBegin(GL_POLYGON);
	glVertex3f(152.0, 202.0, -1.2);
	glVertex3f(158.0, 205.0, -1.2);
	glVertex3f(157.0, 208.0, -1.2);
	glVertex3f(150.0, 208.0, -1.2);
	glEnd();

	glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);
	glBegin(GL_POLYGON);
	glVertex3f(164.0, 225.0, -1.2);
	glVertex3f(160.0, 221.0, -1.2);
	glVertex3f(157.0, 213.0, -1.2);
	glVertex3f(157.0, 208.0, -1.2);
	glVertex3f(150.0, 208.0, -1.2);
	glVertex3f(150.0, 212.0, -1.2);
	glVertex3f(157.0, 222.0, -1.2);
	glEnd();

	glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);
	glBegin(GL_POLYGON);
	glVertex3f(167.0, 224.0, -1.2);
	glVertex3f(160.0, 219.0, -1.2);
	glVertex3f(160.0, 224.0, -1.2);
	glEnd();

	glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);
	glBegin(GL_POLYGON);
	glVertex3f(190.0, 324.0, -1.2);
	glVertex3f(180.0, 310.0, -1.2);
	glVertex3f(174.0, 293.0, -1.2);
	glVertex3f(176.0, 312.0, -1.2);
	glVertex3f(182.0, 320.0, -1.2);
	glEnd();

	glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);
	glBegin(GL_POLYGON);
	glVertex3f(90.0, 459.0, -1.2);
	glVertex3f(99.0, 470.0, -1.2);
	glVertex3f(90.0, 464.0, -1.2);
	glEnd();

	glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);
	glBegin(GL_POLYGON);
	glVertex3f(101.0, 446.0, -1.2);
	glVertex3f(111.0, 447.0, -1.2);
	glVertex3f(111.0, 444.0, -1.2);
	glVertex3f(104.0, 444.0, -1.2);
	glEnd();

	/*	CONTORNO DEL DIBUJO */

	glPolygonMode(GL_FRONT_AND_BACK, GL_LINE);
	glBegin(GL_LINE_STRIP);
	glVertex3f(183.0, 97.0, -1.2);
	glVertex3f(168.0, 102.0, -1.2);
	glVertex3f(151.0, 111.0, -1.2);
	glVertex3f(141.0, 119.0, -1.2);
	glVertex3f(133.0, 129.0, -1.2);
	glVertex3f(127.0, 141.0, -1.2);
	glVertex3f(121.0, 161.0, -1.2);
	glVertex3f(118.0, 177.0, -1.2);
	glVertex3f(118.0, 201.0, -1.2);
	glVertex3f(121.0, 217.0, -1.2);
	glVertex3f(118.0, 229.0, -1.2);
	glVertex3f(110.0, 245.0, -1.2);
	glVertex3f(110.0, 249.0, -1.2);
	glVertex3f(112.0, 250.0, -1.2);
	glVertex3f(118.0, 250.0, -1.2);
	glVertex3f(120.0, 265.0, -1.2);
	glVertex3f(124.0, 274.0, -1.2);
	glVertex3f(129.0, 282.0, -1.2);
	glVertex3f(137.0, 289.0, -1.2);
	glVertex3f(144.0, 292.0, -1.2);
	glVertex3f(155.0, 292.0, -1.2);
	glVertex3f(161.0, 287.0, -1.2);
	glVertex3f(163.0, 282.0, -1.2);
	glVertex3f(164.0, 271.0, -1.2);
	glVertex3f(169.0, 272.0, -1.2);
	glVertex3f(173.0, 272.0, -1.2);
	glVertex3f(178.0, 266.0, -1.2);
	glVertex3f(179.0, 256.0, -1.2);
	glVertex3f(182.0, 257.0, -1.2);
	glVertex3f(186.0, 263.0, -1.2);
	glVertex3f(182.0, 265.0, -1.2);
	glVertex3f(178.0, 269.0, -1.2);
	glVertex3f(175.0, 276.0, -1.2);
	glVertex3f(173.0, 287.0, -1.2);
	glVertex3f(176.0, 320.0, -1.2);
	glVertex3f(182.0, 352.0, -1.2);
	glVertex3f(182.0, 357.0, -1.2);
	glVertex3f(179.0, 365.0, -1.2);
	glVertex3f(166.0, 385.0, -1.2);
	glVertex3f(161.0, 394.0, -1.2);
	glVertex3f(155.0, 407.0, -1.2);
	glVertex3f(149.0, 425.0, -1.2);
	glVertex3f(153.0, 431.0, -1.2);
	glVertex3f(154.0, 433.0, -1.2);
	glVertex3f(153.0, 438.0, -1.2);
	glVertex3f(154.0, 441.0, -1.2);
	glVertex3f(150.0, 450.0, -1.2);
	glVertex3f(147.0, 459.0, -1.2);
	glVertex3f(147.0, 463.0, -1.2);
	glVertex3f(138.0, 480.0, -1.2);
	glVertex3f(136.0, 475.0, -1.2);
	glVertex3f(131.0, 468.0, -1.2);
	glVertex3f(126.0, 463.0, -1.2);
	glVertex3f(119.0, 458.0, -1.2);
	glVertex3f(119.0, 447.0, -1.2);
	glVertex3f(115.0, 439.0, -1.2);
	glVertex3f(115.0, 430.0, -1.2);
	glVertex3f(113.0, 425.0, -1.2);
	glVertex3f(111.0, 422.0, -1.2);
	glVertex3f(110.0, 419.0, -1.2);
	glVertex3f(104.0, 414.0, -1.2);
	glVertex3f(93.0, 413.0, -1.2);
	glVertex3f(81.0, 419.0, -1.2);
	glVertex3f(76.0, 424.0, -1.2);
	glVertex3f(71.0, 435.0, -1.2);
	glVertex3f(66.0, 449.0, -1.2);
	glVertex3f(53.0, 461.0, -1.2);
	glVertex3f(47.0, 468.0, -1.2);
	glVertex3f(43.0, 483.0, -1.2);
	glVertex3f(42.0, 495.0, -1.2);
	glVertex3f(42.0, 505.0, -1.2);
	glVertex3f(47.0, 517.0, -1.2);
	glVertex3f(51.0, 522.0, -1.2);
	glVertex3f(60.0, 527.0, -1.2);
	glVertex3f(67.0, 527.0, -1.2);
	glVertex3f(77.0, 520.0, -1.2);
	glVertex3f(84.0, 512.0, -1.2);
	glVertex3f(85.0, 508.0, -1.2);
	glVertex3f(90.0, 486.0, -1.2);
	glVertex3f(99.0, 477.0, -1.2);
	glVertex3f(101.0, 477.0, -1.2);
	glVertex3f(111.0, 501.0, -1.2);
	glVertex3f(115.0, 507.0, -1.2);
	glVertex3f(124.0, 530.0, -1.2);
	glVertex3f(129.0, 535.0, -1.2);
	glVertex3f(133.0, 535.0, -1.2);
	glVertex3f(139.0, 532.0, -1.2);
	glVertex3f(151.0, 524.0, -1.2);
	glVertex3f(191.0, 483.0, -1.2);
	glVertex3f(200.0, 471.0, -1.2);
	glVertex3f(207.0, 460.0, -1.2);
	glVertex3f(213.0, 461.0, -1.2);
	glVertex3f(224.0, 463.0, -1.2);
	glVertex3f(226.0, 496.0, -1.2);
	glVertex3f(227.0, 533.0, -1.2);
	glVertex3f(226.0, 547.0, -1.2);
	glVertex3f(221.0, 562.0, -1.2);
	glVertex3f(218.0, 587.0, -1.2);
	glVertex3f(217.0, 611.0, -1.2);
	glVertex3f(220.0, 644.0, -1.2);
	glVertex3f(212.0, 644.0, -1.2);
	glVertex3f(209.0, 649.0, -1.2);
	glVertex3f(208.0, 667.0, -1.2);
	glVertex3f(211.0, 667.0, -1.2);
	glVertex3f(209.0, 692.0, -1.2);
	glVertex3f(207.0, 702.0, -1.2);
	glVertex3f(205.0, 704.0, -1.2);
	glVertex3f(205.0, 711.0, -1.2);
	glVertex3f(210.0, 715.0, -1.2);
	glVertex3f(222.0, 719.0, -1.2);
	glVertex3f(233.0, 720.0, -1.2);
	glVertex3f(257.0, 728.0, -1.2);
	glVertex3f(286.0, 729.0, -1.2);
	glVertex3f(296.0, 727.0, -1.2);
	glVertex3f(301.0, 723.0, -1.2);
	glVertex3f(304.0, 717.0, -1.2);
	glVertex3f(304.0, 714.0, -1.2);
	glVertex3f(302.0, 712.0, -1.2);
	glVertex3f(302.0, 706.0, -1.2);
	glVertex3f(300.0, 703.0, -1.2);
	glVertex3f(293.0, 696.0, -1.2);
	glVertex3f(284.0, 691.0, -1.2);
	glVertex3f(273.0, 688.0, -1.2);
	glVertex3f(267.0, 688.0, -1.2);
	glVertex3f(260.0, 682.0, -1.2);
	glVertex3f(248.0, 668.0, -1.2);
	glVertex3f(252.0, 665.0, -1.2);
	glVertex3f(251.0, 654.0, -1.2);
	glVertex3f(250.0, 646.0, -1.2);
	glVertex3f(242.0, 645.0, -1.2);
	glVertex3f(247.0, 613.0, -1.2);
	glVertex3f(252.0, 582.0, -1.2);
	glVertex3f(260.0, 533.0, -1.2);
	glVertex3f(266.0, 497.0, -1.2);
	glVertex3f(267.0, 494.0, -1.2);
	glVertex3f(274.0, 461.0, -1.2);
	glVertex3f(280.0, 459.0, -1.2);
	glVertex3f(286.0, 455.0, -1.2);
	glVertex3f(286.0, 450.0, -1.2);
	glVertex3f(283.0, 435.0, -1.2);
	glVertex3f(285.0, 432.0, -1.2);
	glVertex3f(287.0, 423.0, -1.2);
	glVertex3f(274.0, 377.0, -1.2);
	glVertex3f(286.0, 381.0, -1.2);
	glVertex3f(295.0, 379.0, -1.2);
	glVertex3f(306.0, 369.0, -1.2);
	glVertex3f(311.0, 362.0, -1.2);
	glVertex3f(314.0, 364.0, -1.2);
	glVertex3f(323.0, 358.0, -1.2);
	glVertex3f(325.0, 353.0, -1.2);
	glVertex3f(330.0, 352.0, -1.2);
	glVertex3f(334.0, 344.0, -1.2);
	glVertex3f(336.0, 339.0, -1.2);
	glVertex3f(339.0, 334.0, -1.2);
	glVertex3f(329.0, 325.0, -1.2);
	glVertex3f(339.0, 322.0, -1.2);
	glVertex3f(348.0, 315.0, -1.2);
	glVertex3f(354.0, 307.0, -1.2);
	glVertex3f(358.0, 296.0, -1.2);
	glVertex3f(360.0, 281.0, -1.2);
	glVertex3f(358.0, 263.0, -1.2);
	glVertex3f(354.0, 257.0, -1.2);
	glVertex3f(357.0, 251.0, -1.2);
	glVertex3f(358.0, 237.0, -1.2);
	glVertex3f(344.0, 236.0, -1.2);
	glVertex3f(335.0, 238.0, -1.2);
	glVertex3f(320.0, 231.0, -1.2);
	glVertex3f(303.0, 227.0, -1.2);
	glVertex3f(294.0, 225.0, -1.2);
	glVertex3f(294.0, 218.0, -1.2);
	glVertex3f(293.0, 212.0, -1.2);
	glVertex3f(293.0, 208.0, -1.2);
	glVertex3f(311.0, 194.0, -1.2);
	glVertex3f(312.0, 191.0, -1.2);
	glVertex3f(310.0, 188.0, -1.2);
	glVertex3f(300.0, 182.0, -1.2);
	glVertex3f(285.0, 175.0, -1.2);
	glVertex3f(282.0, 155.0, -1.2);
	glVertex3f(274.0, 134.0, -1.2);
	glVertex3f(269.0, 125.0, -1.2);
	glVertex3f(257.0, 113.0, -1.2);
	glVertex3f(244.0, 104.0, -1.2);
	glVertex3f(224.0, 97.0, -1.2);
	glVertex3f(211.0, 96.0, -1.2);
	glVertex3f(192.0, 96.0, -1.2);
	glVertex3f(183.0, 97.0, -1.2);
	glEnd();

	/*	 DETALLES	*/

	glPolygonMode(GL_FRONT_AND_BACK, GL_LINE);
	glBegin(GL_LINE_STRIP);
	glVertex3f(329.0, 325.0, -1.2);
	glVertex3f(314.0, 325.0, -1.2);
	glVertex3f(303.0, 322.0, -1.2);
	glVertex3f(289.0, 322.0, -1.2);
	glVertex3f(281.0, 323.0, -1.2);
	glVertex3f(274.0, 328.0, -1.2);
	glVertex3f(273.0, 335.0, -1.2);
	glVertex3f(269.0, 336.0, -1.2);
	glVertex3f(266.0, 334.0, -1.2);
	glVertex3f(261.0, 334.0, -1.2);
	glVertex3f(260.0, 329.0, -1.2);
	glVertex3f(257.0, 326.0, -1.2);
	glVertex3f(258.0, 321.0, -1.2);
	glVertex3f(264.0, 321.0, -1.2);
	glVertex3f(266.0, 322.0, -1.2);
	glVertex3f(274.0, 318.0, -1.2);
	glVertex3f(276.0, 316.0, -1.2);
	glVertex3f(263.0, 313.0, -1.2);
	glVertex3f(248.0, 311.0, -1.2);
	glVertex3f(243.0, 316.0, -1.2);
	glVertex3f(245.0, 318.0, -1.2);
	glVertex3f(245.0, 322.0, -1.2);
	glVertex3f(243.0, 324.0, -1.2);
	glVertex3f(240.0, 324.0, -1.2);
	glVertex3f(238.0, 325.0, -1.2);
	glVertex3f(235.0, 326.0, -1.2);
	glVertex3f(233.0, 322.0, -1.2);
	glVertex3f(229.0, 324.0, -1.2);
	glVertex3f(225.0, 321.0, -1.2);
	glVertex3f(230.0, 316.0, -1.2);
	glVertex3f(236.0, 310.0, -1.2);
	glVertex3f(238.0, 306.0, -1.2);
	glVertex3f(221.0, 294.0, -1.2);
	glVertex3f(214.0, 284.0, -1.2);
	glVertex3f(204.0, 271.0, -1.2);
	glVertex3f(198.0, 266.0, -1.2);
	glVertex3f(193.0, 263.0, -1.2);
	glVertex3f(186.0, 263.0, -1.2);
	glEnd();

	glPolygonMode(GL_FRONT_AND_BACK, GL_LINE);
	glBegin(GL_LINE_STRIP);
	glVertex3f(190.0, 324.0, -1.2);
	glVertex3f(192.0, 321.0, -1.2);
	glVertex3f(194.0, 314.0, -1.2);
	glVertex3f(195.0, 305.0, -1.2);
	glVertex3f(207.0, 314.0, -1.2);
	glVertex3f(225.0, 328.0, -1.2);
	glVertex3f(236.0, 334.0, -1.2);
	glVertex3f(244.0, 336.0, -1.2);
	glVertex3f(305.0, 336.0, -1.2);
	glVertex3f(316.0, 352.0, -1.2);
	glVertex3f(316.0, 357.0, -1.2);
	glVertex3f(313.0, 358.0, -1.2);
	glVertex3f(311.0, 362.0, -1.2);
	glEnd();

	glPolygonMode(GL_FRONT_AND_BACK, GL_LINE);
	glBegin(GL_LINE_STRIP);
	glVertex3f(238.0, 306.0, -1.2);
	glVertex3f(245.0, 302.0, -1.2);
	glVertex3f(234.0, 293.0, -1.2);
	glVertex3f(226.0, 279.0, -1.2);
	glVertex3f(224.0, 270.0, -1.2);
	glVertex3f(224.0, 258.0, -1.2);
	glVertex3f(228.0, 248.0, -1.2);
	glVertex3f(237.0, 238.0, -1.2);
	glVertex3f(246.0, 230.0, -1.2);
	glVertex3f(254.0, 226.0, -1.2);
	glVertex3f(269.0, 221.0, -1.2);
	glVertex3f(272.0, 220.0, -1.2);
	glVertex3f(272.0, 219.0, -1.2);
	glVertex3f(278.0, 211.0, -1.2);
	glVertex3f(287.0, 205.0, -1.2);
	glVertex3f(291.0, 209.0, -1.2);
	glVertex3f(294.0, 218.0, -1.2);
	glEnd();

	glPolygonMode(GL_FRONT_AND_BACK, GL_LINE);
	glBegin(GL_LINE_STRIP);
	glVertex3f(234.0, 293.0, -1.2);
	glVertex3f(228.0, 293.0, -1.2);
	glVertex3f(217.0, 280.0, -1.2);
	glVertex3f(211.0, 274.0, -1.2);
	glVertex3f(202.0, 267.0, -1.2);
	glVertex3f(205.0, 265.0, -1.2);
	glVertex3f(209.0, 260.0, -1.2);
	glVertex3f(218.0, 260.0, -1.2);
	glVertex3f(224.0, 258.0, -1.2);
	glEnd();

	glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);
	glBegin(GL_POLYGON);
	glVertex3f(209.0, 260.0, -1.2);
	glVertex3f(218.0, 264.0, -1.2);
	glVertex3f(224.0, 264.0, -1.2);
	glVertex3f(224.0, 258.0, -1.2);
	glVertex3f(218.0, 260.0, -1.2);
	glEnd();

	glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);
	glBegin(GL_POLYGON);
	glVertex3f(226.0, 279.0, -1.2);
	glVertex3f(214.0, 277.0, -1.2);
	glVertex3f(228.0, 293.0, -1.2);
	glVertex3f(234.0, 293.0, -1.2);
	glEnd();

	glPolygonMode(GL_FRONT_AND_BACK, GL_LINE);
	glBegin(GL_LINE_STRIP);
	glVertex3f(285.0, 336.0, -1.2);
	glVertex3f(276.0, 345.0, -1.2);
	glVertex3f(276.0, 347.0, -1.2);
	glVertex3f(280.0, 351.0, -1.2);
	glVertex3f(284.0, 346.0, -1.2);
	glVertex3f(293.0, 339.0, -1.2);
	glVertex3f(295.0, 341.0, -1.2);
	glVertex3f(286.0, 353.0, -1.2);
	glVertex3f(285.0, 359.0, -1.2);
	glVertex3f(289.0, 362.0, -1.2);
	glVertex3f(291.0, 360.0, -1.2);
	glVertex3f(294.0, 364.0, -1.2);
	glVertex3f(298.0, 364.0, -1.2);
	glVertex3f(302.0, 360.0, -1.2);
	glVertex3f(304.0, 364.0, -1.2);
	glVertex3f(309.0, 364.0, -1.2);
	glVertex3f(315.0, 350.0, -1.2);
	glEnd();

	glPolygonMode(GL_FRONT_AND_BACK, GL_LINE);
	glBegin(GL_LINE_STRIP);
	glVertex3f(225.0, 328.0, -1.2);
	glVertex3f(222.0, 337.0, -1.2);
	glVertex3f(221.0, 342.0, -1.2);
	glVertex3f(218.0, 342.0, -1.2);
	glVertex3f(218.0, 336.0, -1.2);
	glVertex3f(215.0, 332.0, -1.2);
	glVertex3f(211.0, 332.0, -1.2);
	glVertex3f(210.0, 335.0, -1.2);
	glVertex3f(204.0, 336.0, -1.2);
	glVertex3f(204.0, 341.0, -1.2);
	glVertex3f(206.0, 343.0, -1.2);
	glVertex3f(205.0, 344.0, -1.2);
	glVertex3f(205.0, 347.0, -1.2);
	glVertex3f(211.0, 349.0, -1.2);
	glVertex3f(213.0, 351.0, -1.2);
	glVertex3f(218.0, 351.0, -1.2);
	glVertex3f(221.0, 350.0, -1.2);
	glVertex3f(225.0, 351.0, -1.2);
	glVertex3f(234.0, 360.0, -1.2);
	glVertex3f(247.0, 367.0, -1.2);
	glVertex3f(259.0, 370.0, -1.2);
	glVertex3f(254.0, 375.0, -1.2);
	glVertex3f(251.0, 377.0, -1.2);
	glVertex3f(243.0, 377.0, -1.2);
	glVertex3f(241.0, 370.0, -1.2);
	glVertex3f(239.0, 370.0, -1.2);
	glVertex3f(231.0, 376.0, -1.2);
	glVertex3f(227.0, 381.0, -1.2);
	glVertex3f(227.0, 384.0, -1.2);
	glVertex3f(234.0, 389.0, -1.2);
	glVertex3f(244.0, 392.0, -1.2);
	glVertex3f(244.0, 383.0, -1.2);
	glVertex3f(256.0, 382.0, -1.2);
	glVertex3f(258.0, 381.0, -1.2);
	glVertex3f(263.0, 377.0, -1.2);
	glVertex3f(266.0, 374.0, -1.2);
	glVertex3f(286.0, 381.0, -1.2);
	glEnd();

	glPolygonMode(GL_FRONT_AND_BACK, GL_LINE);
	glBegin(GL_LINE_STRIP);
	glVertex3f(263.0, 365.0, -1.2);
	glVertex3f(251.0, 356.0, -1.2);
	glVertex3f(251.0, 352.0, -1.2);
	glVertex3f(247.0, 348.0, -1.2);
	glVertex3f(247.0, 344.0, -1.2);
	glVertex3f(250.0, 343.0, -1.2);
	glVertex3f(253.0, 343.0, -1.2);
	glVertex3f(255.0, 345.0, -1.2);
	glVertex3f(256.0, 341.0, -1.2);
	glVertex3f(261.0, 341.0, -1.2);
	glVertex3f(262.0, 347.0, -1.2);
	glVertex3f(265.0, 347.0, -1.2);
	glVertex3f(267.0, 350.0, -1.2);
	glVertex3f(266.0, 354.0, -1.2);
	glVertex3f(263.0, 355.0, -1.2);
	glVertex3f(263.0, 357.0, -1.2);
	glVertex3f(267.0, 359.0, -1.2);
	glEnd();

	glPolygonMode(GL_FRONT_AND_BACK, GL_LINE);
	glBegin(GL_LINE_STRIP);
	glVertex3f(149.0, 425.0, -1.2);
	glVertex3f(151.0, 422.0, -1.2);
	glVertex3f(158.0, 422.0, -1.2);
	glVertex3f(169.0, 426.0, -1.2);
	glVertex3f(183.0, 434.0, -1.2);
	glVertex3f(195.0, 439.0, -1.2);
	glVertex3f(229.0, 446.0, -1.2);
	glVertex3f(272.0, 445.0, -1.2);
	glVertex3f(283.0, 435.0, -1.2);
	glEnd();

	glPolygonMode(GL_FRONT_AND_BACK, GL_LINE);
	glBegin(GL_LINE_STRIP);
	glVertex3f(154.0, 441.0, -1.2);
	glVertex3f(176.0, 451.0, -1.2);
	glVertex3f(198.0, 456.0, -1.2);
	glVertex3f(207.0, 460.0, -1.2);
	glEnd();

	glPolygonMode(GL_FRONT_AND_BACK, GL_LINE);
	glBegin(GL_LINE_STRIP);
	glVertex3f(224.0, 463.0, -1.2);
	glVertex3f(257.0, 463.0, -1.2);
	glVertex3f(274.0, 461.0, -1.2);
	glEnd();

	glPolygonMode(GL_FRONT_AND_BACK, GL_LINE);
	glBegin(GL_LINE_STRIP);
	glVertex3f(147.0, 463.0, -1.2);
	glVertex3f(149.0, 471.0, -1.2);
	glVertex3f(157.0, 479.0, -1.2);
	glVertex3f(170.0, 485.0, -1.2);
	glVertex3f(185.0, 485.0, -1.2);
	glVertex3f(190.0, 483.0, -1.2);
	glEnd();

	glPolygonMode(GL_FRONT_AND_BACK, GL_LINE);
	glBegin(GL_LINE_STRIP);
	glVertex3f(226.0, 496.0, -1.2);
	glVertex3f(235.0, 498.0, -1.2);
	glVertex3f(256.0, 497.0, -1.2);
	glVertex3f(267.0, 494.0, -1.2);
	glEnd();

	glPolygonMode(GL_FRONT_AND_BACK, GL_LINE);
	glBegin(GL_LINE_STRIP);
	glVertex3f(121.0, 217.0, -1.2);
	glVertex3f(127.0, 173.0, -1.2);
	glEnd();

	glPolygonMode(GL_FRONT_AND_BACK, GL_LINE);
	glBegin(GL_LINE_STRIP);
	glVertex3f(152.0, 249.0, -1.2);
	glVertex3f(148.0, 235.0, -1.2);
	glVertex3f(146.0, 197.0, -1.2);
	glVertex3f(148.0, 185.0, -1.2);
	glVertex3f(149.0, 158.0, -1.2);
	glEnd();

	glPolygonMode(GL_FRONT_AND_BACK, GL_LINE);
	glBegin(GL_LINE_STRIP);
	glVertex3f(147.0, 213.0, -1.2);
	glVertex3f(158.0, 234.0, -1.2);
	glVertex3f(169.0, 249.0, -1.2);
	glVertex3f(173.0, 253.0, -1.2);
	glVertex3f(179.0, 256.0, -1.2);
	glVertex3f(208.0, 261.0, -1.2);
	glVertex3f(224.0, 258.0, -1.2);
	glEnd();

	glPolygonMode(GL_FRONT_AND_BACK, GL_LINE);
	glBegin(GL_LINE_STRIP);
	glVertex3f(164.0, 271.0, -1.2);
	glVertex3f(164.0, 263.0, -1.2);
	glVertex3f(161.0, 253.0, -1.2);
	glVertex3f(157.0, 244.0, -1.2);
	glVertex3f(150.0, 242.0, -1.2);
	glEnd();

	glPolygonMode(GL_FRONT_AND_BACK, GL_LINE);
	glBegin(GL_LINE_STRIP);
	glVertex3f(155.0, 254.0, -1.2);
	glVertex3f(160.0, 263.0, -1.2);
	glVertex3f(163.0, 272.0, -1.2);
	glEnd();

	glPolygonMode(GL_FRONT_AND_BACK, GL_LINE);
	glBegin(GL_LINE_STRIP);
	glVertex3f(118.0, 250.0, -1.2);
	glVertex3f(118.0, 229.0, -1.2);
	glEnd();

	glPolygonMode(GL_FRONT_AND_BACK, GL_LINE);
	glBegin(GL_LINE_STRIP);
	glVertex3f(167.0, 246.0, -1.2);
	glVertex3f(158.0, 246.0, -1.2);
	glEnd();

	glPolygonMode(GL_FRONT_AND_BACK, GL_LINE);
	glBegin(GL_LINE_STRIP);
	glVertex3f(242.0, 136.0, -1.2);
	glVertex3f(251.0, 154.0, -1.2);
	glVertex3f(254.0, 166.0, -1.2);
	glVertex3f(256.0, 177.0, -1.2);
	glVertex3f(258.0, 192.0, -1.2);
	glVertex3f(258.0, 207.0, -1.2);
	glVertex3f(257.0, 216.0, -1.2);
	glVertex3f(254.0, 226.0, -1.2);
	glEnd();

	glPolygonMode(GL_FRONT_AND_BACK, GL_LINE);
	glBegin(GL_LINE_STRIP);
	glVertex3f(293.0, 208.0, -1.2);
	glVertex3f(290.0, 191.0, -1.2);
	glVertex3f(285.0, 175.0, -1.2);
	glVertex3f(278.0, 160.0, -1.2);
	glVertex3f(273.0, 151.0, -1.2);
	glVertex3f(268.0, 143.0, -1.2);
	glEnd();

	glPolygonMode(GL_FRONT_AND_BACK, GL_LINE);
	glBegin(GL_LINE_STRIP);
	glVertex3f(149.0, 158.0, -1.2);
	glVertex3f(151.0, 178.0, -1.2);
	glVertex3f(154.0, 178.0, -1.2);
	glVertex3f(166.0, 170.0, -1.2);
	glVertex3f(183.0, 164.0, -1.2);
	glVertex3f(188.0, 145.0, -1.2);
	glVertex3f(190.0, 155.0, -1.2);
	glVertex3f(197.0, 163.0, -1.2);

	glVertex3f(219.0, 157.0, -1.2);
	glVertex3f(238.0, 158.0, -1.2);
	glVertex3f(236.0, 146.0, -1.2);
	glVertex3f(241.0, 156.0, -1.2);
	glVertex3f(246.0, 161.0, -1.2);
	glVertex3f(254.0, 166.0, -1.2);
	glEnd();

	glPolygonMode(GL_FRONT_AND_BACK, GL_LINE);
	glBegin(GL_LINE_STRIP);
	glVertex3f(182.0, 357.0, -1.2);
	glVertex3f(184.0, 388.0, -1.2);
	glEnd();

	glPolygonMode(GL_FRONT_AND_BACK, GL_LINE);
	glBegin(GL_LINE_STRIP);
	glVertex3f(243.0, 423.0, -1.2);
	glVertex3f(247.0, 422.0, -1.2);
	glVertex3f(251.0, 418.0, -1.2);
	glVertex3f(255.0, 406.0, -1.2);
	glVertex3f(261.0, 387.0, -1.2);
	glVertex3f(263.0, 377.0, -1.2);
	glEnd();

	glPolygonMode(GL_FRONT_AND_BACK, GL_LINE);
	glBegin(GL_LINE_STRIP);
	glVertex3f(158.0, 422.0, -1.2);
	glVertex3f(154.0, 433.0, -1.2);
	glEnd();

	glPolygonMode(GL_FRONT_AND_BACK, GL_LINE);
	glBegin(GL_LINE_STRIP);
	glVertex3f(202.0, 267.0, -1.2);
	glVertex3f(198.0, 266.0, -1.2);
	glEnd();

	glPolygonMode(GL_FRONT_AND_BACK, GL_LINE);
	glBegin(GL_LINE_STRIP);
	glVertex3f(220.0, 644.0, -1.2);
	glVertex3f(224.0, 644.0, -1.2);
	glVertex3f(226.0, 642.0, -1.2);
	glVertex3f(238.0, 642.0, -1.2);
	glVertex3f(240.0, 644.0, -1.2);
	glVertex3f(242.0, 645.0, -1.2);
	glEnd();

	glPolygonMode(GL_FRONT_AND_BACK, GL_LINE);
	glBegin(GL_LINE_STRIP);
	glVertex3f(119.0, 458.0, -1.2);
	glVertex3f(113.0, 451.0, -1.2);
	glVertex3f(111.0, 447.0, -1.2);
	glVertex3f(111.0, 444.0, -1.2);
	glVertex3f(104.0, 444.0, -1.2);
	glVertex3f(101.0, 446.0, -1.2);
	glVertex3f(94.0, 453.0, -1.2);
	glVertex3f(91.0, 460.0, -1.2);
	glVertex3f(99.0, 470.0, -1.2);
	glVertex3f(101.0, 477.0, -1.2);
	glEnd();

	glPolygonMode(GL_FRONT_AND_BACK, GL_LINE);
	glBegin(GL_LINE_STRIP);
	glVertex3f(291.0, 360.0, -1.2);
	glVertex3f(298.0, 350.0, -1.2);
	glVertex3f(303.0, 344.0, -1.2);
	glEnd();

	glPolygonMode(GL_FRONT_AND_BACK, GL_LINE);
	glBegin(GL_LINE_STRIP);
	glVertex3f(302.0, 360.0, -1.2);
	glVertex3f(308.0, 352.0, -1.2);
	glEnd();

	glPolygonMode(GL_FRONT_AND_BACK, GL_LINE);
	glBegin(GL_LINE_STRIP);
	glVertex3f(325.0, 353.0, -1.2);
	glVertex3f(325.0, 349.0, -1.2);
	glEnd();

	glPolygonMode(GL_FRONT_AND_BACK, GL_LINE);
	glBegin(GL_LINE_STRIP);
	glVertex3f(330.0, 352.0, -1.2);
	glVertex3f(330.0, 346.0, -1.2);
	glVertex3f(328.0, 339.0, -1.2);
	glEnd();

	glPolygonMode(GL_FRONT_AND_BACK, GL_LINE);
	glBegin(GL_LINE_STRIP);
	glVertex3f(335.0, 340.0, -1.2);
	glVertex3f(334.0, 336.0, -1.2);
	glVertex3f(330.0, 332.0, -1.2);
	glEnd();

	glPolygonMode(GL_FRONT_AND_BACK, GL_LINE);
	glBegin(GL_LINE_STRIP);
	glVertex3f(103.0, 417.0, -1.2);
	glVertex3f(98.0, 416.0, -1.2);
	glVertex3f(93.0, 418.0, -1.2);
	glVertex3f(86.0, 422.0, -1.2);
	glVertex3f(81.0, 427.0, -1.2);
	glVertex3f(77.0, 432.0, -1.2);
	glVertex3f(75.0, 439.0, -1.2);
	glVertex3f(70.0, 452.0, -1.2);
	glVertex3f(60.0, 462.0, -1.2);
	glVertex3f(55.0, 468.0, -1.2);
	glVertex3f(50.0, 476.0, -1.2);
	glVertex3f(47.0, 487.0, -1.2);
	glVertex3f(47.0, 496.0, -1.2);
	glVertex3f(49.0, 502.0, -1.2);
	glEnd();

	glPolygonMode(GL_FRONT_AND_BACK, GL_LINE);
	glBegin(GL_LINE_STRIP);
	glVertex3f(50.0, 508.0, -1.2);
	glVertex3f(55.0, 517.0, -1.2);
	glVertex3f(61.0, 522.0, -1.2);
	glVertex3f(67.0, 525.0, -1.2);
	glEnd();

	glPolygonMode(GL_FRONT_AND_BACK, GL_LINE);
	glBegin(GL_LINE_STRIP);
	glVertex3f(111.0, 422.0, -1.2);
	glVertex3f(107.0, 420.0, -1.2);
	glEnd();

	glPolygonMode(GL_FRONT_AND_BACK, GL_LINE);
	glBegin(GL_LINE_STRIP);
	glVertex3f(115.0, 439.0, -1.2);
	glVertex3f(109.0, 433.0, -1.2);
	glVertex3f(103.0, 433.0, -1.2);
	glVertex3f(101.0, 434.0, -1.2);
	glEnd();

	glPolygonMode(GL_FRONT_AND_BACK, GL_LINE);
	glBegin(GL_LINE_STRIP);
	glVertex3f(78.0, 455.0, -1.2);
	glVertex3f(79.0, 450.0, -1.2);
	glVertex3f(81.0, 446.0, -1.2);
	glVertex3f(86.0, 441.0, -1.2);
	glVertex3f(90.0, 438.0, -1.2);
	glEnd();

	glPolygonMode(GL_FRONT_AND_BACK, GL_LINE);
	glBegin(GL_LINE_STRIP);
	glVertex3f(90.0, 464.0, -1.2);
	glVertex3f(90.0, 468.0, -1.2);
	glVertex3f(89.0, 469.0, -1.2);
	glVertex3f(83.0, 469.0, -1.2);
	glVertex3f(80.0, 466.0, -1.2);
	glEnd();

	glPolygonMode(GL_FRONT_AND_BACK, GL_LINE);
	glBegin(GL_LINE_STRIP);
	glVertex3f(97.0, 475.0, -1.2);
	glVertex3f(91.0, 475.0, -1.2);
	glVertex3f(89.0, 473.0, -1.2);
	glEnd();

	glPolygonMode(GL_FRONT_AND_BACK, GL_LINE);
	glBegin(GL_LINE_STRIP);
	glVertex3f(93.0, 481.0, -1.2);
	glVertex3f(84.0, 480.0, -1.2);
	glVertex3f(78.0, 477.0, -1.2);
	glVertex3f(75.0, 473.0, -1.2);
	glVertex3f(73.0, 468.0, -1.2);
	glEnd();

	glPolygonMode(GL_FRONT_AND_BACK, GL_LINE);
	glBegin(GL_LINE_STRIP);
	glVertex3f(71.0, 467.0, -1.2);
	glVertex3f(68.0, 471.0, -1.2);
	glEnd();

	glPolygonMode(GL_FRONT_AND_BACK, GL_LINE);
	glBegin(GL_LINE_STRIP);
	glVertex3f(85.0, 492.0, -1.2);
	glVertex3f(77.0, 491.0, -1.2);
	glVertex3f(73.0, 489.0, -1.2);
	glVertex3f(70.0, 486.0, -1.2);
	glVertex3f(67.0, 483.0, -1.2);
	glVertex3f(66.0, 480.0, -1.2);
	glEnd();

	glPolygonMode(GL_FRONT_AND_BACK, GL_LINE);
	glBegin(GL_LINE_STRIP);
	glVertex3f(81.0, 505.0, -1.2);
	glVertex3f(72.0, 504.0, -1.2);
	glVertex3f(67.0, 501.0, -1.2);
	glVertex3f(65.0, 498.0, -1.2);
	glVertex3f(61.0, 491.0, -1.2);
	glVertex3f(63.0, 483.0, -1.2);
	glEnd();

	glPolygonMode(GL_FRONT_AND_BACK, GL_LINE);
	glBegin(GL_LINE_STRIP);
	glVertex3f(75.0, 508.0, -1.2);
	glVertex3f(65.0, 507.0, -1.2);
	glVertex3f(62.0, 504.0, -1.2);
	glEnd();

	glPolygonMode(GL_FRONT_AND_BACK, GL_LINE);
	glBegin(GL_LINE_STRIP);
	glVertex3f(138.0, 480.0, -1.2);
	glVertex3f(136.0, 485.0, -1.2);
	glVertex3f(132.0, 491.0, -1.2);
	glVertex3f(129.0, 496.0, -1.2);
	glVertex3f(127.0, 499.0, -1.2);
	glVertex3f(125.0, 499.0, -1.2);
	glEnd();

	glPolygonMode(GL_FRONT_AND_BACK, GL_LINE);
	glBegin(GL_LINE_STRIP);
	glVertex3f(209.0, 706.0, -1.2);
	glVertex3f(213.0, 707.0, -1.2);
	glVertex3f(228.0, 712.0, -1.2);
	glVertex3f(239.0, 714.0, -1.2);
	glVertex3f(251.0, 720.0, -1.2);
	glVertex3f(264.0, 723.0, -1.2);
	glVertex3f(280.0, 723.0, -1.2);
	glVertex3f(288.0, 722.0, -1.2);
	glVertex3f(298.0, 719.0, -1.2);
	glEnd();

	glPolygonMode(GL_FRONT_AND_BACK, GL_LINE);
	glBegin(GL_LINE_STRIP);
	glVertex3f(253.0, 709.0, -1.2);
	glVertex3f(258.0, 703.0, -1.2);
	glVertex3f(267.0, 699.0, -1.2);
	glVertex3f(278.0, 697.0, -1.2);
	glVertex3f(288.0, 697.0, -1.2);
	glEnd();

	glPolygonMode(GL_FRONT_AND_BACK, GL_LINE);
	glBegin(GL_LINE_STRIP);
	glVertex3f(229.0, 697.0, -1.2);
	glVertex3f(240.0, 700.0, -1.2);
	glVertex3f(244.0, 697.0, -1.2);
	glVertex3f(257.0, 691.0, -1.2);
	glVertex3f(266.0, 690.0, -1.2);
	glVertex3f(272.0, 690.0, -1.2);
	glVertex3f(279.0, 692.0, -1.2);
	glEnd();

	glPolygonMode(GL_FRONT_AND_BACK, GL_LINE);
	glBegin(GL_LINE_STRIP);
	glVertex3f(245.0, 701.0, -1.2);
	glVertex3f(253.0, 703.0, -1.2);
	glEnd();

	glPolygonMode(GL_FRONT_AND_BACK, GL_LINE);
	glBegin(GL_LINE_STRIP);
	glVertex3f(227.0, 696.0, -1.2);
	glVertex3f(232.0, 692.0, -1.2);
	glVertex3f(240.0, 687.0, -1.2);
	glVertex3f(249.0, 684.0, -1.2);
	glVertex3f(261.0, 683.0, -1.2);
	glEnd();

	glPolygonMode(GL_FRONT_AND_BACK, GL_LINE);
	glBegin(GL_LINE_STRIP);
	glVertex3f(222.0, 675.0, -1.2);
	glVertex3f(223.0, 687.0, -1.2);
	glVertex3f(226.0, 682.0, -1.2);
	glVertex3f(233.0, 677.0, -1.2);
	glVertex3f(244.0, 675.0, -1.2);
	glVertex3f(251.0, 675.0, -1.2);
	glEnd();

	glPolygonMode(GL_FRONT_AND_BACK, GL_LINE);
	glBegin(GL_LINE_STRIP);
	glVertex3f(248.0, 668.0, -1.2);
	glVertex3f(234.0, 668.0, -1.2);
	glVertex3f(230.0, 669.0, -1.2);
	glVertex3f(227.0, 672.0, -1.2);
	glEnd();

	glPolygonMode(GL_FRONT_AND_BACK, GL_LINE);
	glBegin(GL_LINE_STRIP);
	glVertex3f(242.0, 645.0, -1.2);
	glVertex3f(240.0, 650.0, -1.2);
	glVertex3f(239.0, 661.0, -1.2);
	glEnd();
	
	glPolygonMode(GL_FRONT_AND_BACK, GL_LINE);
	glBegin(GL_LINE_STRIP);
	glVertex3f(235.0, 668.0, -1.2);
	glVertex3f(233.0, 655.0, -1.2);
	glVertex3f(231.0, 651.0, -1.2);
	glEnd();

	glPolygonMode(GL_FRONT_AND_BACK, GL_LINE);
	glBegin(GL_LINE_STRIP);
	glVertex3f(224.0, 644.0, -1.2);
	glVertex3f(228.0, 646.0, -1.2);
	glVertex3f(229.0, 648.0, -1.2);
	glEnd();

	glPolygonMode(GL_FRONT_AND_BACK, GL_LINE);
	glBegin(GL_LINE_STRIP);
	glVertex3f(238.0, 664.0, -1.2);
	glVertex3f(239.0, 665.0, -1.2);
	glEnd();

	glPolygonMode(GL_FRONT_AND_BACK, GL_LINE);
	glBegin(GL_LINE_STRIP);
	glVertex3f(224.0, 693.0, -1.2);
	glVertex3f(223.0, 691.0, -1.2);
	glEnd();

	glPolygonMode(GL_FRONT_AND_BACK, GL_LINE);
	glBegin(GL_LINE_STRIP);
	glVertex3f(325.0, 349.0, -1.2);
	glVertex3f(323.0, 346.0, -1.2);
	glEnd();

	glPolygonMode(GL_FRONT_AND_BACK, GL_LINE);
	glBegin(GL_LINE_STRIP);
	glVertex3f(247.0, 311.0, -1.2);
	glVertex3f(252.0, 307.0, -1.2);
	glVertex3f(258.0, 307.0, -1.2);
	glVertex3f(270.0, 311.0, -1.2);
	glEnd();

	glPolygonMode(GL_FRONT_AND_BACK, GL_LINE);
	glBegin(GL_LINE_STRIP);
	glVertex3f(275.0, 316.0, -1.2);
	glVertex3f(286.0, 314.0, -1.2);
	glEnd();

	glPolygonMode(GL_FRONT_AND_BACK, GL_LINE);
	glBegin(GL_LINE_STRIP);
	glVertex3f(245.0, 302.0, -1.2);
	glVertex3f(250.0, 302.0, -1.2);
	glEnd();

	glPolygonMode(GL_FRONT_AND_BACK, GL_LINE);
	glBegin(GL_LINE_STRIP);
	glVertex3f(240.0, 324.0, -1.2);
	glVertex3f(240.0, 321.0, -1.2);
	glEnd();

	glPolygonMode(GL_FRONT_AND_BACK, GL_LINE);
	glBegin(GL_LINE_STRIP);
	glVertex3f(260.0, 329.0, -1.2);
	glVertex3f(264.0, 327.0, -1.2);
	glEnd();

	glLineWidth(1.5);

	glPolygonMode(GL_FRONT_AND_BACK, GL_LINE);
	glBegin(GL_LINE_STRIP);
	glVertex3f(270.0, 259.0, -1.2);
	glVertex3f(269.0, 259.0, -1.2);
	glVertex3f(269.0, 262.0, -1.2);
	glVertex3f(272.0, 265.0, -1.2);
	glVertex3f(281.0, 265.0, -1.2);
	glVertex3f(283.0, 267.0, -1.2);
	glVertex3f(284.0, 269.0, -1.2);
	glVertex3f(289.0, 272.0, -1.2);
	glVertex3f(293.0, 272.0, -1.2);
	glVertex3f(295.0, 268.0, -1.2);
	glEnd();

	glPopMatrix();
	glutSwapBuffers();
}

void reshapeS(int width, int height) {   // Creamos funcion Reshape
	if (height == 0)										// Prevenir division entre cero
		height = 1;

	int posicion = (width - (0.615* height)) / 2;		//mantiene centrado el dibujo, la cte 0.615 es el ancho
														//en terminos de la altura (650 * 0.615 = 399.75 aprox 400).
														//cte = 400 / 650, es decir: ancho / altura.
	
	glViewport(posicion, 0, height * 0.615, height);
	glMatrixMode(GL_PROJECTION);						// Seleccionamos Projection Matrix
	glLoadIdentity();
	glOrtho(0.0, 400.0, 650.0, 0.0, 0.1, 2);
	glMatrixMode(GL_MODELVIEW);							// Seleccionamos Modelview Matrix								
}

void keyboardS(unsigned char key, int x, int y) {  // Create Keyboard Function
	switch (key) {
	case 27:        // Cuando Esc es presionado...
		exit(0);   // Salimos del programa
		break;

	default:        // Cualquier otra
		break;
	}
	glutPostRedisplay();
}


void splatoon()
{   // Main Function
	glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH);
	glutInitWindowSize(400, 650);	// Tamaño de la Ventana
	glutInitWindowPosition(500, 0);	//Posicion de la Ventana
	glutCreateWindow("Splatoon 2 - Inkgirl"); // Nombre de la Ventana
	InitGLS();						// Parametros iniciales de la aplicacion
	glutDisplayFunc(displayS);  //Indicamos a Glut función de dibujo
	glutReshapeFunc(reshapeS);	//Indicamos a Glut función en caso de cambio de tamano
	glutKeyboardFunc(keyboardS);	//Indicamos a Glut función de manejo de teclado
}