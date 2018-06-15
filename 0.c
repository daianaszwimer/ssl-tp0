char reconocer(){
	char caracter;
	char tipo = 'a';
	do{ //defini un caracter con el que terminamos la cadena
		scanf("%c",&caracter);
		if(caracter >= 48 && caracter <= 57){
			tipo = 'c';
	   	}else if((caracter >= 65 && caracter <= 90) || (caracter >= 97 && caracter <= 122)){
		
		
		
		if (tipo != 'e'){
			
				if (tipo != 'i'){
					
					while 
				}
			
			
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
