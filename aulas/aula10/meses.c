#include <stdio.h>
#include <string.h>

int main(){

    enum meses_do_ano_e {jan, fev, mar, abr, mai, jun, jul, ago, set, out, nov, dez};
    char nome_dos_meses[12][10] = {"Janeiro", "Fevereiro", "Marco", "Abril", "Maio", "Junho", "Julho", "Agosto", "Setembro", "Outubro", "Novembro", "Dezembro"};//Janeiro, Fevereiro, Marco, Abril, Maio, Junho, Julho, Agosto, Setembro, Outubro, Novembro, Dezembro

    int mes = 0;
    printf("Digite um mes: ");
    scanf("%i", &mes);
    
    if(jan < mes -1 && mes-1 < dez) {
        printf("O mes escolhido eh %s\n", nome_dos_meses[mes-1]);
        
    } else {
        printf("O mes escolhido nao eh valido\n");
    }
    return 0;

}
