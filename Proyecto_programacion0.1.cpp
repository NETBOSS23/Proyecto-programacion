#include<cstdio>
#include<cstdlib>
#include<iostream>
#include<string.h>
#include<cctype>
#include <locale.h>
//trabajo de programacion v0.1p



void Romanos();
void Juan_3_18();
void Jeremias21_8();
void Mateo7_13();
void Juan11_25_27();
void Mateo7_14();
void Deuteronomio_30_19();
int main()
{
	setlocale(LC_ALL, "");
	char nombre[10];
	
	printf("========================================================================================\n");
	printf("\t\tBienvenido hermano\n");
	printf("Ingresa tu nombre de pila: ");
	scanf("%s",nombre);
	printf("\n\n\n");
	printf("Seremos tu guia por este momento...\n\n");
	printf("Te haremos una breve serie de preguntas para ayudarte un poco, espero que te sientas\ncomodo con nosotros...\n");
	printf("========================================================================================\n");
	system("pause");
	printf("\n\n");
	Deuteronomio_30_19();
	
	return 0;
}

void Romanos(){
	printf("Que si confiesas con tu boca que Jesús es el señor y crees que tu corazón Dios lo levantó de entre los muertos\nseras salvo. Porque con el corazón se cree para ser justificado, pero con la boca se confiesa para ser salvo.");
}

void Juan_3_18(){
	printf("El que cree en mi, que soy el Hijo de Dios, no sera condenado por Dios. Pero el que no cree ya ha sido condenado,\nprecisamente por no haber reido en el Hijo unico de Dios. ");

}

void Jeremias21_8(){
	printf("Y a este pueblo adviertele que asi dice el Senor: Pongo delante de ustedes el camino de la vida y el camino de la muerte.");
	
}

void Mateo7_13(){
	printf("Entrad por la puerta estrecha; porque ancha es la puerta, y espacioso el camino que lleva a la perdicion, y muchos son los que entran por ella");

}

void Juan11_25_27(){
	printf("Le dijo Jesus: Yo soy la resurreccion y la vida; el que cree en mi, aunque este muerto, vivira. Y todo aquel que vive y cree en mi, no morira eternamente. Crees esto?\nLe dijo: Si, Senor; yo he creido que tu eres el Cristo, el Hijo de Dios, que has venido al mundo.");

}

void Mateo7_14(){
	printf("Porque estrecha es la puerta, y angosto el camino que lleva a la vida, y pocos son los que la hallan.");

}

void Deuteronomio_30_19()
{
	printf("Hoy pongo al cielo y a la tierra por testigos contra ti, de que te he dado a elegir entre la vida y la muerte,\nentre la bendicion y la maldicion. Elige, pues, la vida,  para que vivan tu y tus descendientes.");

}
