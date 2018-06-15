#include <stdio.h>
#include "scanner.h"

/*Modifiqué la función de formato char a int para realizar una validación con la utilización de orden númerico, logrando una no
 repetición de código.
  1 = constante entera, 2= constante entera + fin de línea
  3 = identificador, 4 = identificador + fin de línea
  5 = error, 6 = error + fin de línea
  7 = fin de línea
  Itero realizando la incrementación de cada variable correspondientemente al caso mientras el resto de la división del número
  retornado por 2 sea distinto a 1,  ya que dado ese caso se trata de un fin de línea.*/

int main(){
	int token;
	int constantesEnteras = 0;
	int identificadores = 0;
	int errores = 0;
	
	printf("Ingreso:\n");
	do{
		token = reconocer();
		// Constante entera.
		if(token < 3){
			printf("constante entera\n");
			constantesEnteras++;
		// Identificador.
		}else if(token < 5){
			printf("identificador\n");
			identificadores++;
		// Error.
		}else if(token < 7){
			printf("error\n");
			errores++;
		}
	// Fin de línea.
	}while(token % 2 == 0);
	
	printf("----\n");
	printf("Totales:\n");
	printf("Identificadores %d \n", identificadores);
	printf("Constantes enteras %d \n", constantesEnteras);
	printf("Errores %d \n", errores);
    return 0;
}
