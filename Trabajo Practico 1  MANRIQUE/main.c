#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include <ctype.h>
#include <windows.h>
#include "FuncionesMan.h"
#include "MiMenu.h"

int main()
{
    system("COLOR B0");
	dibujarCuadro(1,1,77,3); //SE DIBUJA EL CUADRO DEL TITULO
	gotoxy(30,2); printf("CALCULADORA MAN");
	gotoxy(22,8); printf("PRESIONE UNA TECLA PARA CONTINUAR");
	getch();
	system("cls");
	dibujarCuadro(1,1,77,3); //SE DIBUJA EL CUADRO DEL TITULO
	gotoxy(30,2); printf("MENU PRINCIPAL");
    Menu();
    return 0;
}

