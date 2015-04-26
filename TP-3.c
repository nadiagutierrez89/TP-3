/* TP#3: Pasar de Fahr a Celsius, utilizando for, const y la función GetCelsius.
 * Autor: Nadia E. Gutierrez
 * Fecha: 26/04/2015 */


#include <stdio.h>
#include <stdlib.h>

 float GetCelsius (int fahr); 								/* Declaración de la función GetCelsius*/

 int main(void) {
	 int fahr;												/*Variable para grados Fahr*/

	 const int LOWER = 0;									/*Constante simbolica para menor valor*/
	 const int UPPER = 300; 								/*Constante simbolica para mayor valor*/
	 const int STEP = 20;									/*Constante simbolica a sumar por cada vuelta*/

	 printf("%10s %13s\n","Celsius","Fahrenheit");			/*Imprime Encabezado Tabla*/

	 for (fahr=LOWER ; fahr<=UPPER ; fahr = fahr + STEP)	/*Imprime Tabla de Valores Celsius-Fahrenheit */
		 printf("%8d %12.1f\n", fahr , GetCelsius(fahr));

	 return EXIT_SUCCESS;
}

 float GetCelsius (int fahr) {								/*Definición de función GetCelsius*/
		float cel = (5.0/9.0)*(fahr-32);					/*Fórmula para pasar de grados Fahr a Celsius*/
	 	return cel;
 }
