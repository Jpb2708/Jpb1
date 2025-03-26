#include <stdio.h>

int main(){
//char 'A','a'
//int -123,0,125654
//float -9.123456f,0.0f,0.665666f
//double -9.123456789012345,5.012345678654
//void sem tipo

printf("O tipo 'char'ocupa %i bytes e vai de %i a %i\n",sizeof(char),-127,128);
printf("O tipo 'int'ocupa %i bytes e vai de %i a %i\n",sizeof(int),-212783648,212783647);
printf("O tipo 'float'ocupa %i bytes e vai de %E a %E\n",sizeof(float),-3.4E+38,3.4+38);
printf("O tipo 'double'ocupa %i bytes e vai de %LE a %LE\n",sizeof(double),-1.8E+300,1.8E+300);
printf("O tipo 'void'ocupa %i bytes\n",sizeof(void));
return 0;
}