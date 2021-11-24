#include <stdio.h>
#include <windows.h>
#include <stdlib.h>
#include <string.h>
#include "cabecera.h"

void menu()
{system("COLOR B3");
 gotoxy(10,9);  printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n", 201,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,187);
 gotoxy(10,10);  printf("%c 1 Modificar primer Numero  %c\n",186, 186);
 gotoxy(10,11);  printf("%c                            %c\n",186, 186);
 gotoxy(10,12);  printf("%c 2 Modificar segundo Numero %c\n",186, 186);
 gotoxy(10,13); printf("%c                            %c\n",186, 186);
 gotoxy(10,14); printf("%c 3 Sumar                    %c\n",186, 186);
 gotoxy(10,15); printf("%c                            %c\n",186, 186);
 gotoxy(10,16); printf("%c 4 Restar                   %c\n",186, 186);
 gotoxy(10,17); printf("%c                            %c\n",186, 186);
 gotoxy(10,18); printf("%c 5 Dividir                  %c\n",186, 186);
 gotoxy(10,19); printf("%c                            %c\n",186, 186);
 gotoxy(10,20); printf("%c 6 Multiplicar              %c\n",186, 186);
 gotoxy(10,21); printf("%c                            %c\n",186, 186);
 gotoxy(10,22); printf("%c 7 Factorial                %c\n",186, 186);
 gotoxy(10,23); printf("%c                            %c\n",186, 186);
 gotoxy(10,24); printf("%c 8 Todas las operaciones    %c\n",186, 186);
 gotoxy(10,25); printf("%c                            %c\n",186, 186);
 gotoxy(10,26); printf("%c 9 Salir                    %c\n",186, 186);
 gotoxy(10,27); printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n", 200,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,188);

}

float modificar1(float num1){

    float valor1;

    printf("Ingrese nuevo valor para el primer operando: ");
    scanf("%f",&num1);
    valor1= num1;
    system("cls");

    return valor1;

}

float modificar2(float num2){

    float valor2;

    printf("Ingrese el valor para el segundo operando: ");
    scanf("%f",&num2);
    valor2= num2;
    system("cls");

    return valor2;

}

void suma(float num1, float num2){

    float resultado;

    resultado = num1 + num2;

    system("cls");


    printf("El resultado de %.2f + %.2f es: %.2f \n",num1,num2,resultado);
    printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%\n",176,176,176,176,176,176,176,176,176,176176,176,176,176,176,176,176,176,176,176,176,176);

    system("pause");
    system("cls");

}

void resta(float num1, float num2){

    float resultado;

    resultado = num1 - num2;

    system("cls");


    printf("El resultado de %.2f - %.2f es: %.2f \n",num1,num2,resultado);
    printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%\n",176,176,176,176,176,176,176,176,176,176176,176,176,176,176,176,176,176,176,176,176,176);

    system("pause");
    system("cls");

}

void multi(float num1, float num2){

    float resultado;

    system("cls");

    if(num1 == 0 || num2 == 0){


        Beep(800,100);
        system("COLOR 4F");
    gotoxy(20,15);printf("IMPORTANTE...! \n");
    gotoxy(20,16);printf("TODO NUMERO MULTIPLICADO POR 0 DA 0 \n");
    gotoxy(20,17);printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%\n",176,176,176,176,176,176,176,176,176,176176,176,176,176,176,176,176,176,176,176,176,176);

    }else{

    resultado = num1 * num2;

    printf("El resultado  de %.2f x %.2f es: %.2f \n",num1,num2,resultado);
    printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%\n",176,176,176,176,176,176,176,176,176,176176,176,176,176,176,176,176,176,176,176,176,176);

    }

    system("pause");
    system("cls");

}

void divi(float num1, float num2){
    float resultado;

    system("cls");

    if(num1 < num2 || num1 == 0 || num2 == 0){


        printf("TODO NUMERO DIVIDIDO POR 0 DA 0\n");
        printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%\n",176,176,176,176,176,176,176,176,176,176176,176,176,176,176,176,176,176,176,176,176,176);

    }else{

    resultado = num1 / num2;

    printf("El resultado de la division de %.2f y %.2f es: %.2f \n",num1,num2,resultado);
    printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%\n",176,176,176,176,176,176,176,176,176,176176,176,176,176,176,176,176,176,176,176,176,176);

    }

    system("pause");
    system("cls");

}

