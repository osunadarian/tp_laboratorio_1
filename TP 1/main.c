#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

int main()
{
    int opcion;
    int seguir=1;
    int banderaNumeroX = 0;
    int banderaNumeroY = 0;
    int numA;
    int numB;
    int banderaValidacion=0;

    do{
        decorativo();
        menuCalculadora(numA, numB, banderaNumeroX, banderaNumeroY);
        printf("\n\n\n                        Digite la opcion a realizar: ");
        scanf("%d", &opcion);

        switch(opcion)
        {   
			case 1:
                numA=ingresoNumero();
                banderaNumeroX=1;
                break;
            case 2:
                numB=ingresoNumero();
                banderaNumeroY=1;
                break;
            case 3:
                banderaValidacion = calcularOperaciones(numA, numB, banderaNumeroX, banderaNumeroY);
                break;
            case 4:
                mostrarOperaciones(banderaValidacion, numA, numB);
                break;
            case 5:
                seguir=salir();
                break;
            default:
                system("cls");
                printf("Ha ocurrido un error. Por favor, digite una opcion valida.\n\n");
                break;
        }
        system("pause");
        system("cls");
    }
    while(seguir==1);

    return 0;
}

