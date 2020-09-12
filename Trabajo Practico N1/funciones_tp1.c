#include <stdio.h>
#include <stdlib.h>

void menuCalculadora(float numA, float numB, int banderaNumeroX, int banderaNumeroY)
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
        printf("[1] Ingrese primer operando (A = %.2f)", numA);
        printf("            [2] Ingrese segundo operando (B = Y)\n\n");
        printf("                    [3] Calcular todas las operaciones\n\n");
        printf("                          a- Calcular la suma (%.2f + B)\n", numA);
        printf("                          b- Calcular la resta (%.2f - B)\n", numA);
        printf("                          c- Calcular la division (%.2f / B)\n", numA);
        printf("                          d- Calcular la multiplicacion (%.2f * B)\n", numA);
        printf("                          e- Calcular el factorial (%.2f!)\n\n", numA);
        printf("[4] Informar resultados                           [5] Salir");
    }
    if(banderaNumeroX==0 && banderaNumeroY==1)
    {
        printf("[1] Ingrese primer operando (A = X)");
        printf("            [2] Ingrese segundo operando (B = %.2f)\n\n", numB);
        printf("                    [3] Calcular todas las operaciones\n\n");
        printf("                          a- Calcular la suma (A + %.2f)\n", numB);
        printf("                          b- Calcular la resta (A - %.2f)\n", numB);
        printf("                          c- Calcular la division (A / %.2f)\n", numB);
        printf("                          d- Calcular la multiplicacion (A * %.2f)\n", numB);
        printf("                          e- Calcular el factorial (A!)\n\n");
        printf("[4] Informar resultados                           [5] Salir");
    }
    if(banderaNumeroX==1 && banderaNumeroY==1)
    {
        printf("[1] Ingrese primer operando (A = %.2f)", numA);
        printf("            [2] Ingrese segundo operando (B = %.2f)\n\n", numB);
        printf("                    [3] Calcular todas las operaciones\n\n");
        printf("                          a- Calcular la suma (%.2f + %.2f)\n", numA, numB);
        printf("                          b- Calcular la resta (%.2f - %.2f)\n", numA, numB);
        printf("                          c- Calcular la division (%.2f / %.2f)\n", numA, numB);
        printf("                          d- Calcular la multiplicacion (%.2f * %.2f)\n", numA, numB);
        printf("                          e- Calcular el factorial (%.2f!)\n\n", numA);
        printf("[4] Informar resultados                           [5] Salir");
    }
}

float division(float a, float b)
{
    float resultadoDivision = a / b;
    return resultadoDivision;
}

float suma(float a, float b)
{
    float resultadoSuma = a + b;
    return resultadoSuma;
}

float resta(float a, float b)
{
    float resultadoResta = a - b;
    return resultadoResta;
}

float multiplicacion(float a, float b)
{
    float resultadoMultiplicacion = a * b;
    return resultadoMultiplicacion;
}

unsigned long int factoreo(float num)
{
    unsigned long int factorial = 1;

    for(int i=1;i<=num;i++){
    factorial *= i;
    }

    return factorial;
}

float numeroNaturalEntero(float num)
{
    float entero;
    float error = 1;
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

int calcularOperaciones(float a, float b, int banderaX, int banderaY)
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
        printf("\n\n                                 ERROR!\n\nLos calculos NO se han realizado. Por favor, verifique haber ingresado ambos operandos.\n\n\n\n\n");
    }

    return banderaNumerosValidos;
}


int mostrarOperaciones(int flagValidacion, float numA, float numB)
{

    if(flagValidacion==1)
    {
        system("cls");
        printf("\n\n\n               ------> La suma entre %.2f y %.2f es %.2f\n", numA, numB, suma(numA, numB));
        printf("               ------> La resta entre %.2f y %.2f es %.2f\n", numA, numB, resta(numA, numB));
        printf("               ------> La multiplicacion entre %.2f y %.2f es %.2f\n", numA, numB, multiplicacion(numA, numB));
        if(numB!=0)
        {
            printf("               ------> La division entre %.2f y %.2f es %.2f\n", numA, numB, division(numA, numB));
        }else
        {
            printf("               ------> NO es posible dividir por 0.\n");
        }
        if(numA<=0)
        {
            printf("               ------> El factorial de %.0f no existe.\n", numA);
        }
        else
        {
            printf("               ------> El factorial de %.0f es %lu\n", numA, factoreo(numA));
        }
        if(numB<=0)
        {
            printf("               ------> El factorial de %.0f no existe.\n\n\n\n", numB);
        }
        else
        {
            printf("               ------> El factorial de %.0f es %lu\n\n\n\n\n", numB, factoreo(numB));
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

float ingresoNumero()
{
    float operando;
    float entero;
    system("cls");

    printf("\n\n\n\n                    INGRESE OPERANDO: ");
    scanf("%f", &operando);
    printf("\n\n\n\n\n\n");
    entero = operando;

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
