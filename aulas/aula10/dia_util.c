#include <stdio.h>
#define segunda 1
#define terca 2
#define quarta 3
#define quinta 4
#define sexta 5
#define sabado 6
#define domingo 7


int main(){
enaum dias_da_semana e {
    dom = 1, 
    seg, 
    ter, 
    qua, 
    qui, 
    sex, 
    sab
};
int dia = 0;
printf("Digite um dia da semana: ");
scanf("%i", &dia);

switch (dia)
{
    case seg:
    case ter:
    case qua:
    case qui:
    case sex:
        printf("Dia util\n");
        break;
    case sab:
    case dom:
        printf("Fim de semana\n");
        break;
        default:
        printf("Dia invalido\n");
        break;

}
    return 0;
}

