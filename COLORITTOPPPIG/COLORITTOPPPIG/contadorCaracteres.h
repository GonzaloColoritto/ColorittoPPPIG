#ifndef CONTADORCARACTERES_H_INCLUDED
#define CONTADORCARACTERES_H_INCLUDED
int contadorDeCaracteres(char vec[], char caracter);
 int contadorDeCaracteres(char cadenaAux, char caracterAux)
   {
    int contador = 0;

	for(int i = 0; cadenaAux[i] != '\0'; i++)
        {
		if(cadenaAux[i] == caracterAux){
			contador++;
		}
	}


   return contador;
   }

#endif // CONTADORCARACTERES_H_INCLUDED
