#include <stdio.h>

/*Reviso primero los espacios o tabuladores y los itero hasta encontrar mi primer caracter valido o fin de archivo. Si encuentro fin de archivo me voy con 7,
si no verifico que sea constante entera, si lo es verifico que todos sean números hasta que haya algo diferente, si lo diferente es espacio salgo con 2,
si es fin de archivo con 1, y si no es ninguno de ambos casos se trata de un error así que voy al código de abajo e itero hasta que termina el error
(llegue a un espacio o fin de archivo) saliendo correspondiendentemente con 6 y 5. Si no es constante entera, verifico que sea un identificador y realizo
la misma lógica, de forma correspondiente, que utilicé con las constantes enteras retornando 4 para espacio y 3 para fin de archivo. Espero que se entienda.*/

int reconocer(){
	char caracter;
	// Espacio/Tabulador.
	do{
		scanf("%c",&caracter);
	}while(caracter == 32);
	if(caracter == '\n'){
		// Enter.
		return 7;
	}else if(caracter >= 48 && caracter <= 57){
		// Constante entera/Constante entera y Enter.		
		do{
			scanf("%c",&caracter);
		}while(caracter >= 48 && caracter <= 57);
		if(caracter == '\n'){
			return 1;
		}else if(caracter == 32){
			return 2;
		}				
	// Identificador/Identificador y Enter.
	}else if((caracter >= 65 && caracter <= 90) || (caracter >= 97 && caracter <= 122)){
		do{
			scanf("%c",&caracter);
		}while((caracter >= 48 && caracter <= 57) || (caracter >= 65 && caracter <= 90) || (caracter >= 97 && caracter <= 122));
		if(caracter == '\n'){
			return 3;
		}else if(caracter == 32){
			return 4;
		}
	}
	// Error/Error y Enter.
	do{
		scanf("%c",&caracter);
	}while(caracter != 32 && caracter != '\n');
	if(caracter == '\n'){
		return 5;
	}else if(caracter == 32){
		return 6;
	}
}
