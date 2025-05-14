#include <stdio.h>

int main(){

    int numeros[10];
    numeros[0] = 1;
    numeros[1] = 2;
    numeros[2] = 4;
    numeros[3] = 4;
    numeros[4] = 5;
    numeros[5] = 6;
    numeros[7] = 6;
    numeros[8] = 6;
    numeros[9] = 7;
    
    int maior = -9999
    int menor = 9999
    
    printf("Entre com 10 numeros inteiros\n: ");
    for(int i=0 ; i<10 ; i++) {

        printf("Numero %i: ", i+1);
        scanf("%i", &numeros[i]);
        }
        
        
        if(maior < numeros[i]) {
            maior = numeros[i];
        }
        if (menor > numeros[i]) {

            menor = numeros[i];
        }
    

printf("Seus numeros foram: ");
for(int i=0; i<10; i++) {
    printf("%i", numeros[1]);
}
    
    

    return 0;
}