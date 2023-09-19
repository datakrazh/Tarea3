#include <stdio.h>

int main(){
	
	int lim, sucesion;

	printf("Escribe hasta que numero deseas que sea la sucesion de ese numero en positivo y su negativo: ");
	scanf("%d", &lim);

    for (sucesion=1;sucesion<=lim;sucesion++){
        printf("\n%d %d\n", sucesion, -sucesion);
    }
    
	return 0;
}
