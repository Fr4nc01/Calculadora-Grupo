#ifndef FUNCIONESMAN_H_INCLUDED
#define FUNCIONESMAN_H_INCLUDED
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include <ctype.h>
#include <windows.h>

void gotoxy(int x, int y);
void dibujarCuadro(int x1,int y1,int x2,int y2);
void Sumar (float NUM1, float NUM2);
void Restar (float NUM1, float NUM2);
void Multiplicar (float NUM1, float NUM2);
void Dividir (float NUM1, float NUM2);
void Factorial (float NUM1, float NUM2);


void Sumar (float NUM1, float NUM2)
{
    float Suma = NUM1 + NUM2;
   dibujarCuadro(1,1,77,3); //SE DIBUJA EL CUADRO DEL TITULO
	gotoxy(30,2); printf("El Resultado es: %.0f ", Suma);

}
void Restar (float NUM1, float NUM2)
{
     dibujarCuadro(1,1,77,3); //SE DIBUJA EL CUADRO DEL TITULO
	gotoxy(30,2); printf("El Resultado es: %.0f ", NUM1 - NUM2);
}
void Multiplicar (float NUM1, float NUM2)
{
    dibujarCuadro(1,1,77,3); //SE DIBUJA EL CUADRO DEL TITULO
	gotoxy(30,2); printf("El Resultado es: %.0f ", NUM1 * NUM2);
}
void Dividir (float NUM1, float NUM2)
{
    dibujarCuadro(1,1,77,3); //SE DIBUJA EL CUADRO DEL TITULO
	gotoxy(30,2); printf("El Resultado es: %f ", NUM1/NUM2);
}
void Factorial(float NUM1, float NUM2){

    float resultadoFact1 = 1.0;
    float resultadoFact2 = 1.0;

    for (int i = 1; i <= NUM1; i++){
        resultadoFact1 = resultadoFact1 * i;
    }

    for (int i = 1; i <= NUM2; i++){
        resultadoFact2 = resultadoFact2 * i;
    }
    dibujarCuadro(1,1,77,3); //SE DIBUJA EL CUADRO DEL TITULO
	gotoxy(30,2); printf("EL FACTORIAL DEL PRIMER NUMERO ES : %.0f \n\nEL FACTORIAL DEL SEGUNDO NUMERO ES : %.0f \n\n ",resultadoFact1,resultadoFact2);
}
void gotoxy(int x,int y){
      HANDLE hcon;
      hcon = GetStdHandle(STD_OUTPUT_HANDLE);
      COORD dwPos;
      dwPos.X = x;
      dwPos.Y= y;
      SetConsoleCursorPosition(hcon,dwPos);
 }
void dibujarCuadro(int x1,int y1,int x2,int y2){
	int i;

    for (i=x1;i<x2;i++){
		gotoxy(i,y1); printf("\304"); //linea horizontal superior
		gotoxy(i,y2); printf("\304"); //linea horizontal inferior
    }

    for (i=y1;i<y2;i++){
		gotoxy(x1,i); printf("\263"); //linea vertical izquierda
		gotoxy(x2,i); printf("\263"); //linea vertical derecha
	}

    gotoxy(x1,y1); printf("\332");
    gotoxy(x1,y2); printf("\300");
    gotoxy(x2,y1); printf("\277");
    gotoxy(x2,y2); printf("\331");
}



#endif // FUNCIONESMAN_H_INCLUDED
