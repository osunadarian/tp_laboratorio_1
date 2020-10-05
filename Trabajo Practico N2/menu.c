#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>
#include "menu.h"


void menuOptions()
{
    printf("****************************************");
    printf("\n       MENU SISTEMA EMPRESARIAL\n");
    printf("****************************************\n\n");
    printf("            [1] - ALTAS\n");
    printf("            [2] - MODIFICAR\n");
    printf("            [3] - BAJAS\n");
    printf("            [4] - INFORMAR\n");
    printf("            [5] - SALIR\n\n\n");

}

void loading()
{
    for(int i=3; i>0; i--)
    {
        printf("\n\n                     CARGANDO...");
        if(i==1)
        {
            printf("\n\n\n          POR FAVOR, AGUARDE %d SEGUNDO\n\n\n\n\n\n", i);
            Sleep(1000);
            system("cls");
        }
        else
        {
            printf("\n\n\n          POR FAVOR, AGUARDE %d SEGUNDOS\n\n\n\n\n\n", i);
            Sleep(1000);
            system("cls");
        }
    }
    system("cls");
}

int exitMenu()
{
    int opcion = 0;
    int seguir;

    system("cls");
    printf("\n\n\n              ESTA SEGURO QUE DESEA SALIR?\n\n");
    printf("                       [1] - SI\n                       [2] - NO");
    printf("\n\n                    OPCION ELEGIDA: ");
    scanf("%d", &opcion);
    if(opcion==1)
    {
        seguir=0;
    }else
    {
        seguir=1;
    }
    return seguir;

}
