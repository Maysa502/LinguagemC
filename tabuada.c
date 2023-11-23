#include <stdio.h>
#include <stdlib.h>

int main(){
    system("clear");
    int contar; 
    int numero;

    printf("Digite o numero da tabuada\n");
    scanf("%d",&numero);

    for(contar = 1 ; contar <= 10 ; contar++){

        printf("%d x %d = %d\n",numero,contar,numero*contar);
    }
return 0;
}