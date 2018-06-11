#include <stdio.h>
#include "scanner.h"

main(){
	char token;
	int constantesEnteras = 0;
	while(token != 'f'){	//token distinto de fin (fin de entrada) 
		token = reconocer();
		switch(token){
			case 'i': //caso identificador
				break;
			case 'c': //caso constante entera
				printf("constante entera\n");
				constantesEnteras++;
				break;
			case 'e': //caso error
				break;
		}
	}
}
