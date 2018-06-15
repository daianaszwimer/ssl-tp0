#include <stdio.h>
#include "scanner.h"

/*Modifiqu� la funci�n de formato char a int para realizar una validaci�n con la utilizaci�n de orden n�merico, logrando una no repetici�n de c�digo.
  1 = constante entera, 2= constante entera + fin de archivo
  3 = identificador, 4 = identificador + fin de archivo
  5 = error, 6 = error y fin de archivo
  7 = fin de archivo
  Itero realizando la incrementaci�n de cada variable correspondientemente al caso mientras el resto de la divisi�n del n�mero retornado sea distinto a 1,
  ya que dado ese caso se trata de un fin de archivo.*/

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
	}while(token % 2 == 0);
	
	printf("----\n");
	printf("Totales:\n");
	printf("Identificadores %d \n", identificadores);
	printf("Constantes enteras %d \n", constantesEnteras);
	printf("Errores %d \n", errores);
    return 0;
}
