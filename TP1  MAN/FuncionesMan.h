#ifndef FUNCIONESMAN_H_INCLUDED
#define FUNCIONESMAN_H_INCLUDED
#include <stdio.h>
#include <stdlib.h>

void Sumar (float NUM1, float NUM2);
void Restar (float NUM1, float NUM2);
void Multiplicar (float NUM1, float NUM2);
void Dividir (float NUM1, float NUM2);
void Factorial (float NUM1, float NUM2);

void Sumar (float NUM1, float NUM2)
{
    float Suma = NUM1 + NUM2;
   printf("El Resultado es: %.0f ", Suma);
}
void Restar (float NUM1, float NUM2)
{
printf("El Resultado es: %.0f ", NUM1 - NUM2);
}
void Multiplicar (float NUM1, float NUM2)
{
    printf("El Resultado es: %.2f ", NUM1 * NUM2);
}
void Dividir (float NUM1, float NUM2)
{
    printf("El Resultado es: %.2f ", NUM1 / NUM2);
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
    printf("EL FACTORIAL DEL PRIMER NUMERO ES : %.2f \n\nEL FACTORIAL DEL SEGUNDO NUMERO ES : %.2f \n\n ",resultadoFact1,resultadoFact2);
}




#endif // FUNCIONESMAN_H_INCLUDED
