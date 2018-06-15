#include <stdio.h>

/*voy reconociendo cada caracter y tengo que ir armando "grupos": si veo que vienen muchos enteros hasta un espacio (o un enter, o un tab, o un error) 
hago return 'c'; (una vez que dejo de recibir enteros)
Si veo que viene una cadena de letras + numeros hago return 'i';
Si veo que viene cualquier simbolo hago return 'e';
Si deseo finalizar la entrada de datos finalizo con un punto y hago return 'f'; para avisar que termino la entrada de datos

NO DEVUELVO SI CADA CARACTER ES CONSTANTE O IDENTIFICADOR, SINO SI EL CONJUNTO DE VARIOS CARACTERES HASTA UN ESPACIO O HASTA LA PROX CADENA
ES UN IDENTIFICADOR O CONSTANTE ENTERA O ERROR

Espero que se entienda la idea, para mi que satisface la consigna*/

char reconocer(){
	char caracter;
	char tipo = 'a';
	char reconocer(){
	char caracter;
	char tipo = 'a';
	do{
		scanf("%c",&caracter);
	}while(caracter == 32)
	if(caracter >= 48 && caracter <= 57){
		tipo = 'c';
	}else if((caracter >= 65 && caracter <= 90) || (caracter >= 97 && caracter <= 122)){
		tipo = 'i';
	}else{
		tipo = 'e';
	}	
	do{
		scanf("%c",&caracter);
	}while(not (caracter == 32 || caracter == '\n'))
	if(caracter == 32){
		return tipo;
	}else{
		return 'f';		
	}
