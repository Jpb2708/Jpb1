#include <stdio.h>

int main(){
    int nota;
    printf("Escreva sua nota: ");
    scanf("%i", &nota);
    
    if(nota < 1 || nota > 10) {
        printf("Nota invalida. Tente novamente!\n");
     }



    do {
         
    } while(nota < 1 || nota > 10);
    
    


    return 0;
}