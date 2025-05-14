#include <stdio.h>

int main()
{
    int numero = 0;
    int maior = numero;
    int menor = numero;

    printf("Digite um numero: ");
    scanf("%i", &numero);

    while (numero != 0)
    {
        if (numero > maior)
        {
            maior = numero;
        }

        if (numero < menor)
        {
            menor = numero;
        }

        printf("Digite um numero: ");
        scanf("%i", &numero);
    }
    
    printf("%i , %i", maior, menor);

    return 0;
}