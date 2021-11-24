#ifndef MIMENU_H_INCLUDED
#define MIMENU_H_INCLUDED
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include <ctype.h>
#include <windows.h>

void Menu();
int opcion;
int modificar;

void Menu()
{
    do {
    //menu de calculo
    gotoxy (2,4);printf("1.- SUMAR \n");
    gotoxy (2,6);printf("2.- RESTAR \n");
    gotoxy (2,8);printf("3.- MULTIPLICAR \n");
    gotoxy (2,10);printf("4.- DIVIDIR \n");
    gotoxy (2,12);printf("5.- FACTORIAL \n");
    gotoxy (2,14);printf("6.- SALIR \n");
    gotoxy (2,16);printf("ELIGE UNA OPCION \n");
    gotoxy (2,17);scanf("%d", &opcion);

    //pedir valores
    float NUM1, NUM2;
    double NUMF;

    //proceso
    switch(opcion){
        case 1:
            gotoxy (2,20);printf("INGRESE EL PRIMER NUMERO: \n");
            gotoxy (2,21);scanf("%f", &NUM1);
            gotoxy (2,22);printf("INGRESE EL SEGUNDO NUMERO: \n");
            gotoxy (2,23);scanf("%f", &NUM2);
            system("cls");
            Sumar(NUM1, NUM2);
            break;
        case 2:
            gotoxy (2,20);printf("INGRESE EL PRIMER NUMERO: \n");
            gotoxy (2,21);scanf("%f", &NUM1);
            gotoxy (2,22);printf("INGRESE EL SEGUNDO NUMERO: \n");
            gotoxy (2,23);scanf("%f", &NUM2);
            system("cls");
            Restar(NUM1, NUM2);
            break;
        case 3:
            gotoxy (2,20);printf("INGRESE EL PRIMER NUMERO: \n");
            gotoxy (2,21);scanf("%f", &NUM1);
            gotoxy (2,22);printf("INGRESE EL SEGUNDO NUMERO: \n");
            gotoxy (2,23);scanf("%f", &NUM2);
            system("cls");
            Multiplicar(NUM1, NUM2);
            break;
        case 4:
            gotoxy (2,20);printf("INGRESE EL PRIMER NUMERO: \n");
            gotoxy (2,21);scanf("%f", &NUM1);
            gotoxy (2,22);printf("INGRESE EL SEGUNDO NUMERO: \n");
            gotoxy (2,23);scanf("%f", &NUM2);
            system("cls");
            Dividir(NUM1, NUM2);
            break;
        case 5:
            gotoxy (2,20);printf("INGRESE EL PRIMER NUMERO: \n");
            gotoxy (2,21);scanf("%f", &NUM1);
            gotoxy (2,22);printf("INGRESE EL SEGUNDO NUMERO: \n");
            gotoxy (2,23);scanf("%f", &NUM2);
            system("cls");
            Factorial(NUM1, NUM2);
            break;
        case 6:
            break;
        default: gotoxy (2,24);printf("LA OPCION NO ES VALIDA\n\n");
            break;
    }
    } while(opcion != 6);
    gotoxy (2,26); system("pause");
}




#endif // MIMENU_H_INCLUDED
