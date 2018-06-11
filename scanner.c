#include <stdio.h>

/*voy reconociendo cada caracter y tengo que ir armando "grupos": si veo que vienen muchos enteros hasta un espacio (o un enter, o un tab, o un error) 
hago return 'c'; (una vez que dejo de recibir enteros)
Si veo que viene una cadena de letras + numeros hago return 'i';
Si veo que viene cualquier s�mbolo hago return 'e';
Si deseo finalizar la entrada de datos finalizo con una di�resis (�) y hago return 'f'; para avisar que termin� la entrada de datos

NO DEVUELVO SI CADA CARACTER ES CONSTANTE O IDENTIFICADOR, SINO SI EL CONJUNTO DE VARIOS CARACTERES HASTA UN ESPACIO O HASTA LA PROX CADENA
ES UN IDENTIFICADOR O CONSTANTE ENTERA O ERROR

Espero que se entienda la idea, para m� que satisface la consigna*/

char reconocer(){
	char caracter;
	do{
		scanf("%c",&caracter);
		if (caracter=< 10 && caracter >= 0){//si es un num, chequear que los siguientes lo sean tambien hasta el espacio, sino, puede ser identificador
			while(caracter=< 10 && caracter >= 0){

			}
			//si sale de este while y no hay un espacio, ya no es constante entera
			//hay que ver si es identificador
		}
		return 'i';

	}while(caracter!='.'); //defini un caracter con el que terminamos la cadena
}
