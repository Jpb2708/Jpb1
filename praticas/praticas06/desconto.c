#include <stdio.h>

int main()
{

    float valor_bruto;
    float valor_desconto;

    printf("Digite um valor o valor bruto ");
    scanf("%f", &valor_bruto);

    if (valor_bruto <= 100.00f)
    {
        valor_desconto = 0.01f * valor_bruto
    }
    else if (valor_bruto <= 500.00f)
    {

        valor _desconto= valor_bruto * 0.005f
    }
    else
    {
        valor_desconto = valor_bruto * 0.1f ;
    }

    printf("%f","%f", valor_bruto, valor_desconto);

    return 0;
}
