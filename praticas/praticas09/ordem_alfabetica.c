#include <stdio.h>
#include <string.h>

int main (){
 char palavra [11], palavra2[11];
 scanf("%s %s", palavra, palavra2);
 
 if(strcmp(palavra, palavra2)>0){
     printf("%s, %s\n",palavra1, palavra2);
        } else {
            printf("%s, %s\n",palavra2, palavra1);
        } 


    return 0;
}