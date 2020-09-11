#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED

#endif // FUNCIONES_H_INCLUDED

/** \brief Funcion que muestra el menu.
 *
 * \param numA int  Obtiene el numero A(X) de la funcion IngresoNumero() para reemplazarlo o no en el mismo
 * \param numB int  Obtiene el numero B(X) de la funcion IngresoNumero() para reemplazarlo o no en el mismo
 * \param banderaNumeroX int    Verifica, en caso de que el valor de la banderaNumeroX sea 1, reemplazarlo en la posicion del printf
 * \param banderaNumeroY int    Verifica, en caso de que el valor de la banderaNumeroY sea 1, reemplazarlo en la posicion del printf
 * \return void No retorna nada.
 *
 */
void menuCalculadora(int numA, int numB, int banderaNumeroX, int banderaNumeroY);


/** \brief  Funcion que realiza la division de dos argumentos
 *
 * \param a int Recibe un entero para poder realizar la division
 * \param b int Recibe un entero para poder realizar la division
 * \return float    Retorna un valor flotante (resultado de a / b)
 *
 */

float division(int a, int b);

/** \brief Funcion que realiza la suma de dos argumentos
 *
 * \param a int Recibe un entero para poder realizar la suma
 * \param b int Recibe un entero para poder realizar la suma
 * \return int  Retorna un valor entero (resultado de a + b)
 *
 */
int suma(int a, int b);

/** \brief Funcion que realiza la resta de dos argumentos
 *
 * \param a int Recibe un entero para poder realizar la resta
 * \param b int Recibe un entero para poder realizar la resta
 * \return int  Retorna un valor entero (resultado de a - b)
 *
 */
int resta(int a, int b);

/** \brief Funcion que realiza la multiplicacion de dos argumentos
 *
 * \param a int Recibe un entero para poder realizar la multiplicacion
 * \param b int Recibe un entero para poder realizar la multiplicacion
 * \return int  Retorna un valor entero (resultado de a * b)
 *
 */
int multiplicacion(int a, int b);


/** \brief Funcion que realiza el factoreo de un numero
 *
 * \param num int Es el entero que va a factorear
 * \return int  Retorna el resultado del factoreo.
 *
 */
int factoreo(int num);

/** \brief Funcion que CALCULA operaciones, pero no las muestra.
 *
 * \param a int Argumento utilizado para realizar los calculos
 * \param b int Argumento utilizado para realizar los calculos
 * \param banderaNumeroX int    Flag/bandera que, en caso de estar en negativo, no permite realizar los calculos (Ya que falta ingresar datos)
 * \param banderaNumeroY int    Flag/bandera que, en caso de estar en negativo, no permite realizar los calculos (Ya que falta ingresar datos)
 * \return int  Retorna un valor entero para que actue como bandera para la opcion 4 del menu, que es mostrar los calculos.
 *
 */
int calcularOperaciones(int a, int b, int banderaNumeroX, int banderaNumeroY);


/** \brief Funcion desarrollada para que la division no pueda realizarse en caso de que el valor B sea 0.
 *
 * \param num int   Si el numero del parametro es 0, no realizar la division.
 * \return int  Retorna valor entero para 'permitir' la division
 *
 */
int numeroNaturalEntero(int num);

/** \brief Funcion que muestra los calculos en pantalla.
 *
 * \param flagValidacion int Parametro que recibe el valor de de la funcion calcularOperaciones para mostrar o no mostrar las operaciones
 * \param numA int  Parametro otorgado para reemplazar las mascaras por el valor de la variable
 * \param numB int  Parametro otorgado para reemplazar las mascaras por el valor de la variable
 * \return int
 *
 */
mostrarOperaciones(int flagValidacion, int numA, int numB);

/** \brief funcion que valida que el numero ingresado sea un numero entero y no un decimal, para poder realizar las cuentas.
 *
 * \return int retorna el valor para asignarselo a la variable numA y numB
 *
 */
int ingresoNumero();

/** \brief Simple funcion decorativa, que enmarca la palabra CALCULADORA
 *
 * \return void El retorno es de tipo VOID porque no retorna nada.
 *
 */
void decorativo();

/** \brief Funcion que permite salir del programa
 *
 * \return int Retorna el valor de la variable "seguir" para salir o no salir del programa.
 *
 */
int salir();

