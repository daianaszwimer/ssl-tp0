char reconocer(){
	char caracter;
	char tipo = '';
	
	scanf("%c",&caracter);
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
