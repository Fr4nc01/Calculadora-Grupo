#ifndef MIMENU_H_INCLUDED
#define MIMENU_H_INCLUDED
#include <stdio.h>
#include <stdlib.h>

void Menu();

void Menu()
{
    //variables
    printf("CALCULADORA MAN \n");
    system("pause");
    system("cls");

    int opcion;
    //menu de calculo
    printf("1 SUMAR \n");
    printf("2 RESTAR \n");
    printf("3 MULTIPLICAR \n");
    printf("4 DIVIDIR \n");
    printf("5 FACTORIAL \n");
    printf("ELIGE UNA OPCION \n");
    scanf("%d", &opcion);

    //pedir valores
    float NUM1, NUM2;
    double NUMF;
    printf("INGRESE EL PRIMER NUMERO: \n");
    scanf("%f", &NUM1);
    printf("INGRESE EL SEGUNDO NUMERO: \n");
    scanf("%f", &NUM2);
    system("cls");

    //proceso
    switch(opcion){
        case 1:
            Sumar(NUM1, NUM2);
            break;
        case 2:
            Restar(NUM1, NUM2);
            break;
        case 3:
            Multiplicar(NUM1, NUM2);
            break;
        case 4:
            Dividir(NUM1, NUM2);
            break;
        case 5:
            Factorial(NUM1, NUM2);
            break;
        default: printf("\nLA OPCION NO ES VALIDA");
    }

}




#endif // MIMENU_H_INCLUDED
