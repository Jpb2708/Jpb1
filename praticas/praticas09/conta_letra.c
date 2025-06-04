#include <stdio.h>
#include <string.h>

int main (){
    char frase [31], letra;
    int quantidade = 0;
    scanf("%s", frase);
    scanf("%s", &letra);
    for(int i=0; i<31; i++) {
        if (frase[i] == letra) { quantidade++;
            
        }
        if(quantidade > 0) {
            printf("%s\n", letra, quantidade);
        } else {
            printf("A frase nao contem a letra\n ")
        } 
    }

    return 0;
}