void factorial(float num1, float num2){

    system("cls");

    float resultadoFact1 = 1.0;
    float resultadoFact2 = 1.0;

    for (int i = 1; i <= num1; i++){
        resultadoFact1 = resultadoFact1 * i;
    }

    for (int i = 1; i <= num2; i++){
        resultadoFact2 = resultadoFact2 * i;
    }


    printf("El factorial de : %.2f es: %.2f y el factorial de %.2f es: %.2f \n",num1,resultadoFact1,num2,resultadoFact2);
    printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%\n",176,176,176,176,176,176,176,176,176,176176,176,176,176,176,176,176,176,176,176,176,176);
    system("pause");
    system("cls");

}

void todas (float num1, float num2){


    system("cls");


    float resultadoSuma;

    resultadoSuma = num1 + num2;


    printf("El resultado de %.2f + %.2f es: %.2f \n\n",num1,num2,resultadoSuma);
    printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%\n",176,176,176,176,176,176,176,176,176,176176,176,176,176,176,176,176,176,176,176,176,176);


    float resultadoResta;

    resultadoResta = num1 - num2;

    printf("El resultado de %.2f - %.2f es: %.2f \n\n",num1,num2,resultadoResta);
    printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%\n",176,176,176,176,176,176,176,176,176,176176,176,176,176,176,176,176,176,176,176,176,176);


    float resultadoMulti;

    if(num1 == 0 || num2 == 0){

        Beep(800,100);
        system("COLOR 4F");

    printf("TODO NUMERO MULTIPLICADO POR 0 DA 0\n");
    printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%\n",176,176,176,176,176,176,176,176,176,176176,176,176,176,176,176,176,176,176,176,176,176);

    }else{

    resultadoMulti = num1 * num2;

    printf("El resultado de  %.2f x %.2f es: %.2f \n",num1,num2,resultadoMulti);
    printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%\n",176,176,176,176,176,176,176,176,176,176176,176,176,176,176,176,176,176,176,176,176,176);

    }


    float resultadoDivi;

    if(num1 < num2 || num1 == 0 || num2 == 0){

        Beep(800,100);
        system("COLOR 4F");
        printf("TODO NUMERO DIVIDIDO POR 0 DA 0\n");
        printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%\n",176,176,176,176,176,176,176,176,176,176176,176,176,176,176,176,176,176,176,176,176,176);

    }else{

    resultadoDivi = num1 / num2;

    printf("El resultado de %.2f / %.2f es: %.2f \n",num1,num2,resultadoDivi);
    printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%\n",176,176,176,176,176,176,176,176,176,176176,176,176,176,176,176,176,176,176,176,176,176);

    }


    float resultadoFact1 = 1.0;
    float resultadoFact2 = 1.0;

    for (int i = 1; i <= num1; i++){
        resultadoFact1 = resultadoFact1 * i;
    }
    for (int i = 1; i <= num2; i++){
        resultadoFact2 = resultadoFact2 * i;
    }

    printf("El factorial de %.2f es: %.2f y el factorial de %.2f es: %.2f \n",num1,resultadoFact1,num2,resultadoFact2);
    printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%\n",176,176,176,176,176,176,176,176,176,176176,176,176,176,176,176,176,176,176,176,176,176);
    system("pause");
    system("cls");

}
void gotoxy(int x,int y){
                              HANDLE hcon;
                              hcon = GetStdHandle(STD_OUTPUT_HANDLE);
                              COORD dwPos;
                              dwPos.X = x;
                              dwPos.Y= y;
                              SetConsoleCursorPosition(hcon,dwPos);}

