#include <stdio.h>

int main (){
    float total = 0.0;
    float nota_fiscal[5][3];

    for(int i=0; i<5; i++){

        printf("Digite a quantidade e o preço unitario do item %d: ", i + 1);
        scanf("%f %f", &nota_fiscal[i][0], &nota_fiscal[i][1]);

        nota fiscal[i][2] = nota_fiscal[i][0] * nota_fiscal[i][1];
        total += nota_fiscal[i][2];

    }
    printf("\n Itens da nota fiscal:\n");
    printf("Qtd\tPreco\tTotal\n");
    for(int i = 0; i < 5; i++){

        printf("%.2f\t%.2f\t%.2f\n", nota_fiscal[i][0], nota_fiscal[i][1], nota_fiscal[i][2]);


    }
    printf("\nO Valor da nota fiscal eh: %.2f\n", total);

    return 0;
}



