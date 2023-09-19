#include <stdio.h>

int main(){

    int inicio=0, lim, numMultiplicado;
    
    printf("Determina hasta que numero quieres calcular los cuadrados: ");
    scanf("%d", &lim);
    
	for(numMultiplicado=0;numMultiplicado<lim;numMultiplicado++){
        inicio=(numMultiplicado+1)*(numMultiplicado+1)+inicio;
    }

    printf("\nLa suma de los cuadrados de los %d primeros numeros enteros es: %d", lim, inicio);
	
	return 0;
}

