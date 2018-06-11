#include <stdio.h>
#include "scanner.h"

/*basicamente voy llamando a la funcion reconocer que dado un input me devuelve i si encuentra un identificador, c = constante entera,
e=error, y con f digo que dej� de recibir datos*/

int main(){
	char token;
	int constantesEnteras = 0;
	int identificadores = 0;
	int errores = 0;
	
	while(token != 'f'){	//token distinto de fin (fin de entrada) 
		token = reconocer();
		switch(token){
			case 'i': //caso identificador
				printf("identificador\n");
				identificadores++;
				break;
			case 'c': //caso constante entera
				printf("constante entera\n");
				constantesEnteras++;
				break;
			case 'e': //caso error
				printf("error\n");
				errores++;
				break;
			default:
				break;
		}
	}
	printf("----\n");
	printf("Totales:\n");
	printf("Identificadores %d \n", identificadores);
	printf("Constantes enteras %d \n", constantesEnteras);
	printf("Errores %d", errores);
    return 0;
}
