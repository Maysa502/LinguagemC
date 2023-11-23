#include <stdio.h>
#include <stdlib.h>

int main(){
    system("clear");
    int x;
    int t = 0;
    for(x = 1 ; x <= 100 ; x++){
        if(x % 2 == 0){
        printf("O numero %d é par\n",x);
        t++;
        }
        
    }
    printf("A quantidade de pares é %d\n",t);
    return 0;
}