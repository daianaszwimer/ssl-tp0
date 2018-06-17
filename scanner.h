#include <stdio.h>

#ifndef SCANNER_H_INCLUDED
#define SCANNER_H_INCLUDED

enum token {IDENTIFICADOR, CONSTANTE_ENTERA, ERROR, FIN_DE_CADENA};
enum tabla {ESTADO_INICIAL,
			RECONOCIENDO_IDENTIFICADOR,
			RECONOCIENDO_CONSTANTE_ENTERA,
			RECONOCIENDO_ERROR,
			IDENTIFICADOR_RECONOCIDO,
			CONSTANTE_ENTERA_RECONOCIDO,
			ERROR_RECONOCIDO,
			FIN_DE_CADENA_RECONOCIDO};
enum caracteres {LETRA, DIGITO, CARACTERES_NO_CONTEMPLADOS, ESPACIO, FIN};


int reconocer();

bool tokenReconocido (enum tabla estado);

enum caracteres mapCaracter (char caracter);

enum token retornarToken (enum tabla estado);

#endif //SCANNER_H_INCLUDED