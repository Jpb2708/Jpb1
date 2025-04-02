#include <stdio.h>

int main(){
char nome_produto [31];
int  quantidade;
float preco;
float valor_total;

printf("Entre com o nome: ");
scanf("%[^\n]s", nome_produto);
getchar();

printf("Entre com a quantidade do produto: ");
scanf("i", &quantidade);
getchar();

printf("Entre com a preco do produto: ");
scanf("%f", &preco);
getchar();

valor_total + preco * quantidade;

printf("------------------------\n");
printf("  N O T A   L E G A L    \n");
printf("------------------------\n");
printf("Item           Qde      Prc       Valor\n");
printf("%-13s %03i %8.2f %9.2f\n", nome_produto, quantidade, preco, valor_total);
printf("Total: %15.2f",valor_total);

    return 0;
}