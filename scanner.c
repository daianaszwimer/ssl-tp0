#include <stdio.h>

/*voy reconociendo cada caracter y tengo que ir armando "grupos": si veo que vienen muchos enteros hasta un espacio (o un enter, o un tab, o un error) 
hago return 'c'; (una vez que dejo de recibir enteros)
Si veo que viene una cadena de letras + numeros hago return 'i';
Si veo que viene cualquier símbolo hago return 'e';
Si deseo finalizar la entrada de datos finalizo con una diéresis (¨) y hago return 'f'; para avisar que terminó la entrada de datos

NO DEVUELVO SI CADA CARACTER ES CONSTANTE O IDENTIFICADOR, SINO SI EL CONJUNTO DE VARIOS CARACTERES HASTA UN ESPACIO O HASTA LA PROX CADENA
ES UN IDENTIFICADOR O CONSTANTE ENTERA O ERROR

Espero que se entienda la idea, para mí que satisface la consigna*/

char reconocer(){
	char caracter;
	do{
		scanf("%c",&caracter);
	}while(caracter!='¨'); //defini un caracter con el que terminamos la cadena
}
