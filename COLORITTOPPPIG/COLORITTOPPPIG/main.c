#include <stdio.h>
#include <stdlib.h>

int main()
{

    char cadena[20]="Democracia";
    char caracter='a';
    int cantidadLetras;


    cantidadLetras=contadorDeCaracteres(cadena,caracter);
    printf("La palabra %s tiene %d letras %c\n", cadena,cantidadLetras, caracter );







   int precio=100;
   int precioFinal;

    int aplicarDescuento(int precio)
   {

       int precioConDescuento;

       precioConDescuento = precio-(precio*0.05);

       return precioConDescuento;
   }

   precioFinal= aplicarDescuento(precio);
   printf("El precio final es %d",precioFinal);











    return 0;
}
