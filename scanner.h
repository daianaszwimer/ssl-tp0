#include <stdio.h>

#ifndef SCANNER_H_INCLUDED
#define SCANNER_H_INCLUDED

typedef enum { false, true } bool;

enum token {IDENTIFICADOR, CONSTANTE_ENTERA, ERROR, FIN_DE_CADENA};
enum tabla {ESTADO_INICIAL = 0,
			RECONOCIENDO_IDENTIFICADOR = 1,
			RECONOCIENDO_CONSTANTE_ENTERA = 2,
			RECONOCIENDO_ERROR = 3,
			IDENTIFICADOR_RECONOCIDO = 4,
			CONSTANTE_ENTERA_RECONOCIDO = 5,
			ERROR_RECONOCIDO = 6,
			FIN_DE_CADENA_RECONOCIDO = 7};
enum caracteres {LETRA, DIGITO, CARACTERES_NO_CONTEMPLADOS, ESPACIO, FIN};


int reconocer();

bool tokenReconocido (enum tabla estado);

enum caracteres mapCaracter (char caracter);

enum token retornarToken (enum tabla estado);

#endif //SCANNER_H_INCLUDED