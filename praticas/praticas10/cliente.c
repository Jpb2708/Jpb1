#include <stdio.h>

struct cliente_t {
    char nome[61];
    char telefone[15];
    char email[61];
};

int main() {
    struct cliente_t cliente;
    printf("Entre com o nome do cliente: ");
    scanf(" %s\n", cliente.nome);
    getchar(); // Limpa o buffer

    printf("Entre com o telefone do cliente: ");
    scanf(" %s\n", cliente.telefone);
    getchar();

    printf("Entre com o email do cliente: ");
    scanf(" %s\n", cliente.email);

    printf("Dados do cliente:\n");
    printf("%s\n%s\n%s\n", cliente.nome, cliente.telefone, cliente.email);
    return 0;
}