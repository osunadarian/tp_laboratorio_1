#ifndef ARRAYEMPLOYEES_H_INCLUDED
#define ARRAYEMPLOYEES_H_INCLUDED

typedef struct
{
    int id;
    char name[51];
    char lastName[51];
    float salary;
    int sector;
    int isEmpty;

}eEmployee;

#endif // ARRAYEMPLOYEES_H_INCLUDED

#define TAM 1000

///////////////////////////////////////////////////////////////////////////

/** \brief Funcion que ordena los empleados por apellido y luego por sector
 *
 * \param lista[] eEmployee
 * \param tam int
 * \return int
 *
 */
int sortEmployees(eEmployee lista[], int tam);

/** \brief Inicializa los valores del campo isEmpty en 1 para que esten vacios
 *
 * \param lista[] eEmployee
 * \param tam int
 * \return int
 *
 */
int initEmployees(eEmployee lista[], int tam);

/** \brief Funcion que busca el primer lugar vacio para poder escribir informacion sobre el
 *
 * \param lista[] eEmployee
 * \param tam int
 * \return int
 *
 */
int freePlace(eEmployee lista[], int tam);

/** \brief Funcion que "chequea" el estado del campo isEmpty para que se pueda acceder a los menues 2,3 y 4.
 *
 * \param lista[] eEmployee
 * \param tam int
 * \return int
 *
 */
int checkEmployees(eEmployee lista[], int tam);

/** \brief Imprima los campos de la estructura de un UNICO empleado
 *
 * \param oneEmployee eEmployee
 * \return void
 *
 */
void printOneEmployee(eEmployee oneEmployee);

/** \brief funcion que imprime TODOS los campos de los empleados en forma encolumnada
 *
 * \param lista[] eEmployee
 * \param tam int
 * \return int
 *
 */
int printEmployees(eEmployee lista[], int tam);

/** \brief Funcion que realiza los calculos necesarios para determinar salarios promedios
 *
 * \param lista[] eEmployee
 * \param tam int
 * \return int
 *
 */
int averagesSalary(eEmployee lista[], int tam);

/** \brief funcion que agrega un empleado a la lista
 *
 * \param lista[] eEmployee
 * \param tam int
 * \param id int
 * \return int
 *
 */
int addEmployees(eEmployee lista[], int tam, int id);

/** \brief Funcion que permite al usuario hacer una busqueda de un empleado utilizando el campo ID
 *
 * \param lista[] eEmployee
 * \param tam int
 * \param id int
 * \return int
 *
 */
int findEmployeeById(eEmployee lista[], int tam, int id);

/** \brief Funcion que permite al usuario modificar x campo de la estructura de un x empleado
 *
 * \param lista[] eEmployee
 * \param tam int
 * \return int
 *
 */
int modifyById(eEmployee lista[], int tam);

/** \brief Funcion que permite al usuario remover un empleado del sistema
 *
 * \param lista[] eEmployee
 * \param tam int
 * \return int
 *
 */
int removeEmployee(eEmployee lista[], int tam);

/** \brief Funcion que permite o no permite al usuario ingresar a la opcion TRES del menu
 *
 * \param lista[] eEmployee
 * \param tam int
 * \return void
 *
 */
void caseThreeEmployee(eEmployee lista[], int tam);

/** \brief /** Funcion que permite o no permite al usuario ingresar a la opcion DOS del menu
 *
 * \param lista[] eEmployee
 * \param tam int
 * \return void
 *
 */
void caseTwoEmployee(eEmployee lista[], int tam);

/** \brief /** Funcion que permite o no permite al usuario ingresar a la opcion UNO del menu
 *
 * \param lista[] eEmployee
 * \param tam int
 * \return void
 *
 */
void caseFourEmployee(eEmployee lista[], int tam);
