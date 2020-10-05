#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>
#include "ArrayEmployees.h"
#include "menu.h"
#include "validaciones.h"


int sortEmployees(eEmployee list[], int tam)
{
    int error = 1;

    eEmployee auxEmployee;

    if(list!=NULL && tam > 0) //VALIDO ARRAY Y TAMAÑO DEL MISMO
    {
        for(int i = 0; i<tam-1; i++)
        {
            for(int j=i+1; j<tam; j++)
            {
                if(strcmp(list[i].lastName, list[j].lastName)>0)
                {
                    auxEmployee = list[i];
                    list[i] = list[j];
                    list[j] = auxEmployee;
                }
                else if((strcmp(list[i].lastName,list[j].lastName)==0) && (list[i].sector > list[j].sector))
                {
                    auxEmployee = list[i];
                    list[i] = list[j];
                    list[j] = auxEmployee;
                }
            }
        }
        error = 0;
    }

    return error;

}

int initEmployees(eEmployee lista[], int tam)
{
    int error = -1;
    if (lista!=NULL && tam > 0)
    {
        for(int i=0; i<tam; i++)
        {
            lista[i].isEmpty = 1;
        }
        error = 0;
    }
    return error;
}

int freePlace(eEmployee lista[], int tam)
{
    int indice = -1;

    for(int i = 0; i < tam; i++)
    {
        if(lista[i].isEmpty == 1)
        {
            indice = i;
            break;
        }
    }

    return indice; //retorna un slot vacio para que sea ocupado por un nuevo empleado

}

int checkEmployees(eEmployee lista[], int tam)
{
    int counter = -1;

    for(int i = 0; i < tam; i++)
    {
        if(lista[i].isEmpty == 0)
        {
            counter = 1;
            break;
        }
    }

    return counter; //retorna un valor para saber si se puede o no se puede ingresar a los menues de baja y modificacion

}

void printOneEmployee(eEmployee oneEmployee){

    printf("%10d%13s%15s         $ %.f%9d\n", oneEmployee.id, oneEmployee.name, oneEmployee.lastName, oneEmployee.salary, oneEmployee.sector);

}

int printEmployees(eEmployee lista[], int tam){

    int error = 1;

    if( lista != NULL && tam > 0)
    {
        system("cls");
        printf("**********************************************************************");
        printf("\n       ID        NOMBRE        APELLIDO        SALARIO      SECTOR  \n");
        printf("**********************************************************************\n\n");

        for(int i=0; i<tam; i++)
        {
            if(lista[i].isEmpty == 0)
            {
                printOneEmployee(lista[i]);
            }
        }

        printf("\n\n");

        error = 0;

    }

    return error;

}


int averagesSalary(eEmployee lista[], int tam)
{
    int acumuladorSalarios = 0;
    int contadorPersonas = 0;
    int contPersonasSalarioPromedio = 0;
    float promedio;

    for(int i=0; i<tam; i++)
    {
        if(lista[i].isEmpty == 0)
        {
            contadorPersonas++;
            acumuladorSalarios = acumuladorSalarios + lista[i].salary;
        }

    }

    promedio = acumuladorSalarios / contadorPersonas;

    for(int i=0; i<tam; i++)
    {
        if(lista[i].isEmpty == 0)
        {
            if(lista[i].salary > promedio)
            {
                contPersonasSalarioPromedio++;
            }
        }
    }

    printf("**********************************************************************");
    printf("\n                       INFORMES SALARIOS                              \n");
    printf("**********************************************************************");
    printf("\n\n    --> TOTAL DE LA SUMA DE SALARIOS DE LOS EMPLEADOS $%d\n", acumuladorSalarios);
    printf("\n    --> EL SALARIO PROMEDIO ES DE $%.0f\n", promedio);
    printf("\n    --> DE %d EMPLEADO/S REGISTRADO/S, %d SUPERA/N EL SALARIO PROMEDIO\n\n\n\n", contadorPersonas, contPersonasSalarioPromedio);



    return 0;

}

