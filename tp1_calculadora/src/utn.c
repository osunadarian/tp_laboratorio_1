/*
 * utn.c
 *
 *  Created on: 7 sep. 2020
 *      Author: darian
 */

menuCalculadora(int banderaPrimerNum, int banderaSegundoNum, float numero1, float numero2)
{

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




}
