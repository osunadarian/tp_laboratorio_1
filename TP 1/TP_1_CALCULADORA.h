#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED

#endif // FUNCIONES_H_INCLUDED

/** \brief Funcion que muestra la calculadora y reemplaza los valores de las variables numA y numB en funcion de lo que haya ingresado el usuario
 *
 * \param numA float    Valor de la variable numA
 * \param numB float    Valor de la variable numB
 * \param banderaNumeroX int    Bandera utilizada para reemplazar o no el valor de la variable numA
 * \param banderaNumeroY int    Bandera utilizada para reemplazar o no el valor de la variable numb
 * \return void No retorna nada
 *
 */
void menuCalculadora(float numA, float numB, int banderaNumeroX, int banderaNumeroY);


/** \brief Funcion que divide dos operandos
 *
 * \param a float   Operando1
 * \param b float   Operando2
 * \return float    Retorna el resultado de a/b
 *
 */
float division(float a, float b);


/** \brief  Funcion que suma dos operandos
 *
 * \param a float   Operando1
 * \param b float   Operando2
 * \return float    Retorna el resultado de a+b
 *
 */
float suma(float a, float b);


/** \brief Funcion que resta dos operandos
 *
 * \param a float   Operando1
 * \param b float   Operando2
 * \return float    Retorna el resultado de a-b
 *
 */
float resta(float a, float b);


/** \brief Funcion que multiplica dos operandos
 *
 * \param a float   Operando1
 * \param b float   Operando2
 * \return float    Retorna el resultado de a*b
 *
 */
float multiplicacion(float a, float b);


/** \brief Funcion que realiza el factoreo de un solo operando
 *
 * \param num float Operando
 * \return int   Retorna el valor del factoreo de num
 *
 */
int factoreo(float num);


/** \brief Funcion que determina si un operando es distinto de cero, para realizar o no realizar la division

 * \param num float parametro del numero que se analizara
 * \return float    retorna un valor que se utilizara en la funcion CalcularOperaciones
 *
 */
float numeroNaturalEntero(float num);


/** \brief Funcion que realiza todos los calculos disponibles en la calculadora
 *
 * \param a float   valor de variable A
 * \param b float   valor de variable B
 * \param banderaNumeroX int    Valor de bandera que, en caso de valer 1 como
 * \param banderaNumeroY int
 * \return int
 *
 */

int calcularOperaciones(float a, float b, int banderaNumeroX, int banderaNumeroY);


/** \brief
 *
 * \param flagValidacion int    Parametro que se utilizara para mostrar o no mostrar las operaciones
 * \param numA float    valor ingresado para ser reemplazado en los printf
 * \param numB float    valor ingresado para ser reemplazado en los printf
 * \return int  retorna 0;
 *
 */
int mostrarOperaciones(int flagValidacion, float numA, float numB);


/** \brief Funcion utilizada para ingresar operandos
 *
 * \return float Retorna un valor flotante que se almacenara en las variables numA y numB
 *
 */
float ingresoNumero();


/** \brief Funcion decorativa
 *
 * \return void No retorna nada
 *
 */
void decorativo();


/** \brief Funcion que finaliza el programa
 *
 * \return int retorna valor entero que confirma o no confirma salida
 *
 */
int salir();