int addEmployees(eEmployee lista[], int tam, int id)
{
    int error = 1;
    int indice;
    int validacion = 1;


    eEmployee newEmployee; //creamos variable de tipo Empleado

    if(lista!=NULL && tam > 0 && id > 0)
    {
        indice = freePlace(lista, tam); // verificamos que exista lugar disponible mediante la funcion Freeplace

        if(indice == -1)
        {
            system("cls");
            printf("\n\n            EL ALTA NO PUEDE REALIZARSE. EL SISTEMA ESTA COMPLETO.\n\n\n");
            system("pause");
        }
        else
        {

            newEmployee.id = id++;
            newEmployee.isEmpty = 0;
            do//    NOMBRE VALIDADO
            {
                printf("\n                    INGRESE NOMBRE: ");
                fflush(stdin);
                gets(newEmployee.name);
                validacion = validarCadena(newEmployee.name);
                fflush(stdin);

            }while(validacion == 1);

            do
            {//     APELLIDO VALIDADO
                printf("\n                    INGRESE APELLIDO: ");
                fflush(stdin);
                gets(newEmployee.lastName);
                validacion = validarCadena(newEmployee.lastName);
                fflush(stdin);

            }while(validacion == 1);


            printf("\n                    INGRESE SALARIO: ");//VALIDADO
            scanf("%f", &newEmployee.salary);
            while(newEmployee.salary < 16875)
            {
                system("cls");
                printf("\n\n                         HA OCURRIDO UN ERROR");
                printf("\n  EL SALARIO INGRESADO NO PUEDE SER MENOR AL SALARIO MINIMO VITAL Y MOVIL [$16.875]");
                printf("\n\n                          NOMBRE: %s", newEmployee.name);
                printf("\n                          APELLIDO: %s", newEmployee.lastName);
                printf("\n\n                  POR FAVOR, REINGRESE EL SALARIO: ");
                scanf("%f", &newEmployee.salary);
                printf("\n");
            }

            printf("\n                    INGRESE SECTOR [1 AL 10]: ");
            scanf("%d", &newEmployee.sector);
            while(newEmployee.sector<=0 || newEmployee.sector>10)
            {
                system("cls");
                printf("\n\n                         HA OCURRIDO UN ERROR");
                printf("\n      EL SECTOR INGRESADO NO ES CORRECTO. DIGITE UN SECTOR DEL 1 AL 10");
                printf("\n\n                          NOMBRE: %s", newEmployee.name);
                printf("\n                          APELLIDO: %s", newEmployee.lastName);
                printf("\n                          SALARIO: %.0f", newEmployee.salary);
                printf("\n\n                          REINGRESE SECTOR: ");
                scanf("%d", &newEmployee.sector);
            }

            lista[indice] = newEmployee;

            printf("\n\n                    ALTA REALIZADA CON EXITO\n\n\n\n");
            system("pause");
            system("cls");
            error = 0;
        }
    }

    return error;
}

int findEmployeeById(eEmployee lista[], int tam, int id)
{
    int indice = -1;

    for(int i = 0; i < tam; i++)
    {
        if(lista[i].id == id && lista[i].isEmpty == 0)
        {
            indice = i;
            break;
        }
    }

    return indice;
}

int modifyById(eEmployee lista[], int tam)
{
    int error = 1;
    int id;
    int indice;
    int option;
    int validacion = 1;

    if(lista != NULL && tam > 0)
    {
        system("cls");
        printEmployees(lista, tam);
        printf("                   INGRESE ID DE EMPLEADO A MODIFICAR: ");
        scanf("%d", &id);

        indice = findEmployeeById(lista, tam, id);

        if( indice == -1)
        {
            system("cls");
            printf("\n\n            ERROR. ID INGRESADO NO VALIDO.\n\n\n\n");
            system("pause");
        }
        else
        {
            system("cls");
            printf("\n\n\n         ID        NOMBRE        APELLIDO        SALARIO      SECTOR\n");

            printOneEmployee(lista[indice]);
            printf("\n\n\n                  QUE AREA DESEA MODIFICAR?  \n\n");
            printf("                        [1]  NOMBRE\n");
            printf("                        [2]  APELLIDO\n");
            printf("                        [3]  SALARIO\n");
            printf("                        [4]  SECTOR\n");
            printf("\n                       DIGITE OPCION: ");
            scanf("%d", &option);

            switch(option)
            {
                case 1:
                    do//    NOMBRE VALIDADO
                    {
                    printf("\n\n                    INGRESE NOMBRE NUEVO: ");
                    fflush(stdin);
                    gets(lista[indice].name);
                    validacion = validarCadena(lista[indice].name);
                    fflush(stdin);
                    printf("\n\n                     EXITO EN LA MODIFICACION\n\n\n");
                    system("pause");
                    }while(validacion == 1);

                    break;
                case 2:
                    do
                    {//     APELLIDO VALIDADO
                        printf("\n\n                    INGRESE APELLIDO NUEVO: ");
                        fflush(stdin);
                        gets(lista[indice].lastName);
                        validacion = validarCadena(lista[indice].lastName);
                        fflush(stdin);
                        printf("\n\n                     EXITO EN LA MODIFICACION\n\n\n");
                        system("pause");

                    }while(validacion == 1);
                    break;
                case 3:
                    printf("\n\n                   INGRESE SALARIO NUEVO: ");//VALIDADO
                    scanf("%f", &lista[indice].salary);
                    while(lista[indice].salary < 16875)
                    {
                        system("cls");
                        printf("\n\n                         HA OCURRIDO UN ERROR");
                        printf("\n  EL SALARIO INGRESADO NO PUEDE SER MENOR AL SALARIO MINIMO VITAL Y MOVIL [$16.875]");
                        printf("\n\n                          NOMBRE: %s", lista[indice].name);
                        printf("\n                          APELLIDO: %s", lista[indice].lastName);
                        printf("\n\n                  POR FAVOR, REINGRESE EL SALARIO: ");
                        scanf("%f", &lista[indice].salary);
                    }
                    printf("\n\n                     EXITO EN LA MODIFICACION\n\n\n");
                    system("pause");

                    break;
                case 4:
                    system("cls");
                    printf("\n\n                    INGRESE SECTOR NUEVO [0 AL 10]: ");
                    scanf("%d", &lista[indice].sector);
                    while(lista[indice].sector<=0 || lista[indice].sector>10)
                    {
                        system("cls");
                        printf("\n\n                         HA OCURRIDO UN ERROR");
                        printf("\n      EL SECTOR INGRESADO NO ES CORRECTO. DIGITE UN SECTOR DEL 1 AL 10");
                        printf("\n\n                          NOMBRE: %s", lista[indice].name);
                        printf("\n                          APELLIDO: %s", lista[indice].lastName);
                        printf("\n                          SALARIO: %.0f", lista[indice].salary);
                        printf("\n\n                          REINGRESE SECTOR: ");
                        scanf("%d", &lista[indice].sector);

                    }
                    printf("\n\n                     EXITO EN LA MODIFICACION\n\n\n");
                    system("pause");
                    break;
                default:
                    printf("\n\n\n                            %d NO ES UNA OPCION VALIDA.", option);
            }

        }
    }
    return error;
}

