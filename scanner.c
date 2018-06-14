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
	do{ //defini un caracter con el que terminamos la cadena
		scanf("%c",&caracter);
		if (tipo != 'e'){
			if (caracter <= 57 && caracter >= 48){
				if (tipo != 'i'){
					tipo = 'c';
				}
			}else if ((caracter >= 65 && caracter <= 90) || (caracter <= 122 && caracter >= 97)){
				tipo = 'i';
			}else if (caracter == 32 || caracter == '\n'){//si hay espacio o es fin de entrada
				//cuando hace este return, cuando vuelve a llamar
				//por algun motivo no hace nada, entonces no hace el return f
				//y se muere despues de esta linea cuando el caracter es el salto de linea
				return tipo;
			}else{
				tipo = 'e';
			}
		}else if (caracter == 32 || caracter == '\n'){
			tipo = 'a'; //hack para limpiar variable, buscar alternativa
			return 'e';
		}
	}while(caracter != '\n');
	//no llega aca arreglarlo
	return 'f';		
}
