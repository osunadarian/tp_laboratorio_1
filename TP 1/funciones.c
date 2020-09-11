#include <stdio.h>
#include <stdlib.h>

void menuCalculadora(int numA, int numB, int banderaNumeroX, int banderaNumeroY)
{
    if(banderaNumeroX==0 && banderaNumeroY==0)
    {
        printf("[1] Ingrese primer operando (A = X)");
        printf("            [2] Ingrese segundo operando (B = Y)\n\n");
        printf("                    [3] Calcular todas las operaciones\n\n");
        printf("                          a- Calcular la suma (A + B)\n");
        printf("                          b- Calcular la resta (A - B)\n");
        printf("                          c- Calcular la division (A / B)\n");
        printf("                          d- Calcular la multiplicacion (A * B)\n");
        printf("                          e- Calcular el factorial (A!)\n\n");
        printf("[4] Informar resultados                        [5] Salir");
    }
    if(banderaNumeroX==1 && banderaNumeroY==0)
    {
        printf("[1] Ingrese primer operando (A = %d)", numA);
        printf("            [2] Ingrese segundo operando (B = Y)\n\n");
        printf("                    [3] Calcular todas las operaciones\n\n");
        printf("                          a- Calcular la suma (%d + B)\n", numA);
        printf("                          b- Calcular la resta (%d - B)\n", numA);
        printf("                          c- Calcular la division (%d / B)\n", numA);
        printf("                          d- Calcular la multiplicacion (%d * B)\n", numA);
        printf("                          e- Calcular el factorial (%d!)\n\n", numA);
        printf("[4] Informar resultados                           [5] Salir");
    }
    if(banderaNumeroX==0 && banderaNumeroY==1)
    {
        printf("[1] Ingrese primer operando (A = X)");
        printf("            [2] Ingrese segundo operando (B = %d)\n\n", numB);
        printf("                    [3] Calcular todas las operaciones\n\n");
        printf("                          a- Calcular la suma (A + %d)\n", numB);
        printf("                          b- Calcular la resta (A - %d)\n", numB);
        printf("                          c- Calcular la division (A / %d)\n", numB);
        printf("                          d- Calcular la multiplicacion (A * %d)\n", numB);
        printf("                          e- Calcular el factorial (A!)\n\n");
        printf("[4] Informar resultados                           [5] Salir");
    }
    if(banderaNumeroX==1 && banderaNumeroY==1)
    {
        printf("[1] Ingrese primer operando (A = %d)", numA);
        printf("            [2] Ingrese segundo operando (B = %d)\n\n", numB);
        printf("                    [3] Calcular todas las operaciones\n\n");
        printf("                          a- Calcular la suma (%d + %d)\n", numA, numB);
        printf("                          b- Calcular la resta (%d - %d)\n", numA, numB);
        printf("                          c- Calcular la division (%d / %d)\n", numA, numB);
        printf("                          d- Calcular la multiplicacion (%d * %d)\n", numA, numB);
        printf("                          e- Calcular el factorial (%d!)\n\n", numA);
        printf("[4] Informar resultados                           [5] Salir");
    }
}

float division(int a, int b)
{
    float resultadoDivision = (float)a / b;
    return resultadoDivision;
}


int numeroNaturalEntero(int num)
{
    int entero;
    int error = 1;
    entero = num;
    if(num>0){
        if(entero - num == 0)
        {
            error = 0;
        }
    }else
    {

        return error;
    }
}

int calcularOperaciones(int a, int b, int banderaX, int banderaY)
{
    int banderaNumerosValidos = 0;
    if(banderaX == 1 && banderaY == 1)
    {
        banderaNumerosValidos = 1;
        suma(a,b);
        resta(a,b);
        multiplicacion(a,b);
        factoreo(a);
        factoreo(b);
        if(numeroNaturalEntero==0)
        {
            division(a,b);

        }
        system("cls");
        printf("\n\n                      Los calculos se han realizado correctamente.\n\n              Para visualizarlos, digite la opcion [ 4 ] del menu principal.\n\n\n\n\n");
    }else
    {
        system("cls");
        printf("\n\n                                  ERROR!\n\nLos calculos NO se han realizado. Por favor, verifique haber ingresado ambos operandos.\n\n\n\n\n");
    }

    return banderaNumerosValidos;
}

mostrarOperaciones(int flagValidacion, int numA, int numB)
{

    if(flagValidacion==1)
    {
        system("cls");
        printf("\n\n\n               ------> La suma entre %d y %d es %d\n", numA, numB, suma(numA, numB));
        printf("               ------> La resta entre %d y %d es %d\n", numA, numB, resta(numA, numB));
        printf("               ------> La multiplicacion entre %d y %d es %d\n", numA, numB, multiplicacion(numA, numB));
        if(numB!=0)
        {
            printf("               ------> La division entre %d y %d es %.2f\n", numA, numB, division(numA, numB));
        }else
        {
            printf("               ------> NO es posible dividir por 0.\n");
        }
        if(numA<=0)
        {
            printf("               ------> El factorial de %d no existe.\n", numA);
        }
        else
        {
            printf("               ------> El factorial de %d es %ld\n", numA, factoreo(numA));
        }
        if(numB<=0)
        {
            printf("               ------> El factorial de %d no existe.\n\n\n\n", numB);
        }
        else
        {
            printf("               ------> El factorial de %d es %ld\n\n\n\n\n", numB, factoreo(numB));
        }
    }else
    {
        if(flagValidacion==0)
        {
            system("cls");
            printf("\n\n                                        ERROR!\n\nEs necesario realizar los calculos [opcion 3 del menu] para poder visualizarlos.\n\n\n\n\n");
        }
    }

    return 0;
}


int suma(int a, int b)
{
    int resultadoSuma = a + b;
    return resultadoSuma;
}
int resta(int a, int b)
{
    int resultadoResta = a - b;
    return resultadoResta;
}

int multiplicacion(int a, int b)
{
    int resultadoMultiplicacion = a * b;
    return resultadoMultiplicacion;
}

int factoreo(int num)
{
    long int factorial = 1;

    for(int i=1;i<=num;i++){
    factorial *= i;
    }

    return factorial;
}

int ingresoNumero()
{
    float operando;
    int entero;
    int error=0;
    system("cls");

    while(error==0){

        system("cls");
        printf("\n\n\n\n                    INGRESE OPERANDO: ");
        scanf("%f", &operando);
        printf("\n\n\n\n\n\n");
        entero = operando;

        if(operando - entero == 0)
        {
            error=1;

        }else
        {
            system("cls");
            printf("\n\n\n\n                       ERROR!\n        NO PUEDE OPERAR CON NUMEROS DECIMALES. \n       POR FAVOR, DIGITE SOLO NUMEROS NATURALES!\n\n\n\n");
            system("pause");
        }
    }

    return entero;
}

void decorativo()
{
    printf("\n");
    printf("                        |-----------------------------|\n");
    printf("                        |    C A L C U L A D O R A    |\n");
    printf("                        |-----------------------------|\n\n");
}

int salir()
{
    int opcion = 0;
    int seguir;

    system("cls");
    printf("Esta seguro que desea salir?\n[1] - SI\n[2] - NO\n\nOPCION ELEGIDA: ");
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

