#include <stdio.h>

int main() {
printf("------------------------\n");
printf("  N O T A   L E G A L    \n");
printf("------------------------\n");
printf("Item           Qde  Prc   Valor\n");
printf("%-14s %03i %5.2f %6.2f\n","Caneta Azul", 2,2.0,4.0);
printf("%-14s %03i %5.2f %6.2f\n","Borracha",1,5.0,5.0);
printf("%-13s %03i %6.2f %6.2f\n","Resma de Papel",1,12.0,12.0);
printf("----------------------------\n");
printf("TOTAL..................:R$ %5.2f\n",21.0);

return 0;


}



