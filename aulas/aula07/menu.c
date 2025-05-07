#include <stdio.h>

int main (){

    int opcao = 0;

    while (opcao != 4) {

    printf(" |+------------------- +\n");
    printf(" |   MENU PRINCIPAL    |\n");
    printf(" |+------------------- +\n");
    printf(" | 1-   Novo Jogo      |\n");
    printf(" | 2-   Ver Score      |\n");
    printf(" | 3-   Sobre o Jogo   |\n");
    printf(" | 4-   Sair           |\n");
    printf(" |+--------------------+\n");
    printf(" |Escolha uma opcao > ");
    printf("Escolha uma opcao > ");
    scanf("%i", &opcao);
    while (getchar() != '\n');
    }

    switch(opcao){
        case 1: {
            printf(" Nivel do Jogo\n");
            printf("1 - Facil\n");
            printf("2 - Medio\n");
            printf("3 - Dificil\n");
            scanf("%i", &nivel);
            while(getchar() != '\n');
            break; 
            } 

        
        
        
        
        
        case 2: {
       printf(" 1 - Jogador A - 10000 pontos \n");
       printf(" 2 - Jogador B - 7000  pontos \n");
       printf(" 3 - Jogador C - 2  pontos \n");
       printf(" 4 - Jogador D - 1  pontos \n");
       printf(" 5 - Jogador E - 0  pontos \n");
       printf(" Presssione ENTER para continuar ...\n");
       while(getchar() != '\n');
       break;
       }
       
        
       
       case 3: {

    printf("Sobre o Jogo\n\n");
    printf("Jogo desenvolvido em C no ano de 2049\n");
    printf("Dsesenvolvido por UNKNOWN\n\n");
    printf("Copyright(C) 2048 \n");
    printf("Pressione ENTER para continuar ...");
    while
       }
        case 4 {
        defaut: printf("Opcao invalida! Tente novamnte.\n");
    }
    } 

    

    return 0;
}