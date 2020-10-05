#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>
#include "ArrayEmployees.h"
#include "validaciones.h"
#include "menu.h"
#define TAM 1000

int main()
{
    int option;
    int seguir = 1;
    int id = 1000;
    int contador = 0;

    eEmployee list [TAM];/*={
        {1000,"Peter","Parker",42000,2,0},
        {1001,"Tony","Stark",41000,3,0},
        {1002,"Bruce","Banner",36000,5,0},
        {1003,"Bucky","Burnes",80000,4,0},
        {1004,"Steve","Rogers",75000,3,0},
        {1005,"Stephen","Strange",47000,4,0},
        {1006,"Natasha","Romanoff",39000,7,0},
        };
    */
    initEmployees(list, TAM);
    do
    {
        system("cls");
        menuOptions();
        printf("           DIGITE OPCION: ");
        scanf("%d", &option);
        system("cls");

        switch(option)
        {
            case 1:
                addEmployees(list, TAM, id);
                id++;
                contador++;
                break;
            case 2:
                caseTwoEmployee(list,TAM);
                break;
            case 3:
                caseThreeEmployee(list,TAM);
                break;
            case 4:
                caseFourEmployee(list,TAM);
                break;
            case 5:
                seguir = exitMenu();
                break;
            default:
                system("cls");
                printf("OPCION NO VALIDA.\n\n");
                break;
        }

    }while(seguir==1);

    return 0;
}

