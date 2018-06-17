#include <stdio.h>
#include "scanner.h"
#include <ctype.h>

static const int TABLA_TRANSICIONES [8][5] =
                                    //L, D, S, E, F   
                                    {{1, 2, 3, 0, 7},    // 0 estado inicial
                                    { 1, 1, 4, 4, 4},    //1 reconociendo identificador
                                    { 5, 2, 5, 5, 5},    //2 reconociendo constante entera
                                    { 6, 6, 3, 6, 6},    //3 reconociendo error
                                    { 99, 99, 99, 99, 99},  //4 fin de cadena identificador
                                    { 99, 99, 99, 99, 99},  //5 fin de cadena constante entera
                                    { 99, 99, 99, 99, 99},  //6 fin de cadena error lexico
                                    { 99, 99, 99, 99, 99},  //7 fin de cadena '\0'
                                    };


int reconocer(){
	char caracter;
    enum tabla estado = 0; //estado inicial

    while (!tokenReconocido(estado)){
        caracter = getchar();
      	int tipoDeCaracter = mapCaracter(caracter);
		estado = TABLA_TRANSICIONES[estado][tipoDeCaracter];
    }

    //devuelvo el utlimo caracter tomado
    ungetc(caracter,stdin);

	return retornarToken(estado);
}



bool tokenReconocido (enum tabla estado){
	return (estado == IDENTIFICADOR_RECONOCIDO || estado == CONSTANTE_ENTERA_RECONOCIDO
             || estado == ERROR_RECONOCIDO || estado == FIN_DE_CADENA_RECONOCIDO); // estados finales posibles
}


enum caracteres mapCaracter (char caracter){
    if (isalpha(caracter))
        return LETRA;
   	if (isdigit(caracter))
        return DIGITO;
    if (isspace(caracter))
        return ESPACIO;
    if(caracter == '.')
        return FIN;
    
    return CARACTERES_NO_CONTEMPLADOS;
}


enum token retornarToken (enum tabla estado){
	switch(estado){
		case IDENTIFICADOR_RECONOCIDO:
			return IDENTIFICADOR;
			break;
		case CONSTANTE_ENTERA_RECONOCIDO:
			return CONSTANTE_ENTERA;
			break;
        case ERROR_RECONOCIDO:
			return ERROR;
			break;
        case FIN_DE_CADENA_RECONOCIDO:
			return FIN_DE_CADENA;
			break;
        default: return FIN_DE_CADENA;
	}
}




