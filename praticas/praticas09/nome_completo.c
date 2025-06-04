#include <stdio.h>
#include <string.h>

int main(){
    char primeiro_nome[11], ultimo_nome[11], nome_completo[21];
    scanf("%s %s", primeiro_nome, ultimo_nome);

    strcpy(nome_completo, primeiro_nome);
    strcat(nome, " ");
    strcat(nome, ultimo_nome);

    printf("%s\n", nome_completo);

    return 0;
}