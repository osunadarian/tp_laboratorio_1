/*
 ============================================================================
 Name        : tp1_calculadora.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "utn.c"


int main(void)
{

	float numero1, numero2;
	int banderaPrimerNum = 0, banderaSegundoNum = 0, opcion = 1;



		printf ("---> CALCULADORA <---\n\n");

			if(banderaPrimerNum == 0 && banderaSegundoNum == 0)
			{
				printf("1- Digite el primer operando: A = X\n");
				printf("2- Digite el segundo operando: B = Y\n");
				printf("Calcular todas las operaciones\n	a- Calcular suma (A + B)\n		b- Calcular resta (A - B)\n		c- Calcular multiplicación\n	d- Calcular division\n		e- Calcular factorial\n		4- Informar resultados\n 	5- Salir");
				return 0;
			}
			if(banderaPrimerNum == 1 && banderaSegundoNum == 0)
			{
				printf("1- Digite el primer operando: A = %.2f\n", numero1);
				printf("2- Digite el segundo operando: B = Y\n");
				printf("Calcular todas las operaciones\n	a- Calcular suma (A + B)\n		b- Calcular resta (A - B)\n		c- Calcular multiplicación\n	d- Calcular division\n		e- Calcular factorial\n		4- Informar resultados\n 	5- Salir");
				return 0;
			}
			if(banderaPrimerNum == 0 && banderaSegundoNum == 1)
			{
				printf("1- Digite el primer operando: A = X\n");
				printf("2- Digite el segundo operando: B = %.2f\n", numero2);
				printf("Calcular todas las operaciones\n	a- Calcular suma (A + B)\n		b- Calcular resta (A - B)\n		c- Calcular multiplicación\n	d- Calcular division\n		e- Calcular factorial\n		4- Informar resultados\n 	5- Salir");
				return 0;
			}
			if(banderaPrimerNum == 1 && banderaSegundoNum == 1)
			{
				printf("1- Digite el primer operando: A = %.2f\n", numero1);
				printf("2- Digite el segundo operando: B = %.2f\n", numero2);
				printf("Calcular todas las operaciones\n	a- Calcular suma (A + B)\n		b- Calcular resta (A - B)\n		c- Calcular multiplicación\n	d- Calcular division\n		e- Calcular factorial\n		4- Informar resultados\n 	5- Salir");
				return 0;
			}







	return EXIT_SUCCESS;
}