void saludo()
{
    system("cls");
    Beep(800,300);
    system("COLOR F");
    system("COLOR 0F");
    Beep(500,500);Sleep(300);gotoxy(28,10);printf("CALCULATOR 1.0");
    system("COLOR 8C");
     Beep(500,500);Sleep(300);gotoxy(0,15);printf(" *  #                                                          #        * \n");
system("COLOR 9D");Sleep(300);gotoxy(0,16);printf(" *  #        #                                         #       #        * \n");
     Beep(600,500);Sleep(300);gotoxy(0,17);printf(" *  #                                                          #        * \n");
                   Sleep(300);gotoxy(0,18);printf(" *  ###     ##     ##    ###    #  #    ##    ###     ##     ###    ##  * \n");
                   Sleep(300);gotoxy(0,19);printf(" *  #  #     #    # ##   #  #   #  #   # ##   #  #     #    #  #   #  # * \n");
                   Sleep(300);gotoxy(0,20);printf("    #  #     #    ##     #  #    ##    ##     #  #     #    #  #   #  #   \n");
                   Sleep(300);gotoxy(0,21);printf(" *  ###     ###    ###   #  #    ##     ###   #  #    ###    ###    ##  * \n");
    Beep(700,500); Sleep(300);gotoxy(0,23);printf(" ========================================================================\n");
    system("COLOR 0F");
    Beep(1100,500);Sleep(300);gotoxy(0,24);printf("   ====================================================================\n");
    printf(" ");
    system("pause");
    system("cls");
}
void intro()
{
    system("COLOR 0A");

    Sleep(150);printf("01010101010101010101010101010101010101010101010101010101010101010101010101010101010101010101010101010101010101010101010101010101");
    Sleep(150);printf("01010101010 01010101010101010101010101010101010101010101010101010101010101010101010101010101010101010101010101010101010101010101");
    Sleep(150);printf("10101010101 10101000101001010101001010101010101010000010010101001010010001010100100101001010101001010101010101010101010101010101");
    Sleep(150);printf("01010 0 010 010101010101010101010101010 0101010 01010101010101010101010101010101010101010101010101 10101010101010101010101010101");
    Sleep(150);printf("010 1 1 1 1 1 1010101010101010101010101 1010101 1010101010101010101010101010101010101010101 101 10 01010010101010101010101010101");
    Sleep(150);printf("101 1 1 1 1 1 1010001010010101010010101 1010101 1000001001010100101001000101 10010010100101 101 0  101010101010101010101010101 1");
    Sleep(150);printf("0 0 0 0 0 0 0 0 01010 010101010101010 0 01010 0 010101010101 1010101010101 1 10101010101010 010 0  1010101010 0101010101010101 1");
    Sleep(150);printf("0 1 1 1 1 1 1 1 10101 101 10101010101 1 101 1 1 1 1010101010 0101010101010 0 0101010101 101 1 0 0  1 101 1010 0101010101010101 1");
    Sleep(150);printf("1 1 1 1 1 1 1 1 1 001 100 01010100101 1 101 1 1 1 00 010 101 1001010 1 001   1001001010 101 1 1    1 101 1010 0101010101010101 1");
    Sleep(150);printf("0 0 0 0 0 0 0 0 0 010 0 0 010101010 0 0 0 0 0 0 0 01 101 101 1 10101 1 101   1 10 010 0 010 0 0    1 101 1010 01010 0101010101 1");
    Sleep(150);printf("0 0 0 0 0 0 0 0 0 0 0 0 0 0 0101010 1 1 1 1 1 1 1 10 0 0 010 0 0 010   010   0 01 101 1 101   1    0 001 1010 01010 0101010101 1");
    Sleep(150);printf("1 1 1 1 1 1 1   1 0 1 1 0 0 0 01001 1 1 1 1 1 1 1 00 0 0 101   0 010   010   0 1  1 1 1 1 1   0    1 1 0   10 01010 0101010101 1");
    Sleep(150);printf("0 0   1 1 1 1   1 1 1 1 1 1 1 101 1 1 1 1 1 1 1 1 10 0 0 0 0   0 010   0 0     0  1 1 1 1 1        0 0 1   10 010 0 0101010 01 1");
    Sleep(150);printf("0 0     0 0 0   1 1 1 1 1   1 101 1   1   1 1 1   10   0 0 0   0 0 0   0 1        0 0 0 0 0        1 1 1   0  010 0 0101010 01  ");
    Sleep(150);printf("1 1     1 1 1   0 0 1 1 0   0 010 1   1   1 1 1    0   1 0 0   0 1 1   0 0        0 1   0 0          0 1   1  010 0 0 1 010 01  ");
    Sleep(150);printf("0 0     0 0     0 0 0   0     0 0     0   0 0 0    1   1 1 1     1 1     1        0     0 0          1     1  0 0 0 0 10  0 01  ");
    Sleep(150);printf("0       0 0     0 0 0         0 0         0 0 0        1 1 1       1              0     0 0          1     1  0   0 0 10  0 01  ");
    Sleep(150);printf("1         1       0 1         0             0 0        1   0       1              0       0          0     1  0     0 10  0 01  ");
    Sleep(150);printf("0                 0           0               1        0           0              1                  0     1  0     0 10  0 01  ");
    Sleep(150);printf("1         1       0 1         0             0 0        1   0       1              0       0          0     1  0     0 10  0 01  ");
    Sleep(150);printf("0                 0           0               1        0           0              1                  0     1  0     0 10  0 01  ");
    Sleep(150);printf("1                             1                                    0                      1          1                    1     ");

}