int removeEmployee(eEmployee lista[], int tam)
{
    int error = 1;
    int id;
    int indice;
    int confirma;

    if(lista != NULL && tam > 0)
    {
        system("cls");
        printEmployees(lista, tam);
        printf("        POR FAVOR, INGRESE EL ID DEL EMPLEADO A REMOVER: ");
        scanf("%d", &id);

        indice = findEmployeeById(lista, tam, id);

        if( indice == -1)
        {
            system("cls");
            printf("\n\n               ----> EL ID INGRESADO ES INVALIDO <----\n\n\n\n");
            system("pause");
        }
        else
        {
            system("cls");
            printf("\n\n              EL SIGUIENTE EMPLEADO SERA BORRADO DEL SISTEMA\n\n");
            printf("************************************************************************\n\n");
            printf("       ID        NOMBRE        APELLIDO        SALARIO      SECTOR\n");
            printOneEmployee(lista[indice]);
            printf("\n************************************************************************\n");
            printf("\n\n                         DESEA CONFIRMAR BAJA?");
            printf("\n\n                         [1] - SI  [2] - NO");
            printf("\n\n                          DIGITE RESPUESTA: ");
            scanf("%d", &confirma);
            if(confirma == 1)
            {
                lista[indice].isEmpty = 1;
                system("cls");
                printf("\n\n                   BAJA DEL EMPLEADO COMPLETA\n\n\n");
                error = 0;
                system("pause");
            }else
            {
                system("cls");
                printf("\n\n          BAJA DEL EMPLEADO CANCELADA POR EL USUARIO\n\n\n");
                error = 2;
                system("pause");
            }
        }
    }

    return error;

}

void caseThreeEmployee(eEmployee lista[], int tam)
{
    if(checkEmployees(lista, tam)==1)
    {
        removeEmployee(lista,tam);
    }else
    {
        system("cls");
        printf("\n\n\n              ERROR. NO HAY EMPLEADOS CARGADOS EN EL SISTEMA\n\n");
        system("pause");
    }

}

void caseTwoEmployee(eEmployee lista[], int tam)
{
    if(checkEmployees(lista, tam)==1)
    {
        modifyById(lista,tam);
    }else
    {
        system("cls");
        printf("\n\n\n              ERROR. NO HAY EMPLEADOS CARGADOS EN EL SISTEMA\n\n");
        system("pause");
    }
}

void caseFourEmployee(eEmployee lista[], int tam)
{
    if(checkEmployees(lista, tam)==1)
    {
        loading();
        sortEmployees(lista, TAM);
        printEmployees(lista, TAM);
        printf("\n\n");
        averagesSalary(lista, TAM);
        system("pause");
    }else
    {
        system("cls");
        printf("\n\n\n              ERROR. NO HAY EMPLEADOS CARGADOS EN EL SISTEMA\n\n");
        system("pause");
    }
}
