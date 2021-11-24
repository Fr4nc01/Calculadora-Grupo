#include <stdlib.h>
#include "cabecera.h"
#include <stdio.h>
#include <windows.h>
int main()
{
intro();
saludo();
    system("cls");
    system("COLOR B3");


    float numero1= 0;
    float numero2= 0;
    int operador = 0;


    gotoxy(20,2); printf("%c Escriba el primer Numero: %c", 175, 175);
    gotoxy(20,3); printf(" ");
    scanf("%f",&numero1);
    system("cls");
    gotoxy(20,2); printf("%c Escriba el segundo Numero: %c", 175, 175);
    gotoxy(20,3); printf(" ");
    scanf("%f",&numero2);
    printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",201,205,205,205,205,205,205,205,205,205,205,205,205,205,187);
    system("cls");


    do{

    gotoxy(20,4);printf("El primer Numero que ingresaste  es:  %.2f\n",numero1);
    gotoxy(20,5);printf("El segundo Numero que ingresaste es:  %.2f\n",numero2);


    gotoxy(0,7);printf("Seleccione una opecion a realizar: \n");
    menu();
    scanf("%d",&operador);


    switch(operador){

        case 1 :

            numero1 = modificar1(numero1);
            break;

        case 2 :

            numero2 = modificar2(numero2);
            break;

        case 3 :

            suma(numero1 , numero2);
            break;

        case 4 :

            resta(numero1 , numero2);
            break;

        case 5 :

            divi(numero1 , numero2);
            break;

        case 6 :

            multi(numero1 , numero2);
            break;

        case 7 :
            factorial(numero1,numero2);
            break;

        case 8 :

            todas(numero1,numero2);

            break;

        case 9 :
            system("cls");
            system("COLOR 0F");
            Beep(1100,500);
            gotoxy(15,9);printf( "========================================================");
            gotoxy(15,11);printf("     |*|***%c Gracias por usar nuestra calculadora %c *****|*|     ", 017, 017 );
            gotoxy(15,12);printf("   |*|******************************************************|*|   ");
            gotoxy(15,13);printf(" |*|**********************************************************|*| ");
            gotoxy(15,12);printf("   |*|*************     LABORATORIO     ********************|*|  ");
            gotoxy(15,13);printf("     |*|***************************************************|*|   ");
            gotoxy(20,11);printf(" \n");
            Beep(700,500);
            Beep(600,500);
            Beep(500,500);
            Sleep(300);gotoxy(0,25);printf("Calculator 1.0 Trabajo Practico 1 By:");
            Sleep(300);gotoxy(40,26);printf("Lezcano Franco.\n\n");
            Sleep(300);gotoxy(40,27);printf("Rios Fernando.\n\n");
            Sleep(300);gotoxy(40,28);printf("Manrique Hugo.\n\n");
            Sleep(300);gotoxy(40,29);printf("Yasinowsky Alexis.\n\n");

            break;

        default :
            system("COLOR 4F");
            system("cls");
            Beep(800,100);
            gotoxy(30,15);printf("ERROR!");
            gotoxy(20,18);printf("* Ingrese una opcion valida por fsvor... *  \n");
            gotoxy(30,19);printf(" \n");
            system("pause");
            system("cls");

        }

    }while(operador!= 9);

}
