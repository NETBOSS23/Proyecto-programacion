#include<cstdio>
#include<cstdlib>
#include<iostream>
#include<string.h>
#include<cctype>
#include <locale.h>
//trabajo de programacion v0.1p

void Apoc2014();
void Apoc_2114();
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
	char car,car1,car2,car3,car4,car5,car6;
	int contador=0,contadorn=0,ct=0;
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
	system("cls");
	
	printf("\tSabes que la mayoria de los que habitamos en la tierra nos ubicamos en un lugar muy ancho...\n\n");
	Mateo7_13();
	
	printf("Te consideras que estas en el camino espacioso?(s/n): ");
	scanf("%s",&car);
	if(car=='s')
	{
		Romanos();
		contador+=1;
	}
	else
	{
		contadorn+=1;
	}
	
	printf("\nCrees de que Cristo fue enviado para salvarnos del pecado?(s/n): ");
	scanf("%s",&car1);
	if(car1=='s')
	{
		contador+=1;
	}
	else
	{
		contadorn+=1;
	}
	printf("\nCrees que eres el modelo ideal de Dios?(s/n): ");
	scanf("%s",&car2);
	Mateo7_14();
	if(car2=='s')
	{
		contador+=1;
	}
	else
	{
		contadorn+=1;
	}
	printf("\nEres capaz de escuchar el grito de auxilio de un projimo necesitado\npor Dios?(s/n) ");
	scanf("%s",&car3);
	if(car3=='s')
	{
		contador+=1;
	}
	else
	{
		contadorn+=1;
	}
	printf("\nEstas dispuesto a dejar todo por ser el hijo ideal?(s/n) ");
	scanf("%s",&car4);
	Mateo7_13();
	if(car4=='s')
	{
		contador+=1;
	}
	else
	{
		contadorn+=1;
	}
	
	
	
	//comparador
	if(contador>=3)
	{
		printf("Felicidades, estas en el camino correcto,\nrecuerda que una vez Cristo dijo:\n");
		Apoc_2114();
	}
	else
	{
		printf("En realidad no somos quienes para juzgarte, pero si quieres, aún estas a tiempo\nVe este momento como uno clave para el cambio en tu vida,\nDios es un ser comprensivo y bueno.\n");
		printf("\nRecurda que Apocalipsis dice:\n");
		Apoc2014();
	}
	return 0;
}

void Romanos()
{
	printf("Que si confiesas con tu boca que Jesús es el señor y crees que tu corazón Dios lo levantó de entre los muertos\nseras salvo. Porque con el corazón se cree para ser justificado, pero con la boca se confiesa para ser salvo.");
}

void Juan_3_18()
{
	printf("El que cree en mi, que soy el Hijo de Dios, no sera condenado por Dios. Pero el que no cree ya ha sido condenado,\nprecisamente por no haber reido en el Hijo unico de Dios. ");

}

void Jeremias21_8()
{
	printf("Y a este pueblo adviertele que asi dice el Senor: Pongo delante de ustedes el camino de la vida y el camino de la muerte.");
	
}

void Mateo7_13()
{
	printf("Entrad por la puerta estrecha; porque ancha es la puerta, y espacioso el camino que lleva a la perdicion, y muchos son los que entran por ella");

}

void Juan11_25_27()
{
	printf("Le dijo Jesus: Yo soy la resurreccion y la vida; el que cree en mi, aunque este muerto, vivira. Y todo aquel que vive y cree en mi, no morira eternamente. Crees esto?\nLe dijo: Si, Senor; yo he creido que tu eres el Cristo, el Hijo de Dios, que has venido al mundo.");

}

void Mateo7_14()
{
	printf("Porque estrecha es la puerta, y angosto el camino que lleva a la vida, y pocos son los que la hallan.");

}

void Deuteronomio_30_19()
{
	
	printf("Hoy pongo al cielo y a la tierra por testigos contra ti, de que te he dado a elegir entre la vida y la muerte,\nentre la bendicion y la maldicion. Elige, pues, la vida,  para que vivan tu y tus descendientes.");

}
void Apoc_2114()
{
	printf("Entonces vi un nuevo cielo y una nueva tierra, porque la tierra, el mar y el cielo que conocemos desapareciero.\nY vi la ciudad santa, la nueva Jerusalén, descender del cielo, de donde estaba Dios.");
}
void Apoc2014()
{
	printf("Y la muerte y el infierno fueron lanzados al lago de fuego. Este lago de fuego es la segunda muerte.\n15 Y el que no estaba inscrito en el libro de la vida fue arrojado al lago de fuego.");
}











