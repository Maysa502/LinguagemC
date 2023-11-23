#include <stdio.h>
#include <stdlib.h>

int main(){
    system("clear");
    int dec=0,resto=0,resultado=0,mult=1;

    printf("Digire um numero decimal\n");
    scanf("%d",&dec);

    while ( dec > 0){

        resto = dec % 2;
        dec = dec / 2;
        resultado = resultado + resto * mult;
        mult = mult * 10;

    }
    printf("O numero decimal convertido é %d\n",resultado);
    return 0;
    
}