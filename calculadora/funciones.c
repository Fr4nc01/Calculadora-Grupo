#include <stdio.h>
#include <stdlib.h>

void menu(){
    printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%\n",201,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,187);
    printf("%c      1%c Modificar primer Numero          %c\n",186, 016, 186);
    printf("%c                                           %c\n");
    printf("%c      2%c Modificar segundo Numer  o       %c\n",186, 016, 186);
    printf("%c                                           %c\n");
    printf("%c      3%c Sumar                            %c\n",186, 016, 186);
    printf("%c                                           %c\n");
    printf("%c      4%c Restar                           %c\n",186, 016, 186);
    printf("%c                                           %c\n");
    printf("%c      5%c Dividir                          %c\n",186, 016, 186);
    printf("%c                                           %c\n");
    printf("%c      6%c Multiplicar                      %c\n",186, 016, 186);
    printf("%c                                           %c\n");
    printf("%c      7%c Factorial                        %c\n",186, 016, 186);
    printf("%c                                           %c\n");
    printf("%c      8%c Calcular todas las operaciones   %c\n",186, 016, 186);
    printf("%c                                           %c\n");
    printf("%c      9%c Salir                            %c\n",186, 016, 186);
    printf("%c%c%c%c%c%c%c%c%c%c%%c%c%c%c%c%c%c%c%c%c%c%c%\n");
}

float modificar1(float num1){

    float valor1;

    printf("Ingrese nuevo valor para el primer operando: ");
    scanf("%f",&num1);
    valor1 = num1;
    system("cls");

    return valor1;

}

float modificar2(float num2){

    float valor2;

    printf("Ingrese el valor para el segundo operando: ");
    scanf("%f",&num2);
    valor2 = num2;
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


    printf("TODO NUMERO MULTIPLICADO POR 0 DA 0 \n");
    printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%\n",176,176,176,176,176,176,176,176,176,176176,176,176,176,176,176,176,176,176,176,176,176);

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

void operaciones(float num1, float num2){


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

    printf("TODO NUMERO MULTIPLICADO POR 0 DA 0\n");
    printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%\n",176,176,176,176,176,176,176,176,176,176176,176,176,176,176,176,176,176,176,176,176,176);

    }else{

    resultadoMulti = num1 * num2;

    printf("El resultado de  %.2f x %.2f es: %.2f \n",num1,num2,resultadoMulti);
    printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%\n",176,176,176,176,176,176,176,176,176,176176,176,176,176,176,176,176,176,176,176,176,176);

    }


    float resultadoDivi;

    if(num1 < num2 || num1 == 0 || num2 == 0){

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
